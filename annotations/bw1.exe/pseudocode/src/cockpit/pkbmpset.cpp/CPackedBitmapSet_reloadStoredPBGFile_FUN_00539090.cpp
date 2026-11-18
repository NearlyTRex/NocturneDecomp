// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00539090
// Address: 00539090
// Address Range: [[00539090, 005390b7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00539090(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00539090(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

{
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00538990(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00539040
            (this_ptr,this_ptr->filename,bitmap_index,this_ptr->frames_per_bitmap,0);
  return;
}
