// Name: core_netgame.cpp_FUN_00541390
// Address: 00541390
// Address Range: [[00541390, 00541c77]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00541390()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_netgame_cpp_FUN_00541390(void)

{
  uchar uVar1;
  bool bVar2;
  SNetPlayer *pSVar3;
  int iVar4;
  CNetGame *pCVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  int iVar7;
  uchar *puVar8;
  double dVar9;
  CNetGame *in_stack_00000004;
  uint uVar10;
  float fVar11;
  float local_130;
  uchar auStack_12c [256];
  int local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  char *local_18;
  int iStack_14;
  
  if (in_stack_00000004->connection_type != 0) {
    local_2c = g_ForceMessagePump;
    pSVar3 = in_stack_00000004->players + in_stack_00000004->local_player_index;
    pSVar3->field5_0x38[4] = '\x01';
    pSVar3->field5_0x38[5] = '\0';
    pSVar3->field5_0x38[6] = '\0';
    pSVar3->field5_0x38[7] = '\0';
    pSVar3 = in_stack_00000004->players + in_stack_00000004->local_player_index;
    pSVar3->field5_0x38[0xc] = '\0';
    pSVar3->field5_0x38[0xd] = '\0';
    pSVar3->field5_0x38[0xe] = '\0';
    pSVar3->field5_0x38[0xf] = '\0';
    g_ForceMessagePump = 0;
    in_stack_00000004->network_mode = 1;
    if (in_stack_00000004->connection_type == 1) {
      iVar4 = crt_stdlib_c_rand_FUN_005feb5c();
      *(int *)(in_stack_00000004->field7_0x118 + 0x54) = iVar4;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
    }
    local_28 = in_stack_00000004->field7_0x118;
    while (in_stack_00000004->connection_type != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)(auStack_12c + 4),"Mission: %s",local_24);
      engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,0,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)auStack_12c,"MyGameSettigsId: %d",DAT_02f7c8c4);
      engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,400,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fd0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fd0("gameSettings",500,0x21);
      g_ActiveRenderColor = 0xff;
      engine_2d_c_drawHLine_FUN_00402ee0(0,0x31,g_WindowWidth + -1);
      iVar4 = 0x37;
      local_20 = 0;
      for (local_1c = 0; local_1c < g_CNetGameInstance->player_count; local_1c = local_1c + 1) {
        local_18 = g_CNetGameInstance->players[0].name + local_20;
        engine_2d_c_drawText_FUN_00401fd0(local_18,0,iVar4);
        if (*(uchar (*) [4])(local_18 + 0x1c) == g_AnyAddressIP) {
          pcVar6 = "(Local)";
          puVar8 = auStack_12c;
          do {
            uVar1 = *pcVar6;
            *puVar8 = uVar1;
            if (uVar1 == '\0') break;
            uVar1 = ((uchar *)pcVar6)[1];
            pcVar6 = (char *)((uchar *)pcVar6 + 2);
            puVar8[1] = uVar1;
            puVar8 = puVar8 + 2;
          } while (uVar1 != '\0');
        }
        else {
          support_trisock_cpp_formatIPAddress_FUN_005e17c0(local_18 + 0x1c,auStack_12c);
        }
        engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,100,iVar4);
        if (local_1c == g_CNetGameInstance->local_player_index) {
          pcVar6 = "(Local)";
LAB_005415cb:
          puVar8 = auStack_12c;
          do {
            uVar1 = *pcVar6;
            *puVar8 = uVar1;
            if (uVar1 == '\0') break;
            uVar1 = ((uchar *)pcVar6)[1];
            pcVar6 = (char *)((uchar *)pcVar6 + 2);
            puVar8[1] = uVar1;
            puVar8 = puVar8 + 2;
          } while (uVar1 != '\0');
        }
        else {
          if (*(float *)(local_18 + 0x28) < 0.0) {
            pcVar6 = "?";
            goto LAB_005415cb;
          }
          uVar10 = 0x541739;
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)(*(float *)(local_18 + 0x28) * _DAT_0063da45));
          local_18 = (char *)(int)ROUND(dVar9);
          crt_stdio_c_sprintf_FUN_005fdbd0((char *)&local_130,"%dms",local_18,uVar10);
        }
        engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,200,iVar4);
        if (*(int *)(local_18 + 0x44) == 0) {
          pcVar6 = "Not ready";
        }
        else {
          pcVar6 = "Ready";
        }
        puVar8 = auStack_12c;
        do {
          uVar1 = *pcVar6;
          *puVar8 = uVar1;
          if (uVar1 == '\0') break;
          uVar1 = ((uchar *)pcVar6)[1];
          pcVar6 = (char *)((uchar *)pcVar6 + 2);
          puVar8[1] = uVar1;
          puVar8 = puVar8 + 2;
        } while (uVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,300,iVar4);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  ((char *)auStack_12c,"%d",*(uint *)(local_18 + 0x14));
        engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,400,iVar4);
        if (in_stack_00000004->connection_type == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    ((char *)auStack_12c,"%d",*(int *)(local_18 + 0x34));
          engine_2d_c_drawText_FUN_00401fd0((char *)auStack_12c,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        local_20 = local_20 + 0x78;
      }
      iVar4 = iVar4 + 0x2c;
      iVar7 = (g_ChatHistoryCount - (g_WindowHeight - iVar4) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_24 = g_ChatHistory[iVar7].field0_0x0 + 0x20;
      pcVar6 = g_ChatHistory[iVar7].field0_0x0 + 0xc;
      for (; iVar7 < g_ChatHistoryCount; iVar7 = iVar7 + 1) {
        engine_2d_c_drawText_FUN_00401fd0(pcVar6,0,iVar4);
        engine_2d_c_drawText_FUN_00401fd0(local_24,100,iVar4);
        pcVar6 = pcVar6 + 0x120;
        local_24 = local_24 + 0x120;
        iVar4 = iVar4 + 0xb;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(in_stack_00000004);
      iVar4 = 0;
      pCVar5 = in_stack_00000004;
      if (0 < in_stack_00000004->player_count) {
        do {
          pCVar5->players[0].field5_0x38[0x10] = '\0';
          pCVar5->players[0].field5_0x38[0x11] = '\0';
          pCVar5->players[0].field5_0x38[0x12] = '\0';
          pCVar5->players[0].field5_0x38[0x13] = '\0';
          iVar4 = iVar4 + 1;
          pCVar5 = (CNetGame *)(pCVar5->players[0].field5_0x38 + 0x20);
        } while (iVar4 < in_stack_00000004->player_count);
      }
      iVar4 = in_stack_00000004->connection_type;
      in_stack_00000004->field7_0x118[0x50] = '\0';
      in_stack_00000004->field7_0x118[0x51] = '\0';
      in_stack_00000004->field7_0x118[0x52] = '\0';
      in_stack_00000004->field7_0x118[0x53] = '\0';
      if (iVar4 == 1) {
        in_stack_00000004->players[in_stack_00000004->local_player_index].player_id = DAT_02f7c8c4;
        iVar4 = 0;
        bVar2 = true;
        pCVar5 = in_stack_00000004;
        if (0 < in_stack_00000004->player_count) {
          do {
            if (*(int *)(pCVar5->players[0].field5_0x38 + 0xc) == 0) {
              bVar2 = false;
            }
            if (DAT_02f7c8c4 != pCVar5->players[0].player_id) {
              iStack_14 = g_CurrentGameTime - *(int *)pCVar5->players[0].field5_0x38;
              fVar11 = (float)iStack_14 * (float)1.52587890625e-05;
              if (fVar11 < 0.0) {
                fVar11 = 0.0;
              }
              if ((float)30 < fVar11) {
                fVar11 = 30.0;
              }
              if ((float)0.20000000000000001 < fVar11) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0();
              }
              bVar2 = false;
            }
            iVar4 = iVar4 + 1;
            pCVar5 = (CNetGame *)(pCVar5->players[0].field5_0x38 + 0x20);
          } while (iVar4 < in_stack_00000004->player_count);
        }
        if ((bVar2) && (1 < in_stack_00000004->player_count)) {
          in_stack_00000004->network_mode = 2;
          engine_2d_c_clearInputAndWait_FUN_00403260();
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,1);
          pcVar6 = local_28;
          if (iVar4 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Loading %s");
            crt_stdlib_c_srand_FUN_005feb80(*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
            core_actor_cpp_setRandomSeed_FUN_0040cb90
                      (*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
            core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,pcVar6,0);
            iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
            if (iVar4 != 0) {
              core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
              iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,2);
              if (iVar4 != 0) {
                return 1;
              }
            }
          }
          in_stack_00000004->network_mode = 1;
        }
      }
      if ((in_stack_00000004->connection_type == 2) && (in_stack_00000004->network_mode == 2)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Loading %s");
        crt_stdlib_c_srand_FUN_005feb80(*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
        core_actor_cpp_setRandomSeed_FUN_0040cb90(*(uint *)(in_stack_00000004->field7_0x118 + 0x54))
        ;
        core_mission_cpp_CDemonMission_load_FUN_00522d90
                  (g_CDemonMissionPtr,in_stack_00000004->field7_0x118,0);
        iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
        if (iVar4 != 0) {
          core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,2);
          if (iVar4 != 0) {
            iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar7 = iVar4 / 0x12 - g_LastPingTime;
            g_LastPingTime = iVar4 / 0x12;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0x20000 < iVar7) {
              iVar7 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar7;
            DAT_02f7c8c8 = g_CurrentGameTime - 0x1e0000;
            return 1;
          }
        }
        in_stack_00000004->network_mode = 1;
        goto LAB_005416d1;
      }
      if ((in_stack_00000004->connection_type == 2) && (DAT_00680a04 != 0)) {
        iStack_14 = g_CurrentGameTime -
                    *(int *)(in_stack_00000004->players[in_stack_00000004->local_player_index].
                             field5_0x38 + 8);
        local_130 = (float)iStack_14 * (float)1.52587890625e-05;
        if (local_130 < 0.0) {
          local_130 = 0.0;
        }
        if ((float)30 < local_130) {
          local_130 = 30.0;
        }
        if ((float)0.20000000000000001 < local_130) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar4 != 0) goto LAB_005416d1;
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
      if (iVar4 != 0) {
        *(uint *)(in_stack_00000004->players[in_stack_00000004->local_player_index].field5_0x38 +
                 0xc) =
             (uint)(*(int *)(in_stack_00000004->players[in_stack_00000004->local_player_index].
                             field5_0x38 + 0xc) == 0);
        if (in_stack_00000004->connection_type == 1) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Send chat",&DAT_02f7c640,0x100,1),
         iVar4 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40();
      }
      for (iVar4 = 0; iVar4 < g_CNetGameInstance->player_count; iVar4 = iVar4 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(in_stack_00000004,iVar4,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_005416d1:
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    g_ForceMessagePump = (int)local_28;
  }
  return 0;
}
