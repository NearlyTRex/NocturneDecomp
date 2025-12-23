// Name: core_netgame.cpp_FUN_00541390
// Address: 00541390
// Address Range: [[00541390, 00541c77]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00541390()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_netgame_cpp_FUN_00541390(void)

{
  char cVar1;
  bool bVar2;
  SNetPlayer *pSVar3;
  int iVar4;
  CNetGame *pCVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  double dVar9;
  CNetGame *in_stack_00000004;
  float fVar10;
  char acStack_128 [188];
  uint uStack_6c;
  char *pcStack_54;
  int iStack_3c;
  char *pcStack_38;
  int iStack_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  int iStack_14;
  
  if (in_stack_00000004->connection_type != 0) {
    local_30 = (char *)g_ForceMessagePump;
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
    local_20 = in_stack_00000004->field7_0x118;
    while (in_stack_00000004->connection_type != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe90,"Mission: %s",uStack_6c);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe94,0,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe98,"MyGameSettigsId: %d",DAT_02f7c8c4);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe9c,400,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fd0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fd0("gameSettings",500,0x21);
      g_ActiveRenderColor = 0xff;
      engine_2d_c_drawHLine_FUN_00402ee0(0,0x31,g_WindowWidth + -1);
      iVar4 = 0x37;
      pcStack_38 = (char *)0x0;
      for (iStack_34 = 0; iStack_34 < g_CNetGameInstance->player_count; iStack_34 = iStack_34 + 1) {
        local_30 = pcStack_38 + (int)g_CNetGameInstance->players;
        engine_2d_c_drawText_FUN_00401fd0(local_30,0,iVar4);
        if (*(uchar (*) [4])(local_2c + 0x1c) == g_AnyAddressIP) {
          pcVar6 = "(Local)";
          pcVar8 = &stack0xfffffec0;
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
          support_trisock_cpp_formatIPAddress_FUN_005e17c0
                    ((char *)(local_2c + 0x1c),&stack0xfffffec0);
        }
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffec4,100,iVar4);
        if (local_28 == g_CNetGameInstance->local_player_index) {
          pcVar8 = "(Local)";
LAB_005415cb:
          pcVar6 = &stack0xfffffec8;
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
          if (*(float *)(local_24 + 0x28) < 0.0) {
            pcVar8 = "?";
            goto LAB_005415cb;
          }
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)(*(float *)(local_24 + 0x28) * _DAT_0063da45));
          local_24 = (int)ROUND(dVar9);
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec4,"%dms");
        }
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffec8,200,iVar4);
        if (*(int *)(local_20 + 0x44) == 0) {
          pcVar8 = "Not ready";
        }
        else {
          pcVar8 = "Ready";
        }
        pcVar6 = &stack0xfffffecc;
        do {
          cVar1 = *pcVar8;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffecc,300,iVar4);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffed0,"%d");
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed4,400,iVar4);
        if (in_stack_00000004->connection_type == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_128,"%d");
          engine_2d_c_drawText_FUN_00401fd0(acStack_128 + 4,500,iVar4);
        }
        iVar4 = iVar4 + 0xb;
        pcStack_38 = pcStack_38 + 0x78;
      }
      iVar4 = iVar4 + 0x2c;
      iVar7 = (g_ChatHistoryCount - (g_WindowHeight - iVar4) / 0xb) + 1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iStack_3c = iVar7 * 0x120 + 0x2f7c8f0;
      pcVar8 = g_ChatHistory[iVar7].field0_0x0 + 0xc;
      for (; iVar7 < g_ChatHistoryCount; iVar7 = iVar7 + 1) {
        engine_2d_c_drawText_FUN_00401fd0(pcVar8,0,iVar4);
        engine_2d_c_drawText_FUN_00401fd0(pcStack_38,100,iVar4);
        pcVar8 = pcVar8 + 0x120;
        iStack_34 = iStack_34 + 0x120;
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
              local_24 = g_CurrentGameTime - *(int *)pCVar5->players[0].field5_0x38;
              fVar10 = (float)local_24 * (float)1.52587890625e-05;
              if (fVar10 < 0.0) {
                fVar10 = 0.0;
              }
              if ((float)30 < fVar10) {
                fVar10 = 30.0;
              }
              if ((float)0.20000000000000001 < fVar10) {
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
          pcVar8 = pcStack_54;
          if (iVar4 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Loading %s");
            crt_stdlib_c_srand_FUN_005feb80(*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
            core_actor_cpp_setRandomSeed_FUN_0040cb90
                      (*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
            core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,pcVar8,0);
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
        local_24 = g_CurrentGameTime -
                   *(int *)(in_stack_00000004->players[in_stack_00000004->local_player_index].
                            field5_0x38 + 8);
        fVar10 = (float)local_24 * (float)1.52587890625e-05;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        if ((float)30 < fVar10) {
          fVar10 = 30.0;
        }
        if ((float)0.20000000000000001 < fVar10) {
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
    acStack_128[0] = '\x01';
    acStack_128[1] = '\0';
    acStack_128[2] = '\0';
    acStack_128[3] = '\0';
    core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
    acStack_128[4] = -0x17;
    acStack_128[5] = '\x16';
    acStack_128[6] = 'T';
    acStack_128[7] = '\0';
    engine_2d_c_clearInputAndWait_FUN_00403260();
    g_ForceMessagePump = iStack_14;
  }
  return 0;
}
