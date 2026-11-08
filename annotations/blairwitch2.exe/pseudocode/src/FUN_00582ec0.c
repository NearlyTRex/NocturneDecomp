// Name: FUN_00582ec0
// Address: 00582ec0
// Address Range: [[00582ec0, 0058307d]]
// Convention: unknown
// Signature: int FUN_00582ec0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00582ec0(int param_1)

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
  if (*(int *)(param_1 + 0x2568) != 0) {
    return 0;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_44;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iStack_14 = FUN_0041a840(auStack_2c);
  if (iStack_14 == 0) goto LAB_00582f9f;
  iVar2 = param_1 + 0x8840c;
  iStack_c = param_1 + 0x4d8dc;
  if (*(int *)(param_1 + 0xc2f3c) == 0) {
    FUN_00547170(param_1 + 0x2b4,0xffffffff,0xffffffff,1,0);
    FUN_005b0fe0(iStack_c,0);
    iVar6 = iVar2;
LAB_00582f62:
    FUN_005b0fe0(iVar6,0);
  }
  else {
    iVar6 = param_1 + 0x12dac;
    iStack_10 = param_1 + 0x10af8;
    if (*(int *)(param_1 + 0xc2f3c) == 2) {
      FUN_00547170(iStack_10,0xffffffff,0xffffffff,1,0);
      goto LAB_00582f62;
    }
    iVar1 = param_1 + 0xc2f40;
    FUN_005b7150(iVar1,0,param_1 + 0x2b4,0);
    FUN_005b7190(iVar1,0,iStack_c,0,1);
    FUN_005b7190(iVar1,0,iStack_c,0,2);
    FUN_005b7190(iVar1,0,iVar2,0,3);
    FUN_005b7190(iVar1,0,iVar2,0,4);
    FUN_005b7150(iVar1,1,iStack_10,0);
    FUN_005b7190(iVar1,1,iVar6,0,1);
    FUN_005b7190(iVar1,1,iVar6,0,2);
    FUN_005b76a0(iVar1,*(uint *)(param_1 + 0xc3b6c));
  }
  FUN_00425aa0(param_1);
  if (_DAT_01d1cdc8 != 0) {
    iVar2 = FUN_0046b960(DAT_0060b280);
    if (iVar2 == 0) {
      FUN_005042e0(param_1 + 0x2b4,param_1);
    }
  }
LAB_00582f9f:
  FUN_00408a10(param_1);
  return iStack_14;
}
