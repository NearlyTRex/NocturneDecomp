// Name: FUN_004d60b0
// Address: 004d60b0
// Address Range: [[004d60b0, 004d60c7]]
// Convention: unknown
// Signature: void FUN_004d60b0(undefined4 param_1)

#include "nocturne.h"

void FUN_004d60b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004f5d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_005a0784;
  return;
}
