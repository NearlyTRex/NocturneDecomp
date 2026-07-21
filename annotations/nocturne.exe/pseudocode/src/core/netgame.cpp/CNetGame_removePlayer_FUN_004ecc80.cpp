// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
// Address: 004ecc80
// Address Range: [[004ecc80, 004ece65]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(int param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x862;
    FUN_004c8440("CNetGame::removePlayer - invalid player index");
  }
  if (param_2 == *(int *)(param_1 + 0x114)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x869;
    FUN_004c8440("CNetGame::removePlayer - tried to remove myself!");
  }
  if (param_2 == *(int *)(param_1 + 0x110)) {
    *(uint *)(param_1 + 0x110) = 0xffffffff;
  }
  if (param_2 == *(int *)(param_1 + 0x114)) {
    *(uint *)(param_1 + 0x114) = 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 0x1c) + -1;
  *(int *)(param_1 + 0x1c) = iVar2;
  iVar6 = param_2 + 1;
  memmove
            (param_2 * 0x78 + param_1 + 0x20,iVar6 * 0x78 + param_1 + 0x20,(iVar2 - param_2) * 0x78,
             iVar6);
  iVar2 = 0;
  if (0 < _DAT_01d06610) {
    puVar5 = &DAT_01d0661c + param_2;
    puVar3 = &DAT_01d0661c + iVar6;
    puVar1 = &DAT_01d06624 + param_2 * 4;
    iVar4 = param_2 * 4 + 0x1d06620;
    do {
      memmove
                (puVar5,puVar3,*(int *)(param_1 + 0x1c) - param_2,iVar6,puVar1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x114;
      memmove(iVar4,puVar1,(*(int *)(param_1 + 0x1c) - param_2) * 4);
      puVar5 = puVar5 + 0x114;
      puVar1 = puVar1 + 0x114;
      iVar4 = iVar4 + 0x114;
    } while (iVar2 < _DAT_01d06610);
  }
  if (param_2 < *(int *)(param_1 + 0x110)) {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -1;
  }
  if (param_2 < *(int *)(param_1 + 0x114)) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    return;
  }
  return;
}
