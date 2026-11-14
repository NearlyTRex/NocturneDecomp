// Name: core_netgame.cpp_CNetGame_runLobby_FUN_0052e120
// Address: 0052e120
// Address Range: [[0052e120, 0052ea06]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_0052e120(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  float10 fVar9;
  float fStack_138;
  float fStack_134;
  char acStack_130 [256];
  uint uStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  if (this_ptr->connection_type != CONNECTION_NONE) {
    uStack_30 = DAT_006260e8;
    this_ptr->players[this_ptr->local_player_index].local_sync_stage = 1;
    this_ptr->players[this_ptr->local_player_index].ready_flag = 0;
    DAT_006260e8 = 0;
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
      _DAT_01c4f020 = 0xff;
      engine_2d_c_drawHLine_FUN_00402f30(0,0x31,DAT_0061b498 + -1);
      iVar4 = 0x37;
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < g_CNetGamePtr->player_count; iStack_20 = iStack_20 + 1) {
        pcStack_1c = g_CNetGamePtr->players[0].name + iStack_24;
        engine_2d_c_drawText_FUN_00401fe0(pcStack_1c,0,iVar4);
        if (_DAT_02c8ae4c == ((SNetworkAddr *)(pcStack_1c + 0x1c))->ip_address) {
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
          fVar9 = (float10)*(float *)(pcStack_1c + 0x28) * (float10)_DAT_005ebdf8;
          round();
          iStack_18 = (int)ROUND(fVar9);
          _sprintf(acStack_130,"%dms");
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
        _sprintf(acStack_130,(char *)0x5ebdd2);
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,iVar4);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          _sprintf(acStack_130,(char *)0x5ebdd5);
          engine_2d_c_drawText_FUN_00401fe0(acStack_130,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        iStack_24 = iStack_24 + 0x7c;
      }
      iVar4 = iVar4 + 0x2c;
      iVar7 = (_DAT_01d51db4 - (DAT_0061b49c - iVar4) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      pcStack_28 = (char *)(iVar7 * 0x120 + 0x1d51dd8);
      pcVar8 = (char *)(iVar7 * 0x120 + 0x1d51dc4);
      for (; iVar7 < _DAT_01d51db4; iVar7 = iVar7 + 1) {
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
        this_ptr->players[this_ptr->local_player_index].player_id = _DAT_01d51dac;
        iVar4 = 0;
        bVar2 = true;
        pCVar5 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (pCVar5->players[0].ready_flag == 0) {
              bVar2 = false;
            }
            if (_DAT_01d51dac != pCVar5->players[0].player_id) {
              iStack_18 = _DAT_01d51da0 - pCVar5->players[0].last_update_time;
              fStack_134 = (float)iStack_18 * (float)_DAT_005ebe00;
              if (fStack_134 < 0.0) {
                fStack_134 = 0.0;
              }
              if ((float)_DAT_005ebe08 < fStack_134) {
                fStack_134 = 30.0;
              }
              if ((float)_DAT_005ebe10 < fStack_134) {
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
            core_mission_cpp_CDemonMission_load_FUN_0051a3f0(0x01D2C900,pcVar8,0);
            iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                              (0x01D2C900,(CCharacter *)0x0);
            if (iVar4 != 0) {
              core_mission_cpp_FUN_0051bdc0(0x01D2C900);
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
        core_mission_cpp_CDemonMission_load_FUN_0051a3f0(0x01D2C900,this_ptr->mission_name,0);
        iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                          (0x01D2C900,(CCharacter *)0x0);
        if (iVar4 != 0) {
          core_mission_cpp_FUN_0051bdc0(0x01D2C900);
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,2);
          if (iVar4 != 0) {
            iVar4 = wincore_winrun_cpp_getTime_FUN_005b2420();
            iVar7 = iVar4 / 0x12 - _DAT_01d51d9c;
            _DAT_01d51d9c = iVar4 / 0x12;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0x20000 < iVar7) {
              iVar7 = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + iVar7;
            _DAT_01d51db0 = _DAT_01d51da0 + -0x1e0000;
            return 1;
          }
        }
        this_ptr->network_mode = NET_MODE_LOBBY;
        goto LAB_0052e460;
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) && (DAT_00622584 != 0)) {
        iStack_18 = _DAT_01d51da0 -
                    this_ptr->players[this_ptr->local_player_index].state_change_time;
        fStack_138 = (float)iStack_18 * (float)_DAT_005ebe00;
        if (fStack_138 < 0.0) {
          fStack_138 = 0.0;
        }
        if ((float)_DAT_005ebe08 < fStack_138) {
          fStack_138 = 30.0;
        }
        if ((float)_DAT_005ebe10 < fStack_138) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
        }
      }
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar4 != 0) goto LAB_0052e460;
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
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
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1f);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                            (g_CEditorToolsPtr,"Send chat",(char *)0x1d51b20,0x100,1),
         iVar4 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_0052ebd0(this_ptr,(char *)0x1d51b20,-1);
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
    DAT_006260e8 = uStack_30;
  }
  return 0;
}
