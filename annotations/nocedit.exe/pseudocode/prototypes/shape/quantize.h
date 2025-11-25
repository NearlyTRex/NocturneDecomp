#pragma once

// Function prototypes for shape/quantize.cpp
// Generated from Ghidra function signatures

// Original: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
// Address: 00554900
CColorQuantizer * CColorQuantizer::ctor(CColorQuantizer * this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
// Address: 00554940
CColorQuantizer * CColorQuantizer::dtor(CColorQuantizer * this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
// Address: 00554a50
int CColorQuantizer::importBitmap(CColorQuantizer * this_ptr, CBitmap * bitmap);

// Original: shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
// Address: 00554cc0
int CColorQuantizer::quantize(CColorQuantizer * this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
// Address: 00554d40
CColorQuantizer * CColorQuantizer::reset(CColorQuantizer * this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
// Address: 00554e70
void CColorQuantizer::splitBox(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index);

// Original: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
// Address: 00554ff0
float CColorQuantizer::getPixelSortKey(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
void CColorQuantizer::computeBoxStatistics(CColorQuantizer * this_ptr, int box_index);

// Original: shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
// Address: 00555500
int CColorQuantizer::errorDiffusionBuffers(CColorQuantizer * this_ptr, int num_entries);

// Original: shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
// Address: 005556f0
void CColorQuantizer::mapScanlineToPalette(CColorQuantizer * this_ptr, uchar * src_pixels, uchar * dest_indices, short start_x, short end_x, short num_palette_entries);

// Original: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
// Address: 00555a40
int CColorQuantizer::reduceColors(CColorQuantizer * this_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
// Address: 00555ff0
int CColorQuantizer::generateSortedPalette(CColorQuantizer * this_ptr, uchar * output_buffer);

// Original: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// Address: 00556180
int CColorQuantizer::applyQuantization(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr);

// Original: shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
// Address: 005563d0
int CColorQuantizer::quantizeBitmaps(CColorQuantizer * this_ptr, int bitmap_count, CBitmap * * bitmap_array);

// Original: shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
// Address: 00556470
void CColorQuantizer::quantizeBitmap(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr);

// Original: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
int quantizeRawPixelData(uchar * src_pixel_data, uchar * * out_pixel_data, uchar * * out_palette, short width, short height, uint bit_depth, int line_number, int show_progress);

// Original: shape_quantize.cpp_displayProgressBar_FUN_005568f0
// Address: 005568f0
int displayProgressBar(char * label, int total_count, int current_index);

// Original: shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
// Address: 00556a00
CBitmap * CBitmap::ctor(CBitmap * this_ptr);

// Original: shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
// Address: 00556c20
CBitmap * CBitmap::dtor(CBitmap * this_ptr);

// Original: shape_quantize.cpp_showError_FUN_00556cb0
// Address: 00556cb0
void showError(char * error);

// Original: shape_quantize.cpp_showError_FUN_00556ce0
// Address: 00556ce0
void showError(char * error);

// Original: shape_quantize.cpp_doNothing_FUN_00556d10
// Address: 00556d10
void doNothing(void);

// Original: shape_quantize.cpp_reallocMemory_FUN_00556d20
// Address: 00556d20
void reallocMemory(void * ptr, int new_size);

// Original: shape_quantize.cpp_freeMemory_FUN_00556d40
// Address: 00556d40
void freeMemory(void * ptr);

// Original: shape_quantize.cpp_returnParameter_FUN_00556d60
// Address: 00556d60
int returnParameter(int parameter);

// Original: shape_quantize.cpp_copyString_FUN_00556d70
// Address: 00556d70
void copyString(char * dest, char * src);

// Original: shape_quantize.cpp_CBitmap_getWidth_FUN_00556d90
// Address: 00556d90
short CBitmap::getWidth(CBitmap * this_ptr);

// Original: shape_quantize.cpp_CBitmap_getHeight_FUN_00556da0
// Address: 00556da0
short CBitmap::getHeight(CBitmap * this_ptr);

// Original: shape_quantize.cpp_CBitmap_getBytesPerRow_FUN_00556db0
// Address: 00556db0
short CBitmap::getBytesPerRow(CBitmap * this_ptr);

// Original: shape_quantize.cpp_CBitmap_getBitDepth_FUN_00556dc0
// Address: 00556dc0
uchar CBitmap::getBitDepth(CBitmap * this_ptr);

// Original: shape_quantize.cpp_CBitmap_getRowTable_FUN_00556dd0
// Address: 00556dd0
void * * CBitmap::getRowTable(CBitmap * this_ptr);

// Original: shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0
// Address: 00556de0
void * CBitmap::getPalette(CBitmap * this_ptr);

// Original: shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
// Address: 00556df0
int getAbsoluteValue(int value);
