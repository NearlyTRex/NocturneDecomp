// Name: core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
// Address: 005406a0
// Address Range: [[005406a0, 005411b2]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0(CNetGame * this_ptr, SNetworkAddr * source_addr, char * packet_data)

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
  byte local_6b [7];
  byte local_64;
  uint uStack_63;
  uint uStack_5c;
  byte local_58;
  uint uStack_57;
  undefined3 uStack_53;
  byte uStack_50;
  uint local_48;
  byte uStack_44;
  uint uStack_43;
  uint local_3c;
  byte uStack_38;
  uint uStack_37;
  ulonglong local_28;
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
      uStack_57 = CONCAT13 /* combine 2-byte values */(9,(undefined3)uStack_57);
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
        *(uint *)(unaff_EBP + 0x14) = *(uint *)(local_1c + 0x21);
        *(uint *)(unaff_EBP + 0x18) = *(uint *)(local_1c + 0x25);
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
    *(uint *)(local_6b + (uint)bVar11 * -8) = *(uint *)&source_addr[-(uint)bVar11].port;
    core_netgame_cpp_CNetGame_send_FUN_005411c0();
    iVar5 = this_ptr->local_player_index;
    *(uint *)(this_ptr->players[iVar5].name + 0x1c) = *(uint *)(local_18->name + 5);
    *(uint *)((int)this_ptr + (uint)bVar11 * -8 + iVar5 * 0x78 + 0x40) =
         *(uint *)((int)local_18 + (uint)bVar11 * -8 + 9);
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
      *(uint *)(this_ptr->players[iVar5].name + 0x1c) = *(uint *)(packet_data + 0x69);
      *(uint *)((int)this_ptr + (uint)bVar11 * -8 + iVar5 * 0x78 + 0x40) =
           *(uint *)(packet_data + (uint)bVar11 * -8 + 0x6d);
      DAT_02f7c8c4 = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((this_ptr->connection_type == 2) && (-1 < (int)uVar2)) &&
       ((this_ptr->network_mode == 1 && (uVar2 == *(uint *)this_ptr->padding)))) {
      DAT_02f7c8bc = *(uint *)(packet_data + 5);
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
    uStack_37 = *(uint *)(packet_data + 5);
    core_netgame_cpp_CNetGame_FUN_00541230();
    return;
  case '\x05':
    if ((this_ptr->connection_type == 0) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_FUN_00543930();
      return;
    }
    if (0.0 <= local_18->ping_quality) {
      fVar12 = (float)(int)(*(int *)(packet_data + 5) - local_18->last_ping_response) *
               (float)1.52587890625e-05;
      if (fVar12 < (float)-30) {
        fVar12 = -30.0;
      }
      if ((float)30 < fVar12) {
        fVar12 = 30.0;
      }
      if (fVar12 <= 0.0) {
        return;
      }
    }
    local_e4 = (float)(int)(g_CurrentGameTime - *(int *)(packet_data + 5)) * (float)1.52587890625e-05;
    if (local_e4 < 0.0) {
      local_e4 = 0.0;
    }
    if ((float)30 < local_e4) {
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
      uStack_63 = *(uint *)(packet_data + 5);
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
    uStack_43 = *(uint *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 4);
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
                 (float)1.52587890625e-05;
        if (fVar12 < (float)-30) {
          fVar12 = -30.0;
        }
        if ((float)30 < fVar12) {
          fVar12 = 30.0;
        }
        if (fVar12 <= 0.0) {
          return;
        }
      }
      pcVar8 = packet_data + 9;
      *(uint *)(local_18->field5_0x38 + 0xc) = *(uint *)(packet_data + 0x1d);
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
        *(uint *)pcVar7 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -8 + 4;
        pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
      }
      return;
    }
  }
  return;
}
