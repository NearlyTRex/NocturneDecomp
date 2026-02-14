// Name: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
// Address: 004a6550
// Address Range: [[004a6550, 004a658c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)

{
  int iVar1;
  int iVar2;
  char *button_text_00;
  
  button_text_00 = button_text;
  iVar1 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(button_text);
  iVar1 = iVar1 + y_pos + -1;
  iVar2 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(button_text);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            (this_ptr,x_pos,y_pos,iVar2 + x_pos + -1,iVar1,button_text_00);
  return;
}
