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
  undefined3 uVar2;
  uint uVar3;
  SNetworkAddr *sender_addr;
  int *piVar4;
  int iVar5;
  int iVar6;
  SNetPlayer *pSVar7;
  int *piVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  float local_f0;
  float local_ec;
  float local_e8;
  uint local_e4;
  byte local_e0;
  char local_df [20];
  char local_cb [80];
  uint local_7b;
  uint uStack_77;
  uint local_70;
  byte local_6c;
  int local_6b;
  uint local_64;
  byte local_60;
  uint local_5f;
  uint local_58;
  byte local_54;
  uint local_4c;
  byte local_48;
  int local_47;
  uint local_40;
  byte local_3c;
  int local_3b;
  byte local_34 [8];
  int local_2c;
  UNetPacket *local_28;
  int *local_24;
  SNetPlayer *local_1c;
  UNetPacket *local_18;
  int local_14;
  
  bVar9 = 0;
  uVar3 = core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_0052dff0(this_ptr,source_addr);
  local_1c = (SNetPlayer *)0x0;
  if (-1 < (int)uVar3) {
    local_1c = this_ptr->players + uVar3;
    *(int *)&local_1c->field_0x24 = _DAT_01d51da0;
  }
  switch(packet->raw[4]) {
  case '\x01':
    local_28 = packet;
    if (this_ptr->network_mode != NET_MODE_LOBBY) {
      local_58 = 9;
      local_54 = 3;
      core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0
                (this_ptr,source_addr,(SNetPacketHeader *)&local_58);
    }
    if ((int)uVar3 < 0) {
      uVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                        (this_ptr,source_addr,(local_28->player_announce).name,
                         (local_28->player_announce).hero_number,
                         (local_28->player_announce).aim_mode);
    }
    else {
      iVar6 = _strcmp((char *)local_1c,(local_28->player_announce).name);
      if (((iVar6 != 0) ||
          ((local_28->player_announce).hero_number != *(EHeroType *)&local_1c->field_0x14)) ||
         ((local_28->player_announce).aim_mode != *(int *)&local_1c->field_0x18)) {
        pcVar10 = local_28->raw + 0xd;
        pSVar7 = local_1c;
        do {
          cVar1 = *pcVar10;
          *(char *)pSVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pSVar7->field_0x1 = cVar1;
          pSVar7 = (SNetPlayer *)&pSVar7->field_0x2;
        } while (cVar1 != '\0');
        *(EHeroType *)&local_1c->field_0x14 = (local_28->player_announce).hero_number;
        *(int *)&local_1c->field_0x18 = (local_28->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
      }
    }
    pcVar10 = local_cb;
    local_e4 = 0x71;
    pcVar11 = this_ptr->mission_name;
    local_e0 = 2;
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
    local_7b = *(uint *)source_addr;
    (&uStack_77)[(uint)bVar9 * -2] = *(uint *)(source_addr + (uint)bVar9 * -8 + 4);
    core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,uVar3,(SNetPacketHeader *)&local_e4);
    iVar6 = this_ptr->local_player_index;
    *(int *)&this_ptr->players[iVar6].field_0x1c = (local_28->simple).value;
    *(uint *)((int)this_ptr + (uint)bVar9 * -8 + iVar6 * 0x7c + 0x40) =
         *(uint *)((int)local_28 + (uint)bVar9 * -8 + 9);
    return;
  case '\x02':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) {
LAB_0052d72f:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      pcVar10 = packet->raw + 5;
      _DAT_01d51da4 = 1;
      do {
        cVar1 = *pcVar10;
        *(char *)local_1c = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        local_1c->field_0x1 = cVar1;
        local_1c = (SNetPlayer *)&local_1c->field_0x2;
      } while (cVar1 != '\0');
      iVar6 = this_ptr->local_player_index;
      uVar2 = *(undefined3 *)((int)packet + 0x6a);
      this_ptr->players[iVar6].field_0x1c = *(SNetworkAddr *)((int)packet + 0x69);
      *(undefined3 *)&this_ptr->players[iVar6].field_0x1d = uVar2;
      *(uint *)((int)this_ptr + (uint)bVar9 * -8 + iVar6 * 0x7c + 0x40) =
           *(uint *)((int)packet + (uint)bVar9 * -8 + 0x6d);
      _DAT_01d51dac = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar3)) &&
       ((this_ptr->network_mode == NET_MODE_LOBBY && (uVar3 == this_ptr->server_player_index)))) {
      _DAT_01d51da4 = (packet->simple).value;
      return;
    }
    break;
  case '\x04':
    if (this_ptr->connection_type == CONNECTION_NONE) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    local_4c = 9;
    local_48 = 5;
    local_47 = (packet->simple).value;
    core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0
              (this_ptr,source_addr,(SNetPacketHeader *)&local_4c);
    return;
  case '\x05':
    if ((this_ptr->connection_type == CONNECTION_NONE) || ((int)uVar3 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= *(float *)&local_1c->field_0x28) {
      local_ec = (float)((packet->simple).value - *(int *)&local_1c->field_0x30) *
                 (float)_DAT_005ebca8;
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
    local_f0 = (float)(_DAT_01d51da0 - (packet->simple).value) * (float)_DAT_005ebca8;
    if (local_f0 < 0.0) {
      local_f0 = 0.0;
    }
    if ((float)_DAT_005ebcb8 < local_f0) {
      local_f0 = 30.0;
    }
    *(float *)&local_1c->field_0x28 = local_f0;
    *(int *)&local_1c->field_0x30 = _DAT_01d51da0;
    return;
  case '\x06':
    if (-1 < (int)uVar3) {
      iVar6 = 0;
      if (0 < _DAT_01d51db4) {
        piVar4 = (int *)0x1d51db8;
        do {
          if ((((short)piVar4[1] == *(short *)(source_addr + 4)) && (*piVar4 == *(int *)source_addr)
              ) && ((packet->simple).value == *(int *)(iVar6 * 0x120 + 0x1d51dc0))) break;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x48;
        } while (iVar6 < _DAT_01d51db4);
      }
      if (iVar6 == _DAT_01d51db4) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
                  (this_ptr,source_addr,(packet->simple).value,(char *)local_1c,
                   (packet->server_accept).player_name + 4);
      }
      local_70 = 9;
      local_6c = 7;
      local_6b = (packet->simple).value;
      core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0
                (this_ptr,source_addr,(SNetPacketHeader *)&local_70);
      return;
    }
    break;
  case '\a':
    if (((this_ptr->connection_type != CONNECTION_NONE) && (-1 < (int)uVar3)) && (0 < _DAT_01d6dfb8)
       ) {
      iVar6 = 0;
      iVar5 = _DAT_01d6dfb8 * 0x114;
      do {
        while (*(int *)(&DAT_01d6dfc0 + iVar6) == (packet->simple).value) {
          (&DAT_01d6dfc4)[iVar6 + uVar3] = 1;
          iVar6 = iVar6 + 0x114;
          if (iVar5 <= iVar6) {
            return;
          }
        }
        iVar6 = iVar6 + 0x114;
      } while (iVar6 < iVar5);
    }
    break;
  case '\b':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) goto LAB_0052d72f;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) && ((packet->simple).value == 1)) {
      this_ptr->network_mode = NET_MODE_SYNCING;
    }
    local_64 = 9;
    local_60 = 9;
    local_5f = *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x3c;
    core_netgame_cpp_CNetGame_send_FUN_0052df50
              (this_ptr,this_ptr->server_player_index,(SNetPacketHeader *)&local_64);
    if (_DAT_01d51da8 < (packet->simple).value) {
      _DAT_01d51da8 = (packet->simple).value;
      return;
    }
    break;
  case '\t':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) {
LAB_0052dac3:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_SYNCING) &&
       (*(int *)&local_1c->field_0x3c <= (packet->simple).value)) {
      *(int *)&local_1c->field_0x3c = (packet->simple).value;
      return;
    }
    break;
  case '\n':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) goto LAB_0052dac3;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (*(int *)&local_1c->field_0x40 != 0) {
        local_14 = *(int *)&local_1c->field_0x40 - (packet->simple).value;
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
      *(int *)&local_1c->field_0x44 = (packet->player_state).ready_flag;
      pSVar7 = local_1c;
      do {
        cVar1 = *pcVar10;
        *(char *)pSVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pSVar7->field_0x1 = cVar1;
        pSVar7 = (SNetPlayer *)&pSVar7->field_0x2;
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
      return;
    }
    break;
  case '\v':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) goto LAB_0052dac3;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (_DAT_01d51dac < (packet->simple).value) {
        iVar6 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0052f200(this_ptr,packet);
        if (iVar6 == 0) {
          return;
        }
        _DAT_01d51dac = (packet->simple).value;
      }
      local_3c = 0xc;
      local_3b = _DAT_01d51dac;
      local_40 = 9;
      core_netgame_cpp_CNetGame_send_FUN_0052df50
                (this_ptr,this_ptr->server_player_index,(SNetPacketHeader *)&local_40);
      return;
    }
    break;
  case '\f':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) goto LAB_0052dac3;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       (*(int *)&local_1c->field_0x34 <= (packet->simple).value)) {
      *(int *)&local_1c->field_0x34 = (packet->simple).value;
      return;
    }
    break;
  case '\r':
    if ((packet->simple).value != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      if (-1 < (int)uVar3) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_0052f890(this_ptr,uVar3);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
    }
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar3)) &&
       (uVar3 == this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
      pcVar11 = "You have been disconnected from the game";
      pcVar10 = &DAT_005ebc2f;
      iVar6 = 0;
      sender_addr = (SNetworkAddr *)
                    support_trisock_cpp_createNetworkAddr_FUN_0059c740(local_34,_DAT_02c8ae4c,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
                (this_ptr,sender_addr,iVar6,pcVar10,pcVar11);
      return;
    }
    break;
  case '\x0f':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    local_2c = (packet->simple).value;
    uVar3 = uVar3 ^ this_ptr->server_player_index;
    if (0 < _DAT_01d715a8) {
      iVar6 = 0;
      do {
        if (local_2c == *(int *)(iVar6 + 0x1d715ac)) {
          if (-1 < (int)uVar3) {
            piVar4 = (int *)(iVar6 + 0x1d715ac);
            goto LAB_0052dd98;
          }
          break;
        }
        iVar6 = iVar6 + 0x6c;
        uVar3 = uVar3 + 1;
      } while (iVar6 < _DAT_01d715a8 * 0x6c);
    }
    if (0x1ff < _DAT_01d715a8) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 299;
      core_main_c_FUN_005030e0("allocSimFrame - sim history list full");
    }
    piVar4 = (int *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
    _DAT_01d715a8 = _DAT_01d715a8 + 1;
    memset(piVar4,0,0x6c);
    *piVar4 = local_2c;
LAB_0052dd98:
    piVar4[1] = (packet->game_settings).random_seed;
    piVar4[2] = *(int *)(packet->player_announce).name;
    iVar6 = 0;
    if (0 < this_ptr->player_count) {
      local_18 = packet;
      local_24 = piVar4;
      do {
        if (iVar6 < 0) {
          _DAT_01d1d400 = "..\\core\\netgame.cpp";
          _DAT_01d1d404 = 0x596;
          core_main_c_FUN_005030e0("Player list mismatch processing SimFrame Update packet!");
        }
        piVar4 = (int *)(local_18->raw + 0x11);
        piVar8 = local_24 + iVar6 * 0xc + 3;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar4;
          piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
          piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
        }
        iVar6 = iVar6 + 1;
        local_18 = (UNetPacket *)((local_18->server_accept).mission_name + 0x17);
      } while (iVar6 < this_ptr->player_count);
    }
    break;
  case '\x10':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) goto LAB_0052dac3;
    if ((this_ptr->network_mode == NET_MODE_PLAYING) &&
       (*(int *)&local_1c->field_0x48 < (packet->simple).value)) {
      *(int *)&local_1c->field_0x48 = (packet->simple).value;
      piVar4 = &(packet->game_settings).random_seed;
      piVar8 = (int *)&local_1c->field_0x4c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar4;
        piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
      return;
    }
  }
  return;
}
