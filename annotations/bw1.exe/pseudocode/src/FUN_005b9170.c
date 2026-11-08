// Name: FUN_005b9170
// Address: 005b9170
// Address Range: [[005b9170, 005b927e]]
// Convention: unknown
// Signature: void FUN_005b9170(int param_1,int param_2)

#include "nocturne.h"

void FUN_005b9170(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  FUN_005b8eb0(param_1,param_2);
  fVar2 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar2;
  if (0.0 < fVar2) {
    iVar3 = FUN_0040cc60(0,2,1);
    FUN_005247c0(iVar1,iVar3 + 0xd);
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar3 = FUN_00524770(iVar1);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((((iVar3 != 0x13) && (iVar3 != 0x10)) && (iVar3 != 0x14)) &&
       (((iVar3 != 0x11 && (iVar3 != 0x15)) && (iVar3 != 0x12)))) {
      iVar3 = FUN_0040cc60(0,2,1);
      FUN_005247c0(iVar1,iVar3 + 0x10);
      FUN_0057d9d0(0x02C82A60,*(uint *)(param_1 + 0xc2b0));
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog-damage?.wav");
      *(uint *)(param_1 + 0xc2b0) = uVar4;
    }
  }
  FUN_0057d9d0(0x02C82A60,*(uint *)(param_1 + 0xc2b0));
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog-damage?.wav");
  *(uint *)(param_1 + 0xc2b0) = uVar4;
  FUN_004a0f00(param_1,param_2);
  return;
}
