// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
// Address Range: [[00543800, 005438b7]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)

{
  SSimFrame *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SPlayerControl *pSVar5;
  int *piVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (this_ptr->local_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x9cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  this_ptr->random_seed = sim_frame->random_seed;
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,sim_frame->delta_time);
  iVar3 = 0;
  if (0 < this_ptr->player_count) {
    iVar4 = 0;
    pSVar1 = sim_frame;
    do {
      piVar6 = (int *)((int)g_HeroActors + iVar4);
      iVar4 = iVar4 + 4;
      pSVar5 = pSVar1->player_controls;
      piVar6 = (int *)(*piVar6 + 0xbe2c);
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = pSVar5->action_states[0];
        pSVar5 = (SPlayerControl *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      pSVar1 = (SSimFrame *)&pSVar1->player_controls[0].strafe_speed;
    } while (iVar3 < this_ptr->player_count);
  }
  this_ptr->players[this_ptr->local_player_index].sim_frame_index = sim_frame->sequence_number + 1;
  return;
}
