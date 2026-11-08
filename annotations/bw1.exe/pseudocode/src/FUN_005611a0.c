// Name: FUN_005611a0
// Address: 005611a0
// Address Range: [[005611a0, 005612c0]]
// Convention: unknown
// Signature: undefined4 FUN_005611a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005611a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar6 = 0;
  iVar1 = param_1 + 0x158;
  FUN_00524770(iVar1);
  FUN_00524770(iVar1);
  uVar2 = 0x01C51D80;
  *(uint *)(param_1 + 0x27bc) = 0;
  iVar3 = FUN_004a6c30(uVar2,"heroCanSee");
  if ((iVar3 != 0) && (*(int *)(param_1 + 0xc1d4) == 0)) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar4 = auStack_20;
    puVar5 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar3 = FUN_004207b0(auStack_38);
    uVar2 = DAT_00612560;
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x27bc) = 1;
      FUN_00483de0(uVar2,*(uint *)(param_1 + 0xc294));
      FUN_00483dd0(DAT_00612560,0);
      FUN_00484a40(DAT_00612560,1);
      FUN_00569810(iVar1,0xffffffff,0x2e7,1,0);
      FUN_00484e00(DAT_00612560);
      if (_DAT_01d39d34 != 0) {
        FUN_005254b0(iVar1,param_1);
      }
    }
    FUN_004087f0(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  return 0;
}
