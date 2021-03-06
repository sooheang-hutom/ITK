/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#include "itkRegistrationParameterScalesEstimator.h"

namespace itk
{
/** Define how to print enumerations */
std::ostream &
operator<<(std::ostream & out, const SamplingStrategyEnum value)
{
  return out << [value] {
    switch (value)
    {
      case SamplingStrategyEnum::FullDomainSampling:
        return "SamplingStrategyEnum::FullDomainSampling";
      case SamplingStrategyEnum::CornerSampling:
        return "SamplingStrategyEnum::CornerSampling";
      case SamplingStrategyEnum::RandomSampling:
        return "SamplingStrategyEnum::RandomSampling";
      case SamplingStrategyEnum::CentralRegionSampling:
        return "SamplingStrategyEnum::CentralRegionSampling";
      case SamplingStrategyEnum::VirtualDomainPointSetSampling:
        return "SamplingStrategyEnum::VirtualDomainPointSetSampling";
      default:
        return "INVALID VALUE FOR SamplingStrategyEnum";
    }
  }();
}
} // namespace itk
