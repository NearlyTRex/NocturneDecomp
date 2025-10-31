// Name: core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
// Address: 005406a0
// Address Range: [[005406a0, 005411b2]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0(CNetGame * this_ptr, SNetworkAddr * source_addr, char * packet_data)
// Cross-references:
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 (005405b0) at 0054063a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 caseD_e
//   void* switchdataD_00540654 = 0054044c
//   TerminatedCString s_core_netgame_cpp_0063d277
//   TerminatedCString s_allocSimFrame_sim_histor_0063d28b
//   TerminatedCString s_You_have_been_disconnect_0063d853
//   undefined4 DAT_0063d87c
//   TerminatedCString s_core_netgame_cpp_0063d87d
//   TerminatedCString s_Player_list_mismatch_pro_0063d891
//   TerminatedCString s_core_netgame_cpp_0063d8c9
//   TerminatedCString s_Player_list_mismatch_0063d8dd
//   double DOUBLE_0063d8f5 = 0.0000152587890625
//   double DOUBLE_0063d8fd = -30
//   double DOUBLE_0063d905 = 30
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8bc
//   int g_RemoteSyncStage
//   undefined4 DAT_02f7c8c4
//   int g_ChatHistoryCount
//   SChatHistory[400] g_ChatHistory
//   undefined4 DAT_02f7c8d4
//   undefined4 DAT_02f7c8d8
//   undefined4 DAT_02f7c9f0
//   undefined4 DAT_02f7c9f4
//   undefined4 DAT_02f7c9f8
//   undefined4 DAT_02f98ad0
//   undefined4 DAT_02f98ad8
//   undefined1 DAT_02f98adc
//   undefined4 DAT_02f98bec
//   undefined4 DAT_02f98bf0
//   undefined4 DAT_02f98d00
//   int g_SimFrameCount
//   undefined4 g_SimFrameHistory
//   undefined4 DAT_02f9c0c8
//   undefined4 DAT_02f9c0cc
//   undefined4 DAT_02f9c0d0
//   undefined4 DAT_02f9c0d4
//   undefined4 DAT_02f9c0fc
//   undefined4 DAT_02f9c128
//   undefined4 DAT_02f9c12c
//   undefined4 DAT_02f9c130
//   uchar[4] g_AnyAddressIP
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_CNetGame_FUN_00541230
//   core_netgame.cpp_CNetGame_FUN_00541260
//   core_netgame.cpp_CNetGame_FUN_00542370
//   core_netgame.cpp_CNetGame_FUN_00543930
//   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_strcmp_FUN_005fef20
//   support_trisock.cpp_createNetworkAddr_FUN_005e1940

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0054104d) */

void __cdecl
core_netgame_cpp_CNetGame_allocSimFrame_FUN_005406a0
          (CNetGame *this_ptr,SNetworkAddr *source_addr,char *packet_data)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  SChatHistory *pSVar6;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  SNetPlayer *pSVar9;
  int *piVar10;
  byte bVar11;
  float fVar12;
  float local_e4;
  char acStack_d3 [20];
  char acStack_bf [80];
  uint uStack_6f;
  undefined1 local_6b [7];
  undefined1 local_64;
  undefined4 uStack_63;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined1 uStack_50;
  undefined4 local_48;
  undefined1 uStack_44;
  undefined4 uStack_43;
  undefined4 local_3c;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined8 local_28;
  int local_20;
  int local_1c;
  SNetPlayer *local_18;
  char *local_14;
  
  bVar11 = 0;
  uVar2 = core_netgame_cpp_CNetGame_FUN_00541260();
  local_18 = (SNetPlayer *)0x0;
  if (-1 < (int)uVar2) {
    local_18 = this_ptr->players + uVar2;
    *(uint *)(local_18->name + 0x24) = g_CurrentGameTime;
  }
  switch(packet_data[4]) {
  case '\x01':
    local_28._4_4_ = packet_data;
    if (this_ptr->network_mode != 1) {
      uStack_50 = 3;
      uStack_57 = CONCAT13(9,(undefined3)uStack_57);
      uStack_53 = 0;
      core_netgame_cpp_CNetGame_FUN_00541230();
    }
    if ((int)uVar2 < 0) {
      core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
    }
    else {
      iVar5 = crt_string_c_strcmp_FUN_005fef20(local_14,(char *)(local_20 + 0xd));
      if (((iVar5 != 0) || (*(int *)(local_1c + 0x21) != *(int *)(unaff_EBP + 0x14))) ||
         (*(int *)(local_1c + 0x25) != *(int *)(unaff_EBP + 0x18))) {
        pcVar7 = (char *)(local_1c + 0xd);
        pcVar8 = unaff_EBP;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(local_1c + 0x21);
        *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(local_1c + 0x25);
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
      }
    }
    pcVar8 = acStack_bf;
    pcVar7 = this_ptr->field7_0x118;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = acStack_d3;
    pcVar7 = this_ptr->network_data;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    uStack_6f = source_addr->ip_address;
    *(undefined4 *)(local_6b + (uint)bVar11 * -8) = *(undefined4 *)&source_addr[-(uint)bVar11].port;
    core_netgame_cpp_CNetGame_send_FUN_005411c0();
    iVar5 = this_ptr->local_player_index;
    *(undefined4 *)(this_ptr->players[iVar5].name + 0x1c) = *(undefined4 *)(local_18->name + 5);
    *(undefined4 *)((int)this_ptr + (uint)bVar11 * -8 + iVar5 * 0x78 + 0x40) =
         *(undefined4 *)((int)local_18 + (uint)bVar11 * -8 + 9);
    return;
  case '\x02':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != *(uint *)this_ptr->padding)) {
LAB_0054097f:
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    if (this_ptr->network_mode == 1) {
      pcVar8 = packet_data + 5;
      DAT_02f7c8bc = 1;
      do {
        cVar1 = *pcVar8;
        local_18->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        local_18->name[1] = cVar1;
        local_18 = (SNetPlayer *)(local_18->name + 2);
      } while (cVar1 != '\0');
      iVar5 = this_ptr->local_player_index;
      *(undefined4 *)(this_ptr->players[iVar5].name + 0x1c) = *(undefined4 *)(packet_data + 0x69);
      *(undefined4 *)((int)this_ptr + (uint)bVar11 * -8 + iVar5 * 0x78 + 0x40) =
           *(undefined4 *)(packet_data + (uint)bVar11 * -8 + 0x6d);
      DAT_02f7c8c4 = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((this_ptr->connection_type == 2) && (-1 < (int)uVar2)) &&
       ((this_ptr->network_mode == 1 && (uVar2 == *(uint *)this_ptr->padding)))) {
      DAT_02f7c8bc = *(undefined4 *)(packet_data + 5);
      return;
    }
    break;
  case '\x04':
    if (this_ptr->connection_type == 0) {
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    local_3c = 9;
    uStack_38 = 5;
    uStack_37 = *(undefined4 *)(packet_data + 5);
    core_netgame_cpp_CNetGame_FUN_00541230();
    return;
  case '\x05':
    if ((this_ptr->connection_type == 0) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    if (0.0 <= local_18->ping_quality) {
      fVar12 = (float)(int)(*(int *)(packet_data + 5) - local_18->last_ping_response) *
               (float)DOUBLE_0063d8f5;
      if (fVar12 < (float)DOUBLE_0063d8fd) {
        fVar12 = -30.0;
      }
      if ((float)DOUBLE_0063d905 < fVar12) {
        fVar12 = 30.0;
      }
      if (fVar12 <= 0.0) {
        return;
      }
    }
    local_e4 = (float)(int)(g_CurrentGameTime - *(int *)(packet_data + 5)) * (float)DOUBLE_0063d8f5;
    if (local_e4 < 0.0) {
      local_e4 = 0.0;
    }
    if ((float)DOUBLE_0063d905 < local_e4) {
      local_e4 = 30.0;
    }
    local_18->ping_quality = local_e4;
    local_18->last_ping_response = g_CurrentGameTime;
    return;
  case '\x06':
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < g_ChatHistoryCount) {
        pSVar6 = g_ChatHistory;
        do {
          if (((*(ushort *)(pSVar6->field0_0x0 + 4) == source_addr->port) &&
              (*(uint *)pSVar6->field0_0x0 == source_addr->ip_address)) &&
             (*(int *)(packet_data + 5) == *(int *)(g_ChatHistory[iVar5].field0_0x0 + 8))) break;
          iVar5 = iVar5 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar5 < g_ChatHistoryCount);
      }
      if (iVar5 == g_ChatHistoryCount) {
        core_netgame_cpp_CNetGame_FUN_00542370();
      }
      local_6b._3_4_ = 9;
      local_64 = 7;
      uStack_63 = *(undefined4 *)(packet_data + 5);
      core_netgame_cpp_CNetGame_FUN_00541230();
      return;
    }
    break;
  case '\a':
    if (((this_ptr->connection_type != 0) && (-1 < (int)uVar2)) && (0 < DAT_02f98ad0)) {
      iVar5 = 0;
      iVar4 = DAT_02f98ad0 * 0x114;
      do {
        while (*(int *)((int)&DAT_02f98ad8 + iVar5) == *(int *)(packet_data + 5)) {
          (&DAT_02f98adc)[iVar5 + uVar2] = 1;
          iVar5 = iVar5 + 0x114;
          if (iVar4 <= iVar5) {
            return;
          }
        }
        iVar5 = iVar5 + 0x114;
      } while (iVar5 < iVar4);
    }
    break;
  case '\b':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != *(uint *)this_ptr->padding)) goto LAB_0054097f;
    if ((this_ptr->network_mode == 1) && (*(int *)(packet_data + 5) == 1)) {
      this_ptr->network_mode = 2;
    }
    local_48 = 9;
    uStack_44 = 9;
    uStack_43 = *(undefined4 *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 4);
    core_netgame_cpp_CNetGame_send_FUN_005411c0();
    if (g_RemoteSyncStage < *(int *)(packet_data + 5)) {
      g_RemoteSyncStage = *(int *)(packet_data + 5);
      return;
    }
    break;
  case '\t':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) {
LAB_00540d18:
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    if ((this_ptr->network_mode == 2) &&
       (*(int *)(local_18->field5_0x38 + 4) <= *(int *)(packet_data + 5))) {
      *(int *)(local_18->field5_0x38 + 4) = *(int *)(packet_data + 5);
      return;
    }
    break;
  case '\n':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) {
LAB_00540df8:
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    if (this_ptr->network_mode == 1) {
      if (*(int *)(local_18->field5_0x38 + 8) != 0) {
        fVar12 = (float)(*(int *)(local_18->field5_0x38 + 8) - *(int *)(packet_data + 5)) *
                 (float)DOUBLE_0063d8f5;
        if (fVar12 < (float)DOUBLE_0063d8fd) {
          fVar12 = -30.0;
        }
        if ((float)DOUBLE_0063d905 < fVar12) {
          fVar12 = 30.0;
        }
        if (fVar12 <= 0.0) {
          return;
        }
      }
      pcVar8 = packet_data + 9;
      *(undefined4 *)(local_18->field5_0x38 + 0xc) = *(undefined4 *)(packet_data + 0x1d);
      pSVar9 = local_18;
      do {
        cVar1 = *pcVar8;
        pSVar9->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pSVar9->name[1] = cVar1;
        pSVar9 = (SNetPlayer *)(pSVar9->name + 2);
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
      return;
    }
    break;
  case '\v':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != *(uint *)this_ptr->padding)) goto LAB_00540d18;
    if (this_ptr->network_mode == 1) {
      if (DAT_02f7c8c4 < *(int *)(packet_data + 5)) {
        iVar5 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470();
        if (iVar5 == 0) {
          return;
        }
        DAT_02f7c8c4 = *(int *)(packet_data + 5);
      }
      uStack_5c = 9;
      local_58 = 0xc;
      uStack_57 = DAT_02f7c8c4;
      core_netgame_cpp_CNetGame_send_FUN_005411c0();
      return;
    }
    break;
  case '\f':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) goto LAB_00540d18;
    if ((this_ptr->network_mode == 1) && (local_18->player_id <= *(int *)(packet_data + 5))) {
      local_18->player_id = *(int *)(packet_data + 5);
      return;
    }
    break;
  case '\r':
    if (*(int *)(packet_data + 5) != 0) {
      core_netgame_cpp_CNetGame_FUN_00543930();
    }
    if (this_ptr->connection_type == 1) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00();
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0();
    }
    if (((this_ptr->connection_type == 2) && (-1 < (int)uVar2)) &&
       (uVar2 == *(uint *)this_ptr->padding)) {
      core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
      support_trisock_cpp_createNetworkAddr_FUN_005e1940
                ((SNetworkAddr *)&local_28,(uint32_t *)g_AnyAddressIP,0);
      core_netgame_cpp_CNetGame_FUN_00542370();
      return;
    }
    break;
  case '\x0f':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != *(uint *)this_ptr->padding)) goto LAB_00540df8;
    local_28._0_4_ = *(uint *)(packet_data + 5);
    uVar2 = uVar2 ^ *(uint *)this_ptr->padding;
    if (0 < g_SimFrameCount) {
      iVar5 = 0;
      do {
        if ((uint)local_28 == *(uint *)((int)&g_SimFrameHistory + iVar5)) {
          if (-1 < (int)uVar2) {
            piVar3 = (int *)((int)&g_SimFrameHistory + iVar5);
            goto LAB_00541015;
          }
          break;
        }
        iVar5 = iVar5 + 100;
        uVar2 = uVar2 + 1;
      } while (iVar5 < g_SimFrameCount * 100);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    piVar3 = &g_SimFrameHistory + g_SimFrameCount * 0x19;
    g_SimFrameCount = g_SimFrameCount + 1;
    crt_memory_c_memset_FUN_005fde40(piVar3,0,100);
    *piVar3 = local_20;
LAB_00541015:
    piVar3[1] = *(int *)(packet_data + 9);
    piVar3[2] = *(int *)(packet_data + 0xd);
    iVar5 = 0;
    local_18 = (SNetPlayer *)piVar3;
    if (0 < this_ptr->player_count) {
      do {
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x596;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Player list mismatch processing SimFrame Update packet!");
        }
        piVar3 = (int *)(packet_data + 0x11);
        piVar10 = (int *)((int)local_18 + (iVar5 * 0xb + 3) * 4);
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar10 = *piVar3;
          piVar3 = piVar3 + (uint)bVar11 * -2 + 1;
          piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        packet_data = packet_data + 0x2c;
      } while (iVar5 < this_ptr->player_count);
    }
    break;
  case '\x10':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    if ((this_ptr->network_mode == 3) &&
       (*(int *)(local_18->field5_0x38 + 0x10) < *(int *)(packet_data + 5))) {
      *(int *)(local_18->field5_0x38 + 0x10) = *(int *)(packet_data + 5);
      pcVar8 = packet_data + 9;
      pcVar7 = local_18->field5_0x38 + 0x14;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -8 + 4;
        pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
      }
      return;
    }
  }
  return;
}


// Assembly code:
// 005406a0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
// 005406a1: PUSH ESI
// 005406a2: PUSH EDI
// 005406a3: PUSH EBP
// 005406a4: MOV EBP,ESP
// 005406a6: SUB ESP,0xe0
// 005406ac: AND ESP,0xfffffff8
// 005406af: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005406b2: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005406b5: PUSH EDX
// 005406b6: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005406b9: PUSH ECX
// 005406ba: XOR EDI,EDI
// 005406bc: CALL core_netgame.cpp_CNetGame_FUN_00541260
//   XREF to: 00541260 (UNCONDITIONAL_CALL)
// 005406c1: ADD ESP,0x8
// 005406c4: MOV EBX,EAX
// 005406c6: MOV dword ptr [ESP + 0xd4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005406cd: TEST EAX,EAX
// 005406cf: JL 0x005406f2
//   XREF to: 005406f2 (CONDITIONAL_JUMP)
// 005406d1: SHL EAX,0x3
// 005406d4: MOV EDX,EAX
// 005406d6: SHL EAX,0x4
// 005406d9: SUB EAX,EDX
// 005406db: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005406de: ADD EDX,0x20
// 005406e1: ADD EDX,EAX
// 005406e3: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 005406e8: MOV dword ptr [ESP + 0xd4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005406ef: MOV dword ptr [EDX + 0x24],EAX
// 005406f2: MOV AL,byte ptr [ESI + 0x4]
//   Label: LAB_005406f2
// 005406f5: CMP AL,0x10
// 005406f7: JA 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 005406fd: AND EAX,0xff
// 00540702: JMP dword ptr [EAX*0x4 + 0x540654]
//   Label: switchD
//   XREF to: 0054044c (COMPUTED_JUMP)
//   XREF to: 00540709 (COMPUTED_JUMP)
//   XREF to: 005408c9 (COMPUTED_JUMP)
//   XREF to: 00540902 (COMPUTED_JUMP)
//   XREF to: 00540998 (COMPUTED_JUMP)
//   XREF to: 005409f4 (COMPUTED_JUMP)
//   XREF to: 00540afc (COMPUTED_JUMP)
//   XREF to: 00540bc5 (COMPUTED_JUMP)
//   XREF to: 00540c47 (COMPUTED_JUMP)
//   XREF to: 00540ce5 (COMPUTED_JUMP)
//   XREF to: 00540d31 (COMPUTED_JUMP)
//   XREF to: 00540e1d (COMPUTED_JUMP)
//   XREF to: 00540eaf (COMPUTED_JUMP)
//   XREF to: 00540ef2 (COMPUTED_JUMP)
//   XREF to: 00540f98 (COMPUTED_JUMP)
//   XREF to: 00541151 (COMPUTED_JUMP)
//   XREF to: 00540654 (DATA)
// 00540709: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_1
//   XREF to: Stack[0x4] (READ)
// 0054070c: MOV ECX,dword ptr [EAX + 0x4]
// 0054070f: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00540716: CMP ECX,0x1
// 00540719: JNZ 0x0054083e
//   XREF to: 0054083e (CONDITIONAL_JUMP)
// 0054071f: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0054071f
//   XREF to: Stack[-0x28] (READ)
// 00540726: ADD EAX,0xd
// 00540729: TEST EBX,EBX
// 0054072b: JL 0x00540870
//   XREF to: 00540870 (CONDITIONAL_JUMP)
// 00540731: PUSH EAX
// 00540732: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x1c] (READ)
// 00540739: PUSH EAX
// 0054073a: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0054073f: ADD ESP,0x8
// 00540742: TEST EAX,EAX
// 00540744: JZ 0x00540897
//   XREF to: 00540897 (CONDITIONAL_JUMP)
// 0054074a: MOV ESI,dword ptr [ESP + 0xc8]
//   Label: LAB_0054074a
//   XREF to: Stack[-0x28] (READ)
// 00540751: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540758: ADD ESI,0xd
// 0054075b: PUSH EDI
// 0054075c: MOV AL,byte ptr [ESI]
//   Label: LAB_0054075c
// 0054075e: MOV byte ptr [EDI],AL
// 00540760: CMP AL,0x0
// 00540762: JZ 0x00540774
//   XREF to: 00540774 (CONDITIONAL_JUMP)
// 00540764: MOV AL,byte ptr [ESI + 0x1]
// 00540767: ADD ESI,0x2
// 0054076a: MOV byte ptr [EDI + 0x1],AL
// 0054076d: ADD EDI,0x2
// 00540770: CMP AL,0x0
// 00540772: JNZ 0x0054075c
//   XREF to: 0054075c (CONDITIONAL_JUMP)
// 00540774: POP EDI
//   Label: LAB_00540774
// 00540775: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x28] (READ)
// 0054077c: MOV EAX,dword ptr [EAX + 0x21]
// 0054077f: MOV dword ptr [EDI + 0x14],EAX
// 00540782: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x28] (READ)
// 00540789: MOV EAX,dword ptr [EAX + 0x25]
// 0054078c: MOV dword ptr [EDI + 0x18],EAX
// 0054078f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540792: PUSH EDI
// 00540793: CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
// 00540798: ADD ESP,0x4
// 0054079b: MOV EAX,0x71
//   Label: LAB_0054079b
// 005407a0: MOV DH,0x2
// 005407a2: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005407a5: LEA EDI,[ESP + 0x25]
//   XREF to: Stack[-0xcb] (DATA)
// 005407a9: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005407ad: ADD ESI,0x118
// 005407b3: MOV byte ptr [ESP + 0x10],DH
//   XREF to: Stack[-0xe0] (WRITE)
// 005407b7: PUSH EDI
// 005407b8: MOV AL,byte ptr [ESI]
//   Label: LAB_005407b8
// 005407ba: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xcb] (DATA)
// 005407bc: CMP AL,0x0
// 005407be: JZ 0x005407d0
//   XREF to: 005407d0 (CONDITIONAL_JUMP)
// 005407c0: MOV AL,byte ptr [ESI + 0x1]
// 005407c3: ADD ESI,0x2
// 005407c6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xca] (WRITE)
// 005407c9: ADD EDI,0x2
// 005407cc: CMP AL,0x0
// 005407ce: JNZ 0x005407b8
//   XREF to: 005407b8 (CONDITIONAL_JUMP)
// 005407d0: POP EDI
//   Label: LAB_005407d0
// 005407d1: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005407d4: LEA EDI,[ESP + 0x11]
//   XREF to: Stack[-0xdf] (DATA)
// 005407d8: ADD ESI,0x8
// 005407db: PUSH EDI
// 005407dc: MOV AL,byte ptr [ESI]
//   Label: LAB_005407dc
// 005407de: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xdf] (DATA)
// 005407e0: CMP AL,0x0
// 005407e2: JZ 0x005407f4
//   XREF to: 005407f4 (CONDITIONAL_JUMP)
// 005407e4: MOV AL,byte ptr [ESI + 0x1]
// 005407e7: ADD ESI,0x2
// 005407ea: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xde] (WRITE)
// 005407ed: ADD EDI,0x2
// 005407f0: CMP AL,0x0
// 005407f2: JNZ 0x005407dc
//   XREF to: 005407dc (CONDITIONAL_JUMP)
// 005407f4: POP EDI
//   Label: LAB_005407f4
// 005407f5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xe4] (DATA)
// 005407f9: PUSH EAX
// 005407fa: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005407fd: PUSH EBX
// 005407fe: LEA EDI,[ESP + 0x7d]
//   XREF to: Stack[-0x7b] (DATA)
// 00540802: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540805: PUSH EDX
// 00540806: MOVSD ES:EDI,ESI
// 00540807: MOVSD ES:EDI,ESI
// 00540808: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 0054080d: ADD ESP,0xc
// 00540810: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540813: MOV EAX,dword ptr [EAX + 0x114]
// 00540819: SHL EAX,0x3
// 0054081c: MOV EDX,EAX
// 0054081e: SHL EAX,0x4
// 00540821: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540824: SUB EAX,EDX
// 00540826: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x28] (READ)
// 0054082d: ADD EAX,ECX
// 0054082f: LEA ESI,[ESI + 0x5]
// 00540832: LEA EDI,[EAX + 0x3c]
// 00540835: MOVSD ES:EDI,ESI
// 00540836: MOVSD ES:EDI,ESI
// 00540837: MOV ESP,EBP
// 00540839: POP EBP
// 0054083a: POP EDI
// 0054083b: POP ESI
// 0054083c: POP EBX
// 0054083d: RET
// 0054083e: MOV AL,0x3
//   Label: LAB_0054083e
// 00540840: MOV byte ptr [ESP + 0x9c],AL
//   XREF to: Stack[-0x54] (WRITE)
// 00540847: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x58] (DATA)
// 0054084e: PUSH EAX
// 0054084f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540852: PUSH ESI
// 00540853: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540856: MOV EDX,0x9
// 0054085b: PUSH EDI
// 0054085c: MOV dword ptr [ESP + 0xa4],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 00540863: CALL core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: 00541230 (UNCONDITIONAL_CALL)
// 00540868: ADD ESP,0xc
// 0054086b: JMP 0x0054071f
//   XREF to: 0054071f (UNCONDITIONAL_JUMP)
// 00540870: MOV EDX,dword ptr [ESP + 0xc8]
//   Label: LAB_00540870
//   XREF to: Stack[-0x28] (READ)
// 00540877: MOV ECX,dword ptr [EDX + 0x25]
// 0054087a: PUSH ECX
// 0054087b: MOV EBX,dword ptr [EDX + 0x21]
// 0054087e: PUSH EBX
// 0054087f: PUSH EAX
// 00540880: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540883: PUSH ESI
// 00540884: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540887: PUSH EDI
// 00540888: CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   XREF to: 005412b0 (UNCONDITIONAL_CALL)
// 0054088d: ADD ESP,0x14
// 00540890: MOV EBX,EAX
// 00540892: JMP 0x0054079b
//   XREF to: 0054079b (UNCONDITIONAL_JUMP)
// 00540897: MOV EDX,dword ptr [ESP + 0xc8]
//   Label: LAB_00540897
//   XREF to: Stack[-0x28] (READ)
// 0054089e: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 005408a5: MOV ECX,dword ptr [EDX + 0x21]
// 005408a8: CMP ECX,dword ptr [EAX + 0x14]
// 005408ab: JNZ 0x0054074a
//   XREF to: 0054074a (CONDITIONAL_JUMP)
// 005408b1: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 005408b8: MOV ESI,dword ptr [EDX + 0x25]
// 005408bb: CMP ESI,dword ptr [EAX + 0x18]
// 005408be: JNZ 0x0054074a
//   XREF to: 0054074a (CONDITIONAL_JUMP)
// 005408c4: JMP 0x0054079b
//   XREF to: 0054079b (UNCONDITIONAL_JUMP)
// 005408c9: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_3
//   XREF to: Stack[0x4] (READ)
// 005408cc: CMP dword ptr [EAX],0x2
// 005408cf: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 005408d5: TEST EBX,EBX
// 005408d7: JL 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 005408dd: CMP dword ptr [EAX + 0x4],0x1
// 005408e1: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 005408e7: CMP EBX,dword ptr [EAX + 0x110]
// 005408ed: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 005408f3: MOV EAX,dword ptr [ESI + 0x5]
// 005408f6: MOV [0x02f7c8bc],EAX
//   XREF to: 02f7c8bc (WRITE)
// 005408fb: MOV ESP,EBP
// 005408fd: POP EBP
// 005408fe: POP EDI
// 005408ff: POP ESI
// 00540900: POP EBX
// 00540901: RET
// 00540902: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_2
//   XREF to: Stack[0x4] (READ)
// 00540905: MOV ECX,ESI
// 00540907: CMP dword ptr [EAX],0x2
// 0054090a: JNZ 0x0054097f
//   XREF to: 0054097f (CONDITIONAL_JUMP)
// 0054090c: TEST EBX,EBX
// 0054090e: JL 0x0054097f
//   XREF to: 0054097f (CONDITIONAL_JUMP)
// 00540910: CMP EBX,dword ptr [EAX + 0x110]
// 00540916: JNZ 0x0054097f
//   XREF to: 0054097f (CONDITIONAL_JUMP)
// 00540918: MOV EDX,dword ptr [EAX + 0x4]
// 0054091b: CMP EDX,0x1
// 0054091e: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540924: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 0054092b: LEA ESI,[ECX + 0x5]
// 0054092e: MOV dword ptr [0x02f7c8bc],EDX
//   XREF to: 02f7c8bc (WRITE)
// 00540934: PUSH EDI
// 00540935: MOV AL,byte ptr [ESI]
//   Label: LAB_00540935
// 00540937: MOV byte ptr [EDI],AL
// 00540939: CMP AL,0x0
// 0054093b: JZ 0x0054094d
//   XREF to: 0054094d (CONDITIONAL_JUMP)
// 0054093d: MOV AL,byte ptr [ESI + 0x1]
// 00540940: ADD ESI,0x2
// 00540943: MOV byte ptr [EDI + 0x1],AL
// 00540946: ADD EDI,0x2
// 00540949: CMP AL,0x0
// 0054094b: JNZ 0x00540935
//   XREF to: 00540935 (CONDITIONAL_JUMP)
// 0054094d: POP EDI
//   Label: LAB_0054094d
// 0054094e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540951: MOV EAX,dword ptr [EAX + 0x114]
// 00540957: SHL EAX,0x3
// 0054095a: MOV EDX,EAX
// 0054095c: SHL EAX,0x4
// 0054095f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540962: SUB EAX,EDX
// 00540964: ADD EAX,ESI
// 00540966: LEA EDI,[EAX + 0x3c]
// 00540969: LEA ESI,[ECX + 0x69]
// 0054096c: MOVSD ES:EDI,ESI
// 0054096d: MOVSD ES:EDI,ESI
// 0054096e: MOV dword ptr [0x02f7c8c4],0xffffffff
//   XREF to: 02f7c8c4 (WRITE)
// 00540978: MOV ESP,EBP
// 0054097a: POP EBP
// 0054097b: POP EDI
// 0054097c: POP ESI
// 0054097d: POP EBX
// 0054097e: RET
// 0054097f: PUSH 0x0
//   Label: LAB_0054097f
// 00540981: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540984: PUSH EAX
// 00540985: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540988: PUSH EDX
// 00540989: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 0054098e: ADD ESP,0xc
// 00540991: MOV ESP,EBP
// 00540993: POP EBP
// 00540994: POP EDI
// 00540995: POP ESI
// 00540996: POP EBX
// 00540997: RET
// 00540998: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_4
//   XREF to: Stack[0x4] (READ)
// 0054099b: MOV EDI,dword ptr [EAX]
// 0054099d: TEST EDI,EDI
// 0054099f: JNZ 0x005409b6
//   XREF to: 005409b6 (CONDITIONAL_JUMP)
// 005409a1: PUSH EDI
// 005409a2: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005409a5: PUSH ECX
// 005409a6: PUSH EAX
// 005409a7: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 005409ac: ADD ESP,0xc
// 005409af: MOV ESP,EBP
// 005409b1: POP EBP
// 005409b2: POP EDI
// 005409b3: POP ESI
// 005409b4: POP EBX
// 005409b5: RET
// 005409b6: MOV EAX,0x9
//   Label: LAB_005409b6
// 005409bb: MOV DL,0x5
// 005409bd: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005409c4: MOV byte ptr [ESP + 0xb4],DL
//   XREF to: Stack[-0x3c] (WRITE)
// 005409cb: MOV EAX,dword ptr [ESI + 0x5]
// 005409ce: MOV dword ptr [ESP + 0xb5],EAX
//   XREF to: Stack[-0x3b] (WRITE)
// 005409d5: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x40] (DATA)
// 005409dc: PUSH EAX
// 005409dd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005409e0: PUSH EAX
// 005409e1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005409e4: PUSH EDX
// 005409e5: CALL core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: 00541230 (UNCONDITIONAL_CALL)
// 005409ea: ADD ESP,0xc
// 005409ed: MOV ESP,EBP
// 005409ef: POP EBP
// 005409f0: POP EDI
// 005409f1: POP ESI
// 005409f2: POP EBX
// 005409f3: RET
// 005409f4: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_5
//   XREF to: Stack[0x4] (READ)
// 005409f7: CMP dword ptr [EAX],0x0
// 005409fa: JZ 0x00540ae3
//   XREF to: 00540ae3 (CONDITIONAL_JUMP)
// 00540a00: TEST EBX,EBX
// 00540a02: JL 0x00540ae3
//   XREF to: 00540ae3 (CONDITIONAL_JUMP)
// 00540a08: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540a0f: FLD float ptr [EAX + 0x28]
// 00540a12: FLDZ
// 00540a14: FCOMPP
// 00540a16: FNSTSW AX
// 00540a18: SAHF
// 00540a19: JA 0x00540a7d
//   XREF to: 00540a7d (CONDITIONAL_JUMP)
// 00540a1b: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540a22: MOV EDX,dword ptr [ESI + 0x5]
// 00540a25: MOV EAX,dword ptr [EAX + 0x30]
// 00540a28: SUB EDX,EAX
// 00540a2a: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00540a31: FILD dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 00540a38: FMUL double ptr [0x0063d8f5]
//   XREF to: 0063d8f5 (READ)
// 00540a3e: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0xec] (WRITE)
// 00540a42: FCOMP double ptr [0x0063d8fd]
//   XREF to: 0063d8fd (READ)
// 00540a48: FNSTSW AX
// 00540a4a: SAHF
// 00540a4b: JNC 0x00540a55
//   XREF to: 00540a55 (CONDITIONAL_JUMP)
// 00540a4d: MOV dword ptr [ESP + 0x4],0xc1f00000
//   XREF to: Stack[-0xec] (WRITE)
// 00540a55: FLD float ptr [ESP + 0x4]
//   Label: LAB_00540a55
//   XREF to: Stack[-0xec] (READ)
// 00540a59: FCOMP double ptr [0x0063d905]
//   XREF to: 0063d905 (READ)
// 00540a5f: FNSTSW AX
// 00540a61: SAHF
// 00540a62: JBE 0x00540a6c
//   XREF to: 00540a6c (CONDITIONAL_JUMP)
// 00540a64: MOV dword ptr [ESP + 0x4],0x41f00000
//   XREF to: Stack[-0xec] (WRITE)
// 00540a6c: FLD float ptr [ESP + 0x4]
//   Label: LAB_00540a6c
//   XREF to: Stack[-0xec] (READ)
// 00540a70: FLDZ
// 00540a72: FCOMPP
// 00540a74: FNSTSW AX
// 00540a76: SAHF
// 00540a77: JNC 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540a7d: MOV EDX,dword ptr [0x02f7c8b8]
//   Label: LAB_00540a7d
//   XREF to: 02f7c8b8 (READ)
// 00540a83: MOV EAX,dword ptr [ESI + 0x5]
// 00540a86: SUB EDX,EAX
// 00540a88: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00540a8f: FILD dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 00540a96: FMUL double ptr [0x0063d8f5]
//   XREF to: 0063d8f5 (READ)
// 00540a9c: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (WRITE)
// 00540aa0: FLDZ
// 00540aa2: FCOMPP
// 00540aa4: FNSTSW AX
// 00540aa6: SAHF
// 00540aa7: JBE 0x00540aaf
//   XREF to: 00540aaf (CONDITIONAL_JUMP)
// 00540aa9: XOR EAX,EAX
// 00540aab: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00540aaf: FLD float ptr [ESP + 0x8]
//   Label: LAB_00540aaf
//   XREF to: Stack[-0xe8] (READ)
// 00540ab3: FCOMP double ptr [0x0063d905]
//   XREF to: 0063d905 (READ)
// 00540ab9: FNSTSW AX
// 00540abb: SAHF
// 00540abc: JBE 0x00540ac6
//   XREF to: 00540ac6 (CONDITIONAL_JUMP)
// 00540abe: MOV dword ptr [ESP + 0x8],0x41f00000
//   XREF to: Stack[-0xe8] (WRITE)
// 00540ac6: MOV EDX,dword ptr [ESP + 0xd4]
//   Label: LAB_00540ac6
//   XREF to: Stack[-0x1c] (READ)
// 00540acd: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 00540ad1: MOV dword ptr [EDX + 0x28],EAX
// 00540ad4: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00540ad9: MOV dword ptr [EDX + 0x30],EAX
// 00540adc: MOV ESP,EBP
// 00540ade: POP EBP
// 00540adf: POP EDI
// 00540ae0: POP ESI
// 00540ae1: POP EBX
// 00540ae2: RET
// 00540ae3: PUSH 0x0
//   Label: LAB_00540ae3
// 00540ae5: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540ae8: PUSH ECX
// 00540ae9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540aec: PUSH EBX
// 00540aed: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 00540af2: ADD ESP,0xc
// 00540af5: MOV ESP,EBP
// 00540af7: POP EBP
// 00540af8: POP EDI
// 00540af9: POP ESI
// 00540afa: POP EBX
// 00540afb: RET
// 00540afc: MOV EDI,ESI
//   Label: caseD_6
// 00540afe: TEST EBX,EBX
// 00540b00: JL 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540b06: MOV EDX,dword ptr [0x02f7c8cc]
//   XREF to: 02f7c8cc (READ)
// 00540b0c: XOR EAX,EAX
// 00540b0e: CMP EAX,EDX
// 00540b10: JGE 0x00540b4a
//   XREF to: 00540b4a (CONDITIONAL_JUMP)
// 00540b12: LEA EBX,[EAX*0x8 + 0x0]
// 00540b19: SHL EBX,0x5
// 00540b1c: ADD EBX,0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 00540b22: IMUL ESI,EAX,0x120
//   Label: LAB_00540b22
// 00540b28: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540b2b: MOV DX,word ptr [EBX + 0x4]
//   XREF to: 02f7c8d4 (READ)
//   XREF to: 02f7c9f4 (READ)
// 00540b2f: CMP DX,word ptr [ECX + 0x4]
// 00540b33: JNZ 0x00540bae
//   XREF to: 00540bae (CONDITIONAL_JUMP)
// 00540b39: MOV EDX,dword ptr [EBX]
//   XREF to: 02f7c8d0 (READ)
//   XREF to: 02f7c9f0 (READ)
// 00540b3b: CMP EDX,dword ptr [ECX]
// 00540b3d: JNZ 0x00540bae
//   XREF to: 00540bae (CONDITIONAL_JUMP)
// 00540b3f: MOV EDX,dword ptr [EDI + 0x5]
// 00540b42: CMP EDX,dword ptr [ESI + 0x2f7c8d8]
//   XREF to: 02f7c8d8 (DATA)
//   XREF to: 02f7c9f8 (READ)
// 00540b48: JNZ 0x00540bae
//   XREF to: 00540bae (CONDITIONAL_JUMP)
// 00540b4a: CMP EAX,dword ptr [0x02f7c8cc]
//   Label: LAB_00540b4a
//   XREF to: 02f7c8cc (READ)
// 00540b50: JNZ 0x00540b72
//   XREF to: 00540b72 (CONDITIONAL_JUMP)
// 00540b52: LEA EAX,[EDI + 0x9]
// 00540b55: PUSH EAX
// 00540b56: MOV EBX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x1c] (READ)
// 00540b5d: PUSH EBX
// 00540b5e: MOV ESI,dword ptr [EDI + 0x5]
// 00540b61: PUSH ESI
// 00540b62: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540b65: PUSH EAX
// 00540b66: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540b69: PUSH EDX
// 00540b6a: CALL core_netgame.cpp_CNetGame_FUN_00542370
//   XREF to: 00542370 (UNCONDITIONAL_CALL)
// 00540b6f: ADD ESP,0x14
// 00540b72: MOV dword ptr [ESP + 0x80],0x9
//   Label: LAB_00540b72
//   XREF to: Stack[-0x70] (WRITE)
// 00540b7d: MOV byte ptr [ESP + 0x84],0x7
//   XREF to: Stack[-0x6c] (WRITE)
// 00540b85: MOV EAX,dword ptr [EDI + 0x5]
// 00540b88: MOV dword ptr [ESP + 0x85],EAX
//   XREF to: Stack[-0x6b] (WRITE)
// 00540b8f: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x70] (DATA)
// 00540b96: PUSH EAX
// 00540b97: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540b9a: PUSH EBX
// 00540b9b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540b9e: PUSH ESI
// 00540b9f: CALL core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: 00541230 (UNCONDITIONAL_CALL)
// 00540ba4: ADD ESP,0xc
// 00540ba7: MOV ESP,EBP
// 00540ba9: POP EBP
// 00540baa: POP EDI
// 00540bab: POP ESI
// 00540bac: POP EBX
// 00540bad: RET
// 00540bae: MOV ECX,dword ptr [0x02f7c8cc]
//   Label: LAB_00540bae
//   XREF to: 02f7c8cc (READ)
// 00540bb4: INC EAX
// 00540bb5: ADD EBX,0x120
// 00540bbb: CMP EAX,ECX
// 00540bbd: JL 0x00540b22
//   XREF to: 00540b22 (CONDITIONAL_JUMP)
// 00540bc3: JMP 0x00540b4a
//   XREF to: 00540b4a (UNCONDITIONAL_JUMP)
// 00540bc5: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_7
//   XREF to: Stack[0x4] (READ)
// 00540bc8: MOV ECX,dword ptr [EAX]
// 00540bca: MOV dword ptr [ESP + 0xd0],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00540bd1: TEST ECX,ECX
// 00540bd3: JZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540bd9: TEST EBX,EBX
// 00540bdb: JL 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540be1: MOV EDI,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 00540be7: XOR ESI,ESI
// 00540be9: CMP ESI,EDI
// 00540beb: JGE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540bf1: MOV EDX,EDI
// 00540bf3: SHL EDI,0x4
// 00540bf6: MOV EAX,ESI
// 00540bf8: ADD EDI,EDX
// 00540bfa: SHL EAX,0x4
// 00540bfd: SHL EDI,0x2
// 00540c00: SHL EAX,0x2
// 00540c03: ADD EDI,EDX
// 00540c05: SHL EAX,0x2
// 00540c08: SHL EDI,0x2
// 00540c0b: MOV ECX,dword ptr [ESP + 0xd0]
//   Label: LAB_00540c0b
//   XREF to: Stack[-0x20] (READ)
// 00540c12: MOV EDX,dword ptr [EAX + 0x2f98ad8]
//   XREF to: 02f98ad8 (READ)
//   XREF to: 02f98bec (READ)
//   XREF to: 02f98d00 (READ)
// 00540c18: CMP EDX,dword ptr [ECX + 0x5]
// 00540c1b: JZ 0x00540c2d
//   XREF to: 00540c2d (CONDITIONAL_JUMP)
// 00540c1d: ADD EAX,0x114
// 00540c22: INC ESI
// 00540c23: CMP EAX,EDI
// 00540c25: JGE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540c2b: JMP 0x00540c0b
//   XREF to: 00540c0b (UNCONDITIONAL_JUMP)
// 00540c2d: LEA EDX,[EAX + EBX*0x1]
//   Label: LAB_00540c2d
// 00540c30: MOV byte ptr [EDX + 0x2f98adc],0x1
//   XREF to: 02f98adc (DATA)
//   XREF to: 02f98bf0 (DATA)
// 00540c37: ADD EAX,0x114
// 00540c3c: INC ESI
// 00540c3d: CMP EAX,EDI
// 00540c3f: JGE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540c45: JMP 0x00540c0b
//   XREF to: 00540c0b (UNCONDITIONAL_JUMP)
// 00540c47: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_8
//   XREF to: Stack[0x4] (READ)
// 00540c4a: MOV EDI,dword ptr [EAX]
// 00540c4c: CMP EDI,0x2
// 00540c4f: JNZ 0x0054097f
//   XREF to: 0054097f (CONDITIONAL_JUMP)
// 00540c55: TEST EBX,EBX
// 00540c57: JL 0x0054097f
//   XREF to: 0054097f (CONDITIONAL_JUMP)
// 00540c5d: CMP EBX,dword ptr [EAX + 0x110]
// 00540c63: JNZ 0x0054097f
//   XREF to: 0054097f (CONDITIONAL_JUMP)
// 00540c69: MOV ECX,dword ptr [EAX + 0x4]
// 00540c6c: CMP ECX,0x1
// 00540c6f: JNZ 0x00540c79
//   XREF to: 00540c79 (CONDITIONAL_JUMP)
// 00540c71: CMP ECX,dword ptr [ESI + 0x5]
// 00540c74: JNZ 0x00540c79
//   XREF to: 00540c79 (CONDITIONAL_JUMP)
// 00540c76: MOV dword ptr [EAX + 0x4],EDI
// 00540c79: MOV EDI,0x9
//   Label: LAB_00540c79
// 00540c7e: MOV DL,0x9
// 00540c80: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540c83: MOV dword ptr [ESP + 0xa4],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 00540c8a: MOV byte ptr [ESP + 0xa8],DL
//   XREF to: Stack[-0x48] (WRITE)
// 00540c91: MOV EAX,dword ptr [EAX + 0x114]
// 00540c97: SHL EAX,0x3
// 00540c9a: MOV EDX,EAX
// 00540c9c: SHL EAX,0x4
// 00540c9f: SUB EAX,EDX
// 00540ca1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540ca4: ADD EAX,EDX
// 00540ca6: MOV EAX,dword ptr [EAX + 0x5c]
// 00540ca9: MOV dword ptr [ESP + 0xa9],EAX
//   XREF to: Stack[-0x47] (WRITE)
// 00540cb0: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x4c] (DATA)
// 00540cb7: PUSH EAX
// 00540cb8: MOV ECX,dword ptr [EDX + 0x110]
// 00540cbe: PUSH ECX
// 00540cbf: PUSH EDX
// 00540cc0: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 00540cc5: MOV EDI,dword ptr [0x02f7c8c0]
//   XREF to: 02f7c8c0 (READ)
// 00540ccb: MOV EAX,dword ptr [ESI + 0x5]
// 00540cce: ADD ESP,0xc
// 00540cd1: CMP EAX,EDI
// 00540cd3: JLE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540cd9: MOV [0x02f7c8c0],EAX
//   XREF to: 02f7c8c0 (WRITE)
// 00540cde: MOV ESP,EBP
// 00540ce0: POP EBP
// 00540ce1: POP EDI
// 00540ce2: POP ESI
// 00540ce3: POP EBX
// 00540ce4: RET
// 00540ce5: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_9
//   XREF to: Stack[0x4] (READ)
// 00540ce8: CMP dword ptr [EAX],0x1
// 00540ceb: JNZ 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540ced: TEST EBX,EBX
// 00540cef: JL 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540cf1: CMP dword ptr [EAX + 0x4],0x2
// 00540cf5: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540cfb: MOV EDX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540d02: MOV EAX,dword ptr [ESI + 0x5]
// 00540d05: CMP EAX,dword ptr [EDX + 0x3c]
// 00540d08: JL 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540d0e: MOV dword ptr [EDX + 0x3c],EAX
// 00540d11: MOV ESP,EBP
// 00540d13: POP EBP
// 00540d14: POP EDI
// 00540d15: POP ESI
// 00540d16: POP EBX
// 00540d17: RET
// 00540d18: PUSH 0x0
//   Label: LAB_00540d18
// 00540d1a: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540d1d: PUSH EBX
// 00540d1e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540d21: PUSH ESI
// 00540d22: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 00540d27: ADD ESP,0xc
// 00540d2a: MOV ESP,EBP
// 00540d2c: POP EBP
// 00540d2d: POP EDI
// 00540d2e: POP ESI
// 00540d2f: POP EBX
// 00540d30: RET
// 00540d31: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_a
//   XREF to: Stack[0x4] (READ)
// 00540d34: MOV EDI,dword ptr [EAX]
// 00540d36: MOV EDX,ESI
// 00540d38: CMP EDI,0x1
// 00540d3b: JNZ 0x00540df8
//   XREF to: 00540df8 (CONDITIONAL_JUMP)
// 00540d41: TEST EBX,EBX
// 00540d43: JL 0x00540df8
//   XREF to: 00540df8 (CONDITIONAL_JUMP)
// 00540d49: CMP EDI,dword ptr [EAX + 0x4]
// 00540d4c: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540d52: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540d59: CMP dword ptr [EAX + 0x40],0x0
// 00540d5d: JZ 0x00540db9
//   XREF to: 00540db9 (CONDITIONAL_JUMP)
// 00540d5f: MOV ECX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540d66: MOV EAX,dword ptr [ESI + 0x5]
// 00540d69: MOV ECX,dword ptr [ECX + 0x40]
// 00540d6c: SUB ECX,EAX
// 00540d6e: MOV dword ptr [ESP + 0xdc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00540d75: FILD dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 00540d7c: FMUL double ptr [0x0063d8f5]
//   XREF to: 0063d8f5 (READ)
// 00540d82: FST float ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 00540d85: FCOMP double ptr [0x0063d8fd]
//   XREF to: 0063d8fd (READ)
// 00540d8b: FNSTSW AX
// 00540d8d: SAHF
// 00540d8e: JC 0x00540e11
//   XREF to: 00540e11 (CONDITIONAL_JUMP)
// 00540d94: FLD float ptr [ESP]
//   Label: LAB_00540d94
//   XREF to: Stack[-0xf0] (DATA)
// 00540d97: FCOMP double ptr [0x0063d905]
//   XREF to: 0063d905 (READ)
// 00540d9d: FNSTSW AX
// 00540d9f: SAHF
// 00540da0: JBE 0x00540da9
//   XREF to: 00540da9 (CONDITIONAL_JUMP)
// 00540da2: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0xf0] (DATA)
// 00540da9: FLD float ptr [ESP]
//   Label: LAB_00540da9
//   XREF to: Stack[-0xf0] (DATA)
// 00540dac: FLDZ
// 00540dae: FCOMPP
// 00540db0: FNSTSW AX
// 00540db2: SAHF
// 00540db3: JNC 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540db9: MOV ECX,dword ptr [ESP + 0xd4]
//   Label: LAB_00540db9
//   XREF to: Stack[-0x1c] (READ)
// 00540dc0: LEA ESI,[EDX + 0x9]
// 00540dc3: MOV EAX,dword ptr [EDX + 0x1d]
// 00540dc6: MOV EDI,ECX
// 00540dc8: MOV dword ptr [ECX + 0x44],EAX
// 00540dcb: PUSH EDI
// 00540dcc: MOV AL,byte ptr [ESI]
//   Label: LAB_00540dcc
// 00540dce: MOV byte ptr [EDI],AL
// 00540dd0: CMP AL,0x0
// 00540dd2: JZ 0x00540de4
//   XREF to: 00540de4 (CONDITIONAL_JUMP)
// 00540dd4: MOV AL,byte ptr [ESI + 0x1]
// 00540dd7: ADD ESI,0x2
// 00540dda: MOV byte ptr [EDI + 0x1],AL
// 00540ddd: ADD EDI,0x2
// 00540de0: CMP AL,0x0
// 00540de2: JNZ 0x00540dcc
//   XREF to: 00540dcc (CONDITIONAL_JUMP)
// 00540de4: POP EDI
//   Label: LAB_00540de4
// 00540de5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540de8: PUSH EAX
// 00540de9: CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
// 00540dee: ADD ESP,0x4
// 00540df1: MOV ESP,EBP
// 00540df3: POP EBP
// 00540df4: POP EDI
// 00540df5: POP ESI
// 00540df6: POP EBX
// 00540df7: RET
// 00540df8: PUSH 0x0
//   Label: LAB_00540df8
// 00540dfa: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540dfd: PUSH EDX
// 00540dfe: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540e01: PUSH ECX
// 00540e02: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 00540e07: ADD ESP,0xc
// 00540e0a: MOV ESP,EBP
// 00540e0c: POP EBP
// 00540e0d: POP EDI
// 00540e0e: POP ESI
// 00540e0f: POP EBX
// 00540e10: RET
// 00540e11: MOV dword ptr [ESP],0xc1f00000
//   Label: LAB_00540e11
//   XREF to: Stack[-0xf0] (DATA)
// 00540e18: JMP 0x00540d94
//   XREF to: 00540d94 (UNCONDITIONAL_JUMP)
// 00540e1d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_b
//   XREF to: Stack[0x4] (READ)
// 00540e20: CMP dword ptr [EAX],0x2
// 00540e23: JNZ 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540e29: TEST EBX,EBX
// 00540e2b: JL 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540e31: CMP EBX,dword ptr [EAX + 0x110]
// 00540e37: JNZ 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540e3d: CMP dword ptr [EAX + 0x4],0x1
// 00540e41: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540e47: MOV EAX,[0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 00540e4c: CMP EAX,dword ptr [ESI + 0x5]
// 00540e4f: JGE 0x00540e6e
//   XREF to: 00540e6e (CONDITIONAL_JUMP)
// 00540e51: PUSH ESI
// 00540e52: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540e55: PUSH EDI
// 00540e56: CALL core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
//   XREF to: 00542470 (UNCONDITIONAL_CALL)
// 00540e5b: ADD ESP,0x8
// 00540e5e: TEST EAX,EAX
// 00540e60: JZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540e66: MOV EAX,dword ptr [ESI + 0x5]
// 00540e69: MOV [0x02f7c8c4],EAX
//   XREF to: 02f7c8c4 (WRITE)
// 00540e6e: MOV dword ptr [ESP + 0x8c],0x9
//   Label: LAB_00540e6e
//   XREF to: Stack[-0x64] (WRITE)
// 00540e79: MOV byte ptr [ESP + 0x90],0xc
//   XREF to: Stack[-0x60] (WRITE)
// 00540e81: MOV EAX,[0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 00540e86: MOV dword ptr [ESP + 0x91],EAX
//   XREF to: Stack[-0x5f] (WRITE)
// 00540e8d: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x64] (DATA)
// 00540e94: PUSH EAX
// 00540e95: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540e98: MOV EDX,dword ptr [EAX + 0x110]
// 00540e9e: PUSH EDX
// 00540e9f: PUSH EAX
// 00540ea0: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 00540ea5: ADD ESP,0xc
// 00540ea8: MOV ESP,EBP
// 00540eaa: POP EBP
// 00540eab: POP EDI
// 00540eac: POP ESI
// 00540ead: POP EBX
// 00540eae: RET
// 00540eaf: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_c
//   XREF to: Stack[0x4] (READ)
// 00540eb2: MOV EDI,dword ptr [EAX]
// 00540eb4: CMP EDI,0x1
// 00540eb7: JNZ 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540ebd: TEST EBX,EBX
// 00540ebf: JL 0x00540d18
//   XREF to: 00540d18 (CONDITIONAL_JUMP)
// 00540ec5: CMP EDI,dword ptr [EAX + 0x4]
// 00540ec8: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540ece: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540ed5: MOV ECX,dword ptr [ESI + 0x5]
// 00540ed8: CMP ECX,dword ptr [EAX + 0x34]
// 00540edb: JL 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540ee1: MOV EDX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00540ee8: MOV dword ptr [EDX + 0x34],ECX
// 00540eeb: MOV ESP,EBP
// 00540eed: POP EBP
// 00540eee: POP EDI
// 00540eef: POP ESI
// 00540ef0: POP EBX
// 00540ef1: RET
// 00540ef2: CMP dword ptr [ESI + 0x5],0x0
//   Label: caseD_d
// 00540ef6: JNZ 0x00540f81
//   XREF to: 00540f81 (CONDITIONAL_JUMP)
// 00540efc: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00540efc
//   XREF to: Stack[0x4] (READ)
// 00540eff: CMP dword ptr [EAX],0x1
// 00540f02: JNZ 0x00540f1e
//   XREF to: 00540f1e (CONDITIONAL_JUMP)
// 00540f04: TEST EBX,EBX
// 00540f06: JL 0x00540f12
//   XREF to: 00540f12 (CONDITIONAL_JUMP)
// 00540f08: PUSH EBX
// 00540f09: PUSH EAX
// 00540f0a: CALL core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
//   XREF to: 00542b00 (UNCONDITIONAL_CALL)
// 00540f0f: ADD ESP,0x8
// 00540f12: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_00540f12
//   XREF to: Stack[0x4] (READ)
// 00540f15: PUSH EDI
// 00540f16: CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
//   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
// 00540f1b: ADD ESP,0x4
// 00540f1e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00540f1e
//   XREF to: Stack[0x4] (READ)
// 00540f21: CMP dword ptr [EAX],0x2
// 00540f24: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540f2a: TEST EBX,EBX
// 00540f2c: JL 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540f32: CMP EBX,dword ptr [EAX + 0x110]
// 00540f38: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00540f3e: PUSH 0x0
// 00540f40: PUSH EAX
// 00540f41: MOV EBX,EAX
// 00540f43: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 00540f48: ADD ESP,0x8
// 00540f4b: PUSH 0x63d853
//   XREF to: 0063d853 (DATA)
// 00540f50: PUSH 0x63d87c
//   XREF to: 0063d87c (DATA)
// 00540f55: PUSH 0x0
// 00540f57: PUSH 0x0
// 00540f59: PUSH 0x3f87498
//   XREF to: 03f87498 (DATA)
// 00540f5e: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x34] (DATA)
// 00540f65: PUSH EAX
// 00540f66: CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940
//   XREF to: 005e1940 (UNCONDITIONAL_CALL)
// 00540f6b: ADD ESP,0xc
// 00540f6e: PUSH EAX
// 00540f6f: MOV ESI,EBX
// 00540f71: PUSH ESI
// 00540f72: CALL core_netgame.cpp_CNetGame_FUN_00542370
//   XREF to: 00542370 (UNCONDITIONAL_CALL)
// 00540f77: ADD ESP,0x14
// 00540f7a: MOV ESP,EBP
// 00540f7c: POP EBP
// 00540f7d: POP EDI
// 00540f7e: POP ESI
// 00540f7f: POP EBX
// 00540f80: RET
// 00540f81: PUSH 0x0
//   Label: LAB_00540f81
// 00540f83: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540f86: PUSH EAX
// 00540f87: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00540f8a: PUSH EDX
// 00540f8b: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 00540f90: ADD ESP,0xc
// 00540f93: JMP 0x00540efc
//   XREF to: 00540efc (UNCONDITIONAL_JUMP)
// 00540f98: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_f
//   XREF to: Stack[0x4] (READ)
// 00540f9b: MOV EDX,dword ptr [EAX]
// 00540f9d: MOV EDI,ESI
// 00540f9f: CMP EDX,0x2
// 00540fa2: JNZ 0x00540df8
//   XREF to: 00540df8 (CONDITIONAL_JUMP)
// 00540fa8: TEST EBX,EBX
// 00540faa: JL 0x00540df8
//   XREF to: 00540df8 (CONDITIONAL_JUMP)
// 00540fb0: MOV ECX,dword ptr [EAX + 0x110]
// 00540fb6: CMP EBX,ECX
// 00540fb8: JNZ 0x00540df8
//   XREF to: 00540df8 (CONDITIONAL_JUMP)
// 00540fbe: MOV EAX,dword ptr [ESI + 0x5]
// 00540fc1: MOV ESI,EAX
// 00540fc3: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00540fca: MOV EAX,[0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 00540fcf: XOR EBX,ECX
// 00540fd1: TEST EAX,EAX
// 00540fd3: JLE 0x005410b9
//   XREF to: 005410b9 (CONDITIONAL_JUMP)
// 00540fd9: MOV EDX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 00540fdf: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00540fe6: MOV ECX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 00540fed: SHL EDX,0x2
// 00540ff0: SUB EDX,ECX
// 00540ff2: SHL EDX,0x3
// 00540ff5: ADD EDX,ECX
// 00540ff7: XOR EAX,EAX
// 00540ff9: SHL EDX,0x2
// 00540ffc: CMP ESI,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_00540ffc
//   XREF to: 02f9c0c4 (DATA)
//   XREF to: 02f9c128 (READ)
// 00541002: JNZ 0x005410ad
//   XREF to: 005410ad (CONDITIONAL_JUMP)
// 00541008: TEST EBX,EBX
// 0054100a: JL 0x005410b9
//   XREF to: 005410b9 (CONDITIONAL_JUMP)
// 00541010: ADD EAX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 00541015: MOV EDX,dword ptr [EDI + 0x9]
//   Label: LAB_00541015
// 00541018: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 02f9c0c8 (WRITE)
//   XREF to: 02f9c12c (WRITE)
// 0054101b: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x24] (WRITE)
//   XREF to: 02f9c0c4 (DATA)
//   XREF to: 02f9c128 (DATA)
// 00541022: MOV EDX,dword ptr [EDI + 0xd]
// 00541025: MOV dword ptr [EAX + 0x8],EDX
//   XREF to: 02f9c0cc (WRITE)
//   XREF to: 02f9c130 (WRITE)
// 00541028: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054102b: MOV ECX,dword ptr [EAX + 0x1c]
// 0054102e: XOR EBX,EBX
// 00541030: TEST ECX,ECX
// 00541032: JLE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00541038: MOV dword ptr [ESP + 0xd8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0054103f: MOV ESI,EBX
//   Label: LAB_0054103f
// 00541041: TEST EBX,EBX
// 00541043: JL 0x00541129
//   XREF to: 00541129 (CONDITIONAL_JUMP)
// 00541049: CMP ESI,EBX
//   Label: LAB_00541049
// 0054104b: JZ 0x0054106f
//   XREF to: 0054106f (CONDITIONAL_JUMP)
// 0054104d: MOV EAX,0x63d8c9
//   XREF to: 0063d8c9 (PARAM)
// 00541052: MOV EDX,0x597
// 00541057: PUSH 0x63d8dd
//   XREF to: 0063d8dd (DATA)
// 0054105c: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00541061: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00541067: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054106c: ADD ESP,0x4
// 0054106f: IMUL ESI,ESI,0x2c
//   Label: LAB_0054106f
// 00541072: ADD ESI,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 00541079: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x18] (READ)
// 00541080: LEA EDI,[ESI + 0xc]
//   XREF to: 02f9c0d0 (DATA)
// 00541083: MOV ESI,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x18] (READ)
// 0054108a: MOV ECX,0xb
// 0054108f: ADD EAX,0x2c
// 00541092: LEA ESI,[ESI + 0x11]
// 00541095: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054109c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054109f: MOVSD.REP ES:EDI,ESI
//   XREF to: 02f9c0d0 (WRITE)
//   XREF to: 02f9c0d4 (WRITE)
//   XREF to: 02f9c0fc (WRITE)
// 005410a1: INC EBX
// 005410a2: CMP EBX,dword ptr [EAX + 0x1c]
// 005410a5: JGE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 005410ab: JMP 0x0054103f
//   XREF to: 0054103f (UNCONDITIONAL_JUMP)
// 005410ad: ADD EAX,0x64
//   Label: LAB_005410ad
// 005410b0: INC EBX
// 005410b1: CMP EAX,EDX
// 005410b3: JL 0x00540ffc
//   XREF to: 00540ffc (CONDITIONAL_JUMP)
// 005410b9: CMP dword ptr [0x02f9c0c0],0x200
//   Label: LAB_005410b9
//   XREF to: 02f9c0c0 (READ)
// 005410c3: JL 0x005410e7
//   XREF to: 005410e7 (CONDITIONAL_JUMP)
// 005410c5: MOV ESI,0x63d277
//   XREF to: 0063d277 (DATA)
// 005410ca: MOV EAX,0x12b
// 005410cf: PUSH 0x63d28b
//   XREF to: 0063d28b (DATA)
// 005410d4: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005410da: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005410df: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005410e4: ADD ESP,0x4
// 005410e7: MOV EDX,dword ptr [0x02f9c0c0]
//   Label: LAB_005410e7
//   XREF to: 02f9c0c0 (READ)
// 005410ed: LEA EAX,[EDX*0x4 + 0x0]
// 005410f4: SUB EAX,EDX
// 005410f6: SHL EAX,0x3
// 005410f9: MOV EBX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 005410fe: ADD EAX,EDX
// 00541100: PUSH 0x64
// 00541102: SHL EAX,0x2
// 00541105: PUSH 0x0
// 00541107: ADD EBX,EAX
// 00541109: INC EDX
// 0054110a: PUSH EBX
// 0054110b: MOV dword ptr [0x02f9c0c0],EDX
//   XREF to: 02f9c0c0 (WRITE)
// 00541111: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00541116: ADD ESP,0xc
// 00541119: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x2c] (READ)
// 00541120: MOV dword ptr [EBX],EAX
//   XREF to: 02f9c0c4 (DATA)
// 00541122: MOV EAX,EBX
// 00541124: JMP 0x00541015
//   XREF to: 00541015 (UNCONDITIONAL_JUMP)
// 00541129: MOV ECX,0x63d87d
//   Label: LAB_00541129
//   XREF to: 0063d87d (PARAM)
// 0054112e: MOV EDI,0x596
// 00541133: PUSH 0x63d891
//   XREF to: 0063d891 (DATA)
// 00541138: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054113e: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00541144: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00541149: ADD ESP,0x4
// 0054114c: JMP 0x00541049
//   XREF to: 00541049 (UNCONDITIONAL_JUMP)
// 00541151: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_10
//   XREF to: Stack[0x4] (READ)
// 00541154: CMP dword ptr [EAX],0x1
// 00541157: JNZ 0x0054119a
//   XREF to: 0054119a (CONDITIONAL_JUMP)
// 00541159: TEST EBX,EBX
// 0054115b: JL 0x0054119a
//   XREF to: 0054119a (CONDITIONAL_JUMP)
// 0054115d: CMP dword ptr [EAX + 0x4],0x3
// 00541161: JNZ 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 00541167: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 0054116e: MOV EBX,dword ptr [ESI + 0x5]
// 00541171: CMP EBX,dword ptr [EAX + 0x48]
// 00541174: JLE 0x0054044c
//   XREF to: 0054044c (CONDITIONAL_JUMP)
// 0054117a: MOV EDX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00541181: MOV EDI,EDX
// 00541183: MOV dword ptr [EDX + 0x48],EBX
// 00541186: MOV ECX,0xb
// 0054118b: LEA EDI,[EDI + 0x4c]
// 0054118e: LEA ESI,[ESI + 0x9]
// 00541191: MOVSD.REP ES:EDI,ESI
// 00541193: MOV ESP,EBP
// 00541195: POP EBP
// 00541196: POP EDI
// 00541197: POP ESI
// 00541198: POP EBX
// 00541199: RET
// 0054119a: PUSH 0x0
//   Label: LAB_0054119a
// 0054119c: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054119f: PUSH ESI
// 005411a0: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005411a3: PUSH EDI
// 005411a4: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 005411a9: ADD ESP,0xc
// 005411ac: MOV ESP,EBP
// 005411ae: POP EBP
// 005411af: POP EDI
// 005411b0: POP ESI
// 005411b1: POP EBX
// 005411b2: RET
