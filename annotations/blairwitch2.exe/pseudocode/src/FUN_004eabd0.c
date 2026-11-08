// Name: FUN_004eabd0
// Address: 004eabd0
// Address Range: [[004eabd0, 004eac23]]
// Convention: unknown
// Signature: void FUN_004eabd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004eabd0(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  FUN_0040ad50(param_1,param_2,param_3,param_4);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
  *(uint *)(param_3 + 4) = uVar1;
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_1 + 0x6e0);
  *(uint *)(param_3 + 0x28) = *(uint *)(param_1 + 0x6f8);
  return;
}
