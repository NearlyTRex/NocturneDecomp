// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020
// Address: 0050e020
// Address Range: [[0050e020, 0050e6b1]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0050e020(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0050e020(CNetGame *this_ptr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  SNetworkAddr *pSVar3;
  int iVar4;
  int iVar5;
  SNetPlayer *pSVar6;
  char *pcVar7;
  EHeroType *pEVar8;
  EHeroType *pEVar9;
  SNetPlayer *pSVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  EHeroType *pEVar15;
  SNetPlayer *pSVar16;
  byte bVar17;
  EHeroType aEStackY_2094 [1986];
  uint local_16f;
  char local_16b [80];
  int local_11b;
  char local_117 [20];
  SNetworkAddr local_103;
  EHeroType aEStack_fb [13];
  uint local_c4;
  EHeroType aEStack_c0 [4];
  EHeroType local_b0;
  int local_ac;
  SIpAddr local_a8;
  ushort local_a4;
  uint local_a0;
  float local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44 [4];
  SNetworkAddr *local_34;
  int local_30;
  CNetGame *local_2c;
  SNetPlayer *local_28;
  uint local_24;
  SNetPlayer *local_20;
  SNetworkAddr *local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x7e6;
    core_main_c_FUN_004e4500("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  piVar12 = (int *)&stack0xfffffe88;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar12 = (packet->header).size;
    packet = (UNetPacket *)((int)packet + (uint)bVar17 * -8 + 4);
    piVar12 = piVar12 + (uint)bVar17 * -2 + 1;
  }
  *(char *)piVar12 = packet->raw[0];
  iVar5 = -1;
  this_ptr->random_seed = local_16f;
  local_44[3] = -1;
  iVar13 = 0;
  if (0 < local_11b) {
    pSVar3 = &local_103;
    do {
      if ((pSVar3->port == this_ptr->players[this_ptr->local_player_index].addr.port) &&
         (this_ptr->players[this_ptr->local_player_index].addr.ip_address == pSVar3->ip_address)) {
        iVar5 = iVar13;
      }
      if ((pSVar3->port == this_ptr->players[this_ptr->server_player_index].addr.port) &&
         (this_ptr->players[this_ptr->server_player_index].addr.ip_address == pSVar3->ip_address)) {
        local_44[3] = iVar13;
      }
      iVar13 = iVar13 + 1;
      pSVar3 = pSVar3 + 5;
    } while (iVar13 < local_11b);
  }
  if ((local_44[3] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar7 = local_16b;
  pcVar14 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar7;
    *pcVar14 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar14[1] = cVar1;
    pcVar14 = pcVar14 + 2;
  } while (cVar1 != '\0');
  local_24 = 0;
  if (0 < this_ptr->player_count) {
    local_30 = 0;
    local_28 = this_ptr->players;
    local_34 = &this_ptr->players[0].addr;
    local_2c = this_ptr;
    do {
      iVar5 = 0;
      if (0 < local_11b) {
        pSVar3 = &local_103;
        do {
          if ((pSVar3->port == local_34->port) && (local_34->ip_address == pSVar3->ip_address))
          break;
          iVar5 = iVar5 + 1;
          pSVar3 = pSVar3 + 5;
        } while (iVar5 < local_11b);
      }
      if (iVar5 == local_11b) {
        if (local_24 == this_ptr->local_player_index) {
          _DAT_01d046a0 = "..\\core\\netgame.cpp";
          _DAT_01d046a4 = 0x811;
          core_main_c_FUN_004e4500("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_0050e6c0(this_ptr,local_24);
      }
      else {
        *(int *)((int)local_44 + local_30) = iVar5;
        pcVar7 = local_117 + iVar5 * 0x28;
        pSVar10 = local_28;
        if (local_24 == this_ptr->local_player_index) {
          DAT_0061b124 = local_24 ^ this_ptr->local_player_index;
          iVar13 = _strcmp(local_28->name,pcVar7);
          if (iVar13 != 0) {
            DAT_0061b124 = 1;
          }
          if (local_2c->players[0].ready_flag == aEStack_fb[iVar5 * 10 + 2]) {
            if (DAT_0061b124 == 0) goto LAB_0050e59e;
          }
          else {
            DAT_0061b124 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(this_ptr);
        }
        else {
          do {
            cVar1 = *pcVar7;
            pSVar10->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pSVar10->name[1] = cVar1;
            pSVar10 = (SNetPlayer *)(pSVar10->name + 2);
          } while (cVar1 != '\0');
          this_ptr->players[local_24].ready_flag = aEStack_fb[iVar5 * 10 + 2];
          this_ptr->players[local_24].hero_number = aEStack_fb[iVar5 * 10];
          this_ptr->players[local_24].aim_mode = aEStack_fb[iVar5 * 10 + 1];
        }
LAB_0050e59e:
        local_28 = local_28 + 1;
        local_2c = (CNetGame *)&local_2c->players[0].player_input.action_state.light;
        local_24 = local_24 + 1;
        local_117[iVar5 * 0x28] = '\0';
        local_34 = local_34 + 0x10;
        local_30 = local_30 + 4;
      }
    } while ((int)local_24 < this_ptr->player_count);
  }
  iVar5 = 0;
  if (0 < local_11b) {
    iVar13 = 0;
    do {
      if (local_117[iVar13] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70
                        (this_ptr,(SNetworkAddr *)((int)&local_103.ip_address + iVar13),
                         local_117 + iVar13,*(int *)((int)aEStack_fb + iVar13),
                         *(int *)((int)aEStack_fb + iVar13 + 4));
      this_ptr->players[iVar4].ready_flag = *(int *)((int)aEStack_fb + iVar13 + 8);
      local_44[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + 0x28;
    } while (iVar5 < local_11b);
  }
  this_ptr->server_player_index = local_44[this_ptr->server_player_index];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_44[2] = this_ptr->player_count + -1;
  if (-1 < local_44[2]) {
    local_20 = this_ptr->players;
    do {
      local_18 = 0;
      if (0 < local_44[2]) {
        local_14 = 0;
        local_1c = &local_20->addr;
        pSVar10 = local_20;
        do {
          pSVar6 = pSVar10 + 1;
          if (*(int *)((int)local_44 + local_14 + 4) < *(int *)((int)local_44 + local_14)) {
            puVar11 = (uint *)((int)local_44 + local_14 + 4);
            uVar2 = *(uint *)((int)local_44 + local_14);
            *(uint *)((int)local_44 + local_14) = *puVar11;
            *puVar11 = uVar2;
            pSVar16 = local_20 + local_18;
            pEVar8 = (EHeroType *)((int)pSVar16 + (uint)bVar17 * -8 + 4);
            local_c4 = *(uint *)pSVar16->name;
            pEVar15 = aEStack_c0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1;
            pEVar9 = pEVar8 + (uint)bVar17 * -2 + 1;
            aEStack_c0[(uint)bVar17 * -2] = *pEVar8;
            *pEVar15 = *pEVar9;
            pEVar15[(uint)bVar17 * -2 + 1] = pEVar9[(uint)bVar17 * -2 + 1];
            (pEVar15 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (pEVar9 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            local_b0 = pSVar16->hero_number;
            local_ac = pSVar16->aim_mode;
            core_netgame_cpp_IpAddr_copy_FUN_0050f9c0(&local_a8,(SIpAddr *)local_1c);
            local_a4 = local_1c->port;
            local_a0 = pSVar16->last_arrival_time;
            local_9c = pSVar16->ping_quality;
            local_98 = pSVar16->last_ping_sent;
            local_94 = pSVar16->last_ping_response;
            local_90 = pSVar16->player_id;
            local_8c = pSVar16->last_update_time;
            local_88 = pSVar16->local_sync_stage;
            local_84 = pSVar16->state_change_time;
            local_80 = pSVar16->ready_flag;
            local_7c = pSVar16->sim_frame_index;
            local_78 = (pSVar10->player_input).action_state.walk;
            local_74 = (pSVar10->player_input).action_state.backup;
            local_70 = (pSVar10->player_input).action_state.run;
            local_6c = (pSVar10->player_input).action_state.fire;
            local_68 = (pSVar10->player_input).action_state.use_item;
            local_64 = (pSVar10->player_input).action_state.light;
            local_60 = (pSVar10->player_input).action_state.draw;
            local_5c = (pSVar10->player_input).action_state.jump;
            local_58 = (pSVar10->player_input).action_state.quick_turn;
            local_54 = (pSVar10->player_input).strafe_speed;
            local_50 = (pSVar10->player_input).turn_speed;
            local_4c = (pSVar10->player_input).look_up_down_speed;
            local_48 = (pSVar10->player_input).drop_item;
            pSVar10 = pSVar6;
            for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar16->name = *(uint *)pSVar10->name;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar17 * -8 + 4);
              pSVar16 = (SNetPlayer *)((int)pSVar16 + (uint)bVar17 * -8 + 4);
            }
            puVar11 = &local_c4;
            pSVar10 = pSVar6;
            for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar10->name = *puVar11;
              puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar17 * -8 + 4);
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0x10;
          pSVar10 = pSVar6;
        } while (local_18 < local_44[2]);
      }
      local_44[2] = local_44[2] + -1;
    } while (-1 < local_44[2]);
  }
  return 1;
}
