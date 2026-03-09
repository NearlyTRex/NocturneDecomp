#pragma once

// Function prototypes for shape/quantize.cpp
// Generated from Ghidra function signatures

// Original: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
// Address: 00554900
CColorQuantizer * __cdecl CColorQuantizer::ctor(CColorQuantizer *this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
// Address: 00554940
CColorQuantizer * __cdecl CColorQuantizer::dtor(CColorQuantizer *this_ptr,uint flags);

// Original: shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
// Address: 00554a50
int __cdecl CColorQuantizer::importBitmap(CColorQuantizer *this_ptr,CBitmap *bitmap);

// Original: shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
// Address: 00554cc0
int __cdecl CColorQuantizer::quantize(CColorQuantizer *this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
// Address: 00554d40
CColorQuantizer * __cdecl CColorQuantizer::reset(CColorQuantizer *this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
// Address: 00554e70
void __cdecl CColorQuantizer::splitBox(CColorQuantizer *this_ptr,int source_box_index,int dest_box_index);

// Original: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
// Address: 00554ff0
float __cdecl CColorQuantizer::getPixelSortKey(CColorQuantizer *this_ptr,SColorBox *box_ptr,uchar *pixel_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
void __cdecl CColorQuantizer::computeBoxStatistics(CColorQuantizer *this_ptr,int box_index);

// Original: shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
// Address: 00555500
int __cdecl CColorQuantizer::errorDiffusionBuffers(CColorQuantizer *this_ptr,int num_entries);

// Original: shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
// Address: 005556f0
void __cdecl CColorQuantizer::mapScanlineToPalette(CColorQuantizer *this_ptr,uchar *src_pixels,uchar *dest_indices,short start_x,short end_x,short num_palette_entries);

// Original: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
// Address: 00555a40
int __cdecl CColorQuantizer::reduceColors(CColorQuantizer *this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
// Address: 00555ff0
int __cdecl CColorQuantizer::generateSortedPalette(CColorQuantizer *this_ptr,uchar *output_buffer);

// Original: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// Address: 00556180
int __cdecl CColorQuantizer::applyQuantization(CColorQuantizer *this_ptr,CBitmap **bitmap_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
// Address: 005563d0
int __cdecl CColorQuantizer::quantizeBitmaps(CColorQuantizer *this_ptr,int bitmap_count,CBitmap **bitmap_array);

// Original: shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
// Address: 00556470
int __cdecl CColorQuantizer::quantizeBitmap(CColorQuantizer *this_ptr,CBitmap **bitmap_ptr);

// Original: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
int __cdecl quantizeRawPixelData(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,int width,int height ,uint bit_depth,int line_number,int show_progress);

// Original: shape_quantize.cpp_displayProgressBar_FUN_005568f0
// Address: 005568f0
int __cdecl displayProgressBar(char *label,int total_count,int current_index);

// Original: shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
// Address: 00556a00
CBitmap * __cdecl CBitmap::ctor(CBitmap *this_ptr,int width,int height,int bit_depth);

// Original: shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
// Address: 00556c20
CBitmap * __cdecl CBitmap::dtor(CBitmap *this_ptr,uint flags);

// Original: shape_quantize.cpp_showError_FUN_00556cb0
// Address: 00556cb0
void __cdecl showError(char *error);

// Original: shape_quantize.cpp_showError_FUN_00556ce0
// Address: 00556ce0
void __cdecl showError(char *error);

// Original: shape_quantize.cpp_doNothing_FUN_00556d10
// Address: 00556d10
void __cdecl doNothing(void);

// Original: shape_quantize.cpp_reallocMemory_FUN_00556d20
// Address: 00556d20
void __cdecl reallocMemory(void *ptr,int new_size);

// Original: shape_quantize.cpp_freeMemory_FUN_00556d40
// Address: 00556d40
void __cdecl freeMemory(void *ptr);

// Original: shape_quantize.cpp_returnParameter_FUN_00556d60
// Address: 00556d60
int __cdecl returnParameter(int parameter);

// Original: shape_quantize.cpp_copyString_FUN_00556d70
// Address: 00556d70
void __cdecl copyString(char *dest,char *src);

// Original: shape_quantize.cpp_CBitmap_getWidth_FUN_00556d90
// Address: 00556d90
short __cdecl CBitmap::getWidth(CBitmap *this_ptr);

// Original: shape_quantize.cpp_CBitmap_getHeight_FUN_00556da0
// Address: 00556da0
short __cdecl CBitmap::getHeight(CBitmap *this_ptr);

// Original: shape_quantize.cpp_CBitmap_getBytesPerRow_FUN_00556db0
// Address: 00556db0
short __cdecl CBitmap::getBytesPerRow(CBitmap *this_ptr);

// Original: shape_quantize.cpp_CBitmap_getBitDepth_FUN_00556dc0
// Address: 00556dc0
uchar __cdecl CBitmap::getBitDepth(CBitmap *this_ptr);

// Original: shape_quantize.cpp_CBitmap_getRowTable_FUN_00556dd0
// Address: 00556dd0
void ** __cdecl CBitmap::getRowTable(CBitmap *this_ptr);

// Original: shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0
// Address: 00556de0
void * __cdecl CBitmap::getPalette(CBitmap *this_ptr);

// Original: shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
// Address: 00556df0
int __cdecl getAbsoluteValue(int value);
