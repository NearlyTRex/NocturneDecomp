// Name: shape_edittool.cpp_FUN_00482320
// Address: 00482320
// Address Range: [[00482320, 0048234c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_00482320(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_FUN_00482320(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  shape_edittool_cpp_FUN_00482a00(this_ptr,dialog_title,window_flags);
  *(int *)&this_ptr->field_0x194 = initial_selected_index;
  shape_edittool_cpp_FUN_004837f0(this_ptr);
  return;
}
