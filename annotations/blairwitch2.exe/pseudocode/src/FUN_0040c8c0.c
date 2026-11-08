// Name: FUN_0040c8c0
// Address: 0040c8c0
// Address Range: [[0040c8c0, 0040c8e7]]
// Convention: unknown
// Signature: void FUN_0040c8c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040c8c0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xd4))(param_1,param_2);
  FUN_0040c870(uVar1);
  return;
}
