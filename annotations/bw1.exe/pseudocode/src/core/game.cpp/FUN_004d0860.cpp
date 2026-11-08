// Name: FUN_004d0860
// Address: 004d0860
// Address Range: [[004d0860, 004d0955]]
// Convention: unknown
// Signature: void FUN_004d0860(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d0860(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (((_DAT_01cd01f8 == 0) && (*(int *)(0x01CC8004 + 0x40) == 0)) && (DAT_007c3978 == 0)) {
    if (*(int *)(param_1 + 0x218) == 0) {
      if (*(int *)(param_1 + 0x254) == 0) {
        uVar1 = FUN_00530660(0x01D51C20);
        switch(*(uint *)(param_1 + 0xd0)) {
        case 0:
          FUN_004d0ee0(param_1,uVar1);
          break;
        case 1:
          FUN_004d1820(param_1,uVar1);
          break;
        case 2:
          FUN_004d0d30(param_1,uVar1);
          break;
        case 3:
          FUN_004d9260(param_1,uVar1);
          break;
        default:
          _DAT_01d1d400 = "..\\core\\game.cpp";
          _DAT_01d1d404 = 0x87c;
          FUN_005030e0("CGame::playerControls - unknown control type");
        }
        puVar3 = (uint *)&DAT_01c50950;
        puVar4 = (uint *)&DAT_01ccff98;
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
        _DAT_01cd01f0 = _DAT_01c43544;
        _DAT_01cd01f4 = *(uint *)(0x01E82168 + 0x15aeb8);
        return;
      }
      _DAT_01cd0b40 = 0xffffffff;
    }
    return;
  }
  FUN_004d19d0(param_1);
  return;
}
