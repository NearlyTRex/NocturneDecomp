// Name: shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
// Address: 004a5ae0
// Address Range: [[004a5ae0, 004a5b19]]
// Convention: __cdecl
// Signature: CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar *this_ptr)

#include "nocturne.h"

CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar *this_ptr)

{
  int iVar1;
  
  this_ptr->current_value = 1;
  this_ptr->scroll_position = 0;
  this_ptr->max_value = 1;
  this_ptr->bounds_bottom = 0;
  this_ptr->scroll_increment = 1;
  this_ptr->orientation = 0;
  iVar1 = this_ptr->bounds_bottom;
  this_ptr->bounds_right = iVar1;
  this_ptr->bounds_top = iVar1;
  this_ptr->bounds_left = iVar1;
  return this_ptr;
}
