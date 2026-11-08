// Name: FUN_005226a0
// Address: 005226a0
// Address Range: [[005226a0, 005226d2]]
// Convention: unknown
// Signature: void FUN_005226a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005226a0(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = FUN_004672b0(param_3,param_4,0,*(uint *)(param_3 + 0x104));
  FUN_00522540(param_1,param_2,uVar1);
  return;
}
