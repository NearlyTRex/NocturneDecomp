// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980
// Address: 004ed980
// Address Range: [[004ed980, 004eda37]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x114) < 0) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x9cd;
    FUN_004c8440("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  *(int *)(param_1 + 0x16c) = param_2[1];
  core_game_cpp_CGame_slamDT_FUN_004a5f00(0x01C775EC,param_2[2]);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar4 = 0;
    piVar1 = param_2;
    do {
      piVar6 = (int *)(iVar4 + 0x1cae0d8);
      iVar4 = iVar4 + 4;
      piVar5 = piVar1 + 3;
      piVar6 = (int *)(*piVar6 + 0xbc94);
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0xb;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  *(int *)(*(int *)(param_1 + 0x114) * 0x78 + 0x68 + param_1) = *param_2 + 1;
  return;
}
