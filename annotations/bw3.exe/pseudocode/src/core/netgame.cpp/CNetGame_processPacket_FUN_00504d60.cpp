// Name: core_netgame.cpp_CNetGame_processPacket_FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00505862]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005056f8) */

void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  SNetworkAddr *sender_addr;
  SSimFrame *dest;
  int iVar3;
  int iVar4;
  SChatHistory *pSVar5;
  SPlayerInput *pSVar6;
  ushort *puVar7;
  SNetPlayer *pSVar8;
  SPlayerInput *pSVar9;
  byte bVar10;
  char *pcVar11;
  char *pcVar12;
  float local_f8;
  float local_f4;
  float local_f0;
  SNetPacketHeader local_ec;
  char local_e7 [20];
  char local_d3 [80];
  uint local_83;
  uint uStack_7f;
  SNetPacketHeader local_78;
  uint local_73;
  SNetPacketHeader local_6c;
  int local_67;
  SNetPacketHeader local_60;
  uint local_5b;
  SNetPacketHeader local_54;
  int local_4f;
  SNetPacketHeader local_48 [2];
  SNetworkAddr local_3c;
  uint local_34;
  UNetPacket *local_30;
  UNetPacket *local_2c;
  SSimFrame *local_28;
  SNetPlayer *local_20;
  UNetPacket *local_1c;
  int local_18;
  
  bVar10 = 0;
  uVar2 = core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00505900(this_ptr,source_addr);
  local_20 = (SNetPlayer *)0x0;
  if (-1 < (int)uVar2) {
    local_20 = this_ptr->players + uVar2;
    local_20->last_arrival_time = g_UINT_01da6478;
  }
  switch((packet->header).type) {
  case PACKET_PLAYER_ANNOUNCE:
    local_2c = packet;
    if (this_ptr->network_mode != NET_MODE_LOBBY) {
      local_48[0].size = 9;
      local_48[0].type = PACKET_GAME_START;
      core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0(this_ptr,source_addr,local_48);
    }
    if ((int)uVar2 < 0) {
      uVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950
                        (this_ptr,source_addr,(local_2c->player_announce).name,
                         (local_2c->sim_frame).frame.player_input[0].action_state.action,
                         (local_2c->player_announce).aim_mode);
    }
    else {
      iVar4 = _strcmp(local_20->name,(local_2c->player_announce).name);
      if (((iVar4 != 0) || ((local_2c->player_announce).hero_number != local_20->hero_number)) ||
         ((local_2c->player_announce).aim_mode != local_20->aim_mode)) {
        pcVar11 = local_2c->raw + 0xd;
        pSVar8 = local_20;
        do {
          cVar1 = *pcVar11;
          pSVar8->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pSVar8->name[1] = cVar1;
          pSVar8 = (SNetPlayer *)(pSVar8->name + 2);
        } while (cVar1 != '\0');
        local_20->hero_number = (local_2c->player_announce).hero_number;
        local_20->aim_mode = (local_2c->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
      }
    }
    pcVar11 = local_d3;
    local_ec.size = 0x71;
    pcVar12 = this_ptr->mission_name;
    local_ec.type = PACKET_SERVER_ACCEPT;
    do {
      cVar1 = *pcVar12;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    pcVar11 = local_e7;
    pcVar12 = this_ptr->player_name;
    do {
      cVar1 = *pcVar12;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    local_83 = source_addr->ip_address;
    (&uStack_7f)[(uint)bVar10 * -2] = *(uint *)&source_addr[-(uint)bVar10].port;
    core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,uVar2,&local_ec);
    iVar4 = this_ptr->local_player_index;
    this_ptr->players[iVar4].addr.ip_address = (local_2c->player_announce).addr.ip_address;
    *(uint *)((int)this_ptr + (uint)bVar10 * -8 + iVar4 * 0x80 + 0x40) =
         *(uint *)((int)local_2c + (uint)bVar10 * -8 + 9);
    return;
  case PACKET_SERVER_ACCEPT:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) {
LAB_0050502a:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      pcVar11 = packet->raw + 5;
      g_INT_01da647c = 1;
      do {
        cVar1 = *pcVar11;
        local_20->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        local_20->name[1] = cVar1;
        local_20 = (SNetPlayer *)(local_20->name + 2);
      } while (cVar1 != '\0');
      iVar4 = this_ptr->local_player_index;
      this_ptr->players[iVar4].addr.ip_address = (packet->server_accept).client_addr.ip_address;
      *(uint *)((int)this_ptr + (uint)bVar10 * -8 + iVar4 * 0x80 + 0x40) =
           *(uint *)((int)packet + (uint)bVar10 * -8 + 0x6d);
      g_INT_01da6484 = -1;
      return;
    }
    break;
  case PACKET_GAME_START:
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar2)) &&
       ((this_ptr->network_mode == NET_MODE_LOBBY && (uVar2 == this_ptr->server_player_index)))) {
      g_INT_01da647c = (packet->simple).value;
      return;
    }
    break;
  case PACKET_PING:
    if (this_ptr->connection_type == CONNECTION_NONE) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    local_60.size = 9;
    local_60.type = PACKET_PING_RESPONSE;
    local_5b = (packet->player_announce).addr.ip_address;
    core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0(this_ptr,source_addr,&local_60);
    return;
  case PACKET_PING_RESPONSE:
    if ((this_ptr->connection_type == CONNECTION_NONE) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= local_20->ping_quality) {
      local_f8 = (float)(int)((packet->player_announce).addr.ip_address -
                             local_20->last_ping_response) * (float)1.52587890625e-05;
      if (local_f8 < (float)-30) {
        local_f8 = -30.0;
      }
      if ((float)30 < local_f8) {
        local_f8 = 30.0;
      }
      if (local_f8 <= 0.0) {
        return;
      }
    }
    local_f4 = (float)(int)(g_UINT_01da6478 - (packet->player_announce).addr.ip_address) *
               (float)1.52587890625e-05;
    if (local_f4 < 0.0) {
      local_f4 = 0.0;
    }
    if ((float)30 < local_f4) {
      local_f4 = 30.0;
    }
    local_20->ping_quality = local_f4;
    local_20->last_ping_response = g_UINT_01da6478;
    return;
  case PACKET_CHAT_MESSAGE:
    if (-1 < (int)uVar2) {
      iVar4 = 0;
      if (0 < g_INT_01da648c) {
        pSVar5 = g_SChatHistory_ARRAY_01da6490;
        do {
          if ((((pSVar5->sender_addr).port == source_addr->port) &&
              (source_addr->ip_address == (pSVar5->sender_addr).ip_address)) &&
             ((packet->player_announce).addr.ip_address ==
              g_SChatHistory_ARRAY_01da6490[iVar4].message_id)) break;
          iVar4 = iVar4 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar4 < g_INT_01da648c);
      }
      if (iVar4 == g_INT_01da648c) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
                  (this_ptr,source_addr,(packet->simple).value,local_20->name,
                   (packet->server_accept).player_name + 4);
      }
      local_78.size = 9;
      local_78.type = PACKET_CHAT_ACK;
      local_73 = (packet->player_announce).addr.ip_address;
      core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0(this_ptr,source_addr,&local_78);
      return;
    }
    break;
  case PACKET_CHAT_ACK:
    if (((this_ptr->connection_type != CONNECTION_NONE) && (-1 < (int)uVar2)) &&
       (0 < g_INT_01dc2690)) {
      iVar4 = 0;
      iVar3 = g_INT_01dc2690 * 0x114;
      do {
        while (*(uint *)((int)g_SChatOutMessage_ARRAY_01dc2694[0].player_timestamps + iVar4 + -8) ==
               (packet->player_announce).addr.ip_address) {
          *(byte *)
           ((int)g_SChatOutMessage_ARRAY_01dc2694[0].player_timestamps + iVar4 + uVar2 + -4) = 1;
          iVar4 = iVar4 + 0x114;
          if (iVar3 <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 0x114;
      } while (iVar4 < iVar3);
    }
    break;
  case PACKET_SYNC_STAGE_REQ:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_0050502a;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       ((packet->player_announce).addr.ip_address == 1)) {
      this_ptr->network_mode = NET_MODE_SYNCING;
    }
    local_6c.size = 9;
    local_6c.type = PACKET_SYNC_STAGE_RESP;
    local_67 = this_ptr->players[this_ptr->local_player_index].local_sync_stage;
    core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,this_ptr->server_player_index,&local_6c);
    if (g_INT_01da6480 < (packet->simple).value) {
      g_INT_01da6480 = (packet->simple).value;
      return;
    }
    break;
  case PACKET_SYNC_STAGE_RESP:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
LAB_005053b9:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_SYNCING) &&
       (local_20->local_sync_stage <= (packet->simple).value)) {
      local_20->local_sync_stage = (packet->simple).value;
      return;
    }
    break;
  case PACKET_PLAYER_STATE:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (local_20->state_change_time != 0) {
        local_18 = local_20->state_change_time - (packet->player_announce).addr.ip_address;
        local_f0 = (float)local_18 * (float)1.52587890625e-05;
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
      pcVar11 = packet->raw + 9;
      local_20->ready_flag = (packet->player_state).ready_flag;
      pSVar8 = local_20;
      do {
        cVar1 = *pcVar11;
        pSVar8->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pSVar8->name[1] = cVar1;
        pSVar8 = (SNetPlayer *)(pSVar8->name + 2);
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
      return;
    }
    break;
  case PACKET_GAME_SETTINGS:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_005053b9;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (g_INT_01da6484 < (packet->simple).value) {
        iVar4 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00506b00(this_ptr,packet);
        if (iVar4 == 0) {
          return;
        }
        g_INT_01da6484 = (packet->simple).value;
      }
      local_54.size = 9;
      local_54.type = PACKET_SETTINGS_ACK;
      local_4f = g_INT_01da6484;
      core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,this_ptr->server_player_index,&local_54);
      return;
    }
    break;
  case PACKET_SETTINGS_ACK:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) goto LAB_005053b9;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       (local_20->player_id <= (packet->simple).value)) {
      local_20->player_id = (packet->simple).value;
      return;
    }
    break;
  case PACKET_DISCONNECT:
    if ((packet->player_announce).addr.ip_address != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(this_ptr,uVar2);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
    }
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar2)) &&
       (uVar2 == this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
      pcVar12 = "You have been disconnected from the game";
      pcVar11 = &g_CHAR_005caa40;
      iVar4 = 0;
      support_trisock_cpp_createNetworkAddr_FUN_0056f730
                (&local_3c,(uint32_t *)g_UCHAR_ARRAY_02cfd89c,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
                (this_ptr,sender_addr,iVar4,pcVar11,pcVar12);
      return;
    }
    break;
  case PACKET_SIM_FRAME:
    local_30 = packet;
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_0050502a;
    local_34 = (packet->player_announce).addr.ip_address;
    uVar2 = uVar2 ^ this_ptr->server_player_index;
    if (0 < g_INT_01dc5c80) {
      iVar4 = 0;
      do {
        if (local_34 == *(uint *)((int)g_SSimFrame_ARRAY_01dc5c84[0].player_input + iVar4 + -0xc)) {
          if (-1 < (int)uVar2) {
            dest = (SSimFrame *)((int)g_SSimFrame_ARRAY_01dc5c84[0].player_input + iVar4 + -0xc);
            goto LAB_005056b2;
          }
          break;
        }
        iVar4 = iVar4 + 0x74;
        uVar2 = uVar2 + 1;
      } while (iVar4 < g_INT_01dc5c80 * 0x74);
    }
    if (0x1ff < g_INT_01dc5c80) {
      g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
      g_INT_01d71de4 = 299;
      core_main_c_displayErrorAndQuit_FUN_004e4330("allocSimFrame - sim history list full");
    }
    dest = g_SSimFrame_ARRAY_01dc5c84 + g_INT_01dc5c80;
    g_INT_01dc5c80 = g_INT_01dc5c80 + 1;
    memset(dest,0,0x74);
    dest->sequence_number = local_34;
LAB_005056b2:
    dest->random_seed = *(int *)&(local_30->player_announce).addr.port;
    dest->delta_time = (local_30->sim_frame).frame.delta_time;
    iVar4 = 0;
    if (0 < this_ptr->player_count) {
      local_1c = local_30;
      local_28 = dest;
      do {
        if (iVar4 < 0) {
          g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
          g_INT_01d71de4 = 0x596;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Player list mismatch processing SimFrame Update packet!");
        }
        pSVar9 = local_28->player_input + iVar4;
        iVar4 = iVar4 + 1;
        pSVar6 = (local_1c->sim_frame).frame.player_input;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar9->action_state).walk = (pSVar6->action_state).walk;
          pSVar6 = (SPlayerInput *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
          pSVar9 = (SPlayerInput *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_1c = (UNetPacket *)((local_1c->server_accept).mission_name + 0x1b);
      } while (iVar4 < this_ptr->player_count);
    }
    break;
  case PACKET_PLAYER_INPUT:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_PLAYING) &&
       (local_20->sim_frame_index < (packet->simple).value)) {
      local_20->sim_frame_index = (packet->simple).value;
      puVar7 = &(packet->player_announce).addr.port;
      pSVar9 = &local_20->player_input;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        (pSVar9->action_state).walk = *(int *)puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -4 + 2;
        pSVar9 = (SPlayerInput *)((int)pSVar9 + (uint)bVar10 * -8 + 4);
      }
      return;
    }
  }
  return;
}
