// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0052f200
// Address: 0052f200
// Address Range: [[0052f200, 0052f889]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0052f200(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0052f200(CNetGame *this_ptr,UNetPacket *packet)

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
  EHeroType aEStackY_2090 [1986];
  uint local_16b;
  char local_167 [80];
  int local_117;
  char local_113 [20];
  SNetworkAddr local_ff;
  EHeroType aEStack_f7 [13];
  uint local_c0;
  EHeroType aEStack_bc [4];
  EHeroType local_ac;
  int local_a8;
  SIpAddr local_a4;
  ushort local_a0;
  uint local_9c;
  float local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
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
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44 [5];
  CNetGame *local_30;
  int local_2c;
  SNetworkAddr *local_28;
  SNetPlayer *local_24;
  uint local_20;
  SNetPlayer *local_1c;
  int local_18;
  SNetworkAddr *local_14;
  
  bVar17 = 0;
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x7e6;
    core_main_c_FUN_005030e0("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  piVar12 = (int *)&stack0xfffffe8c;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar12 = (packet->header).size;
    packet = (UNetPacket *)((int)packet + (uint)bVar17 * -8 + 4);
    piVar12 = piVar12 + (uint)bVar17 * -2 + 1;
  }
  *(char *)piVar12 = packet->raw[0];
  iVar5 = -1;
  this_ptr->random_seed = local_16b;
  local_44[4] = -1;
  iVar13 = 0;
  if (0 < local_117) {
    pSVar3 = &local_ff;
    do {
      if ((pSVar3->port == this_ptr->players[this_ptr->local_player_index].addr.port) &&
         (this_ptr->players[this_ptr->local_player_index].addr.ip_address == pSVar3->ip_address)) {
        iVar5 = iVar13;
      }
      if ((pSVar3->port == this_ptr->players[this_ptr->server_player_index].addr.port) &&
         (this_ptr->players[this_ptr->server_player_index].addr.ip_address == pSVar3->ip_address)) {
        local_44[4] = iVar13;
      }
      iVar13 = iVar13 + 1;
      pSVar3 = pSVar3 + 5;
    } while (iVar13 < local_117);
  }
  if ((local_44[4] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar7 = local_167;
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
  local_20 = 0;
  if (0 < this_ptr->player_count) {
    local_2c = 0;
    local_28 = &this_ptr->players[0].addr;
    local_24 = this_ptr->players;
    local_30 = this_ptr;
    do {
      iVar5 = 0;
      if (0 < local_117) {
        pSVar3 = &local_ff;
        do {
          if ((pSVar3->port == local_28->port) && (local_28->ip_address == pSVar3->ip_address))
          break;
          iVar5 = iVar5 + 1;
          pSVar3 = pSVar3 + 5;
        } while (iVar5 < local_117);
      }
      if (iVar5 == local_117) {
        if (local_20 == this_ptr->local_player_index) {
          _DAT_01d1d400 = "..\\core\\netgame.cpp";
          _DAT_01d1d404 = 0x811;
          core_main_c_FUN_005030e0("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_0052f890(this_ptr,local_20);
      }
      else {
        *(int *)((int)local_44 + local_2c) = iVar5;
        pcVar7 = local_113 + iVar5 * 0x28;
        pSVar10 = local_24;
        if (local_20 == this_ptr->local_player_index) {
          DAT_00622584 = local_20 ^ this_ptr->local_player_index;
          iVar13 = _strcmp(local_24->name,pcVar7);
          if (iVar13 != 0) {
            DAT_00622584 = 1;
          }
          if (local_30->players[0].ready_flag == aEStack_f7[iVar5 * 10 + 2]) {
            if (DAT_00622584 == 0) goto LAB_0052f785;
          }
          else {
            DAT_00622584 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
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
          this_ptr->players[local_20].ready_flag = aEStack_f7[iVar5 * 10 + 2];
          this_ptr->players[local_20].hero_number = aEStack_f7[iVar5 * 10];
          this_ptr->players[local_20].aim_mode = aEStack_f7[iVar5 * 10 + 1];
        }
LAB_0052f785:
        local_24 = local_24 + 1;
        local_30 = (CNetGame *)&local_30->players[0].player_input.action_state.use_item;
        local_20 = local_20 + 1;
        local_113[iVar5 * 0x28] = '\0';
        local_28 = (SNetworkAddr *)((int)(local_28 + 0xf) + 4);
        local_2c = local_2c + 4;
      }
    } while ((int)local_20 < this_ptr->player_count);
  }
  iVar5 = 0;
  if (0 < local_117) {
    iVar13 = 0;
    do {
      if (local_113[iVar13] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                        (this_ptr,(SNetworkAddr *)((int)&local_ff.ip_address + iVar13),
                         local_113 + iVar13,*(int *)((int)aEStack_f7 + iVar13),
                         *(int *)((int)aEStack_f7 + iVar13 + 4));
      this_ptr->players[iVar4].ready_flag = *(int *)((int)aEStack_f7 + iVar13 + 8);
      local_44[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + 0x28;
    } while (iVar5 < local_117);
  }
  this_ptr->server_player_index = local_44[this_ptr->server_player_index];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_18 = this_ptr->player_count + -1;
  if (-1 < local_18) {
    local_1c = this_ptr->players;
    do {
      local_44[2] = 0;
      if (0 < local_18) {
        local_44[3] = 0;
        local_14 = &local_1c->addr;
        pSVar10 = local_1c;
        do {
          iVar5 = local_44[2];
          pSVar6 = pSVar10 + 1;
          if (*(int *)((int)local_44 + local_44[3] + 4) < *(int *)((int)local_44 + local_44[3])) {
            puVar11 = (uint *)((int)local_44 + local_44[3] + 4);
            uVar2 = *(uint *)((int)local_44 + local_44[3]);
            *(uint *)((int)local_44 + local_44[3]) = *puVar11;
            *puVar11 = uVar2;
            pSVar16 = local_1c + iVar5;
            pEVar8 = (EHeroType *)((int)pSVar16 + (uint)bVar17 * -8 + 4);
            local_c0 = *(uint *)pSVar16->name;
            pEVar15 = aEStack_bc + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1;
            pEVar9 = pEVar8 + (uint)bVar17 * -2 + 1;
            aEStack_bc[(uint)bVar17 * -2] = *pEVar8;
            *pEVar15 = *pEVar9;
            pEVar15[(uint)bVar17 * -2 + 1] = pEVar9[(uint)bVar17 * -2 + 1];
            (pEVar15 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (pEVar9 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            local_ac = pSVar16->hero_number;
            local_a8 = pSVar16->aim_mode;
            core_netgame_cpp_IpAddr_copy_FUN_00530bd0(&local_a4,(SIpAddr *)local_14);
            local_a0 = local_14->port;
            local_9c = pSVar16->last_arrival_time;
            local_98 = pSVar16->ping_quality;
            local_94 = pSVar16->last_ping_sent;
            local_90 = pSVar16->last_ping_response;
            local_8c = pSVar16->player_id;
            local_88 = pSVar16->last_update_time;
            local_84 = pSVar16->local_sync_stage;
            local_80 = pSVar16->state_change_time;
            local_7c = pSVar16->ready_flag;
            local_78 = pSVar16->sim_frame_index;
            local_74 = (pSVar10->player_input).action_state.walk;
            local_70 = (pSVar10->player_input).action_state.backup;
            local_6c = (pSVar10->player_input).action_state.run;
            local_68 = (pSVar10->player_input).action_state.fire;
            local_64 = (pSVar10->player_input).action_state.use_item;
            local_60 = (pSVar10->player_input).action_state.light;
            local_5c = (pSVar10->player_input).action_state.draw;
            local_58 = (pSVar10->player_input).action_state.jump;
            local_54 = (pSVar10->player_input).action_state.quick_turn;
            local_50 = (pSVar10->player_input).strafe_speed;
            local_4c = (pSVar10->player_input).turn_speed;
            local_48 = (pSVar10->player_input).look_up_down_speed;
            pSVar10 = pSVar6;
            for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar16->name = *(uint *)pSVar10->name;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar17 * -8 + 4);
              pSVar16 = (SNetPlayer *)((int)pSVar16 + (uint)bVar17 * -8 + 4);
            }
            puVar11 = &local_c0;
            pSVar10 = pSVar6;
            for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar10->name = *puVar11;
              puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar17 * -8 + 4);
            }
          }
          local_44[2] = local_44[2] + 1;
          local_44[3] = local_44[3] + 4;
          local_14 = (SNetworkAddr *)((int)(local_14 + 0xf) + 4);
          pSVar10 = pSVar6;
        } while (local_44[2] < local_18);
      }
      local_18 = local_18 + -1;
    } while (-1 < local_18);
  }
  return 1;
}
