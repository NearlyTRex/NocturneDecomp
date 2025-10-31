#pragma once

// Function prototypes for cockpit/pkbitmap.cpp
// Generated from Ghidra function signatures

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
// Address: 0054a820
CPackedBitmap * CPackedBitmap::ctor(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840
// Address: 0054a840
CPackedBitmap * CPackedBitmap::init(CPackedBitmap * this_ptr, char * filename, int width, int height, int transparency_color, int stride, int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
// Address: 0054a890
CPackedBitmap * CPackedBitmap::dtor(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
// Address: 0054a8b0
void CPackedBitmap::reset(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
// Address: 0054a8e0
void CPackedBitmap::free(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
// Address: 0054a940
void CPackedBitmap::freePackedData(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
// Address: 0054a970
int CPackedBitmap::getTotalMemoryUsage(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
// Address: 0054a990
void CPackedBitmap::setFilename(CPackedBitmap * this_ptr, char * filename);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
// Address: 0054a9b0
int CPackedBitmap::getPixelValue(CPackedBitmap * this_ptr, int x_coordinate, int row_index);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
// Address: 0054aa20
void CPackedBitmap::renderToScreenBuffer(CPackedBitmap * this_ptr, int dest_x, int dest_y);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
// Address: 0054ab30
void CPackedBitmap::renderClippedRegion(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, int start_row, int clip_right, int end_row);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
// Address: 0054acb0
void CPackedBitmap::renderWithGlobalClipping(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, int src_top, int width, int height);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
// Address: 0054adb0
void CPackedBitmap::renderIfIntersectsRect(CPackedBitmap * this_ptr, int dest_x, int dest_y, int rect_left, int rect_top, int rect_right, int rect_bottom);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
// Address: 0054ae70
void CPackedBitmap::copyNoClip(CPackedBitmap * this_ptr, uchar * dest_buffer, int bits_per_pixel, int row_stride);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
// Address: 0054afb0
void CPackedBitmap::copyToBufferAtPosition(CPackedBitmap * this_ptr, uchar * dest_buffer, int dest_x, int dest_y, int bits_per_pixel, int buffer_stride);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
// Address: 0054b000
void CPackedBitmap::reloadFromBitmapFile(CPackedBitmap * this_ptr, char * filename, int width, int height, int transparency_color, int stride, int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
// Address: 0054b080
void CPackedBitmap::loadAndCompressBitmap(CPackedBitmap * this_ptr, int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
// Address: 0054b0e0
void CPackedBitmap::copyRawDataToCompressedRuns(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
// Address: 0054b190
void CPackedBitmap::load(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, int stride_bytes, uchar transparency_color);

// Original: cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0
// Address: 0054b3f0
void applyACTPaletteToBitmap(char * act_filename, CPackedBitmap * bitmap_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
// Address: 0054b440
void CPackedBitmap::applyPaletteToPackedData(CPackedBitmap * this_ptr, uchar * palette_buffer);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
// Address: 0054b4a0
void CPackedBitmap::applyPalette(CPackedBitmap * this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
// Address: 0054b4b0
void CPackedBitmap::loadByFileExtension(CPackedBitmap * this_ptr, int processing_flags);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
// Address: 0054b520
void CPackedBitmap::saveToPBMFile(CPackedBitmap * this_ptr, char * filename);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
// Address: 0054b5c0
void CPackedBitmap::writePBMFile(CPackedBitmap * this_ptr, FILE * file_handle);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
// Address: 0054b690
void CPackedBitmap::readPBMFile(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
// Address: 0054b860
void CPackedBitmap::openPBMFile(CPackedBitmap * this_ptr, char * filename, int post_load_processing);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
// Address: 0054b910
void CPackedBitmap::loadStoredPBMFile(CPackedBitmap * this_ptr, int post_load_processing);

// Original: cockpit_pkbitmap.cpp_FUN_0054b930
// Address: 0054b930
undefined FUN_0054b930();

// Original: cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
// Address: 0054b9b0
CPackedBitmap * parsePBGFile(CPackedBitmapSet * bitmap_set, FILE * file_handle, int param3, int param4, int selected_bitmap_index);

// Original: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
// Address: 0054bb40
int loadPBGFile(CPackedBitmapSet * bitmap_set, char * pbg_filename, char * palette_filename, int param3, int param4, int selected_bitmap_index);
