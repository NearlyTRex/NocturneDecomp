// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
// Address Range: [[00543800, 005438b7] [03fc419b, 03fc41f8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)

{
  int iVar1;
  SSimFrame *pSVar2;
  int iVar3;
  int iVar4;
  
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
    pSVar2 = sim_frame;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar4);
      iVar4 = iVar4 + 4;
      *(int *)(iVar1 + 0xbe2c) = pSVar2->player_controls[0].action_bindings.walk_key;
      *(int *)(iVar1 + 0xbe30) = pSVar2->player_controls[0].action_bindings.backup_key;
      *(int *)(iVar1 + 0xbe34) = pSVar2->player_controls[0].action_bindings.run_key;
      *(int *)(iVar1 + 0xbe38) = pSVar2->player_controls[0].action_bindings.fire_key;
      *(int *)(iVar1 + 0xbe3c) = pSVar2->player_controls[0].action_bindings.use_item_key;
      *(int *)(iVar1 + 0xbe40) = pSVar2->player_controls[0].action_bindings.light_key;
      *(int *)(iVar1 + 0xbe44) = pSVar2->player_controls[0].action_bindings.draw_key;
      *(int *)(iVar1 + 0xbe48) = pSVar2->player_controls[0].action_bindings.jump_key;
      *(float *)(iVar1 + 0xbe4c) = pSVar2->player_controls[0].strafe_speed;
      *(float *)(iVar1 + 0xbe50) = pSVar2->player_controls[0].turn_speed;
      *(float *)(iVar1 + 0xbe54) = pSVar2->player_controls[0].look_up_down_speed;
      iVar3 = iVar3 + 1;
      pSVar2 = (SSimFrame *)&pSVar2->player_controls[0].strafe_speed;
    } while (iVar3 < this_ptr->player_count);
  }
  this_ptr->players[this_ptr->local_player_index].sim_frame_index = sim_frame->sequence_number + 1;
  return;
}
