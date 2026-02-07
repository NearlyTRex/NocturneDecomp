#pragma once

// Function prototypes for cockpit/pkbmpset.cpp
// Generated from Ghidra function signatures

// Original: cockpit_pkbmpset.cpp_alignTo4ByteBoundary_FUN_0054bcc0
// Address: 0054bcc0
int __cdecl alignTo4ByteBoundary(int value);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
// Address: 0054bcd0
void __cdecl CPackedBitmapSet::ctor(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
// Address: 0054bd00
void __cdecl CPackedBitmapSet::init(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
// Address: 0054bd60
void __cdecl CPackedBitmapSet::reset(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
// Address: 0054bdb0
void __cdecl CPackedBitmapSet::alloc(CPackedBitmapSet *this_ptr,int bitmap_count);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
// Address: 0054be70
void __cdecl CPackedBitmapSet::loadBitmapSetFromRange(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index, char *extension,char *base_path,int stride,int apply_palette_flag);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
// Address: 0054bf40
void __cdecl CPackedBitmapSet::loadJoinedRAW(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height, int total_bitmaps,int unknown_param);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
// Address: 0054c1e0
void __cdecl CPackedBitmapSet::reload(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
// Address: 0054c3d0
void __cdecl CPackedBitmapSet::loadPBMFileRange(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index, char *base_path);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
// Address: 0054c480
void __cdecl CPackedBitmapSet::loadPBGFileComplete(CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3, int param4,int additional_param);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
// Address: 0054c4d0
void __cdecl CPackedBitmapSet::reloadStoredPBGFile(CPackedBitmapSet *this_ptr,char *pbg_filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
// Address: 0054c500
void __cdecl CPackedBitmapSet::loadByFilenameAndIndex(CPackedBitmapSet *this_ptr,char *filename,int bitmap_index);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
// Address: 0054c5d0
void __cdecl CPackedBitmapSet::loadACTAndApplyToBitmapSet(CPackedBitmapSet *this_ptr,char *act_filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
// Address: 0054c620
void __cdecl CPackedBitmapSet::applyPaletteToAllBitmaps(CPackedBitmapSet *this_ptr,char *palette_data);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660
// Address: 0054c660
void __cdecl CPackedBitmapSet::applyPaletteOrReload(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0
// Address: 0054c6a0
int __cdecl CPackedBitmapSet::getTotalMemoryUsage(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
// Address: 0054c6f0
void __cdecl CPackedBitmapSet::setFilename(CPackedBitmapSet *this_ptr,char *filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
// Address: 0054c710
void __cdecl CPackedBitmapSet::loadStoredACTFile(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
// Address: 0054c72e
void __cdecl CPackedBitmapSet::ensureBitmapLoaded(CPackedBitmapSet *this_ptr,int bitmap_index,char *filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_doNothing_FUN_0054c7c0
// Address: 0054c7c0
void __cdecl CPackedBitmapSet::doNothing(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_doNothing_FUN_0054c7d0
// Address: 0054c7d0
void __cdecl CPackedBitmapSet::doNothing(CPackedBitmapSet *this_ptr);
