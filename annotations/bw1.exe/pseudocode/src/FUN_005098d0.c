// Name: FUN_005098d0
// Address: 005098d0
// Address Range: [[005098d0, 00509961]]
// Convention: unknown
// Signature: void FUN_005098d0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_005098d0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040c600(param_4,DAT_007c637c);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x668);
    return;
  }
  FUN_00509970(param_1,0x14,*(uint *)(iVar1 + 0x27a0));
  if ((param_2 != 1) && (param_2 != 8)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x604);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x5a0);
  return;
}
