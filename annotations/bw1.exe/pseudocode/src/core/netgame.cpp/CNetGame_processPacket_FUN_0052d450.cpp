// Name: core_netgame.cpp_CNetGame_processPacket_FUN_0052d450
// Address: 0052d450
// Address Range: [[0052d450, 0052df45]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_0052d450(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0052ddd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_0052d450(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  SNetworkAddr *sender_addr;
  uint *puVar3;
  int iVar4;
  int iVar5;
  SPlayerInput *pSVar6;
  ushort *puVar7;
  SNetPlayer *pSVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  float local_f0;
  float local_ec;
  float local_e8;
  SNetPacketHeader local_e4;
  char local_df [20];
  char local_cb [80];
  uint local_7b;
  uint uStack_77;
  SNetPacketHeader local_70;
  uint local_6b;
  SNetPacketHeader local_64;
  int local_5f;
  SNetPacketHeader local_58 [2];
  SNetPacketHeader local_4c;
  uint local_47;
  SNetPacketHeader local_40;
  uint local_3b;
  SNetworkAddr local_34;
  uint local_2c;
  UNetPacket *local_28;
  uint *local_24;
  SNetPlayer *local_1c;
  UNetPacket *local_18;
  int local_14;
  
  bVar9 = 0;
  uVar2 = core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_0052dff0(this_ptr,source_addr);
  local_1c = (SNetPlayer *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = this_ptr->players + uVar2;
    local_1c->last_arrival_time = _DAT_01d51da0;
  }
  switch((packet->header).type) {
  case PACKET_PLAYER_ANNOUNCE:
    local_28 = packet;
    if (this_ptr->network_mode != NET_MODE_LOBBY) {
      local_58[0].size = 9;
      local_58[0].type = PACKET_GAME_START;
      core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0(this_ptr,source_addr,local_58);
    }
    if ((int)uVar2 < 0) {
      uVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                        (this_ptr,source_addr,(local_28->player_announce).name,
                         (local_28->sim_frame).frame.player_input[0].action_state.use_item,
                         (local_28->player_announce).aim_mode);
    }
    else {
      iVar5 = _strcmp(local_1c->name,(local_28->player_announce).name);
      if (((iVar5 != 0) || ((local_28->player_announce).hero_number != local_1c->hero_number)) ||
         ((local_28->player_announce).aim_mode != local_1c->aim_mode)) {
        pcVar10 = local_28->raw + 0xd;
        pSVar8 = local_1c;
        do {
          cVar1 = *pcVar10;
          pSVar8->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pSVar8->name[1] = cVar1;
          pSVar8 = (SNetPlayer *)(pSVar8->name + 2);
        } while (cVar1 != '\0');
        local_1c->hero_number = (local_28->player_announce).hero_number;
        local_1c->aim_mode = (local_28->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
      }
    }
    pcVar10 = local_cb;
    local_e4.size = 0x71;
    pcVar11 = this_ptr->mission_name;
    local_e4.type = PACKET_SERVER_ACCEPT;
    do {
      cVar1 = *pcVar11;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar10 = local_df;
    pcVar11 = this_ptr->player_name;
    do {
      cVar1 = *pcVar11;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    local_7b = source_addr->ip_address;
    (&uStack_77)[(uint)bVar9 * -2] = *(uint *)&source_addr[-(uint)bVar9].port;
    core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,uVar2,&local_e4);
    iVar5 = this_ptr->local_player_index;
    this_ptr->players[iVar5].addr.ip_address = (local_28->player_announce).addr.ip_address;
    *(uint *)((int)this_ptr + (uint)bVar9 * -8 + iVar5 * 0x7c + 0x40) =
         *(uint *)((int)local_28 + (uint)bVar9 * -8 + 9);
    return;
  case PACKET_SERVER_ACCEPT:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) {
LAB_0052d72f:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      pcVar10 = packet->raw + 5;
      _DAT_01d51da4 = 1;
      do {
        cVar1 = *pcVar10;
        local_1c->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        local_1c->name[1] = cVar1;
        local_1c = (SNetPlayer *)(local_1c->name + 2);
      } while (cVar1 != '\0');
      iVar5 = this_ptr->local_player_index;
      this_ptr->players[iVar5].addr.ip_address = (packet->server_accept).client_addr.ip_address;
      *(uint *)((int)this_ptr + (uint)bVar9 * -8 + iVar5 * 0x7c + 0x40) =
           *(uint *)((int)packet + (uint)bVar9 * -8 + 0x6d);
      _DAT_01d51dac = 0xffffffff;
      return;
    }
    break;
  case PACKET_GAME_START:
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar2)) &&
       ((this_ptr->network_mode == NET_MODE_LOBBY && (uVar2 == this_ptr->server_player_index)))) {
      _DAT_01d51da4 = (packet->player_announce).addr.ip_address;
      return;
    }
    break;
  case PACKET_PING:
    if (this_ptr->connection_type == CONNECTION_NONE) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    local_4c.size = 9;
    local_4c.type = PACKET_PING_RESPONSE;
    local_47 = (packet->player_announce).addr.ip_address;
    core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0(this_ptr,source_addr,&local_4c);
    return;
  case PACKET_PING_RESPONSE:
    if ((this_ptr->connection_type == CONNECTION_NONE) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= local_1c->ping_quality) {
      local_ec = (float)(int)((packet->player_announce).addr.ip_address -
                             local_1c->last_ping_response) * (float)_DAT_005ebca8;
      if (local_ec < (float)_DAT_005ebcb0) {
        local_ec = -30.0;
      }
      if ((float)_DAT_005ebcb8 < local_ec) {
        local_ec = 30.0;
      }
      if (local_ec <= 0.0) {
        return;
      }
    }
    local_f0 = (float)(int)(_DAT_01d51da0 - (packet->player_announce).addr.ip_address) *
               (float)_DAT_005ebca8;
    if (local_f0 < 0.0) {
      local_f0 = 0.0;
    }
    if ((float)_DAT_005ebcb8 < local_f0) {
      local_f0 = 30.0;
    }
    local_1c->ping_quality = local_f0;
    local_1c->last_ping_response = _DAT_01d51da0;
    return;
  case PACKET_CHAT_MESSAGE:
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < _DAT_01d51db4) {
        puVar3 = (uint *)0x1d51db8;
        do {
          if ((((ushort)puVar3[1] == source_addr->port) && (*puVar3 == source_addr->ip_address)) &&
             ((packet->player_announce).addr.ip_address == *(uint *)(iVar5 * 0x120 + 0x1d51dc0)))
          break;
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 0x48;
        } while (iVar5 < _DAT_01d51db4);
      }
      if (iVar5 == _DAT_01d51db4) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
                  (this_ptr,source_addr,(packet->simple).value,local_1c->name,
                   (packet->server_accept).player_name + 4);
      }
      local_70.size = 9;
      local_70.type = PACKET_CHAT_ACK;
      local_6b = (packet->player_announce).addr.ip_address;
      core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0(this_ptr,source_addr,&local_70);
      return;
    }
    break;
  case PACKET_CHAT_ACK:
    if (((this_ptr->connection_type != CONNECTION_NONE) && (-1 < (int)uVar2)) && (0 < _DAT_01d6dfb8)
       ) {
      iVar5 = 0;
      iVar4 = _DAT_01d6dfb8 * 0x114;
      do {
        while (*(uint *)(&DAT_01d6dfc0 + iVar5) == (packet->player_announce).addr.ip_address) {
          (&DAT_01d6dfc4)[iVar5 + uVar2] = 1;
          iVar5 = iVar5 + 0x114;
          if (iVar4 <= iVar5) {
            return;
          }
        }
        iVar5 = iVar5 + 0x114;
      } while (iVar5 < iVar4);
    }
    break;
  case PACKET_SYNC_STAGE_REQ:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_0052d72f;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       ((packet->player_announce).addr.ip_address == 1)) {
      this_ptr->network_mode = NET_MODE_SYNCING;
    }
    local_64.size = 9;
    local_64.type = PACKET_SYNC_STAGE_RESP;
    local_5f = this_ptr->players[this_ptr->local_player_index].local_sync_stage;
    core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,this_ptr->server_player_index,&local_64);
    if (_DAT_01d51da8 < (packet->simple).value) {
      _DAT_01d51da8 = (packet->simple).value;
      return;
    }
    break;
  case PACKET_SYNC_STAGE_RESP:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) {
LAB_0052dac3:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_SYNCING) &&
       (local_1c->local_sync_stage <= (packet->simple).value)) {
      local_1c->local_sync_stage = (packet->simple).value;
      return;
    }
    break;
  case PACKET_PLAYER_STATE:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (local_1c->state_change_time != 0) {
        local_14 = local_1c->state_change_time - (packet->player_announce).addr.ip_address;
        local_e8 = (float)local_14 * (float)_DAT_005ebca8;
        if (local_e8 < (float)_DAT_005ebcb0) {
          local_e8 = -30.0;
        }
        if ((float)_DAT_005ebcb8 < local_e8) {
          local_e8 = 30.0;
        }
        if (local_e8 <= 0.0) {
          return;
        }
      }
      pcVar10 = packet->raw + 9;
      local_1c->ready_flag = (packet->player_state).ready_flag;
      pSVar8 = local_1c;
      do {
        cVar1 = *pcVar10;
        pSVar8->name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pSVar8->name[1] = cVar1;
        pSVar8 = (SNetPlayer *)(pSVar8->name + 2);
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
      return;
    }
    break;
  case PACKET_GAME_SETTINGS:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) goto LAB_0052dac3;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if ((int)_DAT_01d51dac < (packet->simple).value) {
        iVar5 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0052f200(this_ptr,packet);
        if (iVar5 == 0) {
          return;
        }
        _DAT_01d51dac = (packet->player_announce).addr.ip_address;
      }
      local_40.type = PACKET_SETTINGS_ACK;
      local_3b = _DAT_01d51dac;
      local_40.size = 9;
      core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,this_ptr->server_player_index,&local_40);
      return;
    }
    break;
  case PACKET_SETTINGS_ACK:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       (local_1c->player_id <= (packet->simple).value)) {
      local_1c->player_id = (packet->simple).value;
      return;
    }
    break;
  case PACKET_DISCONNECT:
    if ((packet->player_announce).addr.ip_address != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_0052f890(this_ptr,uVar2);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
    }
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar2)) &&
       (uVar2 == this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
      pcVar11 = "You have been disconnected from the game";
      pcVar10 = &DAT_005ebc2f;
      iVar5 = 0;
      support_trisock_cpp_createNetworkAddr_FUN_0059c740(&local_34,_DAT_02c8ae4c,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
                (this_ptr,sender_addr,iVar5,pcVar10,pcVar11);
      return;
    }
    break;
  case PACKET_SIM_FRAME:
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar2 < 0)) ||
       (uVar2 != this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    local_2c = (packet->player_announce).addr.ip_address;
    uVar2 = uVar2 ^ this_ptr->server_player_index;
    if (0 < _DAT_01d715a8) {
      iVar5 = 0;
      do {
        if (local_2c == *(uint *)(iVar5 + 0x1d715ac)) {
          if (-1 < (int)uVar2) {
            puVar3 = (uint *)(iVar5 + 0x1d715ac);
            goto LAB_0052dd98;
          }
          break;
        }
        iVar5 = iVar5 + 0x6c;
        uVar2 = uVar2 + 1;
      } while (iVar5 < _DAT_01d715a8 * 0x6c);
    }
    if (0x1ff < _DAT_01d715a8) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 299;
      core_main_c_FUN_005030e0("allocSimFrame - sim history list full");
    }
    puVar3 = (uint *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
    _DAT_01d715a8 = _DAT_01d715a8 + 1;
    memset(puVar3,0,0x6c);
    *puVar3 = local_2c;
LAB_0052dd98:
    puVar3[1] = *(uint *)&(packet->player_announce).addr.port;
    puVar3[2] = (uint)(packet->sim_frame).frame.delta_time;
    iVar5 = 0;
    if (0 < this_ptr->player_count) {
      local_18 = packet;
      local_24 = puVar3;
      do {
        if (iVar5 < 0) {
          _DAT_01d1d400 = "..\\core\\netgame.cpp";
          _DAT_01d1d404 = 0x596;
          core_main_c_FUN_005030e0("Player list mismatch processing SimFrame Update packet!");
        }
        pSVar6 = (local_18->sim_frame).frame.player_input;
        puVar3 = local_24 + iVar5 * 0xc + 3;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = (pSVar6->action_state).walk;
          pSVar6 = (SPlayerInput *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          puVar3 = puVar3 + (uint)bVar9 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        local_18 = (UNetPacket *)((local_18->server_accept).mission_name + 0x17);
      } while (iVar5 < this_ptr->player_count);
    }
    break;
  case PACKET_PLAYER_INPUT:
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if ((this_ptr->network_mode == NET_MODE_PLAYING) &&
       (local_1c->sim_frame_index < (packet->simple).value)) {
      local_1c->sim_frame_index = (packet->simple).value;
      puVar7 = &(packet->player_announce).addr.port;
      pSVar6 = &local_1c->player_input;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        (pSVar6->action_state).walk = *(int *)puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -4 + 2;
        pSVar6 = (SPlayerInput *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
      }
      return;
    }
  }
  return;
}
