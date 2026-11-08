// Name: FUN_004e7310
// Address: 004e7310
// Address Range: [[004e7310, 004e73a1]]
// Convention: unknown
// Signature: void FUN_004e7310(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_004e7310(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040c840(param_4,DAT_007e2cec);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x684);
    return;
  }
  FUN_004e73b0(param_1,0x14,*(uint *)(iVar1 + 0x27a0));
  if ((param_2 != 1) && (param_2 != 8)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x620);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x5bc);
  return;
}
