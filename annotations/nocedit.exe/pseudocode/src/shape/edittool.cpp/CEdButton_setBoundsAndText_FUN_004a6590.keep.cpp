// Name: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
// Address: 004a6590
// MANUAL RECONSTRUCTION
// Address Range: [[004a6590, 004a65d7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

{
  strcpy(this_ptr->button_text,button_text);
  this_ptr->left = left;
  this_ptr->top = top;
  this_ptr->right = right + 1;
  this_ptr->bottom = bottom + 1;
  return;
}
