// Name: FUN_004088f0
// Address: 004088f0
// Address Range: [[004088f0, 0040894e]]
// Convention: unknown
// Signature: void FUN_004088f0(int param_1)

#include "nocturne.h"

void FUN_004088f0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040cfa0(*(uint *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0040cfa0(*(uint *)(param_1 + 0x38));
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_0040cfa0(*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_0045b550(param_1 + 0x3c,param_1 + 0x30);
  return;
}
