// Name: FUN_0040c550
// Address: 0040c550
// Address Range: [[0040c550, 0040c577]]
// Convention: unknown
// Signature: void FUN_0040c550(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040c550(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1,param_2);
  FUN_0040c5b0(uVar1);
  return;
}
