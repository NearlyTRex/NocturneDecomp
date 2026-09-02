// Name: core_netgame.cpp_CNetGame_processPacket_FUN_005406a0
// Address: 005406a0
// MANUAL RECONSTRUCTION
// Address Range: [[005406a0, 005411b2] [0060cafa, 0060cb49] [03fc521d, 03fc52d6]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  uint uVar3;
  uint uVar2;
  SNetworkAddr *sender_addr;
  int iVar5;
  SSimFrame *dest;
  SChatHistory *pSVar5;
  uint uVar6;
  float local_f0;
  float local_ec;
  float local_e8;
  SNetPacket_ServerAccept local_e4;
  SNetPacket_Simple local_70;
  SNetPacket_Simple local_64;
  SNetPacket_Simple local_58 [2];
  SNetPacket_Simple local_4c;
  SNetPacket_Simple local_40;
  SNetworkAddr local_34;
  SNetPlayer *local_1c;
  char *pcVar12;
  char *pcVar11;

  uVar2 = core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(this_ptr,source_addr);
  local_1c = (SNetPlayer *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = this_ptr->players + uVar2;
    local_1c->last_arrival_time = g_CurrentGameTime;
  }
  switch((packet->header).type) {
  case PACKET_PLAYER_ANNOUNCE:
    if (this_ptr->network_mode != NET_MODE_LOBBY) {
#if NOCTURNE_AUTHENTIC_NETPLAY
      local_58[0].header.type = PACKET_GAME_START;
      local_58[0].header.size = sizeof(SNetPacket_Simple);
      core_netgame_cpp_CNetGame_sendPacket_FUN_00541230
                (this_ptr,source_addr,&local_58[0].header);
#else
      local_58[0].header.type = PACKET_GAME_START;
      local_58[0].header.size = sizeof(SNetPacket_Simple);
      local_58[0].value = CONNECTION_STATUS_REJECTED_ALREADY_IN_GAME;
      core_netgame_cpp_CNetGame_sendPacket_FUN_00541230
                (this_ptr,source_addr,&local_58[0].header);
      if ((int)uVar2 < 0) {
        return;
      }
#endif
    }
    if ((int)uVar2 < 0) {
      uVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                        (this_ptr,source_addr,(packet->player_announce).name,
                         (packet->sim_frame).frame.player_input[0].action_state.use_item,
                         (packet->player_announce).aim_mode);
    }
    else {
      iVar5 = _strcmp(local_1c->name,(packet->player_announce).name);
      if (((iVar5 != 0) || ((packet->player_announce).hero_number != local_1c->hero_number)) ||
         ((packet->player_announce).aim_mode != local_1c->aim_mode)) {
        strcpy(local_1c->name, (packet->player_announce).name);
        local_1c->hero_number = (packet->player_announce).hero_number;
        local_1c->aim_mode = (packet->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
      }
    }
    local_e4.header.size = sizeof(SNetPacket_ServerAccept);
    local_e4.header.type = PACKET_SERVER_ACCEPT;
    strcpy(local_e4.mission_name, this_ptr->mission_name);
    strcpy(local_e4.player_name, this_ptr->player_name);
    local_e4.client_addr = *source_addr;
    core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,uVar2,&local_e4.header);
#if NOCTURNE_AUTHENTIC_NETPLAY
    iVar5 = this_ptr->local_player_index;
    this_ptr->players[iVar5].addr = (packet->player_announce).addr;
#endif
    return;
  case PACKET_SERVER_ACCEPT:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) {
LAB_0054097f:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      g_ConnectionStatus = CONNECTION_STATUS_ACCEPTED_BY_SERVER;
      strcpy(local_1c->name, (packet->server_accept).player_name);
      iVar5 = this_ptr->local_player_index;
      this_ptr->players[iVar5].addr = (packet->server_accept).client_addr;
      INT_02f7c8c4 = -1;
      return;
    }
    break;
  case PACKET_GAME_START:
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar2)) &&
       ((this_ptr->network_mode == NET_MODE_LOBBY && (uVar2 == this_ptr->server_player_index)))) {
      g_ConnectionStatus = (packet->player_announce).addr.ip_address;
      return;
    }
    break;
  case PACKET_PING:
    if (this_ptr->connection_type == CONNECTION_NONE) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    local_40.header.size = sizeof(SNetPacket_Simple);
    local_40.header.type = PACKET_PING_RESPONSE;
    local_40.value = (packet->simple).value;
    core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,source_addr,&local_40.header);
    return;
  case PACKET_PING_RESPONSE:
    if ((this_ptr->connection_type == CONNECTION_NONE) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= local_1c->ping_quality) {
      local_ec = (float)(int)((packet->player_announce).addr.ip_address -
                             local_1c->last_ping_response) * (float)1.52587890625e-05;
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
    local_e8 = (float)(int)(g_CurrentGameTime - (packet->player_announce).addr.ip_address) *
               (float)1.52587890625e-05;
    if (local_e8 < 0.0) {
      local_e8 = 0.0;
    }
    if ((float)30 < local_e8) {
      local_e8 = 30.0;
    }
    local_1c->ping_quality = local_e8;
    local_1c->last_ping_response = g_CurrentGameTime;
    return;
  case PACKET_CHAT_MESSAGE:
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < g_ChatHistoryCount) {
        pSVar5 = g_ChatHistory;
        do {
          if ((((pSVar5->sender_addr).port == source_addr->port) &&
              ((pSVar5->sender_addr).ip_address == source_addr->ip_address)) &&
             ((packet->player_announce).addr.ip_address == g_ChatHistory[iVar5].message_id)) break;
          iVar5 = iVar5 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar5 < g_ChatHistoryCount);
      }
      if (iVar5 == g_ChatHistoryCount) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_00542370
                  (this_ptr,source_addr,(packet->simple).value,local_1c->name,
                   (packet->server_accept).player_name + 4);
      }
      local_70.header.size = sizeof(SNetPacket_Simple);
      local_70.header.type = PACKET_CHAT_ACK;
      local_70.value = (packet->simple).value;
      core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,source_addr,&local_70.header);
      return;
    }
    break;
  case PACKET_CHAT_ACK:
    if (((this_ptr->connection_type != CONNECTION_NONE) && (-1 < (int)uVar2)) &&
       (0 < g_ChatOutCount)) {
      for (iVar5 = 0; iVar5 < g_ChatOutCount; iVar5 = iVar5 + 1) {
        if (g_ChatOutMessages[iVar5].sequence_number == (packet->player_announce).addr.ip_address) {
          g_ChatOutMessages[iVar5].ack_flags.bytes[uVar2] = 1;
        }
      }
    }
    break;
  case PACKET_SYNC_STAGE_REQ:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_0054097f;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       ((packet->player_announce).addr.ip_address == 1)) {
      this_ptr->network_mode = NET_MODE_SYNCING;
    }
    local_4c.header.size = sizeof(SNetPacket_Simple);
    local_4c.header.type = PACKET_SYNC_STAGE_RESP;
    local_4c.value = this_ptr->players[this_ptr->local_player_index].local_sync_stage;
    core_netgame_cpp_CNetGame_send_FUN_005411c0
              (this_ptr,this_ptr->server_player_index,&local_4c.header);
    if (g_RemoteSyncStage < (packet->simple).value) {
      g_RemoteSyncStage = (packet->simple).value;
      return;
    }
    break;
  case PACKET_SYNC_STAGE_RESP:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
LAB_00540d18:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_SYNCING) &&
       (local_1c->local_sync_stage <= (packet->simple).value)) {
      local_1c->local_sync_stage = (packet->simple).value;
      return;
    }
    break;
  case PACKET_PLAYER_STATE:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
LAB_00540df8:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (local_1c->state_change_time != 0) {
        local_f0 = (float)(int)(local_1c->state_change_time -
                               (packet->player_state).timestamp) * (float)1.52587890625e-05;
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
#if NOCTURNE_AUTHENTIC_NETPLAY
      local_1c->ready_flag = (packet->player_state).ready_flag;
      strcpy(local_1c->name, (packet->player_state).name);
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
#else
      iVar5 = _strcmp(local_1c->name,(packet->player_state).name);
      if (((iVar5 != 0) || (local_1c->ready_flag != (packet->player_state).ready_flag)) ||
         (local_1c->hero_number != (packet->player_state).hero_number)) {
        local_1c->ready_flag = (packet->player_state).ready_flag;
        local_1c->hero_number = (packet->player_state).hero_number;
        strcpy(local_1c->name, (packet->player_state).name);
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
      }
#endif
      return;
    }
    break;
  case PACKET_GAME_SETTINGS:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_00540d18;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (INT_02f7c8c4 < (packet->simple).value) {
        iVar5 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(this_ptr,packet);
        if (iVar5 == 0) {
          return;
        }
        INT_02f7c8c4 = (packet->simple).value;
      }
      local_64.header.size = sizeof(SNetPacket_Simple);
      local_64.header.type = PACKET_SETTINGS_ACK;
      local_64.value = INT_02f7c8c4;
      core_netgame_cpp_CNetGame_send_FUN_005411c0
                (this_ptr,this_ptr->server_player_index,&local_64.header);
      return;
    }
    break;
  case PACKET_SETTINGS_ACK:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) goto LAB_00540d18;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       (local_1c->player_id <= (packet->simple).value)) {
      local_1c->player_id = (packet->simple).value;
      return;
    }
    break;
  case PACKET_DISCONNECT:
    if ((packet->player_announce).addr.ip_address != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(this_ptr,uVar2);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
    }
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar2)) &&
       (uVar2 == this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
      pcVar12 = "You have been disconnected from the game";
      pcVar11 = &s_EmptyChar_0063d87c;
      iVar5 = 0;
      support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_34,(uint32_t *)g_AnyAddressIP,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_00542370
                (this_ptr,sender_addr,iVar5,pcVar11,pcVar12);
      return;
    }
    break;
  case PACKET_SIM_FRAME:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_00540df8;
    uVar3 = (packet->player_announce).addr.ip_address;
    uVar6 = uVar2 ^ this_ptr->server_player_index;
    if (0 < g_SimFrameCount) {
      iVar5 = 0;
      do {
        if (uVar3 == g_SimFrameHistory[iVar5].sequence_number) {
          if (-1 < (int)uVar6) {
            dest = &g_SimFrameHistory[iVar5];
            goto LAB_00541015;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (iVar5 < g_SimFrameCount);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    dest = g_SimFrameHistory + g_SimFrameCount;
    g_SimFrameCount = g_SimFrameCount + 1;
    memset(dest,0,sizeof(*dest));
    dest->sequence_number = uVar3;
LAB_00541015:
    dest->random_seed = (packet->sim_frame).frame.random_seed;
    dest->delta_time = (packet->sim_frame).frame.delta_time;
    iVar5 = 0;
    if (0 < this_ptr->player_count) {
      do {
        dest->player_input[iVar5] = (packet->sim_frame).frame.player_input[iVar5];
        iVar5 = iVar5 + 1;
      } while (iVar5 < this_ptr->player_count);
    }
    break;
  case PACKET_PLAYER_INPUT:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_PLAYING) &&
       (local_1c->sim_frame_index < (packet->simple).value)) {
      local_1c->sim_frame_index = (packet->player_input).sim_frame_index;
      local_1c->player_input = (packet->player_input).player_input;
      return;
    }
#if !NOCTURNE_AUTHENTIC_NETPLAY
    break;
  case NOCTURNE_NET_PACKET_RESPAWN:
    if ((this_ptr->connection_type == CONNECTION_CLIENT) &&
       (uVar2 == this_ptr->server_player_index)) {
      nocturne_net_respawn_on_packet(packet,(packet->header).size + 3);
    }
    break;
  case NOCTURNE_NET_PACKET_SYNC_CHECK:
    if ((this_ptr->connection_type == CONNECTION_CLIENT) &&
       (uVar2 == this_ptr->server_player_index)) {
      nocturne_net_sync_on_packet(packet,(packet->header).size + 3);
    }
    break;
  case NOCTURNE_NET_PACKET_MISSION:
    if ((this_ptr->connection_type == CONNECTION_CLIENT) &&
       (uVar2 == this_ptr->server_player_index)) {
      nocturne_net_mission_on_packet(packet,(packet->header).size + 3);
    }
    break;
  case NOCTURNE_NET_PACKET_WEAPON:
    if (-1 < (int)uVar2) {
      nocturne_net_weapon_on_packet(packet,(packet->header).size + 3);
    }
    break;
  case NOCTURNE_NET_PACKET_CHEATS:
    if ((this_ptr->connection_type == CONNECTION_CLIENT) &&
       (uVar2 == this_ptr->server_player_index)) {
      nocturne_net_cheats_on_packet(packet,(packet->header).size + 3);
    }
#endif
  }
  return;
}
