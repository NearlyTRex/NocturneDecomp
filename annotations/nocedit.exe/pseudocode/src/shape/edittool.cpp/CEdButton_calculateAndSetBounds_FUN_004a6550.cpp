// Name: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
// Address: 004a6550
// Address Range: [[004a6550, 004a658c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton * this_ptr, int x_pos, int y_pos, char * button_text)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
          (CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)

{
  int iVar1;
  char *unaff_EBX;
  int unaff_EDI;
  int in_stack_00000014;
  
  shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(button_text);
  iVar1 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(button_text);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            ((CEdButton *)y_pos,(int)button_text,in_stack_00000014,(int)(button_text + iVar1 + -1),
             unaff_EDI,unaff_EBX);
  return;
}
