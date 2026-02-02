// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
// Address: 0054c480
// Address Range: [[0054c480, 0054c4cf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3, int param4,int additional_param)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
          (CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3,
          int param4,int additional_param)

{
  CPackedBitmap *pCVar1;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  pCVar1 = (CPackedBitmap *)
           cockpit_pkbitmap_cpp_CPackedBitmap_loadPBGFile_FUN_0054bb40
                     ((CPackedBitmap *)this_ptr,pbg_filename,palette_filename,param3,param4,-1);
  this_ptr->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,pbg_filename);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(this_ptr);
  this_ptr->config_param = param3;
  return;
}
