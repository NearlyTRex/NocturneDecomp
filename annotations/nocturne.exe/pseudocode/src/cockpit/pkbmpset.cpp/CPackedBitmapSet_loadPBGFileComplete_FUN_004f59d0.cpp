// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0
// Address: 004f59d0
// Address Range: [[004f59d0, 004f5a1f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)

{
  CPackedBitmap *pCVar1;
  
  cockpit_pkbitmap_cpp_FUN_004f5320(this_ptr);
  pCVar1 = cockpit_pkbitmap_cpp_FUN_004f5110
                     (this_ptr,pbg_filename,apply_palette_flag,frames_per_bitmap,skip_data_load,-1);
  this_ptr->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(this_ptr,pbg_filename);
  cockpit_pkbitmap_cpp_FUN_004f52c0(this_ptr);
  this_ptr->frames_per_bitmap = frames_per_bitmap;
  return;
}
