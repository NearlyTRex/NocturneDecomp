// Name: FUN_0045ed40
// Address: 0045ed40
// Address Range: [[0045ed40, 0045ed74]]
// Convention: unknown
// Signature: void FUN_0045ed40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0045ed40(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000004 + 8) = in_stack_00000008;
  if (in_stack_00000008 != 1) {
    return;
  }
  _DAT_01cc4800 = "..\\engine\\drender.cpp";
  _DAT_01cc4804 = 0x9b;
  FUN_004c8440("Ortho isn't supported any more");
  return;
}
