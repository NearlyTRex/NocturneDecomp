// Name: core_netgame.cpp_CNetGame_runLobby_FUN_004eb520
// Address: 004eb520
// Address Range: [[004eb520, 004ebe07]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(CNetGame *this_ptr)

{
  uchar uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  CNetGame *pCVar5;
  char *pcVar6;
  int iVar7;
  uchar *puVar8;
  double dVar9;
  uint uVar10;
  float fStack_138;
  float fStack_134;
  uchar auStack_130 [256];
  uint uStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  if (this_ptr->connection_type != CONNECTION_NONE) {
    uStack_30 = DAT_005c1664;
    this_ptr->players[this_ptr->local_player_index].local_sync_stage = 1;
    this_ptr->players[this_ptr->local_player_index].ready_flag = 0;
    DAT_005c1664 = 0;
    this_ptr->network_mode = NET_MODE_LOBBY;
    if (this_ptr->connection_type == CONNECTION_HOST) {
      uVar3 = rand();
      this_ptr->random_seed = uVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(this_ptr);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(this_ptr);
    }
    pcStack_2c = this_ptr->mission_name;
    while (this_ptr->connection_type != CONNECTION_NONE) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      _sprintf((char *)auStack_130,"Mission: %s",pcStack_2c);
      engine_2d_c_drawText_FUN_00402600((char *)auStack_130,0,0xb);
      _sprintf((char *)auStack_130,"MyGameSettigsId: %d",_DAT_01cea404);
      engine_2d_c_drawText_FUN_00402600((char *)auStack_130,400,0xb);
      engine_2d_c_drawText_FUN_00402600("Player",0,0x21);
      engine_2d_c_drawText_FUN_00402600("IP",100,0x21);
      engine_2d_c_drawText_FUN_00402600("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00402600("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00402600("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00402600("gameSettings",500,0x21);
      _DAT_01c00c70 = 0xff;
      engine_2d_c_drawHLine_FUN_00403bd0(0,0x31,g_WindowWidth + -1);
      iVar4 = 0x37;
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < g_CNetGame_PTR_005bdee0->player_count;
          iStack_20 = iStack_20 + 1) {
        pcStack_1c = g_CNetGame_PTR_005bdee0->players[0].name + iStack_24;
        engine_2d_c_drawText_FUN_00402600(pcStack_1c,0,iVar4);
        if (((SNetworkAddr *)(pcStack_1c + 0x1c))->ip_address == _DAT_02dd10c4) {
          pcVar6 = "(Local)";
          puVar8 = auStack_130;
          do {
            uVar1 = *pcVar6;
            *puVar8 = uVar1;
            if (uVar1 == '\0') break;
            uVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            puVar8[1] = uVar1;
            puVar8 = puVar8 + 2;
          } while (uVar1 != '\0');
        }
        else {
          support_trisock_cpp_formatIPAddress_FUN_00548bb0((char *)(pcStack_1c + 0x1c),auStack_130);
        }
        engine_2d_c_drawText_FUN_00402600((char *)auStack_130,100,iVar4);
        if (iStack_20 == g_CNetGame_PTR_005bdee0->local_player_index) {
          pcVar6 = "(Local)";
LAB_004eb75b:
          puVar8 = auStack_130;
          do {
            uVar1 = *pcVar6;
            *puVar8 = uVar1;
            if (uVar1 == '\0') break;
            uVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            puVar8[1] = uVar1;
            puVar8 = puVar8 + 2;
          } while (uVar1 != '\0');
        }
        else {
          if (*(float *)(pcStack_1c + 0x28) < 0.0) {
            pcVar6 = "?";
            goto LAB_004eb75b;
          }
          uVar10 = 0x4eb8c9;
          dVar9 = round
                            ((double)(*(float *)(pcStack_1c + 0x28) * 1000.0f));
          pcStack_1c = (char *)(int)ROUND(dVar9);
          _sprintf((char *)&fStack_134,"%dms",pcStack_1c,uVar10);
        }
        engine_2d_c_drawText_FUN_00402600((char *)auStack_130,200,iVar4);
        if (*(int *)(pcStack_1c + 0x44) == 0) {
          pcVar6 = "Not ready";
        }
        else {
          pcVar6 = "Ready";
        }
        puVar8 = auStack_130;
        do {
          uVar1 = *pcVar6;
          *puVar8 = uVar1;
          if (uVar1 == '\0') break;
          uVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          puVar8[1] = uVar1;
          puVar8 = puVar8 + 2;
        } while (uVar1 != '\0');
        engine_2d_c_drawText_FUN_00402600((char *)auStack_130,300,iVar4);
        _sprintf((char *)auStack_130,"%d",*(EHeroType *)(pcStack_1c + 0x14));
        engine_2d_c_drawText_FUN_00402600((char *)auStack_130,400,iVar4);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          _sprintf((char *)auStack_130,"%d",*(int *)(pcStack_1c + 0x34));
          engine_2d_c_drawText_FUN_00402600((char *)auStack_130,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        iStack_24 = iStack_24 + 0x78;
      }
      iVar4 = iVar4 + 0x2c;
      iVar7 = (_DAT_01cea40c - (g_WindowHeight - iVar4) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      pcStack_28 = g_SChatHistory_ARRAY_01cea410[iVar7].message;
      pcVar6 = g_SChatHistory_ARRAY_01cea410[iVar7].sender_name;
      for (; iVar7 < _DAT_01cea40c; iVar7 = iVar7 + 1) {
        engine_2d_c_drawText_FUN_00402600(pcVar6,0,iVar4);
        engine_2d_c_drawText_FUN_00402600(pcStack_28,100,iVar4);
        pcVar6 = pcVar6 + 0x120;
        pcStack_28 = pcStack_28 + 0x120;
        iVar4 = iVar4 + 0xb;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
      iVar4 = 0;
      pCVar5 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          pCVar5->players[0].sim_frame_index = 0;
          iVar4 = iVar4 + 1;
          pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.fire;
        } while (iVar4 < this_ptr->player_count);
      }
      this_ptr->has_pending_sim_frame = 0;
      if (this_ptr->connection_type == CONNECTION_HOST) {
        this_ptr->players[this_ptr->local_player_index].player_id = _DAT_01cea404;
        iVar4 = 0;
        bVar2 = true;
        pCVar5 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (pCVar5->players[0].ready_flag == 0) {
              bVar2 = false;
            }
            if (_DAT_01cea404 != pCVar5->players[0].player_id) {
              iStack_18 = _DAT_01cea3f8 - pCVar5->players[0].last_update_time;
              fStack_138 = (float)iStack_18 * (float)1.52587890625e-05;
              if (fStack_138 < 0.0) {
                fStack_138 = 0.0;
              }
              if ((float)30 < fStack_138) {
                fStack_138 = 30.0;
              }
              if ((float)0.20000000000000001 < fStack_138) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(this_ptr,iVar4);
              }
              bVar2 = false;
            }
            iVar4 = iVar4 + 1;
            pCVar5 = (CNetGame *)&pCVar5->players[0].player_input.action_state.fire;
          } while (iVar4 < this_ptr->player_count);
        }
        if ((bVar2) && (1 < this_ptr->player_count)) {
          this_ptr->network_mode = NET_MODE_SYNCING;
          engine_2d_c_clearInputAndWait_FUN_00403f50();
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(this_ptr,1);
          pcVar6 = pcStack_2c;
          if (iVar4 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                      (g_CEditorTools_PTR_005b6d50,"Loading %s");
            srand(this_ptr->random_seed);
            core_actor_cpp_setRandomSeed_FUN_0040dd20(this_ptr->random_seed);
            core_mission_cpp_CDemonMission_load_FUN_004d7ee0(g_CDemonMission_PTR_005baf90,pcVar6,0);
            iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80
                              (g_CDemonMission_PTR_005baf90,(CCharacter *)0x0);
            if (iVar4 != 0) {
              core_mission_cpp_CDemonMission_startMission_FUN_004d9780(g_CDemonMission_PTR_005baf90)
              ;
              iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(this_ptr,2);
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
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                  (g_CEditorTools_PTR_005b6d50,"Loading %s");
        srand(this_ptr->random_seed);
        core_actor_cpp_setRandomSeed_FUN_0040dd20(this_ptr->random_seed);
        core_mission_cpp_CDemonMission_load_FUN_004d7ee0
                  (g_CDemonMission_PTR_005baf90,this_ptr->mission_name,0);
        iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80
                          (g_CDemonMission_PTR_005baf90,(CCharacter *)0x0);
        if (iVar4 != 0) {
          core_mission_cpp_CDemonMission_startMission_FUN_004d9780(g_CDemonMission_PTR_005baf90);
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(this_ptr,2);
          if (iVar4 != 0) {
            iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
            iVar7 = iVar4 / 0x12 - _DAT_01cea3f4;
            _DAT_01cea3f4 = iVar4 / 0x12;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0x20000 < iVar7) {
              iVar7 = 0x20000;
            }
            _DAT_01cea3f8 = _DAT_01cea3f8 + iVar7;
            _DAT_01cea408 = _DAT_01cea3f8 + -0x1e0000;
            return 1;
          }
        }
        this_ptr->network_mode = NET_MODE_LOBBY;
        goto LAB_004eb861;
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) && (g_INT_005bdee4 != 0)) {
        iStack_18 = _DAT_01cea3f8 -
                    this_ptr->players[this_ptr->local_player_index].state_change_time;
        fStack_134 = (float)iStack_18 * (float)1.52587890625e-05;
        if (fStack_134 < 0.0) {
          fStack_134 = 0.0;
        }
        if ((float)30 < fStack_134) {
          fStack_134 = 30.0;
        }
        if ((float)0.20000000000000001 < fStack_134) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(this_ptr);
        }
      }
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
      if (iVar4 != 0) goto LAB_004eb861;
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
      if (iVar4 != 0) {
        this_ptr->players[this_ptr->local_player_index].ready_flag =
             (uint)(this_ptr->players[this_ptr->local_player_index].ready_flag == 0);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(this_ptr);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(this_ptr);
        }
      }
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_S);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                            (g_CEditorTools_PTR_005b6d50,"Send chat",(char *)0x1cea180,
                             0x100,1), iVar4 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(this_ptr,(char *)0x1cea180,-1);
      }
      for (iVar4 = 0; iVar4 < g_CNetGame_PTR_005bdee0->player_count; iVar4 = iVar4 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(this_ptr,iVar4,2.0);
      }
    }
    shape_edittool_cpp_FUN_0046fe60(g_CEditorTools_PTR_005b6d50,"You have been disconnected from the game.")
    ;
LAB_004eb861:
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,1);
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    DAT_005c1664 = uStack_30;
  }
  return 0;
}
