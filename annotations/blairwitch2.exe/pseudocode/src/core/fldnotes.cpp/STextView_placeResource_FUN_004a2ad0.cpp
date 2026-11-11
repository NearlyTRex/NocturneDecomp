// Name: core_fldnotes.cpp_STextView_placeResource_FUN_004a2ad0
// Address: 004a2ad0
// Address Range: [[004a2ad0, 004a2b2f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(STextView *this_ptr,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(STextView *this_ptr,uint *param_2)

{
  int iVar1;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004a2b30(this_ptr);
  iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0(this_ptr,param_2[2],param_2[3]);
  if (iVar1 != 0) {
    param_2[1] = this_ptr->cursor_y;
    *param_2 = this_ptr->cursor_x;
    this_ptr->cursor_x = this_ptr->cursor_x + param_2[2];
    core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(this_ptr,param_2);
    return 1;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(this_ptr);
  return 0;
}
