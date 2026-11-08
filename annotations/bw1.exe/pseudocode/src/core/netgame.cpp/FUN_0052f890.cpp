// Name: FUN_0052f890
// Address: 0052f890
// Address Range: [[0052f890, 0052fa75]]
// Convention: unknown
// Signature: void FUN_0052f890(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052f890(int param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x862;
    FUN_005030e0("CNetGame::removePlayer - invalid player index");
  }
  if (param_2 == *(int *)(param_1 + 0x11c)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x869;
    FUN_005030e0("CNetGame::removePlayer - tried to remove myself!");
  }
  if (param_2 == *(int *)(param_1 + 0x118)) {
    *(uint *)(param_1 + 0x118) = 0xffffffff;
  }
  if (param_2 == *(int *)(param_1 + 0x11c)) {
    *(uint *)(param_1 + 0x11c) = 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 0x1c) + -1;
  *(int *)(param_1 + 0x1c) = iVar2;
  iVar6 = param_2 + 1;
  FUN_005c25d0(param_2 * 0x7c + param_1 + 0x20,iVar6 * 0x7c + param_1 + 0x20,
               (iVar2 - param_2) * 0x7c,iVar6);
  iVar2 = 0;
  if (0 < _DAT_01d6dfb8) {
    puVar5 = &DAT_01d6dfc4 + param_2;
    puVar3 = &DAT_01d6dfc4 + iVar6;
    puVar1 = &DAT_01d6dfcc + param_2 * 4;
    iVar4 = param_2 * 4 + 0x1d6dfc8;
    do {
      FUN_005c25d0(puVar5,puVar3,*(int *)(param_1 + 0x1c) - param_2,iVar6,puVar1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x114;
      FUN_005c25d0(iVar4,puVar1,(*(int *)(param_1 + 0x1c) - param_2) * 4);
      puVar5 = puVar5 + 0x114;
      puVar1 = puVar1 + 0x114;
      iVar4 = iVar4 + 0x114;
    } while (iVar2 < _DAT_01d6dfb8);
  }
  if (param_2 < *(int *)(param_1 + 0x118)) {
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + -1;
  }
  if (param_2 < *(int *)(param_1 + 0x11c)) {
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -1;
    return;
  }
  return;
}
