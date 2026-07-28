// Name: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00476ef0
// Address: 00476ef0
// Address Range: [[00476ef0, 00476f35]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00476ef0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00476ef0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = &this_ptr->button_state;
  do {
    cVar1 = *button_text;
    *(char *)piVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = button_text[1];
    button_text = button_text + 2;
    *(char *)((int)piVar2 + 1) = cVar1;
    piVar2 = (int *)((int)piVar2 + 2);
  } while (cVar1 != '\0');
  this_ptr->shortcut_key = left;
  this_ptr->left = top;
  this_ptr->top = right;
  this_ptr->right = bottom;
  return;
}
