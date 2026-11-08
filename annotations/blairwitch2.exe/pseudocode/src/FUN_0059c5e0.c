// Name: FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059c601]]
// Convention: unknown
// Signature: void FUN_0059c5e0(undefined4 param_1)

#include "nocturne.h"

void FUN_0059c5e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00587d70(param_1);
  *(byte **)(iVar1 + 0x2b0) = &DAT_005fe7b4;
  *(uint *)(iVar1 + 0x6b8) = 1;
  return;
}
