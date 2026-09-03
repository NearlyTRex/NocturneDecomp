#pragma once

// Function prototypes for cockpit/pkbitmap.cpp
// Generated from Ghidra function signatures

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90
// Address: 004f3e90
CPackedBitmap * __cdecl CPackedBitmap::ctor(CPackedBitmap *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_004f3eb0
// Address: 004f3eb0
CPackedBitmap * __cdecl CPackedBitmap::init(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00
// Address: 004f3f00
CPackedBitmap * __cdecl CPackedBitmap::dtor(CPackedBitmap *this_ptr,uint flags);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20
// Address: 004f3f20
void __cdecl CPackedBitmap::reset(CPackedBitmap *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50
// Address: 004f3f50
void __cdecl CPackedBitmap(CPackedBitmap *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_004f3f80
// Address: 004f3f80
void __cdecl CPackedBitmap::freePackedData(CPackedBitmap *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0
// Address: 004f3fa0
int __cdecl CPackedBitmap::getTotalMemoryUsage(CPackedBitmap *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
// Address: 004f3fc0
void __cdecl CPackedBitmap::setFilename(CPackedBitmap *this_ptr,char *filename);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0
// Address: 004f3fe0
int __cdecl CPackedBitmap::getPixelValue(CPackedBitmap *this_ptr,int x_coordinate,int row_index);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_004f4050
// Address: 004f4050
void __cdecl CPackedBitmap::renderToScreenBuffer(CPackedBitmap *this_ptr,int dest_x,int dest_y);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170
// Address: 004f4170
void __cdecl CPackedBitmap::renderClippedRegion(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310
// Address: 004f4310
void __cdecl CPackedBitmap::renderWithGlobalClipping(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410
// Address: 004f4410
void __cdecl CPackedBitmap::renderIfIntersectsRect(CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right,int rect_bottom);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_004f44d0
// Address: 004f44d0
void __cdecl CPackedBitmap::copyNoClip(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_004f45e0
// Address: 004f45e0
void __cdecl CPackedBitmap::copyToBufferAtPosition(CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel,int buffer_stride);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
// Address: 004f4630
void __cdecl CPackedBitmap::reloadFromBitmapFile(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0
// Address: 004f46b0
void __cdecl CPackedBitmap::loadAndCompressBitmap(CPackedBitmap *this_ptr,int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
// Address: 004f4700
void __cdecl CPackedBitmap::copyRawDataToCompressedRuns(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
// Address: 004f47b0
void __cdecl CPackedBitmap::load(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride);

// Original: cockpit_pkbitmap.cpp_FUN_004f49d8
// Address: 004f49d8
void FUN_004f49d8(void);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00
// Address: 004f4a00
void __cdecl CPackedBitmap::applyACTPalette(CPackedBitmap *this_ptr,char *act_filename);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
// Address: 004f4a50
void __cdecl CPackedBitmap::applyPaletteToPackedData(CPackedBitmap *this_ptr,uchar *palette_buffer);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
// Address: 004f4ab0
void __cdecl CPackedBitmap::applyPalette(CPackedBitmap *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0
// Address: 004f4ac0
void __cdecl CPackedBitmap::loadByFileExtension(CPackedBitmap *this_ptr,int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_004f4b30
// Address: 004f4b30
void __cdecl CPackedBitmap::saveToPBMFile(CPackedBitmap *this_ptr,char *param_2);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0
// Address: 004f4bb0
void __cdecl CPackedBitmap::writePBMFile(CPackedBitmap *this_ptr,_FILE *file_handle);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
// Address: 004f4c80
void __cdecl CPackedBitmap::readPBMFile(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
// Address: 004f4e40
void __cdecl CPackedBitmap::openPBMFile(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_004f4ef0
// Address: 004f4ef0
void __cdecl CPackedBitmap::loadPBMFile(CPackedBitmap *this_ptr,int apply_palette_flag);

// Original: cockpit_pkbitmap.cpp_writePBGHeader_FUN_004f4f10
// Address: 004f4f10
void __cdecl writePBGHeader(int total_entries,_FILE *file_header);

// Original: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f4f90
// Address: 004f4f90
CPackedBitmap * __cdecl CPackedBitmapSet(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index);

// Original: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5110
// Address: 004f5110
CPackedBitmap * __cdecl CPackedBitmapSet(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index);

// Original: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5290
// Address: 004f5290
void __cdecl CPackedBitmapSet(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f52c0
// Address: 004f52c0
void __cdecl CPackedBitmapSet(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5320
// Address: 004f5320
void __cdecl CPackedBitmapSet(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbitmap.cpp_CPackedBitmap_getWidth_FUN_004f5cf0
// Address: 004f5cf0
int __cdecl CPackedBitmap::getWidth(CPackedBitmap *this_ptr);
