// Name: core_netgame.cpp_CNetGame_processPacket_FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00505862]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005056f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  char cVar1;
  undefined3 uVar2;
  uint uVar3;
  SNetworkAddr *sender_addr;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SNetPlayer *pSVar8;
  int *piVar9;
  byte bVar10;
  char *pcVar11;
  char *pcVar12;
  float local_f8;
  float local_f4;
  float local_f0;
  uint local_ec;
  byte local_e8;
  char local_e7 [20];
  char local_d3 [80];
  uint local_83;
  uint uStack_7f;
  uint local_78;
  byte local_74;
  int local_73;
  uint local_6c;
  byte local_68;
  uint local_67;
  uint local_60;
  byte local_5c;
  int local_5b;
  uint local_54;
  byte local_50;
  int local_4f;
  uint local_48;
  byte local_44;
  byte local_3c [8];
  int local_34;
  UNetPacket *local_30;
  UNetPacket *local_2c;
  int *local_28;
  SNetPlayer *local_20;
  UNetPacket *local_1c;
  int local_18;
  
  bVar10 = 0;
  uVar3 = core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00505900(this_ptr,source_addr);
  local_20 = (SNetPlayer *)0x0;
  if (-1 < (int)uVar3) {
    local_20 = this_ptr->players + uVar3;
    *(int *)&local_20->field_0x24 = _DAT_01da6478;
  }
  switch(packet->raw[4]) {
  case '\x01':
    local_2c = packet;
    if (this_ptr->network_mode != NET_MODE_LOBBY) {
      local_48 = 9;
      local_44 = 3;
      core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0
                (this_ptr,source_addr,(SNetPacketHeader *)&local_48);
    }
    if ((int)uVar3 < 0) {
      uVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950
                        (this_ptr,source_addr,(local_2c->player_announce).name,
                         (local_2c->player_announce).hero_number,
                         (local_2c->player_announce).aim_mode);
    }
    else {
      iVar6 = _strcmp((char *)local_20,(local_2c->player_announce).name);
      if (((iVar6 != 0) ||
          ((local_2c->player_announce).hero_number != *(EHeroType *)&local_20->field_0x14)) ||
         ((local_2c->player_announce).aim_mode != *(int *)&local_20->field_0x18)) {
        pcVar11 = local_2c->raw + 0xd;
        pSVar8 = local_20;
        do {
          cVar1 = *pcVar11;
          *(char *)pSVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pSVar8->field_0x1 = cVar1;
          pSVar8 = (SNetPlayer *)&pSVar8->field_0x2;
        } while (cVar1 != '\0');
        *(EHeroType *)&local_20->field_0x14 = (local_2c->player_announce).hero_number;
        *(int *)&local_20->field_0x18 = (local_2c->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
      }
    }
    pcVar11 = local_d3;
    local_ec = 0x71;
    pcVar12 = this_ptr->mission_name;
    local_e8 = 2;
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
    local_83 = *(uint *)source_addr;
    (&uStack_7f)[(uint)bVar10 * -2] = *(uint *)(source_addr + (uint)bVar10 * -8 + 4);
    core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,uVar3,(SNetPacketHeader *)&local_ec);
    iVar6 = this_ptr->local_player_index;
    *(int *)&this_ptr->players[iVar6].field_0x1c = (local_2c->simple).value;
    *(uint *)((int)this_ptr + (uint)bVar10 * -8 + iVar6 * 0x80 + 0x40) =
         *(uint *)((int)local_2c + (uint)bVar10 * -8 + 9);
    return;
  case '\x02':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) {
LAB_0050502a:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      pcVar11 = packet->raw + 5;
      _DAT_01da647c = 1;
      do {
        cVar1 = *pcVar11;
        *(char *)local_20 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        local_20->field_0x1 = cVar1;
        local_20 = (SNetPlayer *)&local_20->field_0x2;
      } while (cVar1 != '\0');
      iVar6 = this_ptr->local_player_index;
      uVar2 = *(undefined3 *)((int)packet + 0x6a);
      this_ptr->players[iVar6].field_0x1c = *(SNetworkAddr *)((int)packet + 0x69);
      *(undefined3 *)&this_ptr->players[iVar6].field_0x1d = uVar2;
      *(uint *)((int)this_ptr + (uint)bVar10 * -8 + iVar6 * 0x80 + 0x40) =
           *(uint *)((int)packet + (uint)bVar10 * -8 + 0x6d);
      _DAT_01da6484 = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar3)) &&
       ((this_ptr->network_mode == NET_MODE_LOBBY && (uVar3 == this_ptr->server_player_index)))) {
      _DAT_01da647c = (packet->simple).value;
      return;
    }
    break;
  case '\x04':
    if (this_ptr->connection_type == CONNECTION_NONE) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    local_60 = 9;
    local_5c = 5;
    local_5b = (packet->simple).value;
    core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0
              (this_ptr,source_addr,(SNetPacketHeader *)&local_60);
    return;
  case '\x05':
    if ((this_ptr->connection_type == CONNECTION_NONE) || ((int)uVar3 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= *(float *)&local_20->field_0x28) {
      local_f8 = (float)((packet->simple).value - *(int *)&local_20->field_0x30) *
                 (float)_DAT_005caab9;
      if (local_f8 < (float)_DAT_005caac1) {
        local_f8 = -30.0;
      }
      if ((float)_DAT_005caac9 < local_f8) {
        local_f8 = 30.0;
      }
      if (local_f8 <= 0.0) {
        return;
      }
    }
    local_f4 = (float)(_DAT_01da6478 - (packet->simple).value) * (float)_DAT_005caab9;
    if (local_f4 < 0.0) {
      local_f4 = 0.0;
    }
    if ((float)_DAT_005caac9 < local_f4) {
      local_f4 = 30.0;
    }
    *(float *)&local_20->field_0x28 = local_f4;
    *(int *)&local_20->field_0x30 = _DAT_01da6478;
    return;
  case '\x06':
    if (-1 < (int)uVar3) {
      iVar6 = 0;
      if (0 < _DAT_01da648c) {
        piVar4 = (int *)0x1da6490;
        do {
          if ((((short)piVar4[1] == *(short *)(source_addr + 4)) && (*(int *)source_addr == *piVar4)
              ) && ((packet->simple).value == *(int *)(iVar6 * 0x120 + 0x1da6498))) break;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x48;
        } while (iVar6 < _DAT_01da648c);
      }
      if (iVar6 == _DAT_01da648c) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
                  (this_ptr,source_addr,(packet->simple).value,(char *)local_20,
                   (packet->server_accept).player_name + 4);
      }
      local_78 = 9;
      local_74 = 7;
      local_73 = (packet->simple).value;
      core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0
                (this_ptr,source_addr,(SNetPacketHeader *)&local_78);
      return;
    }
    break;
  case '\a':
    if (((this_ptr->connection_type != CONNECTION_NONE) && (-1 < (int)uVar3)) && (0 < _DAT_01dc2690)
       ) {
      iVar6 = 0;
      iVar7 = _DAT_01dc2690 * 0x114;
      do {
        while (*(int *)(&DAT_01dc2698 + iVar6) == (packet->simple).value) {
          (&DAT_01dc269c)[iVar6 + uVar3] = 1;
          iVar6 = iVar6 + 0x114;
          if (iVar7 <= iVar6) {
            return;
          }
        }
        iVar6 = iVar6 + 0x114;
      } while (iVar6 < iVar7);
    }
    break;
  case '\b':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) goto LAB_0050502a;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) && ((packet->simple).value == 1)) {
      this_ptr->network_mode = NET_MODE_SYNCING;
    }
    local_6c = 9;
    local_68 = 9;
    local_67 = *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x3c;
    core_netgame_cpp_CNetGame_send_FUN_00505870
              (this_ptr,this_ptr->server_player_index,(SNetPacketHeader *)&local_6c);
    if (_DAT_01da6480 < (packet->simple).value) {
      _DAT_01da6480 = (packet->simple).value;
      return;
    }
    break;
  case '\t':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) {
LAB_005053b9:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_SYNCING) &&
       (*(int *)&local_20->field_0x3c <= (packet->simple).value)) {
      *(int *)&local_20->field_0x3c = (packet->simple).value;
      return;
    }
    break;
  case '\n':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (*(int *)&local_20->field_0x40 != 0) {
        local_18 = *(int *)&local_20->field_0x40 - (packet->simple).value;
        local_f0 = (float)local_18 * (float)_DAT_005caab9;
        if (local_f0 < (float)_DAT_005caac1) {
          local_f0 = -30.0;
        }
        if ((float)_DAT_005caac9 < local_f0) {
          local_f0 = 30.0;
        }
        if (local_f0 <= 0.0) {
          return;
        }
      }
      pcVar11 = packet->raw + 9;
      *(int *)&local_20->field_0x44 = (packet->player_state).ready_flag;
      pSVar8 = local_20;
      do {
        cVar1 = *pcVar11;
        *(char *)pSVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pSVar8->field_0x1 = cVar1;
        pSVar8 = (SNetPlayer *)&pSVar8->field_0x2;
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
      return;
    }
    break;
  case '\v':
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) goto LAB_005053b9;
    if (this_ptr->network_mode == NET_MODE_LOBBY) {
      if (_DAT_01da6484 < (packet->simple).value) {
        iVar6 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00506b00(this_ptr,packet);
        if (iVar6 == 0) {
          return;
        }
        _DAT_01da6484 = (packet->simple).value;
      }
      local_54 = 9;
      local_50 = 0xc;
      local_4f = _DAT_01da6484;
      core_netgame_cpp_CNetGame_send_FUN_00505870
                (this_ptr,this_ptr->server_player_index,(SNetPacketHeader *)&local_54);
      return;
    }
    break;
  case '\f':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) goto LAB_005053b9;
    if ((this_ptr->network_mode == NET_MODE_LOBBY) &&
       (*(int *)&local_20->field_0x34 <= (packet->simple).value)) {
      *(int *)&local_20->field_0x34 = (packet->simple).value;
      return;
    }
    break;
  case '\r':
    if ((packet->simple).value != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      if (-1 < (int)uVar3) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(this_ptr,uVar3);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
    }
    if (((this_ptr->connection_type == CONNECTION_CLIENT) && (-1 < (int)uVar3)) &&
       (uVar3 == this_ptr->server_player_index)) {
      core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
      pcVar12 = "You have been disconnected from the game";
      pcVar11 = &DAT_005caa40;
      iVar6 = 0;
      sender_addr = (SNetworkAddr *)
                    support_trisock_cpp_createNetworkAddr_FUN_0056f730(local_3c,_DAT_02cfd89c,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
                (this_ptr,sender_addr,iVar6,pcVar11,pcVar12);
      return;
    }
    break;
  case '\x0f':
    local_30 = packet;
    if (((this_ptr->connection_type != CONNECTION_CLIENT) || ((int)uVar3 < 0)) ||
       (uVar3 != this_ptr->server_player_index)) goto LAB_0050502a;
    local_34 = (packet->simple).value;
    uVar3 = uVar3 ^ this_ptr->server_player_index;
    if (0 < _DAT_01dc5c80) {
      iVar6 = 0;
      do {
        if (local_34 == *(int *)(iVar6 + 0x1dc5c84)) {
          if (-1 < (int)uVar3) {
            piVar4 = (int *)(iVar6 + 0x1dc5c84);
            goto LAB_005056b2;
          }
          break;
        }
        iVar6 = iVar6 + 0x74;
        uVar3 = uVar3 + 1;
      } while (iVar6 < _DAT_01dc5c80 * 0x74);
    }
    if (0x1ff < _DAT_01dc5c80) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 299;
      core_main_c_FUN_004e4330("allocSimFrame - sim history list full");
    }
    piVar4 = (int *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
    _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
    memset(piVar4,0,0x74);
    *piVar4 = local_34;
LAB_005056b2:
    piVar4[1] = (local_30->game_settings).random_seed;
    piVar4[2] = *(int *)(local_30->player_announce).name;
    iVar6 = 0;
    if (0 < this_ptr->player_count) {
      local_1c = local_30;
      local_28 = piVar4;
      do {
        if (iVar6 < 0) {
          _DAT_01d71de0 = "..\\core\\netgame.cpp";
          _DAT_01d71de4 = 0x596;
          core_main_c_FUN_004e4330("Player list mismatch processing SimFrame Update packet!");
        }
        iVar7 = iVar6 * 0xd;
        iVar6 = iVar6 + 1;
        piVar4 = (int *)(local_1c->raw + 0x11);
        piVar9 = local_28 + iVar7 + 3;
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar4;
          piVar4 = piVar4 + (uint)bVar10 * -2 + 1;
          piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
        }
        local_1c = (UNetPacket *)((local_1c->server_accept).mission_name + 0x1b);
      } while (iVar6 < this_ptr->player_count);
    }
    break;
  case '\x10':
    if ((this_ptr->connection_type != CONNECTION_HOST) || ((int)uVar3 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if ((this_ptr->network_mode == NET_MODE_PLAYING) &&
       (*(int *)&local_20->field_0x48 < (packet->simple).value)) {
      *(int *)&local_20->field_0x48 = (packet->simple).value;
      piVar4 = &(packet->game_settings).random_seed;
      piVar9 = (int *)&local_20->field_0x4c;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar4;
        piVar4 = piVar4 + (uint)bVar10 * -2 + 1;
        piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
      }
      return;
    }
  }
  return;
}
