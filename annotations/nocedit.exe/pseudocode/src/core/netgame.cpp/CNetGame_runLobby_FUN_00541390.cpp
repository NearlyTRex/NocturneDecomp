// Name: core_netgame.cpp_CNetGame_runLobby_FUN_00541390
// Address: 00541390
// Address Range: [[00541390, 00541c77]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00541390(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00541390(CNetGame *this_ptr)

{
  uchar uVar2;
  char cVar3;
  char *mission_filename;
  uint uVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  CNetGame *pCVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar7;
  CNetGame *pCVar8;
  uchar *puVar8;
  char *pcVar9;
  char *pcVar10;
  float local_138;
  float local_134;
  char local_130 [256];
  int local_30;
  char *local_2c;
  char *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  bool bVar2;
  uchar uVar1;
  
  iVar5 = g_ForceMessagePump;
  if (this_ptr->connection_type != CONNECTION_NONE) {
    this_ptr->players[this_ptr->local_player_index].local_sync_stage = 1;
    this_ptr->players[this_ptr->local_player_index].ready_flag = 0;
    g_ForceMessagePump = 0;
    this_ptr->network_mode = NET_MODE_LOBBY;
    if (this_ptr->connection_type == CONNECTION_HOST) {
      uVar3 = rand();
      this_ptr->random_seed = uVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(this_ptr);
    }
    mission_filename = this_ptr->mission_name;
    while (this_ptr->connection_type != CONNECTION_NONE) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_130,"Mission: %s",mission_filename);
      engine_2d_c_drawText_FUN_00401fd0(local_130,0,0xb);
      _sprintf(local_130,"MyGameSettigsId: %d",INT_02f7c8c4);
      engine_2d_c_drawText_FUN_00401fd0(local_130,400,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fd0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fd0("gameSettings",500,0x21);
      g_ActiveRenderColor = 0xff;
      engine_2d_c_drawHLine_FUN_00402ee0(0,0x31,g_WindowWidth + -1);
      iVar4 = 0x37;
      local_24 = 0;
      for (local_20 = 0; local_20 < g_CNetGamePtr->player_count; local_20 = local_20 + 1) {
        pcVar10 = g_CNetGamePtr->players[0].name + local_24;
        engine_2d_c_drawText_FUN_00401fd0(pcVar10,0,iVar4);
        if ((uchar  [4])((SNetworkAddr *)(pcVar10 + 0x1c))->ip_address == g_AnyAddressIP) {
          pcVar6 = "(Local)";
          puVar8 = (uchar *)local_130;
          do {
            uVar1 = *pcVar6;
            *puVar8 = uVar1;
            if (uVar1 == '\0') break;
            uVar2 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            puVar8[1] = uVar2;
            puVar8 = puVar8 + 2;
          } while (uVar2 != '\0');
        }
        else {
          support_trisock_cpp_formatIPAddress_FUN_005e17c0
                    ((char *)(pcVar10 + 0x1c),(uchar *)local_130);
        }
        engine_2d_c_drawText_FUN_00401fd0(local_130,100,iVar4);
        if (local_20 == g_CNetGamePtr->local_player_index) {
          pcVar7 = "(Local)";
LAB_005415cb:
          pcVar9 = local_130;
          do {
            cVar3 = *pcVar7;
            *pcVar9 = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar3;
            pcVar9 = pcVar9 + 2;
          } while (cVar3 != '\0');
        }
        else {
          if (*(float *)(pcVar10 + 0x28) < 0.0) {
            pcVar7 = "?";
            goto LAB_005415cb;
          }
          _sprintf(local_130,"%dms",
                     (int)ROUND(ROUND(*(float *)(pcVar10 + 0x28) * 1000.0f)));
        }
        engine_2d_c_drawText_FUN_00401fd0(local_130,200,iVar4);
        if (*(int *)(pcVar10 + 0x44) == 0) {
          pcVar7 = "Not ready";
        }
        else {
          pcVar7 = "Ready";
        }
        pcVar9 = local_130;
        do {
          cVar3 = *pcVar7;
          *pcVar9 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar3;
          pcVar9 = pcVar9 + 2;
        } while (cVar3 != '\0');
        engine_2d_c_drawText_FUN_00401fd0(local_130,300,iVar4);
        _sprintf(local_130,"%d",*(EHeroType *)(pcVar10 + 0x14));
        engine_2d_c_drawText_FUN_00401fd0(local_130,400,iVar4);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          _sprintf(local_130,"%d",*(int *)(pcVar10 + 0x34));
          engine_2d_c_drawText_FUN_00401fd0(local_130,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        local_24 = local_24 + 0x78;
      }
      iVar6 = iVar4 + 0x2c;
      iVar7 = (g_ChatHistoryCount - (g_WindowHeight - iVar6) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_28 = g_ChatHistory[iVar7].message;
      pcVar10 = g_ChatHistory[iVar7].sender_name;
      for (; iVar7 < g_ChatHistoryCount; iVar7 = iVar7 + 1) {
        engine_2d_c_drawText_FUN_00401fd0(pcVar10,0,iVar6);
        engine_2d_c_drawText_FUN_00401fd0(local_28,100,iVar6);
        pcVar10 = pcVar10 + 0x120;
        local_28 = local_28 + 0x120;
        iVar6 = iVar6 + 0xb;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      iVar6 = 0;
      pCVar8 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          pCVar8->players[0].sim_frame_index = 0;
          iVar6 = iVar6 + 1;
          pCVar8 = (CNetGame *)&pCVar8->players[0].player_input.action_state.fire;
        } while (iVar6 < this_ptr->player_count);
      }
      this_ptr->has_pending_sim_frame = 0;
      if (this_ptr->connection_type == CONNECTION_HOST) {
        this_ptr->players[this_ptr->local_player_index].player_id = INT_02f7c8c4;
        iVar6 = 0;
        bVar2 = true;
        pCVar5 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (pCVar5->players[0].ready_flag == 0) {
              bVar2 = false;
            }
            if (INT_02f7c8c4 != pCVar5->players[0].player_id) {
              local_138 = (float)(int)(g_CurrentGameTime - pCVar5->players[0].last_update_time) *
                          (float)1.52587890625e-05;
              if (local_138 < 0.0) {
                local_138 = 0.0;
              }
              if ((float)30 < local_138) {
                local_138 = 30.0;
              }
              if ((float)0.20000000000000001 < local_138) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(this_ptr,iVar6);
              }
              bVar2 = false;
            }
            iVar6 = iVar6 + 1;
            pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.fire;
          } while (iVar6 < this_ptr->player_count);
        }
        if ((bVar2) && (1 < this_ptr->player_count)) {
          this_ptr->network_mode = NET_MODE_SYNCING;
          engine_2d_c_clearInputAndWait_FUN_00403260();
          iVar6 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(this_ptr,1);
          if (iVar6 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Loading %s",mission_filename);
            srand(this_ptr->random_seed);
            core_actor_cpp_setRandomSeed_FUN_0040cb90(this_ptr->random_seed);
            core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,mission_filename,0);
            iVar6 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80
                              (g_CDemonMissionPtr,(CCharacter *)0x0);
            if (iVar6 != 0) {
              core_mission_cpp_CDemonMission_startMission_FUN_00524760(g_CDemonMissionPtr);
              iVar6 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(this_ptr,2);
              if (iVar6 != 0) {
                return 1;
              }
            }
          }
          this_ptr->network_mode = NET_MODE_LOBBY;
        }
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) &&
         (this_ptr->network_mode == NET_MODE_SYNCING)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Loading %s",this_ptr->mission_name);
        srand(this_ptr->random_seed);
        core_actor_cpp_setRandomSeed_FUN_0040cb90(this_ptr->random_seed);
        core_mission_cpp_CDemonMission_load_FUN_00522d90
                  (g_CDemonMissionPtr,this_ptr->mission_name,0);
        iVar6 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80
                          (g_CDemonMissionPtr,(CCharacter *)0x0);
        if (iVar6 != 0) {
          core_mission_cpp_CDemonMission_startMission_FUN_00524760(g_CDemonMissionPtr);
          iVar6 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(this_ptr,2);
          if (iVar6 != 0) {
            iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar6 = iVar5 / 0x12 - g_LastPingTime;
            g_LastPingTime = iVar5 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar6;
            UINT_02f7c8c8 = g_CurrentGameTime - 0x1e0000;
            return 1;
          }
        }
        this_ptr->network_mode = NET_MODE_LOBBY;
        goto LAB_005416d1;
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) && (INT_00680a04 != 0)) {
        local_134 = (float)(int)(g_CurrentGameTime -
                                this_ptr->players[this_ptr->local_player_index].state_change_time) *
                    (float)1.52587890625e-05;
        if (local_134 < 0.0) {
          local_134 = 0.0;
        }
        if ((float)30 < local_134) {
          local_134 = 30.0;
        }
        if ((float)0.20000000000000001 < local_134) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(this_ptr);
        }
      }
      iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar6 != 0) goto LAB_005416d1;
      iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
      if (iVar6 != 0) {
        this_ptr->players[this_ptr->local_player_index].ready_flag =
             (uint)(this_ptr->players[this_ptr->local_player_index].ready_flag == 0);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(this_ptr);
        }
      }
      iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
      if ((iVar6 != 0) &&
         (iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Send chat",g_ChatMessageBuffer,0x100,1),
         iVar6 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40(this_ptr,g_ChatMessageBuffer,-1);
      }
      for (iVar6 = 0; iVar6 < g_CNetGamePtr->player_count; iVar6 = iVar6 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar6,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_005416d1:
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,1);
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  g_ForceMessagePump = iVar5;
  return 0;
}
