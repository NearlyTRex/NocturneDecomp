// Name: FUN_005b6560
// Address: 005b6560
// Address Range: [[005b6560, 005b6592]]
// Convention: unknown
// Signature: void FUN_005b6560(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005b6560(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0044e6e0(param_3,param_4,0,*(uint *)(param_3 + 0x104));
  FUN_005b6400(param_1,param_2,uVar1);
  return;
}
