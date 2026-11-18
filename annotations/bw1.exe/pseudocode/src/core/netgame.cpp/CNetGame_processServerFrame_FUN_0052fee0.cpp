// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0
// Address: 0052fee0
// Address Range: [[0052fee0, 00530338]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame *this_ptr)

{
  SNetPlayer *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint seed_value;
  CNetGame *pCVar5;
  SSimFrame *pSVar6;
  SSimFrame *pSVar7;
  SPlayerInput *pSVar8;
  SPlayerInput *pSVar9;
  int *piVar10;
  byte bVar11;
  SNetPacketHeader local_98;
  int local_93;
  int local_8f;
  float local_8b;
  int local_87 [24];
  int local_24;
  int local_20;
  SSimFrame *local_1c;
  int local_18;
  SNetPlayer *local_14;
  
  bVar11 = 0;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01d51da0 = g_UINT_01d51da0 + iVar3;
  g_LastPingTime = iVar2;
  if (this_ptr->connection_type == CONNECTION_NONE) {
    seed_value = rand();
    this_ptr->random_seed = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cb80(seed_value);
    return;
  }
  if ((this_ptr->connection_type == CONNECTION_HOST) && (this_ptr->network_mode == NET_MODE_PLAYING)
     ) {
    if (this_ptr->local_player_index < 0) {
      g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
      g_INT_01d1d404 = 0x8f6;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != this_ptr->server_player_index) {
      g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
      g_INT_01d1d404 = 0x8f7;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
    local_18 = 0x7fffffff;
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar3 = pCVar5->players[0].sim_frame_index;
        if (iVar3 < local_18) {
          local_18 = iVar3;
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.use_item;
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_SimFrameCount) {
      iVar3 = 0;
      pSVar6 = g_SSimFrame_ARRAY_01d715ac + 1;
      do {
        if (*(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar3 + -0xc) < local_18) {
          g_SimFrameCount = g_SimFrameCount + -1;
          memmove
                    ((void *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar3 + -0xc),pSVar6
                     ,(g_SimFrameCount - iVar2) * 0x6c);
        }
        else {
          pSVar6 = pSVar6 + 1;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x6c;
        }
      } while (iVar2 < g_SimFrameCount);
    }
    iVar3 = 0;
    iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
    if (0 < g_SimFrameCount) {
      iVar4 = 0;
      do {
        if (iVar2 == *(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar4 + -0xc)) {
          if (-1 < iVar3) {
            pSVar6 = (SSimFrame *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar4 + -0xc);
            goto LAB_0053008d;
          }
          break;
        }
        iVar4 = iVar4 + 0x6c;
        iVar3 = iVar3 + 1;
      } while (iVar4 < g_SimFrameCount * 0x6c);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
      g_INT_01d1d404 = 299;
      core_main_c_displayErrorAndQuit_FUN_005030e0("allocSimFrame - sim history list full");
    }
    pSVar6 = g_SSimFrame_ARRAY_01d715ac + g_SimFrameCount;
    g_SimFrameCount = g_SimFrameCount + 1;
    memset(pSVar6,0,0x6c);
    pSVar6->sequence_number = iVar2;
LAB_0053008d:
    iVar2 = rand();
    pSVar6->random_seed = iVar2;
    pSVar6->delta_time = g_CGamePtr->delta_time_float;
    iVar2 = 0;
    pCVar5 = this_ptr;
    pSVar7 = pSVar6;
    if (0 < this_ptr->player_count) {
      do {
        pSVar8 = &pCVar5->players[0].player_input;
        pSVar9 = pSVar7->player_input;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar9->action_state).walk = (pSVar8->action_state).walk;
          pSVar8 = (SPlayerInput *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
          pSVar9 = (SPlayerInput *)((int)pSVar9 + (uint)bVar11 * -8 + 4);
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.use_item;
        pSVar7 = (SSimFrame *)&pSVar7->player_input[0].strafe_speed;
      } while (iVar2 < this_ptr->player_count);
    }
    local_1c = pSVar6;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_005305a0(this_ptr,pSVar6);
    local_24 = 0;
    if (0 < this_ptr->player_count) {
      local_14 = this_ptr->players;
      do {
        pSVar1 = local_14;
        if (local_24 != this_ptr->local_player_index) {
          iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index -
                  local_14->sim_frame_index;
          if (iVar2 < 1) {
            g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
            g_INT_01d1d404 = 0x93b;
            core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_20 = pSVar1->sim_frame_index;
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar3 = 0;
            if (0 < g_SimFrameCount) {
              iVar4 = 0;
              do {
                if (local_20 ==
                    *(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar4 + -0xc))
                goto LAB_00530282;
                iVar4 = iVar4 + 0x6c;
                iVar3 = iVar3 + 1;
              } while (iVar4 < g_SimFrameCount * 0x6c);
            }
            iVar3 = -1;
LAB_00530282:
            if (iVar3 < 0) {
              g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
              g_INT_01d1d404 = 0x94d;
              core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            pSVar6 = g_SSimFrame_ARRAY_01d715ac + iVar3;
            local_98.size = 0x71;
            local_98.type = PACKET_SIM_FRAME;
            local_93 = pSVar6->sequence_number;
            local_8f = g_SSimFrame_ARRAY_01d715ac[iVar3].random_seed;
            local_8b = g_SSimFrame_ARRAY_01d715ac[iVar3].delta_time;
            iVar3 = 0;
            if (0 < this_ptr->player_count) {
              do {
                pSVar8 = pSVar6->player_input;
                piVar10 = local_87 + iVar3 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = (pSVar8->action_state).walk;
                  pSVar8 = (SPlayerInput *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar3 = iVar3 + 1;
                pSVar6 = (SSimFrame *)&pSVar6->player_input[0].strafe_speed;
              } while (iVar3 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,local_24,&local_98);
            local_20 = local_20 + 1;
          }
        }
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->player_count);
    }
  }
  return;
}
