// Name: FUN_00415120
// Address: 00415120
// Address Range: [[00415120, 00415240]]
// Convention: unknown
// Signature: int FUN_00415120(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00415120(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x2568) != 0) {
    return 0;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar4 = auStack_38;
  puVar5 = auStack_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_0041a840(auStack_20);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x2828) = 1;
    if (*(int *)(param_1 + 0x10c74) == 0) {
      FUN_00424bd0(param_1);
    }
    else {
      iVar2 = param_1 + 0x10c7c;
      FUN_005b7150(iVar2,0,param_1 + 0x2b4,0);
      uVar1 = FUN_0044fd20(param_1 + 0x10af8,0,0);
      FUN_005b7190(iVar2,1,uVar1);
      FUN_005b76a0(iVar2,*(float *)(param_1 + 0x10c78) / 0x40800000);
    }
    if (_DAT_01d1cdc8 != 0) {
      iVar2 = FUN_0046b960(DAT_0060b280);
      if (iVar2 == 0) {
        FUN_005042e0(param_1 + 0x2b4,param_1);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x60))(param_1);
      }
    }
  }
  FUN_00408a10(param_1);
  return iVar3;
}
