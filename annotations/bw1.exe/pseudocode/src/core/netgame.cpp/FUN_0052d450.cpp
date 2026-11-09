// Name: core_netgame.cpp_FUN_0052d450
// Address: 0052d450
// Address Range: [[0052d450, 0052df45]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_FUN_0052d450(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0052ddd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_FUN_0052d450(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  SNetworkAddr *sender_addr;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
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
  char *local_1c;
  UNetPacket *local_18;
  int local_14;
  
  bVar7 = 0;
  uVar2 = core_netgame_cpp_FUN_0052dff0(this_ptr,source_addr);
  local_1c = (char *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = &this_ptr->field_0x20 + uVar2 * 0x7c;
    *(int *)(local_1c + 0x24) = _DAT_01d51da0;
  }
  switch(packet->raw[4]) {
  case '\x01':
    local_28 = packet;
    if (*(int *)&this_ptr->field_0x4 != 1) {
      local_58 = 9;
      local_54 = 3;
      core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0
                (this_ptr,source_addr,(SNetPacketHeader *)&local_58);
    }
    if ((int)uVar2 < 0) {
      uVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                        (this_ptr,source_addr,(local_28->player_announce).name,
                         (local_28->player_announce).hero_number,
                         (local_28->player_announce).aim_mode);
    }
    else {
      iVar5 = _strcmp(local_1c,(local_28->player_announce).name);
      if (((iVar5 != 0) ||
          ((local_28->player_announce).hero_number != *(EHeroType *)(local_1c + 0x14))) ||
         ((local_28->player_announce).aim_mode != *(int *)(local_1c + 0x18))) {
        pcVar9 = local_28->raw + 0xd;
        pcVar8 = local_1c;
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        *(EHeroType *)(local_1c + 0x14) = (local_28->player_announce).hero_number;
        *(int *)(local_1c + 0x18) = (local_28->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
      }
    }
    pcVar8 = local_cb;
    local_e4 = 0x71;
    pcVar9 = &this_ptr->field_0x120;
    local_e0 = 2;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = local_df;
    pcVar9 = &this_ptr->field_0x8;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_7b = *(uint *)source_addr;
    (&uStack_77)[(uint)bVar7 * -2] = *(uint *)(source_addr + (uint)bVar7 * -8 + 4);
    core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,uVar2,(SNetPacketHeader *)&local_e4);
    iVar5 = *(int *)&this_ptr->field_0x11c;
    *(int *)(&this_ptr->field_0x3c + iVar5 * 0x7c) = (local_28->simple).value;
    *(uint *)((int)this_ptr + (uint)bVar7 * -8 + iVar5 * 0x7c + 0x40) =
         *(uint *)((int)local_28 + (uint)bVar7 * -8 + 9);
    return;
  case '\x02':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x118))
    {
LAB_0052d72f:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if (*(int *)&this_ptr->field_0x4 == 1) {
      pcVar8 = packet->raw + 5;
      _DAT_01d51da4 = 1;
      do {
        cVar1 = *pcVar8;
        *local_1c = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        local_1c[1] = cVar1;
        local_1c = local_1c + 2;
      } while (cVar1 != '\0');
      iVar5 = *(int *)&this_ptr->field_0x11c;
      *(uint *)(&this_ptr->field_0x3c + iVar5 * 0x7c) =
           *(uint *)&(packet->server_accept).client_addr;
      *(uint *)((int)this_ptr + (uint)bVar7 * -8 + iVar5 * 0x7c + 0x40) =
           *(uint *)((int)packet + (uint)bVar7 * -8 + 0x6d);
      _DAT_01d51dac = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((*(int *)this_ptr == 2) && (-1 < (int)uVar2)) &&
       ((*(int *)&this_ptr->field_0x4 == 1 && (uVar2 == *(uint *)&this_ptr->field_0x118)))) {
      _DAT_01d51da4 = (packet->simple).value;
      return;
    }
    break;
  case '\x04':
    if (*(int *)this_ptr == 0) {
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
    if ((*(int *)this_ptr == 0) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= *(float *)(local_1c + 0x28)) {
      local_ec = (float)((packet->simple).value - *(int *)(local_1c + 0x30)) * (float)_DAT_005ebca8;
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
    *(float *)(local_1c + 0x28) = local_f0;
    *(int *)(local_1c + 0x30) = _DAT_01d51da0;
    return;
  case '\x06':
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < _DAT_01d51db4) {
        piVar3 = (int *)0x1d51db8;
        do {
          if ((((short)piVar3[1] == *(short *)(source_addr + 4)) && (*piVar3 == *(int *)source_addr)
              ) && ((packet->simple).value == *(int *)(iVar5 * 0x120 + 0x1d51dc0))) break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 0x48;
        } while (iVar5 < _DAT_01d51db4);
      }
      if (iVar5 == _DAT_01d51db4) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
                  (this_ptr,source_addr,(packet->simple).value,local_1c,
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
    if (((*(int *)this_ptr != 0) && (-1 < (int)uVar2)) && (0 < _DAT_01d6dfb8)) {
      iVar5 = 0;
      iVar4 = _DAT_01d6dfb8 * 0x114;
      do {
        while (*(int *)(&DAT_01d6dfc0 + iVar5) == (packet->simple).value) {
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
  case '\b':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x118))
    goto LAB_0052d72f;
    if ((*(int *)&this_ptr->field_0x4 == 1) && ((packet->simple).value == 1)) {
      *(uint *)&this_ptr->field_0x4 = 2;
    }
    local_64 = 9;
    local_60 = 9;
    local_5f = *(uint *)(&this_ptr->field_0x5c + *(int *)&this_ptr->field_0x11c * 0x7c);
    core_netgame_cpp_CNetGame_send_FUN_0052df50
              (this_ptr,*(int *)&this_ptr->field_0x118,(SNetPacketHeader *)&local_64);
    if (_DAT_01d51da8 < (packet->simple).value) {
      _DAT_01d51da8 = (packet->simple).value;
      return;
    }
    break;
  case '\t':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) {
LAB_0052dac3:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    if ((*(int *)&this_ptr->field_0x4 == 2) && (*(int *)(local_1c + 0x3c) <= (packet->simple).value)
       ) {
      *(int *)(local_1c + 0x3c) = (packet->simple).value;
      return;
    }
    break;
  case '\n':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if (*(int *)&this_ptr->field_0x4 == 1) {
      if (*(int *)(local_1c + 0x40) != 0) {
        local_14 = *(int *)(local_1c + 0x40) - (packet->simple).value;
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
      pcVar8 = packet->raw + 9;
      *(int *)(local_1c + 0x44) = (packet->player_state).ready_flag;
      pcVar9 = local_1c;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
      return;
    }
    break;
  case '\v':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x118))
    goto LAB_0052dac3;
    if (*(int *)&this_ptr->field_0x4 == 1) {
      if (_DAT_01d51dac < (packet->simple).value) {
        iVar5 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0052f200(this_ptr,packet);
        if (iVar5 == 0) {
          return;
        }
        _DAT_01d51dac = (packet->simple).value;
      }
      local_3c = 0xc;
      local_3b = _DAT_01d51dac;
      local_40 = 9;
      core_netgame_cpp_CNetGame_send_FUN_0052df50
                (this_ptr,*(int *)&this_ptr->field_0x118,(SNetPacketHeader *)&local_40);
      return;
    }
    break;
  case '\f':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if ((*(int *)&this_ptr->field_0x4 == 1) && (*(int *)(local_1c + 0x34) <= (packet->simple).value)
       ) {
      *(int *)(local_1c + 0x34) = (packet->simple).value;
      return;
    }
    break;
  case '\r':
    if ((packet->simple).value != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
    }
    if (*(int *)this_ptr == 1) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_0052f890(this_ptr,uVar2);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
    }
    if (((*(int *)this_ptr == 2) && (-1 < (int)uVar2)) && (uVar2 == *(uint *)&this_ptr->field_0x118)
       ) {
      core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
      pcVar9 = "You have been disconnected from the game";
      pcVar8 = &DAT_005ebc2f;
      iVar5 = 0;
      sender_addr = (SNetworkAddr *)
                    support_trisock_cpp_createNetworkAddr_FUN_0059c740(local_34,_DAT_02c8ae4c,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
                (this_ptr,sender_addr,iVar5,pcVar8,pcVar9);
      return;
    }
    break;
  case '\x0f':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x118))
    {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,source_addr,0);
      return;
    }
    local_2c = (packet->simple).value;
    uVar2 = uVar2 ^ *(uint *)&this_ptr->field_0x118;
    if (0 < _DAT_01d715a8) {
      iVar5 = 0;
      do {
        if (local_2c == *(int *)(iVar5 + 0x1d715ac)) {
          if (-1 < (int)uVar2) {
            piVar3 = (int *)(iVar5 + 0x1d715ac);
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
    piVar3 = (int *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
    _DAT_01d715a8 = _DAT_01d715a8 + 1;
    memset(piVar3,0,0x6c);
    *piVar3 = local_2c;
LAB_0052dd98:
    piVar3[1] = (packet->game_settings).random_seed;
    piVar3[2] = *(int *)(packet->player_announce).name;
    iVar5 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      local_18 = packet;
      local_24 = piVar3;
      do {
        if (iVar5 < 0) {
          _DAT_01d1d400 = "..\\core\\netgame.cpp";
          _DAT_01d1d404 = 0x596;
          core_main_c_FUN_005030e0("Player list mismatch processing SimFrame Update packet!");
        }
        piVar3 = (int *)(local_18->raw + 0x11);
        piVar6 = local_24 + iVar5 * 0xc + 3;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
          piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        local_18 = (UNetPacket *)((local_18->server_accept).mission_name + 0x17);
      } while (iVar5 < *(int *)&this_ptr->field_0x1c);
    }
    break;
  case '\x10':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if ((*(int *)&this_ptr->field_0x4 == 3) && (*(int *)(local_1c + 0x48) < (packet->simple).value))
    {
      *(int *)(local_1c + 0x48) = (packet->simple).value;
      piVar3 = &(packet->game_settings).random_seed;
      piVar6 = (int *)(local_1c + 0x4c);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      return;
    }
  }
  return;
}
