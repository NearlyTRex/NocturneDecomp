// Name: FUN_004e72b0
// Address: 004e72b0
// Address Range: [[004e72b0, 004e7303]]
// Convention: unknown
// Signature: void FUN_004e72b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004e72b0(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  FUN_0040aca0(param_1,param_2,param_3,param_4);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
  *(uint *)(param_3 + 4) = uVar1;
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_1 + 0x5a0);
  *(uint *)(param_3 + 0x28) = *(uint *)(param_1 + 0x5b8);
  return;
}
