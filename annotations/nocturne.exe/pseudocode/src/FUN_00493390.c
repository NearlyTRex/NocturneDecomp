// Name: FUN_00493390
// Address: 00493390
// Address Range: [[00493390, 004933ba]]
// Convention: unknown
// Signature: undefined4 FUN_00493390(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00493390(void)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000004;
  byte in_stack_00000008;
  
  if ((*(int *)(in_stack_00000004 + 0x3190) != 0) &&
     (piVar1 = *(int **)(in_stack_00000004 + 0x3194), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,in_stack_00000008);
    return uVar2;
  }
  return 0;
}
