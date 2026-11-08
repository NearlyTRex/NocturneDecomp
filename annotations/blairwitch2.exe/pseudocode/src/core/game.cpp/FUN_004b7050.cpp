// Name: FUN_004b7050
// Address: 004b7050
// Address Range: [[004b7050, 004b713b]]
// Convention: unknown
// Signature: void FUN_004b7050(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7050(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (((_DAT_01cb7788 == 0) && (*(int *)(0x01CAF56C + 0x40) == 0)) && (_DAT_026677e0 == 0)) {
    if ((*(int *)(param_1 + 0x218) == 0) && (*(int *)(param_1 + 0x254) == 0)) {
      uVar1 = FUN_0050f430(0x01D34CB0);
      switch(*(uint *)(param_1 + 0xd0)) {
      case 0:
        FUN_004b76c0(param_1,uVar1);
        break;
      case 1:
        FUN_004b80a0(param_1,uVar1);
        break;
      case 2:
        FUN_004b7510(param_1,uVar1);
        break;
      case 3:
        FUN_004be8a0(param_1,uVar1);
        break;
      default:
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x7d9;
        FUN_004e4500("CGame::playerControls - unknown control type");
      }
      puVar3 = (uint *)&DAT_01c37790;
      puVar4 = (uint *)&DAT_01cb7528;
      for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar4 = *(byte *)puVar3;
        puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
        puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
      }
      _DAT_01cb7780 = _DAT_01c2a384;
      _DAT_01cb7784 = *(uint *)(0x01E661B8 + 0x15aeb8);
      return;
    }
    return;
  }
  FUN_004b8250(param_1);
  return;
}
