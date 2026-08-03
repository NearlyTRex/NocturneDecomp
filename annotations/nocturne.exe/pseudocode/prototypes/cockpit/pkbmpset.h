#pragma once

// Function prototypes for cockpit/pkbmpset.cpp
// Generated from Ghidra function signatures

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350
// Address: 004f5350
void __cdecl CPackedBitmapSet::alloc(CPackedBitmapSet *this_ptr,int bitmap_count);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0
// Address: 004f53f0
void __cdecl CPackedBitmapSet::loadBitmapSetFromRange(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0
// Address: 004f54c0
void __cdecl CPackedBitmapSet::loadJoinedRAW(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740
// Address: 004f5740
void __cdecl CPackedBitmapSet::reload(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920
// Address: 004f5920
void __cdecl CPackedBitmapSet::loadPBMFileRange(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0
// Address: 004f59d0
void __cdecl CPackedBitmapSet::loadPBGFileComplete(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20
// Address: 004f5a20
void __cdecl CPackedBitmapSet::reloadStoredPBGFile(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50
// Address: 004f5a50
void __cdecl CPackedBitmapSet::loadByFilenameAndIndex(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20
// Address: 004f5b20
void __cdecl CPackedBitmapSet::loadACTAndApplyToBitmapSet(CPackedBitmapSet *this_ptr,char *act_filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_004f5b70
// Address: 004f5b70
void __cdecl CPackedBitmapSet::applyPaletteToAllBitmaps(CPackedBitmapSet *this_ptr,char *palette_data);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0
// Address: 004f5bb0
void __cdecl CPackedBitmapSet::applyPaletteOrReload(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0
// Address: 004f5bf0
int __cdecl CPackedBitmapSet::getTotalMemoryUsage(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40
// Address: 004f5c40
void __cdecl CPackedBitmapSet::setFilename(CPackedBitmapSet *this_ptr,char *filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60
// Address: 004f5c60
void __cdecl CPackedBitmapSet::loadStoredACTFile(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80
// Address: 004f5c80
void __cdecl CPackedBitmapSet::ensureBitmapLoaded(CPackedBitmapSet *this_ptr,int bitmap_index);

// Original: cockpit_pkbmpset.cpp_FUN_004f5cf0
// Address: 004f5cf0
undefined4 FUN_004f5cf0(int param_1);

// Original: cockpit_pkbmpset.cpp_FUN_004f5d00
// Address: 004f5d00
undefined4 FUN_004f5d00(void);

// Original: cockpit_pkbmpset.cpp_FUN_004f5d10
// Address: 004f5d10
void FUN_004f5d10(void);
