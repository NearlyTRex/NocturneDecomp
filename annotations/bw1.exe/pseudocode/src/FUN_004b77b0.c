// Name: FUN_004b77b0
// Address: 004b77b0
// Address Range: [[004b77b0, 004b77c4]]
// Convention: unknown
// Signature: void FUN_004b77b0(undefined4 param_1)

#include "nocturne.h"

void FUN_004b77b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_006000c4;
  return;
}
