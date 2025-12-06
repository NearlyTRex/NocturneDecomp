// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
// Address: 0054c480
// Address Range: [[0054c480, 0054c4cf]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480(CPackedBitmapSet * this_ptr, char * pbg_filename, char * palette_filename, int param3, int param4, int additional_param)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
          (CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3,
          int param4,int additional_param)

{
  CPackedBitmap *pCVar1;
  int in_stack_00000020;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  pCVar1 = (CPackedBitmap *)
           cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40
                     (this_ptr,palette_filename,(char *)param3,param4,additional_param,-1);
  this_ptr->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,palette_filename);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(this_ptr);
  this_ptr->config_param = in_stack_00000020;
  return;
}
