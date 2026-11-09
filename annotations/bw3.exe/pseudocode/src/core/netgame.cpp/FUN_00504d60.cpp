// Name: core_netgame.cpp_FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00505862]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005056f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  SNetworkAddr *sender_addr;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  char *pcVar9;
  char *pcVar10;
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
  char *local_20;
  UNetPacket *local_1c;
  int local_18;
  
  bVar8 = 0;
  uVar2 = core_netgame_cpp_FUN_00505900(this_ptr,source_addr);
  local_20 = (char *)0x0;
  if (-1 < (int)uVar2) {
    local_20 = &this_ptr->field_0x20 + uVar2 * 0x80;
    *(int *)(local_20 + 0x24) = _DAT_01da6478;
  }
  switch(packet->raw[4]) {
  case '\x01':
    local_2c = packet;
    if (*(int *)&this_ptr->field_0x4 != 1) {
      local_48 = 9;
      local_44 = 3;
      core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0
                (this_ptr,source_addr,(SNetPacketHeader *)&local_48);
    }
    if ((int)uVar2 < 0) {
      uVar2 = core_netgame_cpp_FUN_00505950
                        (this_ptr,source_addr,(local_2c->player_announce).name,
                         (local_2c->player_announce).hero_number,
                         (local_2c->player_announce).aim_mode);
    }
    else {
      iVar5 = _strcmp(local_20,(local_2c->player_announce).name);
      if (((iVar5 != 0) ||
          ((local_2c->player_announce).hero_number != *(EHeroType *)(local_20 + 0x14))) ||
         ((local_2c->player_announce).aim_mode != *(int *)(local_20 + 0x18))) {
        pcVar10 = local_2c->raw + 0xd;
        pcVar9 = local_20;
        do {
          cVar1 = *pcVar10;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(EHeroType *)(local_20 + 0x14) = (local_2c->player_announce).hero_number;
        *(int *)(local_20 + 0x18) = (local_2c->player_announce).aim_mode;
        core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
      }
    }
    pcVar9 = local_d3;
    local_ec = 0x71;
    pcVar10 = &this_ptr->field_0x128;
    local_e8 = 2;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar9 = local_e7;
    pcVar10 = &this_ptr->field_0x8;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_83 = *(uint *)source_addr;
    (&uStack_7f)[(uint)bVar8 * -2] = *(uint *)(source_addr + (uint)bVar8 * -8 + 4);
    core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,uVar2,(SNetPacketHeader *)&local_ec);
    iVar5 = *(int *)&this_ptr->field_0x124;
    *(int *)(&this_ptr->field_0x3c + iVar5 * 0x80) = (local_2c->simple).value;
    *(uint *)((int)this_ptr + (uint)bVar8 * -8 + iVar5 * 0x80 + 0x40) =
         *(uint *)((int)local_2c + (uint)bVar8 * -8 + 9);
    return;
  case '\x02':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x120))
    {
LAB_0050502a:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (*(int *)&this_ptr->field_0x4 == 1) {
      pcVar9 = packet->raw + 5;
      _DAT_01da647c = 1;
      do {
        cVar1 = *pcVar9;
        *local_20 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        local_20[1] = cVar1;
        local_20 = local_20 + 2;
      } while (cVar1 != '\0');
      iVar5 = *(int *)&this_ptr->field_0x124;
      *(uint *)(&this_ptr->field_0x3c + iVar5 * 0x80) =
           *(uint *)&(packet->server_accept).client_addr;
      *(uint *)((int)this_ptr + (uint)bVar8 * -8 + iVar5 * 0x80 + 0x40) =
           *(uint *)((int)packet + (uint)bVar8 * -8 + 0x6d);
      _DAT_01da6484 = 0xffffffff;
      return;
    }
    break;
  case '\x03':
    if (((*(int *)this_ptr == 2) && (-1 < (int)uVar2)) &&
       ((*(int *)&this_ptr->field_0x4 == 1 && (uVar2 == *(uint *)&this_ptr->field_0x120)))) {
      _DAT_01da647c = (packet->simple).value;
      return;
    }
    break;
  case '\x04':
    if (*(int *)this_ptr == 0) {
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
    if ((*(int *)this_ptr == 0) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (0.0 <= *(float *)(local_20 + 0x28)) {
      local_f8 = (float)((packet->simple).value - *(int *)(local_20 + 0x30)) * (float)_DAT_005caab9;
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
    *(float *)(local_20 + 0x28) = local_f4;
    *(int *)(local_20 + 0x30) = _DAT_01da6478;
    return;
  case '\x06':
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < _DAT_01da648c) {
        piVar3 = (int *)0x1da6490;
        do {
          if ((((short)piVar3[1] == *(short *)(source_addr + 4)) && (*(int *)source_addr == *piVar3)
              ) && ((packet->simple).value == *(int *)(iVar5 * 0x120 + 0x1da6498))) break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 0x48;
        } while (iVar5 < _DAT_01da648c);
      }
      if (iVar5 == _DAT_01da648c) {
        core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
                  (this_ptr,source_addr,(packet->simple).value,local_20,
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
    if (((*(int *)this_ptr != 0) && (-1 < (int)uVar2)) && (0 < _DAT_01dc2690)) {
      iVar5 = 0;
      iVar6 = _DAT_01dc2690 * 0x114;
      do {
        while (*(int *)(&DAT_01dc2698 + iVar5) == (packet->simple).value) {
          (&DAT_01dc269c)[iVar5 + uVar2] = 1;
          iVar5 = iVar5 + 0x114;
          if (iVar6 <= iVar5) {
            return;
          }
        }
        iVar5 = iVar5 + 0x114;
      } while (iVar5 < iVar6);
    }
    break;
  case '\b':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x120))
    goto LAB_0050502a;
    if ((*(int *)&this_ptr->field_0x4 == 1) && ((packet->simple).value == 1)) {
      *(uint *)&this_ptr->field_0x4 = 2;
    }
    local_6c = 9;
    local_68 = 9;
    local_67 = *(uint *)(&this_ptr->field_0x5c + *(int *)&this_ptr->field_0x124 * 0x80);
    core_netgame_cpp_CNetGame_send_FUN_00505870
              (this_ptr,*(int *)&this_ptr->field_0x120,(SNetPacketHeader *)&local_6c);
    if (_DAT_01da6480 < (packet->simple).value) {
      _DAT_01da6480 = (packet->simple).value;
      return;
    }
    break;
  case '\t':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) {
LAB_005053b9:
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if ((*(int *)&this_ptr->field_0x4 == 2) && (*(int *)(local_20 + 0x3c) <= (packet->simple).value)
       ) {
      *(int *)(local_20 + 0x3c) = (packet->simple).value;
      return;
    }
    break;
  case '\n':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if (*(int *)&this_ptr->field_0x4 == 1) {
      if (*(int *)(local_20 + 0x40) != 0) {
        local_18 = *(int *)(local_20 + 0x40) - (packet->simple).value;
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
      pcVar9 = packet->raw + 9;
      *(int *)(local_20 + 0x44) = (packet->player_state).ready_flag;
      pcVar10 = local_20;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
      return;
    }
    break;
  case '\v':
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x120))
    goto LAB_005053b9;
    if (*(int *)&this_ptr->field_0x4 == 1) {
      if (_DAT_01da6484 < (packet->simple).value) {
        iVar5 = core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00506b00(this_ptr,packet);
        if (iVar5 == 0) {
          return;
        }
        _DAT_01da6484 = (packet->simple).value;
      }
      local_54 = 9;
      local_50 = 0xc;
      local_4f = _DAT_01da6484;
      core_netgame_cpp_CNetGame_send_FUN_00505870
                (this_ptr,*(int *)&this_ptr->field_0x120,(SNetPacketHeader *)&local_54);
      return;
    }
    break;
  case '\f':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) goto LAB_005053b9;
    if ((*(int *)&this_ptr->field_0x4 == 1) && (*(int *)(local_20 + 0x34) <= (packet->simple).value)
       ) {
      *(int *)(local_20 + 0x34) = (packet->simple).value;
      return;
    }
    break;
  case '\r':
    if ((packet->simple).value != 0) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
    }
    if (*(int *)this_ptr == 1) {
      if (-1 < (int)uVar2) {
        core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(this_ptr,uVar2);
      }
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
    }
    if (((*(int *)this_ptr == 2) && (-1 < (int)uVar2)) && (uVar2 == *(uint *)&this_ptr->field_0x120)
       ) {
      core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
      pcVar10 = "You have been disconnected from the game";
      pcVar9 = &DAT_005caa40;
      iVar5 = 0;
      sender_addr = (SNetworkAddr *)
                    support_trisock_cpp_createNetworkAddr_FUN_0056f730(local_3c,_DAT_02cfd89c,0);
      core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
                (this_ptr,sender_addr,iVar5,pcVar9,pcVar10);
      return;
    }
    break;
  case '\x0f':
    local_30 = packet;
    if (((*(int *)this_ptr != 2) || ((int)uVar2 < 0)) || (uVar2 != *(uint *)&this_ptr->field_0x120))
    goto LAB_0050502a;
    local_34 = (packet->simple).value;
    uVar2 = uVar2 ^ *(uint *)&this_ptr->field_0x120;
    if (0 < _DAT_01dc5c80) {
      iVar5 = 0;
      do {
        if (local_34 == *(int *)(iVar5 + 0x1dc5c84)) {
          if (-1 < (int)uVar2) {
            piVar3 = (int *)(iVar5 + 0x1dc5c84);
            goto LAB_005056b2;
          }
          break;
        }
        iVar5 = iVar5 + 0x74;
        uVar2 = uVar2 + 1;
      } while (iVar5 < _DAT_01dc5c80 * 0x74);
    }
    if (0x1ff < _DAT_01dc5c80) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 299;
      core_main_c_FUN_004e4330("allocSimFrame - sim history list full");
    }
    piVar3 = (int *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
    _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
    memset(piVar3,0,0x74);
    *piVar3 = local_34;
LAB_005056b2:
    piVar3[1] = (local_30->game_settings).random_seed;
    piVar3[2] = *(int *)(local_30->player_announce).name;
    iVar5 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      local_1c = local_30;
      local_28 = piVar3;
      do {
        if (iVar5 < 0) {
          _DAT_01d71de0 = "..\\core\\netgame.cpp";
          _DAT_01d71de4 = 0x596;
          core_main_c_FUN_004e4330("Player list mismatch processing SimFrame Update packet!");
        }
        iVar6 = iVar5 * 0xd;
        iVar5 = iVar5 + 1;
        piVar3 = (int *)(local_1c->raw + 0x11);
        piVar7 = local_28 + iVar6 + 3;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar3;
          piVar3 = piVar3 + (uint)bVar8 * -2 + 1;
          piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
        }
        local_1c = (UNetPacket *)((local_1c->server_accept).mission_name + 0x1b);
      } while (iVar5 < *(int *)&this_ptr->field_0x1c);
    }
    break;
  case '\x10':
    if ((*(int *)this_ptr != 1) || ((int)uVar2 < 0)) {
      core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,source_addr,0);
      return;
    }
    if ((*(int *)&this_ptr->field_0x4 == 3) && (*(int *)(local_20 + 0x48) < (packet->simple).value))
    {
      *(int *)(local_20 + 0x48) = (packet->simple).value;
      piVar3 = &(packet->game_settings).random_seed;
      piVar7 = (int *)(local_20 + 0x4c);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar3;
        piVar3 = piVar3 + (uint)bVar8 * -2 + 1;
        piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
      }
      return;
    }
  }
  return;
}
