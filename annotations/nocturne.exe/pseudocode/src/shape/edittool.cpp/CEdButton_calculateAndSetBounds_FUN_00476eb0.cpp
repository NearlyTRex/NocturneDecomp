// Name: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0
// Address: 00476eb0
// Address Range: [[00476eb0, 00476eec]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)

{
  int iVar1;
  char *unaff_EDI;
  char *bottom;
  
  bottom = button_text;
  shape_edittool_cpp_calculateButtonHeight_FUN_00477100(button_text);
  iVar1 = shape_edittool_cpp_calculateButtonWidth_FUN_00477080(button_text);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00476ef0
            ((CEdButton *)x_pos,y_pos,(int)button_text,iVar1 + y_pos + -1,(int)bottom,unaff_EDI);
  return;
}
