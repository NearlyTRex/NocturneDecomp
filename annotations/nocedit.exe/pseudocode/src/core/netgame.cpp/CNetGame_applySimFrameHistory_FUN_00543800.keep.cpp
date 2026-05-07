// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
// MANUAL RECONSTRUCTION
// Address Range: [[00543800, 005438b7] [03fc419b, 03fc41f8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)

{
  int iVar3;
  
  if (this_ptr->local_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x9cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  this_ptr->random_seed = sim_frame->random_seed;
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,sim_frame->delta_time);
  for (iVar3 = 0; iVar3 < this_ptr->player_count; iVar3 = iVar3 + 1) {
    g_HeroActors[iVar3]->player_input = sim_frame->player_input[iVar3];
  }
  this_ptr->players[this_ptr->local_player_index].sim_frame_index = sim_frame->sequence_number + 1;
  return;
}
