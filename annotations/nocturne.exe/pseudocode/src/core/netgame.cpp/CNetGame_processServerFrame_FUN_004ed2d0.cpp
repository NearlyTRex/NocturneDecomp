// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
// Address: 004ed2d0
// Address Range: [[004ed2d0, 004ed714]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame *this_ptr)

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
  
  bVar11 = 0;
  iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_INT_01cea3f4;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01cea3f8 = g_UINT_01cea3f8 + iVar3;
  g_INT_01cea3f4 = iVar2;
  if (this_ptr->connection_type == CONNECTION_NONE) {
    seed_value = rand();
    this_ptr->random_seed = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040dd20(seed_value);
    return;
  }
  if ((this_ptr->connection_type == CONNECTION_HOST) && (this_ptr->network_mode == NET_MODE_PLAYING)
     ) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2294;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != this_ptr->server_player_index) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2295;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
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
        pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.fire;
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_INT_01d09c00) {
      iVar3 = 0;
      pSVar6 = g_SSimFrame_ARRAY_01d09c04 + 1;
      do {
        if (*(int *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar3 + -0xc) < local_18) {
          g_INT_01d09c00 = g_INT_01d09c00 + -1;
          memmove
                    ((void *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar3 + -0xc),pSVar6
                     ,(g_INT_01d09c00 - iVar2) * 100);
        }
        else {
          pSVar6 = pSVar6 + 1;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 100;
        }
      } while (iVar2 < g_INT_01d09c00);
    }
    iVar3 = 0;
    iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
    if (0 < g_INT_01d09c00) {
      iVar4 = 0;
      do {
        if (iVar2 == *(int *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar4 + -0xc)) {
          if (-1 < iVar3) {
            pSVar6 = (SSimFrame *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar4 + -0xc);
            goto LAB_004ed475;
          }
          break;
        }
        iVar4 = iVar4 + 100;
        iVar3 = iVar3 + 1;
      } while (iVar4 < g_INT_01d09c00 * 100);
    }
    if (0x1ff < g_INT_01d09c00) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_004c8440("allocSimFrame - sim history list full");
    }
    pSVar6 = g_SSimFrame_ARRAY_01d09c04 + g_INT_01d09c00;
    g_INT_01d09c00 = g_INT_01d09c00 + 1;
    memset(pSVar6,0,100);
    pSVar6->sequence_number = iVar2;
LAB_004ed475:
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
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar9->action_state).walk = (pSVar8->action_state).walk;
          pSVar8 = (SPlayerInput *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
          pSVar9 = (SPlayerInput *)((int)pSVar9 + (uint)bVar11 * -8 + 4);
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.fire;
        pSVar7 = (SSimFrame *)&pSVar7->player_input[0].strafe_speed;
      } while (iVar2 < this_ptr->player_count);
    }
    local_1c = pSVar6;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(this_ptr,pSVar6);
    local_24 = 0;
    if (0 < this_ptr->player_count) {
      local_14 = this_ptr->players;
      do {
        pSVar1 = local_14;
        if (local_24 != this_ptr->local_player_index) {
          iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index -
                  local_14->sim_frame_index;
          if (iVar2 < 1) {
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 2363;
            core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_20 = pSVar1->sim_frame_index;
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar3 = 0;
            if (0 < g_INT_01d09c00) {
              iVar4 = 0;
              do {
                if (local_20 ==
                    *(int *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar4 + -0xc))
                goto LAB_004ed65e;
                iVar4 = iVar4 + 100;
                iVar3 = iVar3 + 1;
              } while (iVar4 < g_INT_01d09c00 * 100);
            }
            iVar3 = -1;
LAB_004ed65e:
            if (iVar3 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 2381;
              core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            pSVar6 = g_SSimFrame_ARRAY_01d09c04 + iVar3;
            local_90.size = 0x69;
            local_90.type = PACKET_SIM_FRAME;
            local_8b = pSVar6->sequence_number;
            local_87 = g_SSimFrame_ARRAY_01d09c04[iVar3].random_seed;
            local_83 = g_SSimFrame_ARRAY_01d09c04[iVar3].delta_time;
            iVar3 = 0;
            if (0 < this_ptr->player_count) {
              do {
                pSVar8 = pSVar6->player_input;
                piVar10 = local_7f + iVar3 * 0xb;
                for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = (pSVar8->action_state).walk;
                  pSVar8 = (SPlayerInput *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar3 = iVar3 + 1;
                pSVar6 = (SSimFrame *)&pSVar6->player_input[0].strafe_speed;
              } while (iVar3 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,local_24,&local_90);
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
