// Name: core_netgame.cpp_FUN_00541390
// Address: 00541390
// Address Range: [[00541390, 00541c77]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00541390()
// Cross-references:
//   core_game.cpp_FUN_004e2f10 (004e2f10) at 004e2f64 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2fc0 (004e2fc0) at 004e3031 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_You_have_been_disconnect_0063d983
//   TerminatedCString s_Mission_s_0063d9ad
//   TerminatedCString s_MyGameSettigsId_d_0063d9b9
//   TerminatedCString s_Player_0063d9cd
//   TerminatedCString s_IP_0063d9d4
//   TerminatedCString s_Ping_0063d9d7
//   TerminatedCString s_Ready_0063d9dc
//   TerminatedCString s_heroType_0063d9e2
//   TerminatedCString s_gameSettings_0063d9eb
//   TerminatedCString s_Local_0063d9f8
//   undefined4 s_Local)_0063d9f9
//   undefined4 s_ocal)_0063d9fa
//   undefined4 s_cal)_0063d9fb
//   TerminatedCString s_Local_0063da00
//   undefined4 s_Local)_0063da01
//   undefined4 s_ocal)_0063da02
//   undefined4 s_cal)_0063da03
//   TerminatedCString s_dms_0063da08
//   TerminatedCString s_anon_0063da0d
//   undefined4 s__0063da0e
//   TerminatedCString s_Ready_0063da0f
//   undefined4 s_eady_0063da10
//   undefined4 s_ady_0063da11
//   undefined4 s_dy_0063da12
//   TerminatedCString s_Not_ready_0063da15
//   undefined4 s_ot_ready_0063da16
//   TerminatedCString s_d_0063da1f
//   TerminatedCString s_d_0063da22
//   TerminatedCString s_Loading_s_0063da25
//   TerminatedCString s_Loading_s_0063da30
//   TerminatedCString s_Send_chat_0063da3b
//   undefined4 DAT_0063da45
//   double DOUBLE_0063da4d = 0.0000152587890625
//   double DOUBLE_0063da55 = 30
//   double DOUBLE_0063da5d = 0.200000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   undefined4 DAT_00680a04
//   int g_ForceMessagePump = 0x1
//   CEditorTools g_CEditorToolsPtr
//   int g_ActiveRenderColor
//   void* g_CKeysPtr
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c640
//   undefined4 DAT_02f7c75c
//   undefined4 DAT_02f7c774
//   undefined4 DAT_02f7c77c
//   undefined4 DAT_02f7c788
//   undefined4 DAT_02f7c794
//   undefined4 DAT_02f7c7a4
//   undefined4 DAT_02f7c854
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8c4
//   undefined4 DAT_02f7c8c8
//   int g_ChatHistoryCount
//   SChatHistory[400] g_ChatHistory
//   undefined4 DAT_02f7c8dc
//   undefined4 DAT_02f7c8f0
//   uchar[4] g_AnyAddressIP
// Function calls:
//   core_actor.cpp_setRandomSeed_FUN_0040cb90
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   core_mission.cpp_CDemonMission_FUN_00524760
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
//   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_rand_FUN_005feb5c
//   crt_stdlib.c_srand_FUN_005feb80
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   support_trisock.cpp_formatIPAddress_FUN_005e17c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 core_netgame_cpp_FUN_00541390(void)

{
  char cVar1;
  bool bVar2;
  SNetPlayer *pSVar3;
  int iVar4;
  int iVar5;
  CNetGame *pCVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CNetGame *in_stack_00000004;
  float fVar10;
  char acStack_128 [4];
  undefined4 uStack_70;
  char *pcStack_58;
  char *pcStack_3c;
  int iStack_38;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  
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
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe8c,"Mission: %s",uStack_70);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe90,0,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe94,"MyGameSettigsId: %d",DAT_02f7c8c4);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe98,400,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fd0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fd0("gameSettings",500,0x21);
      g_ActiveRenderColor = 0xff;
      engine_2d_c_drawHLine_FUN_00402ee0(0,0x31,g_WindowWidth + -1);
      iVar5 = 0x37;
      pcStack_3c = (char *)0x0;
      for (iStack_38 = 0; iStack_38 < g_CNetGameInstance->player_count; iStack_38 = iStack_38 + 1) {
        engine_2d_c_drawText_FUN_00401fd0(pcStack_3c + (int)g_CNetGameInstance->players,0,iVar5);
        if (*(uchar (*) [4])(iVar4 + 0x1c) == g_AnyAddressIP) {
          pcVar7 = "(Local)";
          pcVar9 = &stack0xfffffebc;
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
          support_trisock_cpp_formatIPAddress_FUN_005e17c0((char *)(iVar4 + 0x1c),&stack0xfffffebc);
        }
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffec0,100,iVar5);
        if (local_2c == g_CNetGameInstance->local_player_index) {
          pcVar9 = "(Local)";
LAB_005415cb:
          pcVar7 = &stack0xfffffec4;
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
          if (*(float *)(local_28 + 0x28) < 0.0) {
            pcVar9 = "?";
            goto LAB_005415cb;
          }
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_2c,local_28));
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec8,"%dms");
        }
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffecc,200,iVar5);
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
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffed4,"%d");
        engine_2d_c_drawText_FUN_00401fd0(acStack_128,400,iVar5);
        if (in_stack_00000004->connection_type == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffedc,"%d");
          engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffee0,500,iVar5);
        }
        iVar5 = iVar5 + 0xb;
        pcStack_3c = pcStack_3c + 0x78;
      }
      iVar5 = iVar5 + 0x2c;
      iVar8 = (g_ChatHistoryCount - (g_WindowHeight - iVar5) / 0xb) + 1;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      pcVar9 = g_ChatHistory[iVar8].field0_0x0 + 0xc;
      for (; iVar8 < g_ChatHistoryCount; iVar8 = iVar8 + 1) {
        engine_2d_c_drawText_FUN_00401fd0(pcVar9,0,iVar5);
        engine_2d_c_drawText_FUN_00401fd0(pcStack_3c,100,iVar5);
        pcVar9 = pcVar9 + 0x120;
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
              local_28 = g_CurrentGameTime - *(int *)pCVar6->players[0].field5_0x38;
              fVar10 = (float)local_28 * (float)DOUBLE_0063da4d;
              if (fVar10 < 0.0) {
                fVar10 = 0.0;
              }
              if ((float)DOUBLE_0063da55 < fVar10) {
                fVar10 = 30.0;
              }
              if ((float)DOUBLE_0063da5d < fVar10) {
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
            core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,pcStack_58,0);
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
        iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
        if (iVar4 != 0) {
          core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
          iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(in_stack_00000004,2);
          if (iVar4 != 0) {
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
        local_28 = g_CurrentGameTime -
                   *(int *)(in_stack_00000004->players[in_stack_00000004->local_player_index].
                            field5_0x38 + 8);
        fVar10 = (float)local_28 * (float)DOUBLE_0063da4d;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        if ((float)DOUBLE_0063da55 < fVar10) {
          fVar10 = 30.0;
        }
        if ((float)DOUBLE_0063da5d < fVar10) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
      }
      iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
      if (iVar5 != 0) goto LAB_005416d1;
      iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
      if (iVar5 != 0) {
        *(uint *)(in_stack_00000004->players[in_stack_00000004->local_player_index].field5_0x38 +
                 0xc) =
             (uint)(*(int *)(in_stack_00000004->players[in_stack_00000004->local_player_index].
                             field5_0x38 + 0xc) == 0);
        if (in_stack_00000004->connection_type == 1) {
          acStack_128[0] = -0x18;
          acStack_128[1] = '\x1a';
          acStack_128[2] = 'T';
          acStack_128[3] = '\0';
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
        }
        else {
          builtin_strncpy(acStack_128,"4\x1cT",4);
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
      }
      acStack_128[0] = -8;
      acStack_128[1] = '\x1a';
      acStack_128[2] = 'T';
      acStack_128[3] = '\0';
      iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
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
    acStack_128[0] = -0x17;
    acStack_128[1] = '\x16';
    acStack_128[2] = 'T';
    acStack_128[3] = '\0';
    engine_2d_c_clearInputAndWait_FUN_00403260();
    g_ForceMessagePump = local_18;
  }
  return 0;
}


// Assembly code:
// 00541390: PUSH EBX
//   Label: core_netgame.cpp_FUN_00541390
// 00541391: PUSH ESI
// 00541392: PUSH EDI
// 00541393: PUSH EBP
// 00541394: MOV EBP,ESP
// 00541396: SUB ESP,0x124
// 0054139c: AND ESP,0xfffffff8
// 0054139f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005413a2: CMP dword ptr [EAX],0x0
// 005413a5: JZ 0x005416f5
//   XREF to: 005416f5 (CONDITIONAL_JUMP)
// 005413ab: MOV EAX,[0x006849a8]
//   XREF to: 006849a8 (READ)
// 005413b0: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005413b7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005413ba: MOV EAX,dword ptr [EAX + 0x114]
// 005413c0: SHL EAX,0x3
// 005413c3: MOV EDX,EAX
// 005413c5: SHL EAX,0x4
// 005413c8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005413cb: SUB EAX,EDX
// 005413cd: ADD EAX,EBX
// 005413cf: MOV dword ptr [EAX + 0x5c],0x1
// 005413d6: MOV EAX,dword ptr [EBX + 0x114]
// 005413dc: SHL EAX,0x3
// 005413df: MOV EDX,EAX
// 005413e1: SHL EAX,0x4
// 005413e4: SUB EAX,EDX
// 005413e6: ADD EAX,EBX
// 005413e8: XOR ECX,ECX
// 005413ea: MOV dword ptr [EAX + 0x64],ECX
// 005413ed: MOV dword ptr [0x006849a8],ECX
//   XREF to: 006849a8 (WRITE)
// 005413f3: MOV EDI,dword ptr [EBX]
// 005413f5: MOV dword ptr [EBX + 0x4],0x1
// 005413fc: CMP EDI,0x1
// 005413ff: JZ 0x005416a7
//   XREF to: 005416a7 (CONDITIONAL_JUMP)
// 00541405: PUSH EBX
// 00541406: CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
//   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
// 0054140b: ADD ESP,0x4
//   Label: LAB_0054140b
// 0054140e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541411: ADD EAX,0x118
// 00541416: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0054141d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054141d
//   XREF to: Stack[0x4] (READ)
// 00541420: CMP dword ptr [EAX],0x0
// 00541423: JZ 0x005416bd
//   XREF to: 005416bd (CONDITIONAL_JUMP)
// 00541429: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0054142e: MOV EBX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 00541435: PUSH EBX
// 00541436: PUSH 0x63d9ad
//   XREF to: 0063d9ad (DATA)
// 0054143b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 0054143f: PUSH EAX
// 00541440: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00541445: ADD ESP,0xc
// 00541448: PUSH 0xb
// 0054144a: PUSH 0x0
// 0054144c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 00541450: PUSH EAX
// 00541451: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00541456: ADD ESP,0xc
// 00541459: MOV ESI,dword ptr [0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 0054145f: PUSH ESI
// 00541460: PUSH 0x63d9b9
//   XREF to: 0063d9b9 (DATA)
// 00541465: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 00541469: PUSH EAX
// 0054146a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054146f: ADD ESP,0xc
// 00541472: PUSH 0xb
// 00541474: PUSH 0x190
// 00541479: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 0054147d: PUSH EAX
// 0054147e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00541483: ADD ESP,0xc
// 00541486: PUSH 0x21
// 00541488: PUSH 0x0
// 0054148a: PUSH 0x63d9cd
//   XREF to: 0063d9cd (DATA)
// 0054148f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00541494: ADD ESP,0xc
// 00541497: PUSH 0x21
// 00541499: PUSH 0x64
// 0054149b: PUSH 0x63d9d4
//   XREF to: 0063d9d4 (DATA)
// 005414a0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005414a5: ADD ESP,0xc
// 005414a8: PUSH 0x21
// 005414aa: PUSH 0xc8
// 005414af: PUSH 0x63d9d7
//   XREF to: 0063d9d7 (DATA)
// 005414b4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005414b9: ADD ESP,0xc
// 005414bc: PUSH 0x21
// 005414be: PUSH 0x12c
// 005414c3: PUSH 0x63d9dc
//   XREF to: 0063d9dc (DATA)
// 005414c8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005414cd: ADD ESP,0xc
// 005414d0: PUSH 0x21
// 005414d2: PUSH 0x190
// 005414d7: PUSH 0x63d9e2
//   XREF to: 0063d9e2 (DATA)
// 005414dc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005414e1: ADD ESP,0xc
// 005414e4: PUSH 0x21
// 005414e6: PUSH 0x1f4
// 005414eb: PUSH 0x63d9eb
//   XREF to: 0063d9eb (DATA)
// 005414f0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005414f5: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005414fa: ADD ESP,0xc
// 005414fd: DEC EAX
// 005414fe: PUSH EAX
// 005414ff: PUSH 0x31
// 00541501: MOV EDI,0xff
// 00541506: PUSH 0x0
// 00541508: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 0054150e: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 00541513: ADD ESP,0xc
// 00541516: XOR EAX,EAX
// 00541518: MOV EBX,0x37
// 0054151d: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00541524: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0054152b: MOV ESI,dword ptr [0x00680a00]
//   Label: LAB_0054152b
//   XREF to: 00680a00 (READ)
// 00541531: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x20] (READ)
// 00541538: CMP EAX,dword ptr [ESI + 0x1c]
//   XREF to: 02f7c75c (READ)
// 0054153b: JGE 0x005417a8
//   XREF to: 005417a8 (CONDITIONAL_JUMP)
// 00541541: PUSH EBX
// 00541542: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x24] (READ)
// 00541549: ADD ESI,0x20
// 0054154c: PUSH 0x0
// 0054154e: ADD EAX,ESI
// 00541550: PUSH EAX
// 00541551: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00541558: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054155d: ADD ESP,0xc
// 00541560: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 00541567: MOV EDX,dword ptr [0x03f87498]
//   XREF to: 03f87498 (READ)
// 0054156d: MOV EAX,dword ptr [ESI + 0x1c]
//   XREF to: 02f7c77c (DATA)
// 00541570: ADD ESI,0x1c
// 00541573: CMP EAX,EDX
// 00541575: JNZ 0x005416fe
//   XREF to: 005416fe (CONDITIONAL_JUMP)
// 0054157b: MOV ESI,0x63d9f8
//   XREF to: 0063d9f8 (DATA)
// 00541580: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x130] (DATA)
// 00541584: PUSH EDI
// 00541585: MOV AL,byte ptr [ESI]
//   Label: LAB_00541585
//   XREF to: 0063d9f8 (READ)
//   XREF to: 0063d9fa (READ)
// 00541587: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x130] (DATA)
// 00541589: CMP AL,0x0
// 0054158b: JZ 0x0054159d
//   XREF to: 0054159d (CONDITIONAL_JUMP)
// 0054158d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063d9f9 (READ)
//   XREF to: 0063d9fb (READ)
// 00541590: ADD ESI,0x2
// 00541593: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x12f] (WRITE)
// 00541596: ADD EDI,0x2
// 00541599: CMP AL,0x0
// 0054159b: JNZ 0x00541585
//   XREF to: 00541585 (CONDITIONAL_JUMP)
// 0054159d: POP EDI
//   Label: LAB_0054159d
// 0054159e: PUSH EBX
//   Label: LAB_0054159e
// 0054159f: PUSH 0x64
// 005415a1: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 005415a5: PUSH EAX
// 005415a6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005415ab: ADD ESP,0xc
// 005415ae: MOV EAX,[0x00680a00]
//   XREF to: 00680a00 (READ)
// 005415b3: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x20] (READ)
// 005415ba: CMP EDX,dword ptr [EAX + 0x114]
//   XREF to: 02f7c854 (READ)
// 005415c0: JNZ 0x00541711
//   XREF to: 00541711 (CONDITIONAL_JUMP)
// 005415c6: MOV ESI,0x63da00
//   XREF to: 0063da00 (DATA)
// 005415cb: LEA EDI,[ESP + 0x8]
//   Label: LAB_005415cb
//   XREF to: Stack[-0x130] (DATA)
// 005415cf: PUSH EDI
// 005415d0: MOV AL,byte ptr [ESI]
//   Label: LAB_005415d0
//   XREF to: 0063da00 (READ)
//   XREF to: 0063da02 (READ)
//   XREF to: 0063da0d (READ)
// 005415d2: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x130] (DATA)
// 005415d4: CMP AL,0x0
// 005415d6: JZ 0x005415e8
//   XREF to: 005415e8 (CONDITIONAL_JUMP)
// 005415d8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063da01 (READ)
//   XREF to: 0063da03 (READ)
//   XREF to: 0063da0e (READ)
// 005415db: ADD ESI,0x2
// 005415de: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x12f] (WRITE)
// 005415e1: ADD EDI,0x2
// 005415e4: CMP AL,0x0
// 005415e6: JNZ 0x005415d0
//   XREF to: 005415d0 (CONDITIONAL_JUMP)
// 005415e8: POP EDI
//   Label: LAB_005415e8
// 005415e9: PUSH EBX
//   Label: LAB_005415e9
// 005415ea: PUSH 0xc8
// 005415ef: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 005415f3: PUSH EAX
// 005415f4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005415f9: ADD ESP,0xc
// 005415fc: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 00541603: CMP dword ptr [EAX + 0x44],0x0
//   XREF to: 02f7c7a4 (DATA)
// 00541607: JZ 0x00541769
//   XREF to: 00541769 (CONDITIONAL_JUMP)
// 0054160d: MOV ESI,0x63da0f
//   XREF to: 0063da0f (DATA)
// 00541612: LEA EDI,[ESP + 0x8]
//   Label: LAB_00541612
//   XREF to: Stack[-0x130] (DATA)
// 00541616: PUSH EDI
// 00541617: MOV AL,byte ptr [ESI]
//   Label: LAB_00541617
//   XREF to: 0063da0f (READ)
//   XREF to: 0063da11 (READ)
//   XREF to: 0063da15 (READ)
// 00541619: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x130] (DATA)
// 0054161b: CMP AL,0x0
// 0054161d: JZ 0x0054162f
//   XREF to: 0054162f (CONDITIONAL_JUMP)
// 0054161f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063da10 (READ)
//   XREF to: 0063da12 (READ)
//   XREF to: 0063da16 (READ)
// 00541622: ADD ESI,0x2
// 00541625: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x12f] (WRITE)
// 00541628: ADD EDI,0x2
// 0054162b: CMP AL,0x0
// 0054162d: JNZ 0x00541617
//   XREF to: 00541617 (CONDITIONAL_JUMP)
// 0054162f: POP EDI
//   Label: LAB_0054162f
// 00541630: PUSH EBX
// 00541631: PUSH 0x12c
// 00541636: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 0054163a: PUSH EAX
// 0054163b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00541640: ADD ESP,0xc
// 00541643: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 0054164a: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02f7c774 (DATA)
// 0054164d: PUSH EDX
// 0054164e: PUSH 0x63da1f
//   XREF to: 0063da1f (DATA)
// 00541653: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 00541657: PUSH EAX
// 00541658: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054165d: ADD ESP,0xc
// 00541660: PUSH EBX
// 00541661: PUSH 0x190
// 00541666: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 0054166a: PUSH EAX
// 0054166b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00541670: ADD ESP,0xc
// 00541673: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541676: CMP dword ptr [EAX],0x1
// 00541679: JZ 0x00541773
//   XREF to: 00541773 (CONDITIONAL_JUMP)
// 0054167f: MOV EDI,dword ptr [ESP + 0x114]
//   Label: LAB_0054167f
//   XREF to: Stack[-0x24] (READ)
// 00541686: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x20] (READ)
// 0054168d: ADD EBX,0xb
// 00541690: ADD EDI,0x78
// 00541693: INC EAX
// 00541694: MOV dword ptr [ESP + 0x114],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0054169b: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005416a2: JMP 0x0054152b
//   XREF to: 0054152b (UNCONDITIONAL_JUMP)
// 005416a7: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_005416a7
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005416ac: PUSH EBX
// 005416ad: MOV dword ptr [EBX + 0x16c],EAX
// 005416b3: CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
// 005416b8: JMP 0x0054140b
//   XREF to: 0054140b (UNCONDITIONAL_JUMP)
// 005416bd: PUSH 0x63d983
//   Label: LAB_005416bd
//   XREF to: 0063d983 (DATA)
// 005416c2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005416c8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005416c9: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005416ce: ADD ESP,0x8
// 005416d1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_005416d1
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005416d6: PUSH 0x1
// 005416d8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005416db: PUSH EBX
// 005416dc: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 005416e1: ADD ESP,0x8
// 005416e4: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005416e9: MOV EAX,dword ptr [ESP + 0x108]
// 005416f0: MOV [0x006849a8],EAX
//   XREF to: 006849a8 (WRITE)
// 005416f5: XOR EAX,EAX
//   Label: LAB_005416f5
// 005416f7: MOV ESP,EBP
// 005416f9: POP EBP
// 005416fa: POP EDI
// 005416fb: POP ESI
// 005416fc: POP EBX
// 005416fd: RET
// 005416fe: LEA EAX,[ESP + 0x8]
//   Label: LAB_005416fe
//   XREF to: Stack[-0x130] (DATA)
// 00541702: PUSH EAX
// 00541703: PUSH ESI
// 00541704: CALL support_trisock.cpp_formatIPAddress_FUN_005e17c0
//   XREF to: 005e17c0 (UNCONDITIONAL_CALL)
// 00541709: ADD ESP,0x8
// 0054170c: JMP 0x0054159e
//   XREF to: 0054159e (UNCONDITIONAL_JUMP)
// 00541711: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_00541711
//   XREF to: Stack[-0x1c] (READ)
// 00541718: FLD float ptr [EAX + 0x28]
//   XREF to: 02f7c788 (DATA)
// 0054171b: FLDZ
// 0054171d: FCOMPP
// 0054171f: FNSTSW AX
// 00541721: SAHF
// 00541722: JA 0x0054175f
//   XREF to: 0054175f (CONDITIONAL_JUMP)
// 00541724: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 0054172b: FLD float ptr [EAX + 0x28]
//   XREF to: 02f7c788 (DATA)
// 0054172e: FMUL float ptr [0x0063da45]
//   XREF to: 0063da45 (READ)
// 00541734: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00541739: FISTP dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x18] (WRITE)
// 00541740: MOV ESI,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x18] (READ)
// 00541747: PUSH ESI
// 00541748: PUSH 0x63da08
//   XREF to: 0063da08 (DATA)
// 0054174d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 00541751: PUSH EAX
// 00541752: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00541757: ADD ESP,0xc
// 0054175a: JMP 0x005415e9
//   XREF to: 005415e9 (UNCONDITIONAL_JUMP)
// 0054175f: MOV ESI,0x63da0d
//   Label: LAB_0054175f
//   XREF to: 0063da0d (DATA)
// 00541764: JMP 0x005415cb
//   XREF to: 005415cb (UNCONDITIONAL_JUMP)
// 00541769: MOV ESI,0x63da15
//   Label: LAB_00541769
//   XREF to: 0063da15 (DATA)
// 0054176e: JMP 0x00541612
//   XREF to: 00541612 (UNCONDITIONAL_JUMP)
// 00541773: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_00541773
//   XREF to: Stack[-0x1c] (READ)
// 0054177a: MOV ESI,dword ptr [EAX + 0x34]
//   XREF to: 02f7c794 (DATA)
// 0054177d: PUSH ESI
// 0054177e: PUSH 0x63da22
//   XREF to: 0063da22 (DATA)
// 00541783: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 00541787: PUSH EAX
// 00541788: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054178d: ADD ESP,0xc
// 00541790: PUSH EBX
// 00541791: PUSH 0x1f4
// 00541796: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 0054179a: PUSH EAX
// 0054179b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005417a0: ADD ESP,0xc
// 005417a3: JMP 0x0054167f
//   XREF to: 0054167f (UNCONDITIONAL_JUMP)
// 005417a8: MOV EDX,dword ptr [0x00679398]
//   Label: LAB_005417a8
//   XREF to: 00679398 (READ)
// 005417ae: ADD EBX,0x2c
// 005417b1: SUB EDX,EBX
// 005417b3: MOV ESI,0xb
// 005417b8: MOV EAX,EDX
// 005417ba: SAR EDX,0x1f
// 005417bd: IDIV ESI
// 005417bf: MOV ESI,dword ptr [0x02f7c8cc]
//   XREF to: 02f7c8cc (READ)
// 005417c5: SUB ESI,EAX
// 005417c7: INC ESI
// 005417c8: TEST ESI,ESI
// 005417ca: JL 0x00541831
//   XREF to: 00541831 (CONDITIONAL_JUMP)
// 005417cc: IMUL EDI,ESI,0x120
//   Label: LAB_005417cc
// 005417d2: LEA EAX,[EDI + 0x20]
// 005417d5: ADD EAX,0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 005417da: ADD EDI,0xc
// 005417dd: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: 02f7c8f0 (DATA)
//   XREF to: Stack[-0x28] (WRITE)
// 005417e4: ADD EDI,0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 005417ea: CMP ESI,dword ptr [0x02f7c8cc]
//   Label: LAB_005417ea
//   XREF to: 02f7c8cc (READ)
// 005417f0: JGE 0x00541835
//   XREF to: 00541835 (CONDITIONAL_JUMP)
// 005417f2: PUSH EBX
// 005417f3: PUSH 0x0
// 005417f5: PUSH EDI
//   XREF to: 02f7c8dc (DATA)
// 005417f6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005417fb: ADD ESP,0xc
// 005417fe: PUSH EBX
// 005417ff: PUSH 0x64
// 00541801: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x28] (READ)
// 00541808: PUSH EAX
// 00541809: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054180e: ADD ESP,0xc
// 00541811: INC ESI
// 00541812: MOV EDX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 00541819: ADD EDI,0x120
// 0054181f: ADD EDX,0x120
// 00541825: ADD EBX,0xb
// 00541828: MOV dword ptr [ESP + 0x110],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0054182f: JMP 0x005417ea
//   XREF to: 005417ea (UNCONDITIONAL_JUMP)
// 00541831: XOR ESI,ESI
//   Label: LAB_00541831
// 00541833: JMP 0x005417cc
//   XREF to: 005417cc (UNCONDITIONAL_JUMP)
// 00541835: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00541835
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0054183a: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054183d: PUSH ECX
// 0054183e: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 00541843: ADD ESP,0x4
// 00541846: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541849: MOV ESI,dword ptr [EAX + 0x1c]
// 0054184c: XOR EBX,EBX
// 0054184e: TEST ESI,ESI
// 00541850: JLE 0x00541869
//   XREF to: 00541869 (CONDITIONAL_JUMP)
// 00541852: MOV ESI,EAX
// 00541854: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541857: MOV dword ptr [ESI + 0x68],0x0
//   Label: LAB_00541857
// 0054185e: INC EBX
// 0054185f: MOV ECX,dword ptr [EAX + 0x1c]
// 00541862: ADD ESI,0x78
// 00541865: CMP EBX,ECX
// 00541867: JL 0x00541857
//   XREF to: 00541857 (CONDITIONAL_JUMP)
// 00541869: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00541869
//   XREF to: Stack[0x4] (READ)
// 0054186c: MOV EBX,dword ptr [EAX]
// 0054186e: MOV dword ptr [EAX + 0x168],0x0
// 00541878: CMP EBX,0x1
// 0054187b: JNZ 0x005419f7
//   XREF to: 005419f7 (CONDITIONAL_JUMP)
// 00541881: IMUL EAX,dword ptr [EAX + 0x114],0x78
// 00541888: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054188b: ADD EDX,EAX
// 0054188d: MOV EAX,[0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 00541892: MOV dword ptr [EDX + 0x54],EAX
// 00541895: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541898: XOR ESI,ESI
// 0054189a: MOV EDI,dword ptr [EDX + 0x1c]
// 0054189d: MOV EAX,EBX
// 0054189f: TEST EDI,EDI
// 005418a1: JLE 0x00541932
//   XREF to: 00541932 (CONDITIONAL_JUMP)
// 005418a7: MOV EBX,EDX
// 005418a9: CMP dword ptr [EBX + 0x64],0x0
//   Label: LAB_005418a9
// 005418ad: JZ 0x00541b28
//   XREF to: 00541b28 (CONDITIONAL_JUMP)
// 005418b3: MOV EDX,dword ptr [0x02f7c8c4]
//   Label: LAB_005418b3
//   XREF to: 02f7c8c4 (READ)
// 005418b9: CMP EDX,dword ptr [EBX + 0x54]
// 005418bc: JZ 0x00541920
//   XREF to: 00541920 (CONDITIONAL_JUMP)
// 005418be: MOV EDX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 005418c4: MOV EAX,dword ptr [EBX + 0x58]
// 005418c7: SUB EDX,EAX
// 005418c9: MOV dword ptr [ESP + 0x120],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005418d0: FILD dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x18] (READ)
// 005418d7: FMUL double ptr [0x0063da4d]
//   XREF to: 0063da4d (READ)
// 005418dd: FST float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 005418e0: FLDZ
// 005418e2: FCOMPP
// 005418e4: FNSTSW AX
// 005418e6: SAHF
// 005418e7: JBE 0x005418ee
//   XREF to: 005418ee (CONDITIONAL_JUMP)
// 005418e9: XOR ECX,ECX
// 005418eb: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x138] (DATA)
// 005418ee: FLD float ptr [ESP]
//   Label: LAB_005418ee
//   XREF to: Stack[-0x138] (DATA)
// 005418f1: FCOMP double ptr [0x0063da55]
//   XREF to: 0063da55 (READ)
// 005418f7: FNSTSW AX
// 005418f9: SAHF
// 005418fa: JBE 0x00541903
//   XREF to: 00541903 (CONDITIONAL_JUMP)
// 005418fc: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0x138] (DATA)
// 00541903: FLD float ptr [ESP]
//   Label: LAB_00541903
//   XREF to: Stack[-0x138] (DATA)
// 00541906: FCOMP double ptr [0x0063da5d]
//   XREF to: 0063da5d (READ)
// 0054190c: FNSTSW AX
// 0054190e: SAHF
// 0054190f: JBE 0x0054191e
//   XREF to: 0054191e (CONDITIONAL_JUMP)
// 00541911: PUSH ESI
// 00541912: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541915: PUSH EAX
// 00541916: CALL core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
//   XREF to: 00542dd0 (UNCONDITIONAL_CALL)
// 0054191b: ADD ESP,0x8
// 0054191e: XOR EAX,EAX
//   Label: LAB_0054191e
// 00541920: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00541920
//   XREF to: Stack[0x4] (READ)
// 00541923: INC ESI
// 00541924: MOV ECX,dword ptr [EDX + 0x1c]
// 00541927: ADD EBX,0x78
// 0054192a: CMP ESI,ECX
// 0054192c: JL 0x005418a9
//   XREF to: 005418a9 (CONDITIONAL_JUMP)
// 00541932: TEST EAX,EAX
//   Label: LAB_00541932
// 00541934: JZ 0x005419f7
//   XREF to: 005419f7 (CONDITIONAL_JUMP)
// 0054193a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054193d: CMP dword ptr [EAX + 0x1c],0x1
// 00541941: JLE 0x005419f7
//   XREF to: 005419f7 (CONDITIONAL_JUMP)
// 00541947: MOV dword ptr [EAX + 0x4],0x2
// 0054194e: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00541953: PUSH 0x1
// 00541955: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541958: PUSH ESI
// 00541959: CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   XREF to: 005401e0 (UNCONDITIONAL_CALL)
// 0054195e: ADD ESP,0x8
// 00541961: TEST EAX,EAX
// 00541963: JZ 0x005419ed
//   XREF to: 005419ed (CONDITIONAL_JUMP)
// 00541969: MOV EDI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 00541970: PUSH EDI
// 00541971: PUSH 0x63da25
//   XREF to: 0063da25 (DATA)
// 00541976: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0054197b: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0054197c: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00541981: ADD ESP,0xc
// 00541984: MOV EDX,dword ptr [ESI + 0x16c]
// 0054198a: PUSH EDX
// 0054198b: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 00541990: ADD ESP,0x4
// 00541993: MOV ECX,dword ptr [ESI + 0x16c]
// 00541999: PUSH ECX
// 0054199a: CALL core_actor.cpp_setRandomSeed_FUN_0040cb90
//   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
// 0054199f: ADD ESP,0x4
// 005419a2: PUSH 0x0
// 005419a4: PUSH EDI
// 005419a5: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005419ab: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 005419ac: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 005419b1: ADD ESP,0xc
// 005419b4: PUSH 0x0
// 005419b6: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005419bc: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 005419bd: CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   XREF to: 00524a80 (UNCONDITIONAL_CALL)
// 005419c2: ADD ESP,0x8
// 005419c5: TEST EAX,EAX
// 005419c7: JZ 0x005419ed
//   XREF to: 005419ed (CONDITIONAL_JUMP)
// 005419c9: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
//   XREF to: 02f33740 (PARAM)
// 005419ce: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 005419cf: CALL core_mission.cpp_CDemonMission_FUN_00524760
//   XREF to: 00524760 (UNCONDITIONAL_CALL)
// 005419d4: ADD ESP,0x4
// 005419d7: PUSH 0x2
// 005419d9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005419dc: PUSH EDX
// 005419dd: CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   XREF to: 005401e0 (UNCONDITIONAL_CALL)
// 005419e2: ADD ESP,0x8
// 005419e5: TEST EAX,EAX
// 005419e7: JNZ 0x00541b2f
//   XREF to: 00541b2f (CONDITIONAL_JUMP)
// 005419ed: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005419ed
//   XREF to: Stack[0x4] (READ)
// 005419f0: MOV dword ptr [EAX + 0x4],0x1
// 005419f7: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005419f7
//   XREF to: Stack[0x4] (READ)
// 005419fa: MOV EDX,dword ptr [EAX]
// 005419fc: CMP EDX,0x2
// 005419ff: JNZ 0x00541a0a
//   XREF to: 00541a0a (CONDITIONAL_JUMP)
// 00541a01: CMP EDX,dword ptr [EAX + 0x4]
// 00541a04: JZ 0x00541b3b
//   XREF to: 00541b3b (CONDITIONAL_JUMP)
// 00541a0a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00541a0a
//   XREF to: Stack[0x4] (READ)
// 00541a0d: CMP dword ptr [EAX],0x2
// 00541a10: JNZ 0x00541a8d
//   XREF to: 00541a8d (CONDITIONAL_JUMP)
// 00541a16: CMP dword ptr [0x00680a04],0x0
//   XREF to: 00680a04 (READ)
// 00541a1d: JZ 0x00541a8d
//   XREF to: 00541a8d (CONDITIONAL_JUMP)
// 00541a1f: IMUL EAX,dword ptr [EAX + 0x114],0x78
// 00541a26: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541a29: MOV EDX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541a2f: MOV EAX,dword ptr [EAX + 0x60]
// 00541a32: SUB EDX,EAX
// 00541a34: MOV dword ptr [ESP + 0x120],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00541a3b: FILD dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x18] (READ)
// 00541a42: FMUL double ptr [0x0063da4d]
//   XREF to: 0063da4d (READ)
// 00541a48: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x134] (WRITE)
// 00541a4c: FLDZ
// 00541a4e: FCOMPP
// 00541a50: FNSTSW AX
// 00541a52: SAHF
// 00541a53: JBE 0x00541a5b
//   XREF to: 00541a5b (CONDITIONAL_JUMP)
// 00541a55: XOR ECX,ECX
// 00541a57: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x134] (WRITE)
// 00541a5b: FLD float ptr [ESP + 0x4]
//   Label: LAB_00541a5b
//   XREF to: Stack[-0x134] (READ)
// 00541a5f: FCOMP double ptr [0x0063da55]
//   XREF to: 0063da55 (READ)
// 00541a65: FNSTSW AX
// 00541a67: SAHF
// 00541a68: JBE 0x00541a72
//   XREF to: 00541a72 (CONDITIONAL_JUMP)
// 00541a6a: MOV dword ptr [ESP + 0x4],0x41f00000
//   XREF to: Stack[-0x134] (WRITE)
// 00541a72: FLD float ptr [ESP + 0x4]
//   Label: LAB_00541a72
//   XREF to: Stack[-0x134] (READ)
// 00541a76: FCOMP double ptr [0x0063da5d]
//   XREF to: 0063da5d (READ)
// 00541a7c: FNSTSW AX
// 00541a7e: SAHF
// 00541a7f: JBE 0x00541a8d
//   XREF to: 00541a8d (CONDITIONAL_JUMP)
// 00541a81: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541a84: PUSH ESI
// 00541a85: CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
//   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
// 00541a8a: ADD ESP,0x4
// 00541a8d: PUSH 0x1
//   Label: LAB_00541a8d
// 00541a8f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00541a94: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00541a95: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00541a97: CALL dword ptr [EDX + 0x4]
// 00541a9a: ADD ESP,0x8
// 00541a9d: TEST EAX,EAX
// 00541a9f: JNZ 0x005416d1
//   XREF to: 005416d1 (CONDITIONAL_JUMP)
// 00541aa5: PUSH 0x1c
// 00541aa7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00541aac: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00541aad: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00541aaf: CALL dword ptr [EDX + 0x4]
// 00541ab2: ADD ESP,0x8
// 00541ab5: TEST EAX,EAX
// 00541ab7: JZ 0x00541aeb
//   XREF to: 00541aeb (CONDITIONAL_JUMP)
// 00541ab9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541abc: IMUL EAX,dword ptr [EAX + 0x114],0x78
// 00541ac3: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541ac6: CMP dword ptr [EAX + 0x64],0x0
// 00541aca: SETZ DL
// 00541acd: AND EDX,0xff
// 00541ad3: MOV dword ptr [EAX + 0x64],EDX
// 00541ad6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541ad9: CMP dword ptr [EAX],0x1
// 00541adc: JNZ 0x00541c2e
//   XREF to: 00541c2e (CONDITIONAL_JUMP)
// 00541ae2: PUSH EAX
// 00541ae3: CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
// 00541ae8: ADD ESP,0x4
//   Label: LAB_00541ae8
// 00541aeb: PUSH 0x1f
//   Label: LAB_00541aeb
// 00541aed: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00541af2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00541af3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00541af5: CALL dword ptr [EDX + 0x4]
// 00541af8: ADD ESP,0x8
// 00541afb: TEST EAX,EAX
// 00541afd: JNZ 0x00541c39
//   XREF to: 00541c39 (CONDITIONAL_JUMP)
// 00541b03: XOR EBX,EBX
//   Label: LAB_00541b03
// 00541b05: MOV EAX,[0x00680a00]
//   Label: LAB_00541b05
//   XREF to: 00680a00 (READ)
// 00541b0a: CMP EBX,dword ptr [EAX + 0x1c]
//   XREF to: 02f7c75c (READ)
// 00541b0d: JGE 0x0054141d
//   XREF to: 0054141d (CONDITIONAL_JUMP)
// 00541b13: PUSH 0x40000000
// 00541b18: PUSH EBX
// 00541b19: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541b1c: PUSH ECX
// 00541b1d: CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   XREF to: 00541c80 (UNCONDITIONAL_CALL)
// 00541b22: INC EBX
// 00541b23: ADD ESP,0xc
// 00541b26: JMP 0x00541b05
//   XREF to: 00541b05 (UNCONDITIONAL_JUMP)
// 00541b28: XOR EAX,EAX
//   Label: LAB_00541b28
// 00541b2a: JMP 0x005418b3
//   XREF to: 005418b3 (UNCONDITIONAL_JUMP)
// 00541b2f: MOV EAX,0x1
//   Label: LAB_00541b2f
// 00541b34: MOV ESP,EBP
// 00541b36: POP EBP
// 00541b37: POP EDI
// 00541b38: POP ESI
// 00541b39: POP EBX
// 00541b3a: RET
// 00541b3b: LEA EBX,[EAX + 0x118]
//   Label: LAB_00541b3b
// 00541b41: PUSH EBX
// 00541b42: PUSH 0x63da30
//   XREF to: 0063da30 (DATA)
// 00541b47: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00541b4d: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00541b4e: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00541b53: ADD ESP,0xc
// 00541b56: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541b59: MOV ESI,dword ptr [EAX + 0x16c]
// 00541b5f: PUSH ESI
// 00541b60: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 00541b65: ADD ESP,0x4
// 00541b68: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541b6b: MOV EDI,dword ptr [EAX + 0x16c]
// 00541b71: PUSH EDI
// 00541b72: CALL core_actor.cpp_setRandomSeed_FUN_0040cb90
//   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
// 00541b77: ADD ESP,0x4
// 00541b7a: PUSH 0x0
// 00541b7c: PUSH EBX
// 00541b7d: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 00541b82: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 00541b83: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 00541b88: ADD ESP,0xc
// 00541b8b: PUSH 0x0
// 00541b8d: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00541b93: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 00541b94: CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   XREF to: 00524a80 (UNCONDITIONAL_CALL)
// 00541b99: ADD ESP,0x8
// 00541b9c: TEST EAX,EAX
// 00541b9e: JZ 0x00541c1f
//   XREF to: 00541c1f (CONDITIONAL_JUMP)
// 00541ba4: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
//   XREF to: 02f33740 (PARAM)
// 00541baa: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 00541bab: CALL core_mission.cpp_CDemonMission_FUN_00524760
//   XREF to: 00524760 (UNCONDITIONAL_CALL)
// 00541bb0: ADD ESP,0x4
// 00541bb3: PUSH 0x2
// 00541bb5: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541bb8: PUSH EBX
// 00541bb9: CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   XREF to: 005401e0 (UNCONDITIONAL_CALL)
// 00541bbe: ADD ESP,0x8
// 00541bc1: TEST EAX,EAX
// 00541bc3: JZ 0x00541c1f
//   XREF to: 00541c1f (CONDITIONAL_JUMP)
// 00541bc5: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00541bca: MOV EDX,EAX
// 00541bcc: MOV EBX,0x12
// 00541bd1: SAR EDX,0x1f
// 00541bd4: IDIV EBX
// 00541bd6: MOV ESI,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00541bdc: MOV EDX,EAX
// 00541bde: SUB EAX,ESI
// 00541be0: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00541be6: TEST EAX,EAX
// 00541be8: JL 0x00541c1b
//   XREF to: 00541c1b (CONDITIONAL_JUMP)
// 00541bea: CMP EAX,0x20000
// 00541bef: JLE 0x00541bf6
//   XREF to: 00541bf6 (CONDITIONAL_JUMP)
// 00541bf1: MOV EAX,0x20000
// 00541bf6: MOV EDI,dword ptr [0x02f7c8b8]
//   Label: LAB_00541bf6
//   XREF to: 02f7c8b8 (READ)
// 00541bfc: ADD EDI,EAX
// 00541bfe: MOV dword ptr [0x02f7c8b8],EDI
//   XREF to: 02f7c8b8 (WRITE)
// 00541c04: LEA EAX,[EDI + 0xffe20000]
// 00541c0a: MOV [0x02f7c8c8],EAX
//   XREF to: 02f7c8c8 (WRITE)
// 00541c0f: MOV EAX,0x1
// 00541c14: MOV ESP,EBP
// 00541c16: POP EBP
// 00541c17: POP EDI
// 00541c18: POP ESI
// 00541c19: POP EBX
// 00541c1a: RET
// 00541c1b: XOR EAX,EAX
//   Label: LAB_00541c1b
// 00541c1d: JMP 0x00541bf6
//   XREF to: 00541bf6 (UNCONDITIONAL_JUMP)
// 00541c1f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00541c1f
//   XREF to: Stack[0x4] (READ)
// 00541c22: MOV dword ptr [EAX + 0x4],0x1
// 00541c29: JMP 0x005416d1
//   XREF to: 005416d1 (UNCONDITIONAL_JUMP)
// 00541c2e: PUSH EAX
//   Label: LAB_00541c2e
// 00541c2f: CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
//   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
// 00541c34: JMP 0x00541ae8
//   XREF to: 00541ae8 (UNCONDITIONAL_JUMP)
// 00541c39: PUSH 0x1
//   Label: LAB_00541c39
// 00541c3b: PUSH 0x100
// 00541c40: PUSH 0x2f7c640
//   XREF to: 02f7c640 (DATA)
// 00541c45: PUSH 0x63da3b
//   XREF to: 0063da3b (DATA)
// 00541c4a: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00541c4f: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00541c50: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00541c55: ADD ESP,0x14
// 00541c58: TEST EAX,EAX
// 00541c5a: JZ 0x00541b03
//   XREF to: 00541b03 (CONDITIONAL_JUMP)
// 00541c60: PUSH -0x1
// 00541c62: PUSH 0x2f7c640
//   XREF to: 02f7c640 (DATA)
// 00541c67: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541c6a: PUSH EDX
// 00541c6b: CALL core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
//   XREF to: 00541e40 (UNCONDITIONAL_CALL)
// 00541c70: ADD ESP,0xc
// 00541c73: JMP 0x00541b03
//   XREF to: 00541b03 (UNCONDITIONAL_JUMP)
