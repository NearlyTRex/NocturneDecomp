// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
// Address: 0054c4d0
// Address Range: [[0054c4d0, 0054c4f7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(CPackedBitmapSet *this_ptr,char *pbg_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(CPackedBitmapSet *this_ptr,char *pbg_filename)

{
  int unaff_EBX;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
            (this_ptr,this_ptr->filename,pbg_filename,this_ptr->config_param,0,unaff_EBX);
  return;
}
