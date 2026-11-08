// Name: FUN_004110a0
// Address: 004110a0
// Address Range: [[004110a0, 0041110f]]
// Convention: unknown
// Signature: void FUN_004110a0(int param_1)

#include "nocturne.h"

void FUN_004110a0(int param_1)

{
  uint uVar1;
  
  FUN_0044fd00(param_1 + 0x2e4);
  FUN_00438af0(param_1 + 0x2d4,param_1 + 0x2b4);
  FUN_00408a80(param_1);
  FUN_004114e0(param_1);
  *(uint *)(param_1 + 0x4dc) = 0;
  uVar1 = FUN_0040cf60(*(uint *)(param_1 + 0x4d4),*(uint *)(param_1 + 0x4d8));
  *(uint *)(param_1 + 0x4e0) = uVar1;
  return;
}
