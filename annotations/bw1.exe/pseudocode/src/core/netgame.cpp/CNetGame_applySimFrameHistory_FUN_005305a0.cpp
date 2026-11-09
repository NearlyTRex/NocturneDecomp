// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_005305a0
// Address: 005305a0
// Address Range: [[005305a0, 00530657]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_005305a0(CNetGame *this_ptr,SSimFrame *sim_frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_005305a0(CNetGame *this_ptr,SSimFrame *sim_frame)

{
  int *piVar1;
  SSimFrame *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SSimFrame *pSVar6;
  uint *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (*(int *)&this_ptr->field_0x11c < 0) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x9cd;
    core_main_c_FUN_005030e0("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  *(uint *)&this_ptr->field_0x174 = *(uint *)(sim_frame + 4);
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,*(float *)(sim_frame + 8));
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x1c) {
    iVar5 = 0;
    pSVar2 = sim_frame;
    do {
      piVar1 = (int *)(iVar5 + 0x1d06aa4);
      iVar5 = iVar5 + 4;
      pSVar6 = pSVar2 + 0xc;
      puVar7 = (uint *)(*piVar1 + 0xc1d8);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *(uint *)pSVar6;
        pSVar6 = pSVar6 + (uint)bVar8 * -8 + 4;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
      pSVar2 = pSVar2 + 0x30;
    } while (iVar4 < *(int *)&this_ptr->field_0x1c);
  }
  *(int *)(&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x11c * 0x7c) = *(int *)sim_frame + 1;
  return;
}
