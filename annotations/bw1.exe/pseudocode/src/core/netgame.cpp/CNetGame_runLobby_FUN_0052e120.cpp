// Name: core_netgame.cpp_CNetGame_runLobby_FUN_0052e120
// Address: 0052e120
// Address Range: [[0052e120, 0052ea06]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_0052e120(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_0052e120(CNetGame *this_ptr)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  CNetGame *pCVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  double dVar9;
  float fStack_138;
  float fStack_134;
  char acStack_130 [256];
  int iStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  if (this_ptr->connection_type != CONNECTION_NONE) {
    iStack_30 = g_ForceMessagePump;
    this_ptr->players[this_ptr->local_player_index].local_sync_stage = 1;
    this_ptr->players[this_ptr->local_player_index].ready_flag = 0;
    g_ForceMessagePump = 0;
    this_ptr->network_mode = NET_MODE_LOBBY;
    if (this_ptr->connection_type == CONNECTION_HOST) {
      uVar3 = rand();
      this_ptr->random_seed = uVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
    }
    pcStack_2c = this_ptr->mission_name;
    while (this_ptr->connection_type != CONNECTION_NONE) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      _sprintf(acStack_130,"Mission: %s");
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,0,0xb);
      _sprintf(acStack_130,"MyGameSettigsId: %d");
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,0xb);
      engine_2d_c_drawText_FUN_00401fe0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fe0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fe0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fe0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fe0("gameSettings",500,0x21);
      g_INT_01c4f020 = 0xff;
      engine_2d_c_drawHLine_FUN_00402f30(0,0x31,g_INT_0061b498 + -1);
      iVar4 = 0x37;
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < g_CNetGamePtr->player_count; iStack_20 = iStack_20 + 1) {
        pcStack_1c = g_CNetGamePtr->players[0].name + iStack_24;
        engine_2d_c_drawText_FUN_00401fe0(pcStack_1c,0,iVar4);
        if (g_AnyAddressIP == (uchar  [4])((SNetworkAddr *)(pcStack_1c + 0x1c))->ip_address) {
          pcVar6 = "(Local)";
          pcVar8 = acStack_130;
          do {
            cVar1 = *pcVar6;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
        }
        else {
          support_trisock_cpp_formatIPAddress_FUN_0059c590((uchar *)(pcStack_1c + 0x1c),acStack_130)
          ;
        }
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,100,iVar4);
        if (iStack_20 == g_CNetGamePtr->local_player_index) {
          pcVar8 = "(Local)";
LAB_0052e35a:
          pcVar6 = acStack_130;
          do {
            cVar1 = *pcVar8;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
        }
        else {
          if (*(float *)(pcStack_1c + 0x28) < 0.0) {
            pcVar8 = "?";
            goto LAB_0052e35a;
          }
          dVar9 = round
                            ((double)(*(float *)(pcStack_1c + 0x28) * 1000.0f));
          pcStack_1c = (char *)(int)ROUND(dVar9);
          _sprintf((char *)&fStack_134,"%dms");
        }
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,200,iVar4);
        if (*(int *)(pcStack_1c + 0x44) == 0) {
          pcVar8 = "Not ready";
        }
        else {
          pcVar8 = "Ready";
        }
        pcVar6 = acStack_130;
        do {
          cVar1 = *pcVar8;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,300,iVar4);
        _sprintf(acStack_130,"%d");
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,iVar4);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          _sprintf(acStack_130,"%d");
          engine_2d_c_drawText_FUN_00401fe0(acStack_130,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        iStack_24 = iStack_24 + 0x7c;
      }
      iVar4 = iVar4 + 0x2c;
      iVar7 = (g_ChatHistoryCount - (g_INT_0061b49c - iVar4) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      pcStack_28 = g_ChatHistory[iVar7].message;
      pcVar8 = g_ChatHistory[iVar7].sender_name;
      for (; iVar7 < g_ChatHistoryCount; iVar7 = iVar7 + 1) {
        engine_2d_c_drawText_FUN_00401fe0(pcVar8,0,iVar4);
        engine_2d_c_drawText_FUN_00401fe0(pcStack_28,100,iVar4);
        pcVar8 = pcVar8 + 0x120;
        pcStack_28 = pcStack_28 + 0x120;
        iVar4 = iVar4 + 0xb;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      iVar4 = 0;
      pCVar5 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          pCVar5->players[0].sim_frame_index = 0;
          iVar4 = iVar4 + 1;
          pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.use_item;
        } while (iVar4 < this_ptr->player_count);
      }
      this_ptr->has_pending_sim_frame = 0;
      if (this_ptr->connection_type == CONNECTION_HOST) {
        this_ptr->players[this_ptr->local_player_index].player_id = g_NetNextPlayerId;
        iVar4 = 0;
        bVar2 = true;
        pCVar5 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (pCVar5->players[0].ready_flag == 0) {
              bVar2 = false;
            }
            if (g_NetNextPlayerId != pCVar5->players[0].player_id) {
              iStack_18 = g_UINT_01d51da0 - pCVar5->players[0].last_update_time;
              fStack_134 = (float)iStack_18 * (float)1.52587890625e-05;
              if (fStack_134 < 0.0) {
                fStack_134 = 0.0;
              }
              if ((float)30 < fStack_134) {
                fStack_134 = 30.0;
              }
              if ((float)0.20000000000000001 < fStack_134) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_0052fb60(this_ptr,iVar4);
              }
              bVar2 = false;
            }
            iVar4 = iVar4 + 1;
            pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.use_item;
          } while (iVar4 < this_ptr->player_count);
        }
        if ((bVar2) && (1 < this_ptr->player_count)) {
          this_ptr->network_mode = NET_MODE_SYNCING;
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,1);
          pcVar8 = pcStack_2c;
          if (iVar4 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                      (g_CEditorToolsPtr,"Loading %s");
            srand(this_ptr->random_seed);
            core_actor_cpp_setRandomSeed_FUN_0040cb80(this_ptr->random_seed);
            core_mission_cpp_CDemonMission_load_FUN_0051a3f0(g_CDemonMission_PTR_0061f650,pcVar8,0);
            iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                              (g_CDemonMission_PTR_0061f650,(CCharacter *)0x0);
            if (iVar4 != 0) {
              core_mission_cpp_CDemonMission_startMission_FUN_0051bdc0(g_CDemonMission_PTR_0061f650)
              ;
              iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,2);
              if (iVar4 != 0) {
                return 1;
              }
            }
          }
          this_ptr->network_mode = NET_MODE_LOBBY;
        }
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) &&
         (this_ptr->network_mode == NET_MODE_SYNCING)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                  (g_CEditorToolsPtr,"Loading %s");
        srand(this_ptr->random_seed);
        core_actor_cpp_setRandomSeed_FUN_0040cb80(this_ptr->random_seed);
        core_mission_cpp_CDemonMission_load_FUN_0051a3f0
                  (g_CDemonMission_PTR_0061f650,this_ptr->mission_name,0);
        iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                          (g_CDemonMission_PTR_0061f650,(CCharacter *)0x0);
        if (iVar4 != 0) {
          core_mission_cpp_CDemonMission_startMission_FUN_0051bdc0(g_CDemonMission_PTR_0061f650);
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,2);
          if (iVar4 != 0) {
            iVar4 = wincore_winrun_cpp_getTime_FUN_005b2420();
            iVar7 = iVar4 / 0x12 - g_LastPingTime;
            g_LastPingTime = iVar4 / 0x12;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0x20000 < iVar7) {
              iVar7 = 0x20000;
            }
            g_UINT_01d51da0 = g_UINT_01d51da0 + iVar7;
            g_NetLastSimFrameAckTime = g_UINT_01d51da0 - 0x1e0000;
            return 1;
          }
        }
        this_ptr->network_mode = NET_MODE_LOBBY;
        goto LAB_0052e460;
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) && (g_NetLobbyStateChanged != 0)) {
        iStack_18 = g_UINT_01d51da0 -
                    this_ptr->players[this_ptr->local_player_index].state_change_time;
        fStack_138 = (float)iStack_18 * (float)1.52587890625e-05;
        if (fStack_138 < 0.0) {
          fStack_138 = 0.0;
        }
        if ((float)30 < fStack_138) {
          fStack_138 = 30.0;
        }
        if ((float)0.20000000000000001 < fStack_138) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
        }
      }
      iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_ESCAPE);
      if (iVar4 != 0) goto LAB_0052e460;
      iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_RETURN);
      if (iVar4 != 0) {
        this_ptr->players[this_ptr->local_player_index].ready_flag =
             (uint)(this_ptr->players[this_ptr->local_player_index].ready_flag == 0);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
        }
      }
      iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_S);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                            (g_CEditorToolsPtr,"Send chat",g_ChatMessageBuffer,0x100,1),
         iVar4 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_0052ebd0(this_ptr,g_ChatMessageBuffer,-1);
      }
      for (iVar4 = 0; iVar4 < g_CNetGamePtr->player_count; iVar4 = iVar4 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(this_ptr,iVar4,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_0052e460:
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,1);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    g_ForceMessagePump = iStack_30;
  }
  return 0;
}
