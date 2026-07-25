// Name: FUN_00534f90
// Address: 00534f90
// Address Range: [[00534f90, 00534fb8]]
// Convention: unknown
// Signature: bool FUN_00534f90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool FUN_00534f90(void)

{
  int iVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x14c) + 0x7c))();
  return iVar1 == 4;
}
