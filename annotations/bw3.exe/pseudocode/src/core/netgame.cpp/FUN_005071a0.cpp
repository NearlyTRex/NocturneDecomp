// Name: FUN_005071a0
// Address: 005071a0
// Address Range: [[005071a0, 00507365]]
// Convention: unknown
// Signature: void FUN_005071a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005071a0(int param_1,int param_2)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;
  byte *puVar4;
  int iVar5;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x862;
    FUN_004e4330("CNetGame::removePlayer - invalid player index");
  }
  if (param_2 == *(int *)(param_1 + 0x124)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x869;
    FUN_004e4330("CNetGame::removePlayer - tried to remove myself!");
  }
  if (param_2 == *(int *)(param_1 + 0x120)) {
    *(uint *)(param_1 + 0x120) = 0xffffffff;
  }
  if (param_2 == *(int *)(param_1 + 0x124)) {
    *(uint *)(param_1 + 0x124) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x1c) + -1;
  *(int *)(param_1 + 0x1c) = iVar1;
  iVar5 = 0;
  FUN_005a54c0(param_2 * 0x80 + param_1 + 0x20,param_2 * 0x80 + 0x80 + param_1 + 0x20,
               (iVar1 - param_2) * 0x80);
  if (0 < _DAT_01dc2690) {
    puVar4 = &DAT_01dc269c + param_2;
    puVar2 = &DAT_01dc269d + param_2;
    iVar1 = param_2 * 4 + 0x1dc26a0;
    puVar3 = &DAT_01dc26a4 + param_2 * 4;
    do {
      FUN_005a54c0(puVar4,puVar2,*(int *)(param_1 + 0x1c) - param_2,iVar1);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 0x114;
      FUN_005a54c0(iVar1,puVar3,(*(int *)(param_1 + 0x1c) - param_2) * 4);
      puVar4 = puVar4 + 0x114;
      puVar3 = puVar3 + 0x114;
      iVar1 = iVar1 + 0x114;
    } while (iVar5 < _DAT_01dc2690);
  }
  if (param_2 < *(int *)(param_1 + 0x120)) {
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
  }
  if (param_2 < *(int *)(param_1 + 0x124)) {
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
    return;
  }
  return;
}
