// Name: FUN_0050f910
// Address: 0050f910
// Address Range: [[0050f910, 0050f980]]
// Convention: unknown
// Signature: void FUN_0050f910(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_0050f910(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  
  FUN_0050f230(param_1);
  FUN_0050f2a0(param_1,param_2);
  uVar1 = FUN_00438ef0(param_1,0,param_4 * param_3);
  FUN_0050fa90(param_1,uVar1,param_3,param_4,param_5,param_3);
  FUN_005a3770(uVar1);
  if (param_6 == 0) {
    return;
  }
  FUN_0050fd90(param_1);
  return;
}
