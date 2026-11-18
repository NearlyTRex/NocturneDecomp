// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0
// Address: 00517cf0
// Address Range: [[00517cf0, 00517d3f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)

{
  CPackedBitmap *pCVar1;
  int in_stack_00000018;
  int in_stack_00000038;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  pCVar1 = cockpit_pkbitmap_cpp_loadPBGFile_FUN_00517400
                     (this_ptr,(char *)apply_palette_flag,frames_per_bitmap,skip_data_load,
                      in_stack_00000018,-1);
  this_ptr->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60
            (this_ptr,(char *)apply_palette_flag);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_005175e0(this_ptr);
  this_ptr->frames_per_bitmap = in_stack_00000038;
  return;
}
