// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20
// Address: 004f5a20
// Address Range: [[004f5a20, 004f5a47]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

{
  cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5320(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0
            (this_ptr,this_ptr->filename,apply_palette_flag,this_ptr->frames_per_bitmap,0);
  return;
}
