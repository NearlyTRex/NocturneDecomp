// Name: core_netgame.cpp_CNetGame_runLobby_FUN_00505a30
// Address: 00505a30
// Address Range: [[00505a30, 0050631e]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00505a30(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00505a30(CNetGame *this_ptr)

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
  int iStack_28;
  char *pcStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  if (this_ptr->connection_type != CONNECTION_NONE) {
    uStack_30 = DAT_0060728c;
    *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x3c = 1;
    *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x44 = 0;
    DAT_0060728c = 0;
    this_ptr->network_mode = NET_MODE_LOBBY;
    if (this_ptr->connection_type == CONNECTION_HOST) {
      uVar3 = rand();
      this_ptr->random_seed = uVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
    }
    pcStack_2c = this_ptr->mission_name;
    while (this_ptr->connection_type != CONNECTION_NONE) {
      engine_special_cpp_clearScreen_FUN_00560d70();
      _sprintf(acStack_130,"Mission: %s");
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,0,0xb);
      _sprintf(acStack_130,"MyGameSettigsId: %d");
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,0xb);
      engine_2d_c_drawText_FUN_00401fe0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0((char *)0x5cab98,100,0x21);
      engine_2d_c_drawText_FUN_00401fe0((char *)0x5cab9b,200,0x21);
      engine_2d_c_drawText_FUN_00401fe0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fe0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fe0("gameSettings",500,0x21);
      _DAT_01c6b5c0 = 0xff;
      engine_2d_c_drawHLine_FUN_00402f30(0,0x31,DAT_005fba18 + -1);
      iVar4 = 0x37;
      iStack_28 = 0;
      for (iStack_20 = 0; iStack_20 < g_CNetGamePtr->player_count; iStack_20 = iStack_20 + 1) {
        pcStack_1c = &g_CNetGamePtr->players[0].field_0x0 + iStack_28;
        engine_2d_c_drawText_FUN_00401fe0(pcStack_1c,0,iVar4);
        if (_DAT_02cfd89c == *(int *)(pcStack_1c + 0x1c)) {
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
          support_trisock_cpp_formatIPAddress_FUN_0056f580((uchar *)(pcStack_1c + 0x1c),acStack_130)
          ;
        }
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,100,iVar4);
        if (iStack_20 == g_CNetGamePtr->local_player_index) {
          pcVar8 = "(Local)";
LAB_00505c5c:
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
            pcVar8 = (char *)0x5cabd1;
            goto LAB_00505c5c;
          }
          fVar9 = (float10)*(float *)(pcStack_1c + 0x28) * (float10)_DAT_005cac09;
          round();
          iStack_18 = (int)ROUND(fVar9);
          _sprintf(acStack_130,(char *)0x5cabcc);
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
        _sprintf(acStack_130,(char *)0x5cabe3);
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,iVar4);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          _sprintf(acStack_130,(char *)0x5cabe6);
          engine_2d_c_drawText_FUN_00401fe0(acStack_130,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        iStack_28 = iStack_28 + 0x80;
      }
      iVar4 = iVar4 + 0x2c;
      iVar7 = (_DAT_01da648c - (DAT_005fba1c - iVar4) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      pcStack_24 = (char *)(iVar7 * 0x120 + 0x1da649c);
      pcVar8 = (char *)(iVar7 * 0x120 + 0x1da64b0);
      for (; iVar7 < _DAT_01da648c; iVar7 = iVar7 + 1) {
        engine_2d_c_drawText_FUN_00401fe0(pcStack_24,0,iVar4);
        engine_2d_c_drawText_FUN_00401fe0(pcVar8,100,iVar4);
        iVar4 = iVar4 + 0xb;
        pcStack_24 = pcStack_24 + 0x120;
        pcVar8 = pcVar8 + 0x120;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
      iVar4 = 0;
      pCVar5 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          *(uint *)&pCVar5->players[0].field_0x48 = 0;
          iVar4 = iVar4 + 1;
          pCVar5 = (CNetGame *)&pCVar5->players[0].field_0x60;
        } while (iVar4 < this_ptr->player_count);
      }
      this_ptr->has_pending_sim_frame = 0;
      if (this_ptr->connection_type == CONNECTION_HOST) {
        *(int *)&this_ptr->players[this_ptr->local_player_index].field_0x34 = _DAT_01da6484;
        iVar4 = 0;
        bVar2 = true;
        pCVar5 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (*(int *)&pCVar5->players[0].field_0x44 == 0) {
              bVar2 = false;
            }
            if (_DAT_01da6484 != *(int *)&pCVar5->players[0].field_0x34) {
              iStack_18 = _DAT_01da6478 - *(int *)&pCVar5->players[0].field_0x38;
              fStack_138 = (float)iStack_18 * (float)_DAT_005cac11;
              if (fStack_138 < 0.0) {
                fStack_138 = 0.0;
              }
              if ((float)_DAT_005cac19 < fStack_138) {
                fStack_138 = 30.0;
              }
              if ((float)_DAT_005cac21 < fStack_138) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_00507450(this_ptr,iVar4);
              }
              bVar2 = false;
            }
            iVar4 = iVar4 + 1;
            pCVar5 = (CNetGame *)&pCVar5->players[0].field_0x60;
          } while (iVar4 < this_ptr->player_count);
        }
        if ((bVar2) && (1 < this_ptr->player_count)) {
          this_ptr->network_mode = NET_MODE_SYNCING;
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(this_ptr,1);
          pcVar8 = pcStack_2c;
          if (iVar4 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                      (g_CEditorToolsPtr,"Loading %s");
            srand(this_ptr->random_seed);
            core_actor_cpp_setRandomSeed_FUN_0040cdc0(this_ptr->random_seed);
            core_mission_cpp_CDemonMission_load_FUN_004f5bc0(0x01D81080,pcVar8,0);
            iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_004f7880
                              (0x01D81080,(CCharacter *)0x0);
            if (iVar4 != 0) {
              core_mission_cpp_FUN_004f7590(0x01D81080);
              iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(this_ptr,2);
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
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                  (g_CEditorToolsPtr,"Loading %s");
        srand(this_ptr->random_seed);
        core_actor_cpp_setRandomSeed_FUN_0040cdc0(this_ptr->random_seed);
        core_mission_cpp_CDemonMission_load_FUN_004f5bc0(0x01D81080,this_ptr->mission_name,0);
        iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_004f7880
                          (0x01D81080,(CCharacter *)0x0);
        if (iVar4 != 0) {
          core_mission_cpp_FUN_004f7590(0x01D81080);
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(this_ptr,2);
          if (iVar4 != 0) {
            iVar4 = wincore_winrun_cpp_getTime_FUN_005806a0();
            iVar7 = iVar4 / 0x12 - _DAT_01da6474;
            _DAT_01da6474 = iVar4 / 0x12;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0x20000 < iVar7) {
              iVar7 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + iVar7;
            _DAT_01da6488 = _DAT_01da6478 + -0x1e0000;
            return 1;
          }
        }
        this_ptr->network_mode = NET_MODE_LOBBY;
        goto LAB_00505d65;
      }
      if ((this_ptr->connection_type == CONNECTION_CLIENT) && (DAT_00603454 != 0)) {
        iStack_18 = _DAT_01da6478 -
                    *(int *)&this_ptr->players[this_ptr->local_player_index].field_0x40;
        fStack_134 = (float)iStack_18 * (float)_DAT_005cac11;
        if (fStack_134 < 0.0) {
          fStack_134 = 0.0;
        }
        if ((float)_DAT_005cac19 < fStack_134) {
          fStack_134 = 30.0;
        }
        if ((float)_DAT_005cac21 < fStack_134) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
        }
      }
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar4 != 0) goto LAB_00505d65;
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
      if (iVar4 != 0) {
        *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x44 =
             (uint)(*(int *)&this_ptr->players[this_ptr->local_player_index].field_0x44 == 0);
        if (this_ptr->connection_type == CONNECTION_HOST) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
        }
      }
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1f);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                            (g_CEditorToolsPtr,"Send chat",(char *)0x1da61f0,0x100,1),
         iVar4 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_005064d0(this_ptr,(char *)0x1da61f0,-1);
      }
      for (iVar4 = 0; iVar4 < g_CNetGamePtr->player_count; iVar4 = iVar4 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_00506320(this_ptr,iVar4,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_00505d65:
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,1);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    DAT_0060728c = uStack_30;
  }
  return 0;
}
