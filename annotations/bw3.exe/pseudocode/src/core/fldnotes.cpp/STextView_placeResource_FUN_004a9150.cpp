// Name: core_fldnotes.cpp_STextView_placeResource_FUN_004a9150
// Address: 004a9150
// Address Range: [[004a9150, 004a91af]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a9150(STextView *this_ptr,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a9150(STextView *this_ptr,uint *param_2)

{
  int iVar1;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004a91b0(this_ptr);
  iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a9710(this_ptr,param_2[2],param_2[3]);
  if (iVar1 != 0) {
    param_2[1] = this_ptr->cursor_y;
    *param_2 = this_ptr->cursor_x;
    this_ptr->cursor_x = this_ptr->cursor_x + param_2[2];
    core_fldnotes_cpp_STextView_addResource_FUN_004a9230(this_ptr,param_2);
    return 1;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004a9300(this_ptr);
  return 0;
}
