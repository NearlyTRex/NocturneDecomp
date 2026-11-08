// Name: FUN_005a6b00
// Address: 005a6b00
// Address Range: [[005a6b00, 005a6cbd]]
// Convention: unknown
// Signature: int FUN_005a6b00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a6b00(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x24fc) != 0) {
    return 0;
  }
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_44;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iStack_14 = FUN_004207b0(auStack_2c);
  if (iStack_14 == 0) goto LAB_005a6bdf;
  iVar2 = param_1 + 0x83c6c;
  iStack_c = param_1 + 0x4913c;
  if (*(int *)(param_1 + 0xbe79c) == 0) {
    FUN_00569810(param_1 + 0x158,0xffffffff,0xffffffff,1,0);
    FUN_00441800(iStack_c,0);
    iVar6 = iVar2;
LAB_005a6ba2:
    FUN_00441800(iVar6,0);
  }
  else {
    iVar6 = param_1 + 0xe60c;
    iStack_10 = param_1 + 0xc268;
    if (*(int *)(param_1 + 0xbe79c) == 2) {
      FUN_00569810(iStack_10,0xffffffff,0xffffffff,1,0);
      goto LAB_005a6ba2;
    }
    iVar1 = param_1 + 0xbe7a0;
    FUN_00523290(iVar1,0,param_1 + 0x158,0);
    FUN_005232d0(iVar1,0,iStack_c,0,1);
    FUN_005232d0(iVar1,0,iStack_c,0,2);
    FUN_005232d0(iVar1,0,iVar2,0,3);
    FUN_005232d0(iVar1,0,iVar2,0,4);
    FUN_00523290(iVar1,1,iStack_10,0);
    FUN_005232d0(iVar1,1,iVar6,0,1);
    FUN_005232d0(iVar1,1,iVar6,0,2);
    FUN_005237e0(iVar1,*(uint *)(param_1 + 0xbf3cc));
  }
  FUN_0042f3c0(param_1);
  if (_DAT_01d39d34 != 0) {
    iVar2 = FUN_00483e60(DAT_00612560);
    if (iVar2 == 0) {
      FUN_005254b0(param_1 + 0x158,param_1);
    }
  }
LAB_005a6bdf:
  FUN_004087f0(param_1);
  return iStack_14;
}
