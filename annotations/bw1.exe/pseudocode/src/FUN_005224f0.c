// Name: FUN_005224f0
// Address: 005224f0
// Address Range: [[005224f0, 00522538]]
// Convention: unknown
// Signature: void FUN_005224f0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005224f0(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004672b0(param_2,param_3,*(uint *)(param_2 + 0x110),
                       *(uint *)(param_2 + 0x114),0x48,param_2 + 0x124,
                       *(uint *)(param_2 + 0x118));
  FUN_005221d0(param_1,*(uint *)(param_2 + 0x104),uVar1);
  return;
}
