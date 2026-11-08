// Name: FUN_004a47c0
// Address: 004a47c0
// Address Range: [[004a47c0, 004a47d4]]
// Convention: unknown
// Signature: void FUN_004a47c0(undefined4 param_1)

#include "nocturne.h"

void FUN_004a47c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00509e10(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005df9b4;
  return;
}
