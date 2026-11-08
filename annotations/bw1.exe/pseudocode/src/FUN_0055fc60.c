// Name: FUN_0055fc60
// Address: 0055fc60
// Address Range: [[0055fc60, 0055fdfe]]
// Convention: unknown
// Signature: undefined4 FUN_0055fc60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055fc60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
  iVar1 = FUN_00524770(param_1 + 0x158);
  uVar3 = 0x01C51D80;
  iVar1 = *(int *)(iVar1 + 0x24);
  *(uint *)(param_1 + 0x27bc) = 0;
  iVar2 = FUN_004a6c30(uVar3,"heroCanSee");
  uVar3 = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xc1d4) != 0) {
      return 0;
    }
    if ((((iVar1 != 0x16) && (iVar1 != 0xf)) && (iVar1 != 0x10)) &&
       ((iVar1 != 0x11 && (iVar1 != 0x12)))) {
      FUN_004301e0(param_1);
      return *(uint *)(param_1 + 0x27bc);
    }
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar4 = auStack_24;
    puVar5 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = FUN_004207b0(auStack_3c);
    uVar3 = DAT_00612560;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x27bc) = 1;
      FUN_00483de0(uVar3,*(uint *)(param_1 + 0xc304));
      FUN_00483dd0(DAT_00612560,0);
      FUN_00484a40(DAT_00612560,1);
      FUN_00569810(param_1 + 0x158,0xffffffff,0x2e7,1,0);
      FUN_00484e00(DAT_00612560);
      if (_DAT_01d39d34 != 0) {
        FUN_005254b0(param_1 + 0x158,param_1);
      }
    }
    FUN_004087f0(param_1);
    if (*(int *)(param_1 + 0xc308) != 0) {
      FUN_00551990(0x01E82168,0x269cbb0);
    }
    FUN_00483de0(DAT_00612560,65000);
    uVar3 = *(uint *)(param_1 + 0x27bc);
  }
  return uVar3;
}
