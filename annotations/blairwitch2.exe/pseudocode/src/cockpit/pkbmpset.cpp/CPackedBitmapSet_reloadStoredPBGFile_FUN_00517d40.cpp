// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40
// Address: 00517d40
// Address Range: [[00517d40, 00517d67]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

{
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0
            (this_ptr,this_ptr->filename,bitmap_index,this_ptr->frames_per_bitmap,0);
  return;
}
