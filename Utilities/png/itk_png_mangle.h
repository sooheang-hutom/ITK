#ifndef itk_png_mangle_h
#define itk_png_mangle_h

/*

This header file mangles all symbols exported from the png library.
It is included in all files while building the png library.  Due to
namespace pollution, no png headers should be included in .h files in
ITK.

The following command was used to obtain the symbol list:

nm libitkpng.a |grep " T "

*/

#define png_access_version_number itk_png_access_version_number
#define png_build_gamma_table itk_png_build_gamma_table
#define png_build_grayscale_palette itk_png_build_grayscale_palette
#define png_calculate_crc itk_png_calculate_crc
#define png_check_chunk_name itk_png_check_chunk_name
#define png_check_keyword itk_png_check_keyword
#define png_check_sig itk_png_check_sig
#define png_chunk_error itk_png_chunk_error
#define png_chunk_warning itk_png_chunk_warning
#define png_combine_row itk_png_combine_row
#define png_convert_from_struct_tm itk_png_convert_from_struct_tm
#define png_convert_from_time_t itk_png_convert_from_time_t
#define png_convert_to_rfc1123 itk_png_convert_to_rfc1123
#define png_crc_error itk_png_crc_error
#define png_crc_finish itk_png_crc_finish
#define png_crc_read itk_png_crc_read
#define png_create_info_struct itk_png_create_info_struct
#define png_create_read_struct itk_png_create_read_struct
#define png_create_struct itk_png_create_struct
#define png_create_write_struct itk_png_create_write_struct
#define png_data_freer itk_png_data_freer
#define png_decompress_chunk itk_png_decompress_chunk
#define png_destroy_info_struct itk_png_destroy_info_struct
#define png_destroy_read_struct itk_png_destroy_read_struct
#define png_destroy_struct itk_png_destroy_struct
#define png_destroy_write_struct itk_png_destroy_write_struct
#define png_do_background itk_png_do_background
#define png_do_bgr itk_png_do_bgr
#define png_do_chop itk_png_do_chop
#define png_do_dither itk_png_do_dither
#define png_do_expand itk_png_do_expand
#define png_do_expand_palette itk_png_do_expand_palette
#define png_do_gamma itk_png_do_gamma
#define png_do_gray_to_rgb itk_png_do_gray_to_rgb
#define png_do_invert itk_png_do_invert
#define png_do_pack itk_png_do_pack
#define png_do_packswap itk_png_do_packswap
#define png_do_read_filler itk_png_do_read_filler
#define png_do_read_interlace itk_png_do_read_interlace
#define png_do_read_invert_alpha itk_png_do_read_invert_alpha
#define png_do_read_swap_alpha itk_png_do_read_swap_alpha
#define png_do_read_transformations itk_png_do_read_transformations
#define png_do_rgb_to_gray itk_png_do_rgb_to_gray
#define png_do_shift itk_png_do_shift
#define png_do_strip_filler itk_png_do_strip_filler
#define png_do_swap itk_png_do_swap
#define png_do_unpack itk_png_do_unpack
#define png_do_unshift itk_png_do_unshift
#define png_do_write_interlace itk_png_do_write_interlace
#define png_do_write_invert_alpha itk_png_do_write_invert_alpha
#define png_do_write_swap_alpha itk_png_do_write_swap_alpha
#define png_do_write_transformations itk_png_do_write_transformations
#define png_error itk_png_error
#define png_flush itk_png_flush
#define png_free itk_png_free
#define png_free_data itk_png_free_data
#define png_get_IHDR itk_png_get_IHDR
#define png_get_PLTE itk_png_get_PLTE
#define png_get_bKGD itk_png_get_bKGD
#define png_get_bit_depth itk_png_get_bit_depth
#define png_get_cHRM itk_png_get_cHRM
#define png_get_cHRM_fixed itk_png_get_cHRM_fixed
#define png_get_channels itk_png_get_channels
#define png_get_color_type itk_png_get_color_type
#define png_get_compression_buffer_size itk_png_get_compression_buffer_size
#define png_get_compression_type itk_png_get_compression_type
#define png_get_copyright itk_png_get_copyright
#define png_get_error_ptr itk_png_get_error_ptr
#define png_get_filter_type itk_png_get_filter_type
#define png_get_gAMA itk_png_get_gAMA
#define png_get_gAMA_fixed itk_png_get_gAMA_fixed
#define png_get_hIST itk_png_get_hIST
#define png_get_header_ver itk_png_get_header_ver
#define png_get_header_version itk_png_get_header_version
#define png_get_iCCP itk_png_get_iCCP
#define png_get_image_height itk_png_get_image_height
#define png_get_image_width itk_png_get_image_width
#define png_get_int_32 itk_png_get_int_32
#define png_get_interlace_type itk_png_get_interlace_type
#define png_get_io_ptr itk_png_get_io_ptr
#define png_get_libpng_ver itk_png_get_libpng_ver
#define png_get_oFFs itk_png_get_oFFs
#define png_get_pCAL itk_png_get_pCAL
#define png_get_pHYs itk_png_get_pHYs
#define png_get_pixel_aspect_ratio itk_png_get_pixel_aspect_ratio
#define png_get_pixels_per_meter itk_png_get_pixels_per_meter
#define png_get_progressive_ptr itk_png_get_progressive_ptr
#define png_get_rgb_to_gray_status itk_png_get_rgb_to_gray_status
#define png_get_rowbytes itk_png_get_rowbytes
#define png_get_rows itk_png_get_rows
#define png_get_sBIT itk_png_get_sBIT
#define png_get_sCAL itk_png_get_sCAL
#define png_get_sPLT itk_png_get_sPLT
#define png_get_sRGB itk_png_get_sRGB
#define png_get_signature itk_png_get_signature
#define png_get_tIME itk_png_get_tIME
#define png_get_tRNS itk_png_get_tRNS
#define png_get_text itk_png_get_text
#define png_get_uint_16 itk_png_get_uint_16
#define png_get_uint_32 itk_png_get_uint_32
#define png_get_unknown_chunks itk_png_get_unknown_chunks
#define png_get_user_chunk_ptr itk_png_get_user_chunk_ptr
#define png_get_user_transform_ptr itk_png_get_user_transform_ptr
#define png_get_valid itk_png_get_valid
#define png_get_x_offset_microns itk_png_get_x_offset_microns
#define png_get_x_offset_pixels itk_png_get_x_offset_pixels
#define png_get_x_pixels_per_meter itk_png_get_x_pixels_per_meter
#define png_get_y_offset_microns itk_png_get_y_offset_microns
#define png_get_y_offset_pixels itk_png_get_y_offset_pixels
#define png_get_y_pixels_per_meter itk_png_get_y_pixels_per_meter
#define png_handle_IEND itk_png_handle_IEND
#define png_handle_IHDR itk_png_handle_IHDR
#define png_handle_PLTE itk_png_handle_PLTE
#define png_handle_as_unknown itk_png_handle_as_unknown
#define png_handle_bKGD itk_png_handle_bKGD
#define png_handle_cHRM itk_png_handle_cHRM
#define png_handle_gAMA itk_png_handle_gAMA
#define png_handle_hIST itk_png_handle_hIST
#define png_handle_iCCP itk_png_handle_iCCP
#define png_handle_oFFs itk_png_handle_oFFs
#define png_handle_pCAL itk_png_handle_pCAL
#define png_handle_pHYs itk_png_handle_pHYs
#define png_handle_sBIT itk_png_handle_sBIT
#define png_handle_sCAL itk_png_handle_sCAL
#define png_handle_sPLT itk_png_handle_sPLT
#define png_handle_sRGB itk_png_handle_sRGB
#define png_handle_tEXt itk_png_handle_tEXt
#define png_handle_tIME itk_png_handle_tIME
#define png_handle_tRNS itk_png_handle_tRNS
#define png_handle_unknown itk_png_handle_unknown
#define png_handle_zTXt itk_png_handle_zTXt
#define png_info_destroy itk_png_info_destroy
#define png_info_init itk_png_info_init
#define png_info_init_3 itk_png_info_init_3
#define png_init_io itk_png_init_io
#define png_init_read_transformations itk_png_init_read_transformations
#define png_malloc itk_png_malloc
#define png_memcpy_check itk_png_memcpy_check
#define png_memset_check itk_png_memset_check
#define png_mmx_support itk_png_mmx_support
#define png_permit_empty_plte itk_png_permit_empty_plte
#define png_process_IDAT_data itk_png_process_IDAT_data
#define png_process_data itk_png_process_data
#define png_process_some_data itk_png_process_some_data
#define png_progressive_combine_row itk_png_progressive_combine_row
#define png_push_crc_finish itk_png_push_crc_finish
#define png_push_crc_skip itk_png_push_crc_skip
#define png_push_fill_buffer itk_png_push_fill_buffer
#define png_push_handle_tEXt itk_png_push_handle_tEXt
#define png_push_handle_unknown itk_png_push_handle_unknown
#define png_push_handle_zTXt itk_png_push_handle_zTXt
#define png_push_have_end itk_png_push_have_end
#define png_push_have_info itk_png_push_have_info
#define png_push_have_row itk_png_push_have_row
#define png_push_process_row itk_png_push_process_row
#define png_push_read_IDAT itk_png_push_read_IDAT
#define png_push_read_chunk itk_png_push_read_chunk
#define png_push_read_sig itk_png_push_read_sig
#define png_push_read_tEXt itk_png_push_read_tEXt
#define png_push_read_zTXt itk_png_push_read_zTXt
#define png_push_restore_buffer itk_png_push_restore_buffer
#define png_push_save_buffer itk_png_push_save_buffer
#define png_read_data itk_png_read_data
#define png_read_destroy itk_png_read_destroy
#define png_read_end itk_png_read_end
#define png_read_filter_row itk_png_read_filter_row
#define png_read_finish_row itk_png_read_finish_row
#define png_read_image itk_png_read_image
#define png_read_info itk_png_read_info
#define png_read_init itk_png_read_init
#define png_read_init_2 itk_png_read_init_2
#define png_read_init_3 itk_png_read_init_3
#define png_read_png itk_png_read_png
#define png_read_push_finish_row itk_png_read_push_finish_row
#define png_read_row itk_png_read_row
#define png_read_rows itk_png_read_rows
#define png_read_start_row itk_png_read_start_row
#define png_read_transform_info itk_png_read_transform_info
#define png_read_update_info itk_png_read_update_info
#define png_reset_crc itk_png_reset_crc
#define png_reset_zstream itk_png_reset_zstream
#define png_save_int_32 itk_png_save_int_32
#define png_save_uint_16 itk_png_save_uint_16
#define png_save_uint_32 itk_png_save_uint_32
#define png_set_IHDR itk_png_set_IHDR
#define png_set_PLTE itk_png_set_PLTE
#define png_set_bKGD itk_png_set_bKGD
#define png_set_background itk_png_set_background
#define png_set_bgr itk_png_set_bgr
#define png_set_cHRM itk_png_set_cHRM
#define png_set_cHRM_fixed itk_png_set_cHRM_fixed
#define png_set_compression_buffer_size itk_png_set_compression_buffer_size
#define png_set_compression_level itk_png_set_compression_level
#define png_set_compression_mem_level itk_png_set_compression_mem_level
#define png_set_compression_method itk_png_set_compression_method
#define png_set_compression_strategy itk_png_set_compression_strategy
#define png_set_compression_window_bits itk_png_set_compression_window_bits
#define png_set_crc_action itk_png_set_crc_action
#define png_set_dither itk_png_set_dither
#define png_set_error_fn itk_png_set_error_fn
#define png_set_expand itk_png_set_expand
#define png_set_filler itk_png_set_filler
#define png_set_filter itk_png_set_filter
#define png_set_filter_heuristics itk_png_set_filter_heuristics
#define png_set_flush itk_png_set_flush
#define png_set_gAMA itk_png_set_gAMA
#define png_set_gAMA_fixed itk_png_set_gAMA_fixed
#define png_set_gamma itk_png_set_gamma
#define png_set_gray_1_2_4_to_8 itk_png_set_gray_1_2_4_to_8
#define png_set_gray_to_rgb itk_png_set_gray_to_rgb
#define png_set_hIST itk_png_set_hIST
#define png_set_iCCP itk_png_set_iCCP
#define png_set_interlace_handling itk_png_set_interlace_handling
#define png_set_invalid itk_png_set_invalid
#define png_set_invert_alpha itk_png_set_invert_alpha
#define png_set_invert_mono itk_png_set_invert_mono
#define png_set_keep_unknown_chunks itk_png_set_keep_unknown_chunks
#define png_set_oFFs itk_png_set_oFFs
#define png_set_pCAL itk_png_set_pCAL
#define png_set_pHYs itk_png_set_pHYs
#define png_set_packing itk_png_set_packing
#define png_set_packswap itk_png_set_packswap
#define png_set_palette_to_rgb itk_png_set_palette_to_rgb
#define png_set_progressive_read_fn itk_png_set_progressive_read_fn
#define png_set_read_fn itk_png_set_read_fn
#define png_set_read_status_fn itk_png_set_read_status_fn
#define png_set_read_user_chunk_fn itk_png_set_read_user_chunk_fn
#define png_set_read_user_transform_fn itk_png_set_read_user_transform_fn
#define png_set_rgb_to_gray itk_png_set_rgb_to_gray
#define png_set_rgb_to_gray_fixed itk_png_set_rgb_to_gray_fixed
#define png_set_rows itk_png_set_rows
#define png_set_sBIT itk_png_set_sBIT
#define png_set_sCAL itk_png_set_sCAL
#define png_set_sPLT itk_png_set_sPLT
#define png_set_sRGB itk_png_set_sRGB
#define png_set_sRGB_gAMA_and_cHRM itk_png_set_sRGB_gAMA_and_cHRM
#define png_set_shift itk_png_set_shift
#define png_set_sig_bytes itk_png_set_sig_bytes
#define png_set_strip_16 itk_png_set_strip_16
#define png_set_strip_alpha itk_png_set_strip_alpha
#define png_set_swap itk_png_set_swap
#define png_set_swap_alpha itk_png_set_swap_alpha
#define png_set_tIME itk_png_set_tIME
#define png_set_tRNS itk_png_set_tRNS
#define png_set_tRNS_to_alpha itk_png_set_tRNS_to_alpha
#define png_set_text itk_png_set_text
#define png_set_unknown_chunk_location itk_png_set_unknown_chunk_location
#define png_set_unknown_chunks itk_png_set_unknown_chunks
#define png_set_user_transform_info itk_png_set_user_transform_info
#define png_set_write_fn itk_png_set_write_fn
#define png_set_write_status_fn itk_png_set_write_status_fn
#define png_set_write_user_transform_fn itk_png_set_write_user_transform_fn
#define png_sig_cmp itk_png_sig_cmp
#define png_start_read_image itk_png_start_read_image
#define png_warning itk_png_warning
#define png_write_IDAT itk_png_write_IDAT
#define png_write_IEND itk_png_write_IEND
#define png_write_IHDR itk_png_write_IHDR
#define png_write_PLTE itk_png_write_PLTE
#define png_write_bKGD itk_png_write_bKGD
#define png_write_cHRM itk_png_write_cHRM
#define png_write_cHRM_fixed itk_png_write_cHRM_fixed
#define png_write_chunk itk_png_write_chunk
#define png_write_chunk_data itk_png_write_chunk_data
#define png_write_chunk_end itk_png_write_chunk_end
#define png_write_chunk_start itk_png_write_chunk_start
#define png_write_data itk_png_write_data
#define png_write_destroy itk_png_write_destroy
#define png_write_end itk_png_write_end
#define png_write_filtered_row itk_png_write_filtered_row
#define png_write_find_filter itk_png_write_find_filter
#define png_write_finish_row itk_png_write_finish_row
#define png_write_flush itk_png_write_flush
#define png_write_gAMA itk_png_write_gAMA
#define png_write_gAMA_fixed itk_png_write_gAMA_fixed
#define png_write_hIST itk_png_write_hIST
#define png_write_iCCP itk_png_write_iCCP
#define png_write_image itk_png_write_image
#define png_write_info itk_png_write_info
#define png_write_info_before_PLTE itk_png_write_info_before_PLTE
#define png_write_init itk_png_write_init
#define png_write_init_2 itk_png_write_init_2
#define png_write_init_3 itk_png_write_init_3
#define png_write_oFFs itk_png_write_oFFs
#define png_write_pCAL itk_png_write_pCAL
#define png_write_pHYs itk_png_write_pHYs
#define png_write_png itk_png_write_png
#define png_write_row itk_png_write_row
#define png_write_rows itk_png_write_rows
#define png_write_sBIT itk_png_write_sBIT
#define png_write_sCAL itk_png_write_sCAL
#define png_write_sPLT itk_png_write_sPLT
#define png_write_sRGB itk_png_write_sRGB
#define png_write_sig itk_png_write_sig
#define png_write_start_row itk_png_write_start_row
#define png_write_tEXt itk_png_write_tEXt
#define png_write_tIME itk_png_write_tIME
#define png_write_tRNS itk_png_write_tRNS
#define png_write_zTXt itk_png_write_zTXt
#define png_zalloc itk_png_zalloc
#define png_zfree itk_png_zfree

#endif
