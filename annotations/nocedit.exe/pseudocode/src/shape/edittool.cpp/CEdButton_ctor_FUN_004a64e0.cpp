// Name: shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
// Address: 004a64e0
// Address Range: [[004a64e0, 004a650c]]
// Convention: __cdecl
// Signature: CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(CEdButton *this_ptr)

#include "nocturne.h"

CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(CEdButton *this_ptr)

{
  int iVar1;
  
  *(byte *)&this_ptr->shortcut_key = 0;
  this_ptr->button_text[0] = '\0';
  this_ptr->bottom = 0;
  this_ptr->button_state = 0;
  this_ptr->enabled = 0;
  iVar1 = this_ptr->bottom;
  this_ptr->right = iVar1;
  this_ptr->top = iVar1;
  this_ptr->left = iVar1;
  return this_ptr;
}
