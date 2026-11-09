// Name: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0
// Address: 00484ed0
// Address Range: [[00484ed0, 00484f17]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &this_ptr->field_0x1c;
  do {
    cVar1 = *button_text;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = button_text[1];
    button_text = button_text + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(int *)&this_ptr->field_0x8 = left;
  *(int *)&this_ptr->field_0xc = top;
  *(int *)&this_ptr->field_0x10 = right + 1;
  *(int *)&this_ptr->field_0x14 = bottom + 1;
  return;
}
