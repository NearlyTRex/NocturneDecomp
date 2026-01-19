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
  int iVar5;
  CNetGame *pCVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  double dVar10;
  CNetGame *in_stack_00000004;
  uint uVar11;
  float fVar12;
  char *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  
  iVar4 = g_ForceMessagePump;
  if (in_stack_00000004->connection_type != 0) {
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
      iVar5 = crt_stdlib_c_rand_FUN_005feb5c();
      *(int *)(in_stack_00000004->field7_0x118 + 0x54) = iVar5;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
    }
    while (in_stack_00000004->connection_type != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffed0,"Mission: %s",in_stack_00000004->field7_0x118);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,0,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffed0,"MyGameSettigsId: %d",DAT_02f7c8c4);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,400,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fd0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fd0("gameSettings",500,0x21);
      g_ActiveRenderColor = 0xff;
      engine_2d_c_drawHLine_FUN_00402ee0(0,0x31,g_WindowWidth + -1);
      iVar5 = 0x37;
      local_24 = 0;
      for (local_20 = 0; local_20 < g_CNetGameInstance->player_count; local_20 = local_20 + 1) {
        local_1c = g_CNetGameInstance->players[0].name + local_24;
        engine_2d_c_drawText_FUN_00401fd0(local_1c,0,iVar5);
        if (*(uchar (*) [4])(local_1c + 0x1c) == g_AnyAddressIP) {
          pcVar7 = "(Local)";
          pcVar9 = &stack0xfffffed0;
          do {
            cVar1 = *pcVar7;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        else {
          support_trisock_cpp_formatIPAddress_FUN_005e17c0(local_1c + 0x1c,&stack0xfffffed0);
        }
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,100,iVar5);
        if (local_20 == g_CNetGameInstance->local_player_index) {
          pcVar9 = "(Local)";
LAB_005415cb:
          pcVar7 = &stack0xfffffed0;
          do {
            cVar1 = *pcVar9;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        else {
          if (*(float *)(local_1c + 0x28) < 0.0) {
            pcVar9 = "?";
            goto LAB_005415cb;
          }
          uVar11 = 0x541739;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)(*(float *)(local_1c + 0x28) * _DAT_0063da45));
          local_1c = (char *)(int)ROUND(dVar10);
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffecc,"%dms",local_1c,uVar11);
        }
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,200,iVar5);
        if (*(int *)(local_1c + 0x44) == 0) {
          pcVar9 = "Not ready";
        }
        else {
          pcVar9 = "Ready";
        }
        pcVar7 = &stack0xfffffed0;
        do {
          cVar1 = *pcVar9;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,300,iVar5);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffed0,"%d",*(uint *)(local_1c + 0x14));
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,400,iVar5);
        if (in_stack_00000004->connection_type == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffed0,"%d",*(int *)(local_1c + 0x34));
          engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,500,iVar5);
        }
        iVar5 = iVar5 + 0xb;
        local_24 = local_24 + 0x78;
      }
      iVar5 = iVar5 + 0x2c;
      iVar8 = (g_ChatHistoryCount - (g_WindowHeight - iVar5) / 0xb) + 1;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      local_28 = g_ChatHistory[iVar8].field0_0x0 + 0x20;
      pcVar9 = g_ChatHistory[iVar8].field0_0x0 + 0xc;
      for (; iVar8 < g_ChatHistoryCount; iVar8 = iVar8 + 1) {
        engine_2d_c_drawText_FUN_00401fd0(pcVar9,0,iVar5);
        engine_2d_c_drawText_FUN_00401fd0(local_28,100,iVar5);
        pcVar9 = pcVar9 + 0x120;
        local_28 = local_28 + 0x120;
        iVar5 = iVar5 + 0xb;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(in_stack_00000004);
      iVar5 = 0;
      pCVar6 = in_stack_00000004;
      if (0 < in_stack_00000004->player_count) {
        do {
          pCVar6->players[0].field5_0x38[0x10] = '\0';
          pCVar6->players[0].field5_0x38[0x11] = '\0';
          pCVar6->players[0].field5_0x38[0x12] = '\0';
          pCVar6->players[0].field5_0x38[0x13] = '\0';
          iVar5 = iVar5 + 1;
          pCVar6 = (CNetGame *)(pCVar6->players[0].field5_0x38 + 0x20);
        } while (iVar5 < in_stack_00000004->player_count);
      }
      iVar5 = in_stack_00000004->connection_type;
      in_stack_00000004->field7_0x118[0x50] = '\0';
      in_stack_00000004->field7_0x118[0x51] = '\0';
      in_stack_00000004->field7_0x118[0x52] = '\0';
      in_stack_00000004->field7_0x118[0x53] = '\0';
      if (iVar5 == 1) {
        in_stack_00000004->players[in_stack_00000004->local_player_index].player_id = DAT_02f7c8c4;
        iVar5 = 0;
        bVar2 = true;
        pCVar6 = in_stack_00000004;
        if (0 < in_stack_00000004->player_count) {
          do {
            if (*(int *)(pCVar6->players[0].field5_0x38 + 0xc) == 0) {
              bVar2 = false;
            }
            if (DAT_02f7c8c4 != pCVar6->players[0].player_id) {
              fVar12 = (float)(int)(g_CurrentGameTime - *(int *)pCVar6->players[0].field5_0x38) *
                       (float)1.52587890625e-05;
              if (fVar12 < 0.0) {
                fVar12 = 0.0;
              }
              if ((float)30 < fVar12) {
                fVar12 = 30.0;
              }
              if ((float)0.20000000000000001 < fVar12) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0();
              }
              bVar2 = false;
            }
            iVar5 = iVar5 + 1;
            pCVar6 = (CNetGame *)(pCVar6->players[0].field5_0x38 + 0x20);
          } while (iVar5 < in_stack_00000004->player_count);
        }
        if ((bVar2) && (1 < in_stack_00000004->player_count)) {
          in_stack_00000004->network_mode = 2;
          engine_2d_c_clearInputAndWait_FUN_00403260();
          iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,1);
          if (iVar5 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Loading %s");
            crt_stdlib_c_srand_FUN_005feb80(*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
            core_actor_cpp_setRandomSeed_FUN_0040cb90
                      (*(uint *)(in_stack_00000004->field7_0x118 + 0x54));
            core_mission_cpp_CDemonMission_load_FUN_00522d90
                      (g_CDemonMissionPtr,in_stack_00000004->field7_0x118,0);
            iVar5 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
            if (iVar5 != 0) {
              core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
              iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,2);
              if (iVar5 != 0) {
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
        iVar5 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
          iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,2);
          if (iVar5 != 0) {
            iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar5 = iVar4 / 0x12 - g_LastPingTime;
            g_LastPingTime = iVar4 / 0x12;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            else if (0x20000 < iVar5) {
              iVar5 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar5;
            DAT_02f7c8c8 = g_CurrentGameTime - 0x1e0000;
            return 1;
          }
        }
        in_stack_00000004->network_mode = 1;
        goto LAB_005416d1;
      }
      if ((in_stack_00000004->connection_type == 2) && (DAT_00680a04 != 0)) {
        fVar12 = (float)(int)(g_CurrentGameTime -
                             *(int *)(in_stack_00000004->players
                                      [in_stack_00000004->local_player_index].field5_0x38 + 8)) *
                 (float)1.52587890625e-05;
        if (fVar12 < 0.0) {
          fVar12 = 0.0;
        }
        if ((float)30 < fVar12) {
          fVar12 = 30.0;
        }
        if ((float)0.20000000000000001 < fVar12) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
      }
      iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar5 != 0) goto LAB_005416d1;
      iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
      if (iVar5 != 0) {
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
      iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
      if ((iVar5 != 0) &&
         (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Send chat",&DAT_02f7c640,0x100,1),
         iVar5 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40();
      }
      for (iVar5 = 0; iVar5 < g_CNetGameInstance->player_count; iVar5 = iVar5 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(in_stack_00000004,iVar5,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_005416d1:
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  g_ForceMessagePump = iVar4;
  return 0;
}
