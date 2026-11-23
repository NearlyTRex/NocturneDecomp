// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0
// Address: 0050ecb0
// Address Range: [[0050ecb0, 0050f11f]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(CNetGame *this_ptr)

{
  SNetPlayer *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CNetGame *pCVar5;
  uint seed_value;
  SSimFrame *pSVar6;
  SSimFrame *pSVar7;
  SPlayerInput *pSVar8;
  SPlayerInput *pSVar9;
  int *piVar10;
  byte bVar11;
  SNetPacketHeader local_a0;
  int local_9b;
  int local_97;
  float local_93;
  int local_8f [26];
  SSimFrame *local_24;
  int local_20;
  SNetPlayer *local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar2;
  if (this_ptr->connection_type == CONNECTION_NONE) {
    seed_value = rand();
    this_ptr->random_seed = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cee0(seed_value);
    return;
  }
  if ((this_ptr->connection_type == CONNECTION_HOST) && (this_ptr->network_mode == NET_MODE_PLAYING)
     ) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2294;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != this_ptr->server_player_index) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2295;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_0050d840(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
    local_20 = 0x7fffffff;
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar3 = pCVar5->players[0].sim_frame_index;
        if (iVar3 < local_20) {
          local_20 = iVar3;
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.light;
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_SimFrameCount) {
      iVar3 = 0;
      pSVar7 = g_SSimFrame_ARRAY_01d54644 + 1;
      do {
        if (*(int *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar3 + -0xc) < local_20) {
          g_SimFrameCount = g_SimFrameCount + -1;
          memmove
                    ((void *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar3 + -0xc),pSVar7
                     ,(g_SimFrameCount - iVar2) * 0x74);
        }
        else {
          pSVar7 = pSVar7 + 1;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x74;
        }
      } while (iVar2 < g_SimFrameCount);
    }
    iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
    iVar3 = 0;
    if (0 < g_SimFrameCount) {
      iVar4 = 0;
      do {
        if (iVar2 == *(int *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar4 + -0xc)) {
          if (-1 < iVar3) {
            pSVar7 = (SSimFrame *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar4 + -0xc);
            goto LAB_0050ee55;
          }
          break;
        }
        iVar4 = iVar4 + 0x74;
        iVar3 = iVar3 + 1;
      } while (iVar4 < g_SimFrameCount * 0x74);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_004e4500("allocSimFrame - sim history list full");
    }
    pSVar7 = g_SSimFrame_ARRAY_01d54644 + g_SimFrameCount;
    g_SimFrameCount = g_SimFrameCount + 1;
    memset(pSVar7,0,0x74);
    pSVar7->sequence_number = iVar2;
LAB_0050ee55:
    iVar2 = rand();
    pSVar7->random_seed = iVar2;
    pSVar7->delta_time = g_CGamePtr->delta_time_float;
    iVar2 = 0;
    pCVar5 = this_ptr;
    pSVar6 = pSVar7;
    if (0 < this_ptr->player_count) {
      do {
        pSVar8 = &pCVar5->players[0].player_input;
        pSVar9 = pSVar6->player_input;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar9->action_state).walk = (pSVar8->action_state).walk;
          pSVar8 = (SPlayerInput *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
          pSVar9 = (SPlayerInput *)((int)pSVar9 + (uint)bVar11 * -8 + 4);
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.light;
        pSVar6 = (SSimFrame *)&pSVar6->player_input[0].turn_speed;
      } while (iVar2 < this_ptr->player_count);
    }
    local_24 = pSVar7;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370(this_ptr,pSVar7);
    local_18 = 0;
    if (0 < this_ptr->player_count) {
      local_1c = this_ptr->players;
      do {
        pSVar1 = local_1c;
        if (local_18 != this_ptr->local_player_index) {
          iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index -
                  local_1c->sim_frame_index;
          if (iVar2 < 1) {
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 2363;
            core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_14 = pSVar1->sim_frame_index;
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar3 = 0;
            if (0 < g_SimFrameCount) {
              iVar4 = 0;
              do {
                if (local_14 ==
                    *(int *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar4 + -0xc))
                goto LAB_0050f060;
                iVar4 = iVar4 + 0x74;
                iVar3 = iVar3 + 1;
              } while (iVar4 < g_SimFrameCount * 0x74);
            }
            iVar3 = -1;
LAB_0050f060:
            if (iVar3 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 2381;
              core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            pSVar7 = g_SSimFrame_ARRAY_01d54644 + iVar3;
            local_a0.size = 0x79;
            local_a0.type = PACKET_SIM_FRAME;
            local_9b = pSVar7->sequence_number;
            local_97 = g_SSimFrame_ARRAY_01d54644[iVar3].random_seed;
            local_93 = g_SSimFrame_ARRAY_01d54644[iVar3].delta_time;
            iVar3 = 0;
            if (0 < this_ptr->player_count) {
              do {
                pSVar8 = pSVar7->player_input;
                piVar10 = local_8f + iVar3 * 0xd;
                for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = (pSVar8->action_state).walk;
                  pSVar8 = (SPlayerInput *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar3 = iVar3 + 1;
                pSVar7 = (SSimFrame *)&pSVar7->player_input[0].turn_speed;
              } while (iVar3 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_0050cd90(this_ptr,local_18,&local_a0);
            local_14 = local_14 + 1;
          }
        }
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
      } while (local_18 < this_ptr->player_count);
    }
  }
  return;
}
