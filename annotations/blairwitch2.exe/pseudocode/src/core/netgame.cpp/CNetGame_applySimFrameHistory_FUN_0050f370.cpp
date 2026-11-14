// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370
// Address: 0050f370
// Address Range: [[0050f370, 0050f420]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame *this_ptr,SSimFrame *sim_frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame *this_ptr,SSimFrame *sim_frame)

{
  int iVar1;
  int iVar2;
  SSimFrame *pSVar3;
  int iVar4;
  SPlayerInput *pSVar5;
  int *piVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (this_ptr->local_player_index < 0) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x9cd;
    core_main_c_FUN_004e4500("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  this_ptr->random_seed = sim_frame->random_seed;
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,sim_frame->delta_time);
  iVar1 = 0;
  if (0 < this_ptr->player_count) {
    iVar4 = 0;
    pSVar3 = sim_frame;
    do {
      piVar6 = (int *)(iVar4 + 0x1cedee4);
      iVar4 = iVar4 + 4;
      pSVar5 = pSVar3->player_input;
      piVar6 = (int *)(*piVar6 + 0x10a68);
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = (pSVar5->action_state).walk;
        pSVar5 = (SPlayerInput *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar1 = iVar1 + 1;
      pSVar3 = (SSimFrame *)&pSVar3->player_input[0].turn_speed;
    } while (iVar1 < this_ptr->player_count);
  }
  this_ptr->players[this_ptr->local_player_index].sim_frame_index = sim_frame->sequence_number + 1;
  return;
}
