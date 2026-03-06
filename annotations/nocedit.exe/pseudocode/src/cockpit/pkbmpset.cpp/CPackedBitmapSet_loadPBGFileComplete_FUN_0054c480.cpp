// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
// Address: 0054c480
// Address Range: [[0054c480, 0054c4cf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)

{
  CPackedBitmap *pCVar1;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  pCVar1 = cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40
                     (this_ptr,pbg_filename,apply_palette_flag,frames_per_bitmap,skip_data_load,-1);
  this_ptr->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,pbg_filename);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(this_ptr);
  this_ptr->frames_per_bitmap = frames_per_bitmap;
  return;
}
