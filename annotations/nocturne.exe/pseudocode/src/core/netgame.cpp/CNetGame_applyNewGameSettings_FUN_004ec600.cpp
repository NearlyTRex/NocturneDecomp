// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600
// Address: 004ec600
// Address Range: [[004ec600, 004ecc7a]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_004ec600(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_004ec600(CNetGame *this_ptr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  SNetworkAddr *pSVar4;
  int iVar5;
  int iVar6;
  SNetPlayer *pSVar7;
  char *pcVar8;
  EHeroType *pEVar9;
  EHeroType *pEVar10;
  SNetPlayer *pSVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  EHeroType *pEVar16;
  SNetPlayer *pSVar17;
  byte bVar18;
  EHeroType aEStackY_208c [1986];
  uint local_167;
  char local_163 [80];
  int local_113;
  char local_10f [20];
  SNetworkAddr local_fb;
  EHeroType aEStack_f3 [13];
  uint local_bc;
  EHeroType aEStack_b8 [4];
  EHeroType local_a8;
  int local_a4;
  int local_a0;
  ushort local_9c;
  uint local_98;
  float local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
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
  SNetworkAddr *local_30;
  CNetGame *local_2c;
  SNetPlayer *local_28;
  uint local_24;
  SNetPlayer *local_20;
  SNetworkAddr *local_1c;
  int local_18;
  int local_14;
  
  bVar18 = 0;
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x7e6;
    core_main_c_FUN_004c8440("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  piVar13 = (int *)&stack0xfffffe90;
  for (iVar6 = 0x2c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar13 = (packet->header).size;
    packet = (UNetPacket *)((int)packet + (uint)bVar18 * -8 + 4);
    piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
  }
  *(char *)piVar13 = packet->raw[0];
  iVar6 = -1;
  this_ptr->random_seed = local_167;
  local_44[4] = -1;
  iVar14 = 0;
  if (0 < local_113) {
    pSVar4 = &local_fb;
    do {
      if ((pSVar4->port == this_ptr->players[this_ptr->local_player_index].addr.port) &&
         (pSVar4->ip_address == this_ptr->players[this_ptr->local_player_index].addr.ip_address)) {
        iVar6 = iVar14;
      }
      if ((pSVar4->port == this_ptr->players[this_ptr->server_player_index].addr.port) &&
         (pSVar4->ip_address == this_ptr->players[this_ptr->server_player_index].addr.ip_address)) {
        local_44[4] = iVar14;
      }
      iVar14 = iVar14 + 1;
      pSVar4 = pSVar4 + 5;
    } while (iVar14 < local_113);
  }
  if ((local_44[4] < 0) || (iVar6 < 0)) {
    return 0;
  }
  pcVar8 = local_163;
  pcVar15 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar8;
    *pcVar15 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar15[1] = cVar1;
    pcVar15 = pcVar15 + 2;
  } while (cVar1 != '\0');
  local_24 = 0;
  if (0 < this_ptr->player_count) {
    local_44[2] = 0;
    local_28 = this_ptr->players;
    local_30 = &this_ptr->players[0].addr;
    local_2c = this_ptr;
    do {
      uVar3 = local_24;
      iVar6 = 0;
      if (0 < local_113) {
        pSVar4 = &local_fb;
        do {
          if ((pSVar4->port == local_30->port) && (pSVar4->ip_address == local_30->ip_address))
          break;
          iVar6 = iVar6 + 1;
          pSVar4 = pSVar4 + 5;
        } while (iVar6 < local_113);
      }
      if (iVar6 == local_113) {
        if (local_24 == this_ptr->local_player_index) {
          PTR_01cc4800 = "..\\core\\netgame.cpp";
          INT_01cc4804 = 0x811;
          core_main_c_FUN_004c8440("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(this_ptr,local_24);
      }
      else {
        *(int *)((int)local_44 + local_44[2]) = iVar6;
        pcVar8 = local_10f + iVar6 * 0x28;
        pSVar11 = local_28;
        if (uVar3 == this_ptr->local_player_index) {
          DAT_005bdee4 = uVar3 ^ this_ptr->local_player_index;
          iVar14 = _strcmp(local_28->name,pcVar8);
          if (iVar14 != 0) {
            DAT_005bdee4 = 1;
          }
          if (local_2c->players[0].ready_flag == aEStack_f3[iVar6 * 10 + 2]) {
            if (DAT_005bdee4 == 0) goto LAB_004ecb76;
          }
          else {
            DAT_005bdee4 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(this_ptr);
        }
        else {
          do {
            cVar1 = *pcVar8;
            pSVar11->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pSVar11->name[1] = cVar1;
            pSVar11 = (SNetPlayer *)(pSVar11->name + 2);
          } while (cVar1 != '\0');
          this_ptr->players[uVar3].ready_flag = aEStack_f3[iVar6 * 10 + 2];
          this_ptr->players[uVar3].hero_number = aEStack_f3[iVar6 * 10];
          this_ptr->players[uVar3].aim_mode = aEStack_f3[iVar6 * 10 + 1];
        }
LAB_004ecb76:
        local_28 = local_28 + 1;
        local_2c = (CNetGame *)&local_2c->players[0].player_input.action_state.fire;
        local_24 = local_24 + 1;
        local_10f[iVar6 * 0x28] = '\0';
        local_30 = local_30 + 0xf;
        local_44[2] = local_44[2] + 4;
      }
    } while ((int)local_24 < this_ptr->player_count);
  }
  iVar6 = 0;
  if (0 < local_113) {
    iVar14 = 0;
    do {
      if (local_10f[iVar14] == '\0') break;
      iVar5 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440
                        (this_ptr,(SNetworkAddr *)((int)&local_fb.ip_address + iVar14),
                         local_10f + iVar14,*(int *)((int)aEStack_f3 + iVar14),
                         *(int *)((int)aEStack_f3 + iVar14 + 4));
      this_ptr->players[iVar5].ready_flag = *(int *)((int)aEStack_f3 + iVar14 + 8);
      local_44[iVar5] = iVar6;
      iVar6 = iVar6 + 1;
      iVar14 = iVar14 + 0x28;
    } while (iVar6 < local_113);
  }
  this_ptr->server_player_index = local_44[this_ptr->server_player_index];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_44[3] = this_ptr->player_count + -1;
  if (-1 < local_44[3]) {
    local_20 = this_ptr->players;
    do {
      local_18 = 0;
      if (0 < local_44[3]) {
        local_14 = 0;
        local_1c = &local_20->addr;
        pSVar11 = local_20;
        do {
          iVar6 = local_18;
          pSVar7 = pSVar11 + 1;
          if (*(int *)((int)local_44 + local_14 + 4) < *(int *)((int)local_44 + local_14)) {
            puVar12 = (uint *)((int)local_44 + local_14 + 4);
            uVar2 = *(uint *)((int)local_44 + local_14);
            *(uint *)((int)local_44 + local_14) = *puVar12;
            *puVar12 = uVar2;
            pSVar17 = local_20 + iVar6;
            pEVar9 = (EHeroType *)((int)pSVar17 + (uint)bVar18 * -8 + 4);
            local_bc = *(uint *)pSVar17->name;
            pEVar16 = aEStack_b8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1;
            pEVar10 = pEVar9 + (uint)bVar18 * -2 + 1;
            aEStack_b8[(uint)bVar18 * -2] = *pEVar9;
            *pEVar16 = *pEVar10;
            pEVar16[(uint)bVar18 * -2 + 1] = pEVar10[(uint)bVar18 * -2 + 1];
            (pEVar16 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 (pEVar10 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            local_a8 = pSVar17->hero_number;
            local_a4 = pSVar17->aim_mode;
            core_netgame_cpp_assignInt1_FUN_004edfa0(&local_a0,(int *)local_1c);
            local_9c = local_1c->port;
            local_98 = pSVar17->last_arrival_time;
            local_94 = pSVar17->ping_quality;
            local_90 = pSVar17->last_ping_sent;
            local_8c = pSVar17->last_ping_response;
            local_88 = pSVar17->player_id;
            local_84 = pSVar17->last_update_time;
            local_80 = pSVar17->local_sync_stage;
            local_7c = pSVar17->state_change_time;
            local_78 = pSVar17->ready_flag;
            local_74 = pSVar17->sim_frame_index;
            local_70 = (pSVar11->player_input).action_state.walk;
            local_6c = (pSVar11->player_input).action_state.backup;
            local_68 = (pSVar11->player_input).action_state.run;
            local_64 = (pSVar11->player_input).action_state.fire;
            local_60 = (pSVar11->player_input).action_state.use_item;
            local_5c = (pSVar11->player_input).action_state.light;
            local_58 = (pSVar11->player_input).action_state.draw;
            local_54 = (pSVar11->player_input).action_state.jump;
            local_50 = (pSVar11->player_input).strafe_speed;
            local_4c = (pSVar11->player_input).turn_speed;
            local_48 = (pSVar11->player_input).look_up_down_speed;
            pSVar11 = pSVar7;
            for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(uint *)pSVar17->name = *(uint *)pSVar11->name;
              pSVar11 = (SNetPlayer *)((int)pSVar11 + (uint)bVar18 * -8 + 4);
              pSVar17 = (SNetPlayer *)((int)pSVar17 + (uint)bVar18 * -8 + 4);
            }
            puVar12 = &local_bc;
            pSVar11 = pSVar7;
            for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(uint *)pSVar11->name = *puVar12;
              puVar12 = puVar12 + (uint)bVar18 * -2 + 1;
              pSVar11 = (SNetPlayer *)((int)pSVar11 + (uint)bVar18 * -8 + 4);
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0xf;
          pSVar11 = pSVar7;
        } while (local_18 < local_44[3]);
      }
      local_44[3] = local_44[3] + -1;
    } while (-1 < local_44[3]);
  }
  return 1;
}
