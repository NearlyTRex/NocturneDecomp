// Name: FUN_004a4790
// Address: 004a4790
// Address Range: [[004a4790, 004a47a4]]
// Convention: unknown
// Signature: void FUN_004a4790(undefined4 param_1)

#include "nocturne.h"

void FUN_004a4790(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00509e10(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005df994;
  return;
}
