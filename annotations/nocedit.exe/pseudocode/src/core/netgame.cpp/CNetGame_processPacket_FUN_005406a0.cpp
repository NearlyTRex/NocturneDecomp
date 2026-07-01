// Name: core_netgame.cpp_CNetGame_processPacket_FUN_005406a0
// Address: 005406a0
// Address Range: [[005406a0, 005411b2] [0060cafa, 0060cb49] [03fc521d, 03fc52d6]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0054104d) */

void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  char cVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar2;
  SNetworkAddr *sender_addr;
  int iVar5;
  SSimFrame *dest;
  int iVar3;
  int iVar4;
  SChatHistory *pSVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  SPlayerInput *pSVar6;
  ushort *puVar7;
  SNetPlayer *pSVar10;
  int iVar11;
  SNetPlayer *pSVar8;
  SPlayerInput *pSVar9;
  byte bVar10;
  float local_f0;
  float local_ec;
  float local_e8;
  SNetPacketHeader local_e4;
  char local_df [20];
  char local_cb [80];
  uint local_7b;
  SNetPacketHeader local_70;
  uint local_6b;
  SNetPacketHeader local_64;
  int local_5f;
  SNetPacketHeader local_58 [2];
  SNetPacketHeader local_4c;
  int local_47;
  SNetPacketHeader local_40;
  uint local_3b;
  SNetworkAddr local_34;
  uint local_2c;
  UNetPacket *local_28;
  SSimFrame *local_24;
  SNetPlayer *local_1c;
  UNetPacket *local_18;
  int local_14;
  char *pcVar12;
  char *pcVar11;
  char cVar1;
  
  uVar2 = core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(this_ptr,source_addr);
  local_1c = (SNetPlayer *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = this_ptr->players + uVar2;
    local_1c->last_arrival_time = g_CurrentGameTime;
  }
  switch((packet->header).type) {
  case PACKET_PLAYER_ANNOUNCE:
    if (this_ptr->network_mode != NET_MODE_LOBBY) {
      local_58[0].type = PACKET_GAME_START;
      local_58[0].size = 9;
      core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,source_addr,local_58);
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
        pcVar8 = packet->raw + 0xd;
        pSVar10 = local_1c;
        do {
          cVar2 = *pcVar8;
          pSVar10->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pSVar10->name[1] = cVar2;
          pSVar10 = (SNetPlayer *)(pSVar10->name + 2);
        } while (cVar2 != '\0');
        local_1c->hero_number = (packet->player_announce).hero_number;
        local_1c->aim_mode = (packet->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
      }
    }
    pcVar8 = local_cb;
    local_e4.size = 0x71;
    pcVar7 = this_ptr->mission_name;
    local_e4.type = PACKET_SERVER_ACCEPT;
    do {
      cVar2 = *pcVar7;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    pcVar8 = local_df;
    pcVar7 = this_ptr->player_name;
    do {
      cVar2 = *pcVar7;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,uVar2,&local_e4);
    iVar5 = this_ptr->local_player_index;
    this_ptr->players[iVar5].addr.ip_address = (packet->player_announce).addr.ip_address;
    uVar4 = ((SNetworkAddr *)((int)packet + 5))->other;
    this_ptr->players[iVar5].addr.port = ((SNetworkAddr *)((int)packet + 5))->port;
    this_ptr->players[iVar5].addr.other = uVar4;
    return;
  case PACKET_SERVER_ACCEPT:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) {
LAB_0054097f:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      pcVar8 = packet->raw + 5;
      g_ConnectionStatus = CONNECTION_STATUS_ACCEPTED_BY_SERVER;
      do {
        cVar2 = *pcVar8;
        local_1c->name[0] = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        local_1c->name[1] = cVar2;
        local_1c = (SNetPlayer *)(local_1c->name + 2);
      } while (cVar2 != '\0');
      iVar5 = this_ptr->local_player_index;
      this_ptr->players[iVar5].addr.ip_address = (packet->server_accept).client_addr.ip_address;
      uVar4 = ((SNetworkAddr *)((int)packet + 0x69))->other;
      this_ptr->players[iVar5].addr.port = ((SNetworkAddr *)((int)packet + 0x69))->port;
      this_ptr->players[iVar5].addr.other = uVar4;
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
    local_40.size = 9;
    local_40.type = PACKET_PING_RESPONSE;
    core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,source_addr,&local_40);
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
      local_70.size = 9;
      local_70.type = PACKET_CHAT_ACK;
      core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,source_addr,&local_70);
      return;
    }
    break;
  case PACKET_CHAT_ACK:
    if (((this_ptr->connection_type != CONNECTION_NONE) && (-1 < (int)uVar2)) &&
       (0 < g_ChatOutCount)) {
      iVar5 = 0;
      iVar11 = g_ChatOutCount * 0x114;
      do {
        while (*(uint *)((int)g_ChatOutMessages[0].player_timestamps + iVar5 + -8) ==
               (packet->player_announce).addr.ip_address) {
          *(byte *)((int)g_ChatOutMessages[0].player_timestamps + iVar5 + uVar2 + -4) = 1;
          iVar5 = iVar5 + 0x114;
          if (iVar11 <= iVar5) {
            return;
          }
        }
        iVar5 = iVar5 + 0x114;
      } while (iVar5 < iVar11);
    }
    break;
  case PACKET_SYNC_STAGE_REQ:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_0054097f;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       ((packet->player_announce).addr.ip_address == 1)) {
      this_ptr->network_mode = NET_MODE_SYNCING;
    }
    local_4c.size = 9;
    local_4c.type = PACKET_SYNC_STAGE_RESP;
    core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,this_ptr->server_player_index,&local_4c);
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
                               (packet->player_announce).addr.ip_address) * (float)1.52587890625e-05;
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
      pcVar8 = packet->raw + 9;
      local_1c->ready_flag = (packet->player_state).ready_flag;
      pSVar8 = local_1c;
      do {
        cVar1 = *pcVar8;
        pSVar8->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pSVar8->name[1] = cVar2;
        pSVar8 = (SNetPlayer *)(pSVar8->name + 2);
      } while (cVar2 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(this_ptr);
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
      local_64.size = 9;
      local_64.type = PACKET_SETTINGS_ACK;
      core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,this_ptr->server_player_index,&local_64);
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
        if (uVar3 == *(uint *)((int)g_SimFrameHistory[0].player_input + iVar5 + -0xc)) {
          if (-1 < (int)uVar6) {
            dest = (SSimFrame *)((int)g_SimFrameHistory[0].player_input + iVar5 + -0xc);
            goto LAB_00541015;
          }
          break;
        }
        iVar5 = iVar5 + 100;
        uVar6 = uVar6 + 1;
      } while (iVar5 < g_SimFrameCount * 100);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    dest = g_SimFrameHistory + g_SimFrameCount;
    g_SimFrameCount = g_SimFrameCount + 1;
    memset(dest,0,100);
    dest->sequence_number = uVar3;
LAB_00541015:
    dest->random_seed = *(int *)&(packet->player_announce).addr.port;
    dest->delta_time = (packet->sim_frame).frame.delta_time;
    iVar5 = 0;
    if (0 < this_ptr->player_count) {
      local_18 = packet;
      do {
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 1430;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Player list mismatch processing SimFrame Update packet!");
        }
        dest->player_input[iVar5].action_state.walk =
             (local_18->sim_frame).frame.player_input[0].action_state.walk;
        dest->player_input[iVar5].action_state.backup =
             (local_18->sim_frame).frame.player_input[0].action_state.backup;
        dest->player_input[iVar5].action_state.run =
             (local_18->sim_frame).frame.player_input[0].action_state.run;
        dest->player_input[iVar5].action_state.fire = (local_18->player_state).ready_flag;
        dest->player_input[iVar5].action_state.use_item = (local_18->player_announce).hero_number;
        dest->player_input[iVar5].action_state.light = (local_18->player_announce).aim_mode;
        dest->player_input[iVar5].action_state.draw =
             (local_18->sim_frame).frame.player_input[0].action_state.draw;
        dest->player_input[iVar5].action_state.jump =
             (local_18->sim_frame).frame.player_input[0].action_state.jump;
        dest->player_input[iVar5].strafe_speed =
             (local_18->sim_frame).frame.player_input[0].strafe_speed;
        dest->player_input[iVar5].turn_speed =
             (local_18->sim_frame).frame.player_input[0].turn_speed;
        dest->player_input[iVar5].look_up_down_speed =
             (local_18->sim_frame).frame.player_input[0].look_up_down_speed;
        iVar5 = iVar5 + 1;
        local_18 = (UNetPacket *)((local_18->server_accept).mission_name + 0x13);
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
      local_1c->sim_frame_index = (packet->simple).value;
      (local_1c->player_input).action_state.walk = *(int *)&(packet->player_announce).addr.port;
      (local_1c->player_input).action_state.backup = (int)(packet->sim_frame).frame.delta_time;
      (local_1c->player_input).action_state.run =
           (packet->sim_frame).frame.player_input[0].action_state.walk;
      (local_1c->player_input).action_state.fire =
           (packet->sim_frame).frame.player_input[0].action_state.backup;
      (local_1c->player_input).action_state.use_item =
           (packet->sim_frame).frame.player_input[0].action_state.run;
      (local_1c->player_input).action_state.light = (packet->player_state).ready_flag;
      (local_1c->player_input).action_state.draw = (packet->player_announce).hero_number;
      (local_1c->player_input).action_state.jump = (packet->player_announce).aim_mode;
      (local_1c->player_input).strafe_speed =
           (float)(packet->sim_frame).frame.player_input[0].action_state.draw;
      (local_1c->player_input).turn_speed =
           (float)(packet->sim_frame).frame.player_input[0].action_state.jump;
      (local_1c->player_input).look_up_down_speed =
           (packet->sim_frame).frame.player_input[0].strafe_speed;
      return;
    }
  }
  return;
}
