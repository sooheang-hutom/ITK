/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkImagePCADecompositionCalculatorTest.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#if defined(_MSC_VER)
#pragma warning ( disable : 4786 )
#endif
// Insight classes
#include "itkImage.h"
#include "itkImageRegionIterator.h"
#include "itkLightProcessObject.h"
#include "itkTextOutput.h"

#include "itkImagePCADecompositionCalculator.h"

// class to support progress feeback


class ShowProgressObject
{
public:
  ShowProgressObject(itk::LightProcessObject * o)
    {m_Process = o;}
  void ShowProgress()
    {std::cout << "Progress " << m_Process->GetProgress() << std::endl;}
  itk::LightProcessObject::Pointer m_Process;
};


int itkImagePCADecompositionCalculatorTest(int, char* [] )
{

  itk::OutputWindow::SetInstance(itk::TextOutput::New().GetPointer());

  //Data definitions 
  const unsigned int  IMGWIDTH         =  2;
  const unsigned int  IMGHEIGHT        =  2;
  const unsigned int  NDIMENSION       =  2;


  //------------------------------------------------------
  //Create 3 simple test images with
  //------------------------------------------------------
  typedef itk::Image<double,NDIMENSION> InputImageType;

  typedef
    itk::ImageRegionIterator< InputImageType > InputImageIterator;

   
  InputImageType::Pointer image1 = InputImageType::New();

  InputImageType::Pointer image2 = InputImageType::New();

  InputImageType::Pointer image3 = InputImageType::New();

  InputImageType::Pointer image4 = InputImageType::New();
  
  InputImageType::SizeType inputImageSize = {{ IMGWIDTH, IMGHEIGHT }};

  InputImageType::IndexType index;
  index.Fill(0);
  InputImageType::RegionType region;

  region.SetSize( inputImageSize );
  region.SetIndex( index );

  //--------------------------------------------------------------------------
  // Set up Image 1 first
  //--------------------------------------------------------------------------

  image1->SetRegions( region );
  image1->Allocate();

  // setup the iterators
  InputImageIterator image1It( image1, image1->GetBufferedRegion() );

  //--------------------------------------------------------------------------
  // Set up Image 2 first
  //--------------------------------------------------------------------------

  image2->SetRegions( region );
  image2->Allocate();

  // setup the iterators
  InputImageIterator image2It( image2, image2->GetBufferedRegion() );

  //--------------------------------------------------------------------------
  // Set up Image 3 first
  //--------------------------------------------------------------------------

  image3->SetRegions( region );
  image3->Allocate();

  // setup the iterators
  InputImageIterator image3It( image3, image3->GetBufferedRegion() );

  //--------------------------------------------------------------------------
  // Set up Image 4 first
  //--------------------------------------------------------------------------
  
  image4->SetRegions( region );
  image4->Allocate();

  // setup the iterators
  InputImageIterator image4It( image4, image4->GetBufferedRegion() );
  
  
  //--------------------------------------------------------------------------
  //Manually create and store each vector
  //--------------------------------------------------------------------------
  // The first two vectors are the first two principal components of the data:
  // [1 1 1 1] , [2 0 0 2], [0 3 3 0]
  // The second two vectors are some of those data, which we will project down
  // to the PC-space
  //Image no. 1
  image1It.Set( -0.3853 ); ++image1It;
  image1It.Set( 0.5929 ); ++image1It;
  image1It.Set( 0.5929 ); ++image1It;
  image1It.Set( -0.3853 ); ++image1It;
  
  //Image no. 2
  image2It.Set( -0.5929 ); ++image2It;
  image2It.Set( -0.3853 ); ++image2It;
  image2It.Set( -0.3853 ); ++image2It;
  image2It.Set( -0.5929 ); ++image2It;

  //Image no. 3
  image3It.Set( 2 ); ++image3It;
  image3It.Set( 0 ); ++image3It;
  image3It.Set( 0 ); ++image3It;
  image3It.Set( 2 ); ++image3It;

  //Image no. 4
  image4It.Set( 0 ); ++image4It;
  image4It.Set( 3 ); ++image4It;
  image4It.Set( 3 ); ++image4It;
  image4It.Set( 0 ); ++image4It;
  
  //----------------------------------------------------------------------
  // Test code for the Decomposition Calculator
  //----------------------------------------------------------------------

  //----------------------------------------------------------------------
  //Set the image Decomposition Calculator
  //----------------------------------------------------------------------
  typedef itk::ImagePCADecompositionCalculator<InputImageType> 
    ImagePCAShapeModelEstimatorType;

  ImagePCAShapeModelEstimatorType::Pointer 
    decomposer = ImagePCAShapeModelEstimatorType::New();

  //----------------------------------------------------------------------
  //Set the parameters of the clusterer
  //----------------------------------------------------------------------
  // add the first two vectors to the projection basis
  ImagePCAShapeModelEstimatorType::BasisImagePointerVector basis;
  basis.push_back(image1);
  basis.push_back(image2);
  decomposer->SetBasisImages(basis);
  
  // compute some projections!
  ImagePCAShapeModelEstimatorType::BasisVectorType proj3, proj4;
  decomposer->SetImage(image3);
  decomposer->Compute();
  proj3 = decomposer->GetProjection();

  decomposer->SetImage(image4);
  decomposer->Compute();
  proj4 = decomposer->GetProjection();
  
  //Test the printself function to increase coverage
  decomposer->Print(std::cout);

  // Retrieve the basis images
  std::cout << "The basis of projection is: " << std::endl;
  ImagePCAShapeModelEstimatorType::BasisImagePointerVector basis2;
  basis2 = decomposer->GetBasisImages();
  for (ImagePCAShapeModelEstimatorType::BasisImagePointerVector::const_iterator 
     basis_it = basis2.begin(); basis_it != basis2.end(); ++basis_it) 
    {
    std::cout << "[";
    InputImageIterator basisImage_it( *basis_it, (*basis_it)->GetBufferedRegion() );
    for (basisImage_it.GoToBegin(); !basisImage_it.IsAtEnd(); ++basisImage_it)
      {
      std::cout << basisImage_it.Get() << " ";
      }
    std::cout << "]" << std::endl;
    }
  
  
  //Print the projections
  std::cout << "The projection of [0 2 2 0] is [" << proj3 << "]" << std::endl;
  std::cout << "this should be approx [-1.5412 -2.3716]" << std::endl;
  
  std::cout << "The projection of [0 3 3 0] is [" << proj4 << "]" << std::endl;
  std::cout << "this should be approx [3.5574 -2.3119]" << std::endl;
  
  //Test for the eigen values for the test case precomputed using Matlab
  std::cout << "" << std::endl;
  if( proj3[0] < -1.54 && proj3[0] > -1.55 && proj4[1] < -2.31 && proj4[1] > -2.32 )
    {
    std::cerr << "Test Passed" << std::endl;
    return EXIT_SUCCESS;
    }
  else 
    {
    std::cerr << "Test failed" << std::endl;
    std::cerr << "The project is out of the range of Matlab precomputed values" << std::endl;
    return EXIT_FAILURE;
    }

  return EXIT_SUCCESS;
  
}
