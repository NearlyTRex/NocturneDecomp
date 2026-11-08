// Name: FUN_004b92e0
// Address: 004b92e0
// Address Range: [[004b92e0, 004b93d5]]
// Convention: unknown
// Signature: void FUN_004b92e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b92e0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (((_DAT_01d22200 == 0) && (*(int *)(0x01D1A05C + 0x40) == 0)) && (DAT_007dffb4 == 0)) {
    if (*(int *)(param_1 + 0x220) == 0) {
      if (*(int *)(param_1 + 0x25c) == 0) {
        uVar1 = FUN_00507f10(0x01DA62F0);
        switch(*(uint *)(param_1 + 0xd4)) {
        case 0:
          FUN_004b9960(param_1,uVar1);
          break;
        case 1:
          FUN_004ba2e0(param_1,uVar1);
          break;
        case 2:
          FUN_004b97b0(param_1,uVar1);
          break;
        case 3:
          FUN_004c07b0(param_1,uVar1);
          break;
        default:
          _DAT_01d71de0 = "..\\core\\game.cpp";
          _DAT_01d71de4 = 0x88c;
          FUN_004e4330("CGame::playerControls - unknown control type");
        }
        puVar3 = (uint *)&DAT_01c6cef0;
        puVar4 = (uint *)&DAT_01d21fa0;
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
        _DAT_01d221f8 = _DAT_01c5fae4;
        _DAT_01d221fc = *(uint *)(0x01ED78C8 + 0x15aeb8);
        return;
      }
      _DAT_01d22b48 = 0xffffffff;
    }
    return;
  }
  FUN_004ba490(param_1);
  return;
}
