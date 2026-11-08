// Name: FUN_004088b0
// Address: 004088b0
// Address Range: [[004088b0, 0040890e]]
// Convention: unknown
// Signature: void FUN_004088b0(int param_1)

#include "nocturne.h"

void FUN_004088b0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040cd60(*(uint *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0040cd60(*(uint *)(param_1 + 0x38));
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_0040cd60(*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_0045f3e0(param_1 + 0x3c,param_1 + 0x30);
  return;
}
