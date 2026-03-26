// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 00543594] [03fc5169, 03fc521c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

{
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar5;
  int iVar4;
  uint seed_value;
  CNetGame *pCVar5;
  SSimFrame *pSVar6;
  int iVar6;
  SSimFrame *pSVar10;
  SSimFrame *pSVar7;
  CNetGame *pCVar11;
  SPlayerControl *pSVar8;
  SPlayerControl *pSVar9;
  int *piVar10;
  byte bVar11;
  SNetPacketHeader local_90;
  int local_8b;
  int local_87;
  float local_83;
  int local_7f [22];
  int local_24;
  int local_20;
  SSimFrame *local_1c;
  int local_18;
  SNetPlayer *local_14;
  SNetPlayer *pSVar1;
  
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar2 / 0x12;
  iVar3 = iVar1 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar1;
  if (this_ptr->connection_type == CONNECTION_NONE) {
    seed_value = rand();
    this_ptr->random_seed = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cb90(seed_value);
    return;
  }
  if ((this_ptr->connection_type == CONNECTION_HOST) && (this_ptr->network_mode == NET_MODE_PLAYING)
     ) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x8f6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != this_ptr->server_player_index) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x8f7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar1,10.0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    iVar1 = 0x7fffffff;
    iVar5 = 0;
    pCVar11 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar6 = pCVar11->players[0].sim_frame_index;
        if (iVar6 < iVar1) {
          iVar1 = iVar6;
        }
        iVar5 = iVar5 + 1;
        pCVar11 = (CNetGame *)(pCVar11->players[0].controls.action_states + 3);
      } while (iVar5 < this_ptr->player_count);
    }
    iVar5 = 0;
    if (0 < g_SimFrameCount) {
      iVar6 = 0;
      pSVar10 = g_SimFrameHistory + 1;
      do {
        if (*(int *)((int)g_SimFrameHistory[0].player_controls[0].action_states + iVar6 + -0xc) <
            iVar1) {
          g_SimFrameCount = g_SimFrameCount + -1;
          memmove
                    ((void *)((int)g_SimFrameHistory[0].player_controls[0].action_states +
                             iVar6 + -0xc),pSVar10,(g_SimFrameCount - iVar5) * 100);
        }
        else {
          pSVar10 = pSVar10 + 1;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 100;
        }
      } while (iVar5 < g_SimFrameCount);
    }
    iVar5 = 0;
    iVar1 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
    if (0 < g_SimFrameCount) {
      iVar4 = 0;
      do {
        if (iVar1 == *(int *)((int)g_SimFrameHistory[0].player_controls[0].action_states +
                             iVar4 + -0xc)) {
          if (-1 < iVar5) {
            pSVar10 = (SSimFrame *)
                      ((int)g_SimFrameHistory[0].player_controls[0].action_states + iVar4 + -0xc);
            goto LAB_005432f5;
          }
          break;
        }
        iVar4 = iVar4 + 100;
        iVar5 = iVar5 + 1;
      } while (iVar4 < g_SimFrameCount * 100);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    pSVar10 = g_SimFrameHistory + g_SimFrameCount;
    g_SimFrameCount = g_SimFrameCount + 1;
    memset(pSVar10,0,100);
    pSVar10->sequence_number = iVar1;
LAB_005432f5:
    iVar1 = rand();
    pSVar10->random_seed = iVar1;
    pSVar10->delta_time = g_CGamePtr->delta_time_float;
    iVar1 = 0;
    pCVar5 = this_ptr;
    pSVar7 = pSVar10;
    if (0 < this_ptr->player_count) {
      do {
        pSVar7->player_controls[0].action_states[0] = pCVar5->players[0].controls.action_states[0];
        pSVar7->player_controls[0].action_states[1] = pCVar5->players[0].controls.action_states[1];
        pSVar7->player_controls[0].action_states[2] = pCVar5->players[0].controls.action_states[2];
        pSVar7->player_controls[0].action_states[3] = pCVar5->players[0].controls.action_states[3];
        pSVar7->player_controls[0].action_states[4] = pCVar5->players[0].controls.action_states[4];
        pSVar7->player_controls[0].action_states[5] = pCVar5->players[0].controls.action_states[5];
        pSVar7->player_controls[0].action_states[6] = pCVar5->players[0].controls.action_states[6];
        pSVar7->player_controls[0].action_states[7] = pCVar5->players[0].controls.action_states[7];
        pSVar7->player_controls[0].strafe_speed = pCVar5->players[0].controls.strafe_speed;
        pSVar7->player_controls[0].turn_speed = pCVar5->players[0].controls.turn_speed;
        pSVar7->player_controls[0].look_up_down_speed =
             pCVar5->players[0].controls.look_up_down_speed;
        iVar1 = iVar1 + 1;
        pCVar5 = (CNetGame *)(pCVar5->players[0].controls.action_states + 3);
        pSVar7 = (SSimFrame *)&pSVar7->player_controls[0].strafe_speed;
      } while (iVar1 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(this_ptr,pSVar10);
    local_24 = 0;
    if (0 < this_ptr->player_count) {
      local_14 = this_ptr->players;
      do {
        if (local_24 != this_ptr->local_player_index) {
          iVar1 = this_ptr->players[this_ptr->local_player_index].sim_frame_index -
                  local_14->sim_frame_index;
          if (iVar1 < 1) {
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 0x93b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar1) {
            iVar1 = 5;
          }
          local_20 = local_14->sim_frame_index;
          for (; 0 < iVar1; iVar1 = iVar1 + -1) {
            iVar5 = 0;
            if (0 < g_SimFrameCount) {
              iVar6 = 0;
              do {
                if (local_20 ==
                    *(int *)((int)g_SimFrameHistory[0].player_controls[0].action_states +
                            iVar6 + -0xc)) goto LAB_005434de;
                iVar6 = iVar6 + 100;
                iVar5 = iVar5 + 1;
              } while (iVar6 < g_SimFrameCount * 100);
            }
            iVar5 = -1;
LAB_005434de:
            if (iVar5 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 0x94d;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            pSVar6 = g_SimFrameHistory + iVar5;
            local_90.size = 0x69;
            local_90.type = PACKET_SIM_FRAME;
            iVar5 = 0;
            if (0 < this_ptr->player_count) {
              do {
                local_7f[iVar5 * 0xb] = pSVar6->player_controls[0].action_states[0];
                local_7f[iVar5 * 0xb + 1] = pSVar6->player_controls[0].action_states[1];
                local_7f[iVar5 * 0xb + 2] = pSVar6->player_controls[0].action_states[2];
                local_7f[iVar5 * 0xb + 3] = pSVar6->player_controls[0].action_states[3];
                local_7f[iVar5 * 0xb + 4] = pSVar6->player_controls[0].action_states[4];
                local_7f[iVar5 * 0xb + 5] = pSVar6->player_controls[0].action_states[5];
                local_7f[iVar5 * 0xb + 6] = pSVar6->player_controls[0].action_states[6];
                local_7f[iVar5 * 0xb + 7] = pSVar6->player_controls[0].action_states[7];
                local_7f[iVar5 * 0xb + 8] = (int)pSVar6->player_controls[0].strafe_speed;
                local_7f[iVar5 * 0xb + 9] = (int)pSVar6->player_controls[0].turn_speed;
                local_7f[iVar5 * 0xb + 10] = (int)pSVar6->player_controls[0].look_up_down_speed;
                iVar5 = iVar5 + 1;
                pSVar6 = (SSimFrame *)&pSVar6->player_controls[0].strafe_speed;
              } while (iVar5 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,local_24,&local_90);
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
