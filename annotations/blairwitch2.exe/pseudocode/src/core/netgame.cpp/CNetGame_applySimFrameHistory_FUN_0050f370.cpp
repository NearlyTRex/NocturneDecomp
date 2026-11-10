// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370
// Address: 0050f370
// Address Range: [[0050f370, 0050f420]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame *this_ptr,SSimFrame *sim_frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame *this_ptr,SSimFrame *sim_frame)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  SSimFrame *pSVar4;
  int iVar5;
  SSimFrame *pSVar6;
  uint *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (this_ptr->local_player_index < 0) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x9cd;
    core_main_c_FUN_004e4500("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  this_ptr->random_seed = *(uint *)(sim_frame + 4);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,*(float *)(sim_frame + 8));
  iVar2 = 0;
  if (0 < this_ptr->player_count) {
    iVar5 = 0;
    pSVar4 = sim_frame;
    do {
      piVar1 = (int *)(iVar5 + 0x1cedee4);
      iVar5 = iVar5 + 4;
      pSVar6 = pSVar4 + 0xc;
      puVar7 = (uint *)(*piVar1 + 0x10a68);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *(uint *)pSVar6;
        pSVar6 = pSVar6 + (uint)bVar8 * -8 + 4;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar2 = iVar2 + 1;
      pSVar4 = pSVar4 + 0x34;
    } while (iVar2 < this_ptr->player_count);
  }
  *(int *)&this_ptr->players[this_ptr->local_player_index].field_0x48 = *(int *)sim_frame + 1;
  return;
}
