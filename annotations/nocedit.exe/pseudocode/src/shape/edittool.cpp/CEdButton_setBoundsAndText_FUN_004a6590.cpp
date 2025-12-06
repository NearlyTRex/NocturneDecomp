// Name: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
// Address: 004a6590
// Address Range: [[004a6590, 004a65d7]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, int bottom, char * button_text)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
          (CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->button_text;
  do {
    cVar1 = *button_text;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = button_text[1];
    button_text = button_text + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->left = left;
  this_ptr->top = top;
  this_ptr->right = right + 1;
  this_ptr->bottom = bottom + 1;
  return;
}
