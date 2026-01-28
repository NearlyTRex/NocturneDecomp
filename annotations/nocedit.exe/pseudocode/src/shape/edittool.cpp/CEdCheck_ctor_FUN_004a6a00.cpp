// Name: shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
// Address: 004a6a00
// Address Range: [[004a6a00, 004a6a3d]]
// Convention: __cdecl
// Signature: CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck *this_ptr)

#include "nocturne.h"

CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck *this_ptr)

{
  int iVar1;
  
  this_ptr->checked_state = 0;
  this_ptr->interactive_flag = 0;
  this_ptr->checkbox_text[0] = '\0';
  this_ptr->right_boundary = 0;
  this_ptr->border_style_flag = 0;
  this_ptr->coord_unk = 0;
  this_ptr->vtable = (void **)0x0;
  iVar1 = this_ptr->right_boundary;
  this_ptr->total_width = iVar1;
  this_ptr->y_position = iVar1;
  this_ptr->x_position = iVar1;
  return this_ptr;
}
