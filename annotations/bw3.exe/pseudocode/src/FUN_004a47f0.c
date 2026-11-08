// Name: FUN_004a47f0
// Address: 004a47f0
// Address Range: [[004a47f0, 004a4804]]
// Convention: unknown
// Signature: void FUN_004a47f0(undefined4 param_1)

#include "nocturne.h"

void FUN_004a47f0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00509e10(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005df9d4;
  return;
}
