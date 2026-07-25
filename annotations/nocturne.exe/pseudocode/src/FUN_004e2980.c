// Name: FUN_004e2980
// Address: 004e2980
// Address Range: [[004e2980, 004e29c1]]
// Convention: unknown
// Signature: void FUN_004e2980(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004e2980(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  if (*in_stack_00000004 == 0) {
    iVar1 = in_stack_00000004[1];
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    _fclose(*in_stack_00000004);
    *in_stack_00000004 = 0;
    iVar1 = in_stack_00000004[1];
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_005638d0(iVar1);
  in_stack_00000004[1] = 0;
  return;
}
