// Name: core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
// Address: 005406a0
// Address Range: [[005406a0, 005411b2]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_allocSimFrame_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,char *packet_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0054104d) */

void __cdecl core_netgame_cpp_CNetGame_allocSimFrame_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,char *packet_data)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  SChatHistory *pSVar6;
  char *pcVar7;
  char *pcVar8;
  SNetPlayer *pSVar9;
  int *piVar10;
  SPlayerControl *pSVar11;
  byte bVar12;
  float local_f0;
  float local_ec;
  float local_e8;
  char local_df [20];
  char local_cb [80];
  uint local_7b;
  uint uStack_77;
  uint local_70;
  byte local_6c;
  uint local_6b;
  uint local_64;
  byte local_60;
  int local_5f;
  uint local_58;
  byte local_54;
  uint local_4c;
  byte local_48;
  int local_47;
  uint local_40;
  byte local_3c;
  uint local_3b;
  SNetworkAddr local_34;
  int local_2c;
  char *local_28;
  int *local_24;
  SNetPlayer *local_1c;
  char *local_18;
  int local_14;
  
  bVar12 = 0;
  uVar2 = core_netgame_cpp_CNetGame_FUN_00541260(this_ptr);
  local_1c = (SNetPlayer *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = this_ptr->players + uVar2;
    *(uint *)(local_1c->name + 0x24) = g_CurrentGameTime;
  }
  switch(packet_data[4]) {
  case '\x01':
    local_28 = packet_data;
    if (this_ptr->network_mode != 1) {
      local_54 = 3;
      local_58 = 9;
      core_netgame_cpp_CNetGame_FUN_00541230(this_ptr);
    }
    if ((int)uVar2 < 0) {
      uVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(this_ptr);
    }
    else {
      iVar5 = strcmp(local_1c->name,local_28 + 0xd);
      if (((iVar5 != 0) || (*(int *)(local_28 + 0x21) != *(int *)(local_1c->name + 0x14))) ||
         (*(int *)(local_28 + 0x25) != *(int *)(local_1c->name + 0x18))) {
        pcVar8 = local_28 + 0xd;
        pSVar9 = local_1c;
        do {
          cVar1 = *pcVar8;
          pSVar9->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pSVar9->name[1] = cVar1;
          pSVar9 = (SNetPlayer *)(pSVar9->name + 2);
        } while (cVar1 != '\0');
        *(uint *)(local_1c->name + 0x14) = *(uint *)(local_28 + 0x21);
        *(uint *)(local_1c->name + 0x18) = *(uint *)(local_28 + 0x25);
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
      }
    }
    pcVar8 = local_cb;
    pcVar7 = this_ptr->mission_name;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = local_df;
    pcVar7 = this_ptr->player_name;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_7b = source_addr->ip_address;
    (&uStack_77)[(uint)bVar12 * -2] = *(uint *)&source_addr[-(uint)bVar12].port;
    core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,uVar2);
    iVar5 = this_ptr->local_player_index;
    *(uint *)(this_ptr->players[iVar5].name + 0x1c) = *(uint *)(local_28 + 5);
    *(uint *)((int)this_ptr + (uint)bVar12 * -8 + iVar5 * 0x78 + 0x40) =
         *(uint *)(local_28 + (uint)bVar12 * -8 + 9);
    return;
  case '\x02':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) {
LAB_0054097f:
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
      return;
    }
    if (this_ptr->network_mode == 1) {
      pcVar8 = packet_data + 5;
      DAT_02f7c8bc = 1;
      do {
        cVar1 = *pcVar8;
        local_1c->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        local_1c->name[1] = cVar1;
        local_1c = (SNetPlayer *)(local_1c->name + 2);
      } while (cVar1 != '\0');
      iVar5 = this_ptr->local_player_index;
      *(uint *)(this_ptr->players[iVar5].name + 0x1c) = *(uint *)(packet_data + 0x69);
      *(uint *)((int)this_ptr + (uint)bVar12 * -8 + iVar5 * 0x78 + 0x40) =
           *(uint *)(packet_data + (uint)bVar12 * -8 + 0x6d);
      DAT_02f7c8c4 = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((this_ptr->connection_type == 2) && (-1 < (int)uVar2)) &&
       ((this_ptr->network_mode == 1 && (uVar2 == this_ptr->server_player_index)))) {
      DAT_02f7c8bc = *(uint *)(packet_data + 5);
      return;
    }
    break;
  case '\x04':
    if (this_ptr->connection_type == 0) {
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
      return;
    }
    local_40 = 9;
    local_3c = 5;
    local_3b = *(uint *)(packet_data + 5);
    core_netgame_cpp_CNetGame_FUN_00541230(this_ptr);
    return;
  case '\x05':
    if ((this_ptr->connection_type == 0) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
      return;
    }
    if (0.0 <= local_1c->ping_quality) {
      local_ec = (float)(int)(*(int *)(packet_data + 5) - local_1c->last_ping_response) *
                 (float)1.52587890625e-05;
      if (local_ec < (float)-30) {
        local_ec = -30.0;
      }
      if ((float)30 < local_ec) {
        local_ec = 30.0;
      }
      if (local_ec <= 0.0) {
        return;
      }
    }
    local_e8 = (float)(int)(g_CurrentGameTime - *(int *)(packet_data + 5)) * (float)1.52587890625e-05;
    if (local_e8 < 0.0) {
      local_e8 = 0.0;
    }
    if ((float)30 < local_e8) {
      local_e8 = 30.0;
    }
    local_1c->ping_quality = local_e8;
    local_1c->last_ping_response = g_CurrentGameTime;
    return;
  case '\x06':
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < g_ChatHistoryCount) {
        pSVar6 = g_ChatHistory;
        do {
          if ((((pSVar6->sender_addr).port == source_addr->port) &&
              ((pSVar6->sender_addr).ip_address == source_addr->ip_address)) &&
             (*(int *)(packet_data + 5) == g_ChatHistory[iVar5].message_id)) break;
          iVar5 = iVar5 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar5 < g_ChatHistoryCount);
      }
      if (iVar5 == g_ChatHistoryCount) {
        core_netgame_cpp_CNetGame_FUN_00542370(this_ptr);
      }
      local_70 = 9;
      local_6c = 7;
      local_6b = *(uint *)(packet_data + 5);
      core_netgame_cpp_CNetGame_FUN_00541230(this_ptr);
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
       (uVar2 != this_ptr->server_player_index)) goto LAB_0054097f;
    if ((this_ptr->network_mode == 1) && (*(int *)(packet_data + 5) == 1)) {
      this_ptr->network_mode = 2;
    }
    local_4c = 9;
    local_48 = 9;
    local_47 = this_ptr->players[this_ptr->local_player_index].local_sync_stage;
    core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,this_ptr->server_player_index);
    if (g_RemoteSyncStage < *(int *)(packet_data + 5)) {
      g_RemoteSyncStage = *(int *)(packet_data + 5);
      return;
    }
    break;
  case '\t':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) {
LAB_00540d18:
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
      return;
    }
    if ((this_ptr->network_mode == 2) && (local_1c->local_sync_stage <= *(int *)(packet_data + 5)))
    {
      local_1c->local_sync_stage = *(int *)(packet_data + 5);
      return;
    }
    break;
  case '\n':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) {
LAB_00540df8:
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
      return;
    }
    if (this_ptr->network_mode == 1) {
      if (local_1c->state_change_time != 0) {
        local_14 = local_1c->state_change_time - *(int *)(packet_data + 5);
        local_f0 = (float)local_14 * (float)1.52587890625e-05;
        if (local_f0 < (float)-30) {
          local_f0 = -30.0;
        }
        if ((float)30 < local_f0) {
          local_f0 = 30.0;
        }
        if (local_f0 <= 0.0) {
          return;
        }
      }
      pcVar8 = packet_data + 9;
      local_1c->ready_flag = *(int *)(packet_data + 0x1d);
      pSVar9 = local_1c;
      do {
        cVar1 = *pcVar8;
        pSVar9->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pSVar9->name[1] = cVar1;
        pSVar9 = (SNetPlayer *)(pSVar9->name + 2);
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
      return;
    }
    break;
  case '\v':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_00540d18;
    if (this_ptr->network_mode == 1) {
      if (DAT_02f7c8c4 < *(int *)(packet_data + 5)) {
        iVar5 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(this_ptr);
        if (iVar5 == 0) {
          return;
        }
        DAT_02f7c8c4 = *(int *)(packet_data + 5);
      }
      local_64 = 9;
      local_60 = 0xc;
      local_5f = DAT_02f7c8c4;
      core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,this_ptr->server_player_index);
      return;
    }
    break;
  case '\f':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) goto LAB_00540d18;
    if ((this_ptr->network_mode == 1) && (local_1c->player_id <= *(int *)(packet_data + 5))) {
      local_1c->player_id = *(int *)(packet_data + 5);
      return;
    }
    break;
  case '\r':
    if (*(int *)(packet_data + 5) != 0) {
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
    }
    if (this_ptr->connection_type == 1) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(this_ptr,uVar2);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
    }
    if (((this_ptr->connection_type == 2) && (-1 < (int)uVar2)) &&
       (uVar2 == this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
      support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_34,(uint32_t *)g_AnyAddressIP,0);
      core_netgame_cpp_CNetGame_FUN_00542370(this_ptr);
      return;
    }
    break;
  case '\x0f':
    if (((this_ptr->connection_type != 2) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_00540df8;
    local_2c = *(int *)(packet_data + 5);
    uVar2 = uVar2 ^ this_ptr->server_player_index;
    if (0 < g_SimFrameCount) {
      local_14 = g_SimFrameCount;
      iVar5 = 0;
      do {
        if (local_2c == *(int *)((int)&g_SimFrameHistory + iVar5)) {
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
    memset(piVar3,0,100);
    *piVar3 = local_2c;
LAB_00541015:
    piVar3[1] = *(int *)(packet_data + 9);
    piVar3[2] = *(int *)(packet_data + 0xd);
    iVar5 = 0;
    if (0 < this_ptr->player_count) {
      local_18 = packet_data;
      local_24 = piVar3;
      do {
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x596;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Player list mismatch processing SimFrame Update packet!");
        }
        piVar3 = (int *)(local_18 + 0x11);
        piVar10 = local_24 + iVar5 * 0xb + 3;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar10 = *piVar3;
          piVar3 = piVar3 + (uint)bVar12 * -2 + 1;
          piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 0x2c;
      } while (iVar5 < this_ptr->player_count);
    }
    break;
  case '\x10':
    if ((this_ptr->connection_type != 1) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_FUN_00543930(this_ptr);
      return;
    }
    if ((this_ptr->network_mode == 3) && (local_1c->sim_frame_index < *(int *)(packet_data + 5))) {
      local_1c->sim_frame_index = *(int *)(packet_data + 5);
      piVar3 = (int *)(packet_data + 9);
      pSVar11 = &local_1c->controls;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        pSVar11->action_states[0] = *piVar3;
        piVar3 = piVar3 + (uint)bVar12 * -2 + 1;
        pSVar11 = (SPlayerControl *)((int)pSVar11 + (uint)bVar12 * -8 + 4);
      }
      return;
    }
  }
  return;
}
