// Name: core_fldnotes.cpp_STextView_placeResource_FUN_004bb510
// Address: 004bb510
// Address Range: [[004bb510, 004bb56f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(STextView *this_ptr,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(STextView *this_ptr,uint *param_2)

{
  int iVar1;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004bb570(this_ptr);
  iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0(this_ptr,param_2[2],param_2[3]);
  if (iVar1 != 0) {
    param_2[1] = this_ptr->cursor_y;
    *param_2 = this_ptr->cursor_x;
    this_ptr->cursor_x = this_ptr->cursor_x + param_2[2];
    core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(this_ptr,param_2);
    return 1;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(this_ptr);
  return 0;
}
