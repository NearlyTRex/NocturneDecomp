// Name: FUN_00448df0
// Address: 00448df0
// Address Range: [[00448df0, 00448ea3]]
// Convention: unknown
// Signature: void FUN_00448df0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00448df0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00448b70(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) == 5) || (*(int *)(iVar2 + 0x24) == 4)) goto LAB_00448e30;
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  FUN_005247c0(param_1 + 0x158,uVar3,1);
LAB_00448e30:
  iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc270));
  if (iVar2 != 0) {
    FUN_004a0f00(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xc270) = uVar3;
  FUN_004a0f00(param_1,param_2);
  return;
}
