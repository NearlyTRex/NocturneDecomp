// Name: FUN_004790f0
// Address: 004790f0
// Address Range: [[004790f0, 0047913d]]
// Convention: unknown
// Signature: void FUN_004790f0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004790f0(int param_1,int param_2)

{
  uint uVar1;
  byte local_1c [24];
  
  if (param_2 == 0) {
    return;
  }
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  uVar1 = FUN_0041ceb0(uVar1);
  *(uint *)(param_1 + 0x484) = uVar1;
  FUN_00409f60(param_1);
  return;
}
