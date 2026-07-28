#pragma once

// Function prototypes for cockpit/pkbmpset.cpp
// Generated from Ghidra function signatures

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350
// Address: 004f5350
void __cdecl CPackedBitmapSet::alloc(CPackedBitmapSet *this_ptr,int bitmap_count);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0
// Address: 004f53f0
int CPackedBitmapSet::loadBitmapSetFromRange(CPackedBitmapSet *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0
// Address: 004f54c0
void CPackedBitmapSet::loadJoinedRAW(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,int param_6);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740
// Address: 004f5740
void __cdecl CPackedBitmapSet::reload(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920
// Address: 004f5920
void CPackedBitmapSet::loadPBMFileRange(CPackedBitmapSet *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5);

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
void CPackedBitmapSet::applyPaletteOrReload(void);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0
// Address: 004f5bf0
int CPackedBitmapSet::getTotalMemoryUsage(int *param_1);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40
// Address: 004f5c40
void __cdecl CPackedBitmapSet::setFilename(CPackedBitmapSet *this_ptr,char *filename);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60
// Address: 004f5c60
void __cdecl CPackedBitmapSet::loadStoredACTFile(CPackedBitmapSet *this_ptr);

// Original: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80
// Address: 004f5c80
void CPackedBitmapSet::ensureBitmapLoaded(CPackedBitmapSet *param_1,int param_2);

// Original: cockpit_pkbmpset.cpp_FUN_004f5cf0
// Address: 004f5cf0
undefined4 FUN_004f5cf0(int param_1);

// Original: cockpit_pkbmpset.cpp_FUN_004f5d00
// Address: 004f5d00
undefined4 FUN_004f5d00(void);

// Original: cockpit_pkbmpset.cpp_FUN_004f5d10
// Address: 004f5d10
void FUN_004f5d10(void);
