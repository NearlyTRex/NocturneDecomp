// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
// Address Range: [[00543800, 005438b7]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int *in_stack_00000008;
  
  bVar7 = 0;
  if (this_ptr->local_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x9cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  *(int *)(this_ptr->unk + 0x54) = in_stack_00000008[1];
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,(float)in_stack_00000008[2]);
  iVar3 = 0;
  if (0 < this_ptr->player_count) {
    iVar4 = 0;
    piVar1 = in_stack_00000008;
    do {
      piVar6 = (int *)((int)g_HeroActors + iVar4);
      iVar4 = iVar4 + 4;
      piVar5 = piVar1 + 3;
      piVar6 = (int *)(*piVar6 + 0xbe2c);
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0xb;
    } while (iVar3 < this_ptr->player_count);
  }
  *(int *)(this_ptr->players[this_ptr->local_player_index].unk1 + 0x10) = *in_stack_00000008 + 1;
  return;
}
