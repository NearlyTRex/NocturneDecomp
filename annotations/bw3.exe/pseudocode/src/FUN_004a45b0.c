// Name: FUN_004a45b0
// Address: 004a45b0
// Address Range: [[004a45b0, 004a45c4]]
// Convention: unknown
// Signature: void FUN_004a45b0(undefined4 param_1)

#include "nocturne.h"

void FUN_004a45b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00509e10(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005df954;
  return;
}
