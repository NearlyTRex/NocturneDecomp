// Name: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0
// Address: 00476eb0
// Address Range: [[00476eb0, 00476eec]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0(void)

{
  int iVar1;
  char *unaff_EDI;
  CEdButton *in_stack_00000008;
  int in_stack_0000000c;
  char *in_stack_00000010;
  char *bottom;
  
  bottom = in_stack_00000010;
  shape_edittool_cpp_calculateButtonHeight_FUN_00477100(in_stack_00000010);
  iVar1 = shape_edittool_cpp_calculateButtonWidth_FUN_00477080(in_stack_00000010);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00476ef0
            (in_stack_00000008,in_stack_0000000c,(int)in_stack_00000010,
             iVar1 + in_stack_0000000c + -1,(int)bottom,unaff_EDI);
  return;
}
