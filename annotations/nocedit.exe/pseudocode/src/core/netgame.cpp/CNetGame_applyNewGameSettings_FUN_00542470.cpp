// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// Address Range: [[00542470, 00542af1] [006049a4, 006049c6] [03fc5b0b, 03fc5b23]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet)

{
  char cVar2;
  SNetworkAddr *pSVar3;
  int iVar4;
  int iVar5;
  int iVar3;
  SNetPlayer *pSVar6;
  int iVar6;
  uint *puVar7;
  SNetworkAddr *pSVar8;
  char *pcVar7;
  EHeroType *pEVar8;
  EHeroType *pEVar9;
  SNetPlayer *pSVar10;
  uint *puVar11;
  char *str2;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  EHeroType *pEVar15;
  SNetPlayer *pSVar16;
  SNetPlayer *pSVar9;
  byte bVar17;
  EHeroType aEStackY_208c [1986];
  int aiStack_170 [2];
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
  int local_44 [6];
  SNetworkAddr *local_2c;
  CNetGame *local_28;
  SNetPlayer *local_24;
  SNetPlayer *local_20;
  int local_1c;
  SNetworkAddr *local_18;
  int local_14;
  char cVar1;
  uint uVar2;
  
  bVar17 = 0;
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x7e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  piVar12 = aiStack_170;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar12 = piVar12 + (uint)bVar17 * -2 + 1;
    *piVar12 = (packet->header).size;
    packet = (UNetPacket *)((int)packet + (uint)bVar17 * -8 + 4);
    piVar12 = piVar12;
  }
  *(char *)piVar12 = packet->raw[0];
  iVar6 = -1;
  this_ptr->random_seed = local_167;
  local_44[5] = -1;
  iVar13 = 0;
  if (0 < local_113) {
    pSVar8 = &local_fb;
    do {
      if ((pSVar8->port == this_ptr->players[this_ptr->local_player_index].addr.port) &&
         (pSVar8->ip_address == this_ptr->players[this_ptr->local_player_index].addr.ip_address)) {
        iVar6 = iVar13;
      }
      if ((pSVar8->port == this_ptr->players[this_ptr->server_player_index].addr.port) &&
         (pSVar8->ip_address == this_ptr->players[this_ptr->server_player_index].addr.ip_address)) {
        local_44[5] = iVar13;
      }
      iVar13 = iVar13 + 1;
      pSVar8 = pSVar8 + 5;
    } while (iVar13 < local_113);
  }
  if ((local_44[5] < 0) || (iVar6 < 0)) {
    return 0;
  }
  pcVar7 = local_163;
  pcVar14 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar7;
    *pcVar14 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  local_44[3] = 0;
  if (0 < this_ptr->player_count) {
    local_24 = this_ptr->players;
    local_44[2] = 0;
    local_2c = &this_ptr->players[0].addr;
    local_28 = this_ptr;
    do {
      iVar6 = 0;
      if (0 < local_113) {
        pSVar3 = &local_fb;
        do {
          if ((pSVar3->port == local_2c->port) && (pSVar3->ip_address == local_2c->ip_address))
          break;
          iVar6 = iVar6 + 1;
          pSVar3 = pSVar3 + 5;
        } while (iVar6 < local_113);
      }
      if (iVar6 == local_113) {
        if (local_44[3] == this_ptr->local_player_index) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x811;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(this_ptr,local_44[3]);
      }
      else {
        *(int *)((int)local_44 + local_44[2]) = iVar6;
        str2 = local_10f + iVar6 * 0x28;
        pSVar9 = local_24;
        if (local_44[3] == this_ptr->local_player_index) {
          INT_00680a04 = local_44[3] ^ this_ptr->local_player_index;
          iVar3 = _strcmp(local_24->name,str2);
          if (iVar3 != 0) {
            INT_00680a04 = 1;
          }
          if (local_28->players[0].ready_flag == aEStack_f3[iVar6 * 10 + 2]) {
            if (INT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            INT_00680a04 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(this_ptr);
        }
        else {
          do {
            cVar2 = *str2;
            pSVar9->name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = str2[1];
            str2 = str2 + 2;
            pSVar9->name[1] = cVar2;
            pSVar9 = (SNetPlayer *)(pSVar9->name + 2);
          } while (cVar2 != '\0');
          this_ptr->players[local_44[3]].ready_flag = aEStack_f3[iVar6 * 10 + 2];
          this_ptr->players[local_44[3]].hero_number = aEStack_f3[iVar6 * 10];
          this_ptr->players[local_44[3]].aim_mode = aEStack_f3[iVar6 * 10 + 1];
        }
LAB_005429ed:
        local_24 = local_24 + 1;
        local_28 = (CNetGame *)&local_28->players[0].player_input.action_state.fire;
        local_44[3] = local_44[3] + 1;
        local_10f[iVar6 * 0x28] = '\0';
        local_2c = local_2c + 0xf;
        local_44[2] = local_44[2] + 4;
      }
    } while (local_44[3] < this_ptr->player_count);
  }
  iVar6 = 0;
  if (0 < local_113) {
    iVar3 = 0;
    do {
      if (local_10f[iVar3] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                        (this_ptr,(SNetworkAddr *)((int)aEStack_f3 + iVar3 + -8),local_10f + iVar3,
                         *(int *)((int)aEStack_f3 + iVar3),*(int *)((int)aEStack_f3 + iVar3 + 4));
      this_ptr->players[iVar4].ready_flag = *(int *)((int)aEStack_f3 + iVar3 + 8);
      local_44[iVar4] = iVar6;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar6 < local_113);
  }
  this_ptr->server_player_index = local_44[this_ptr->server_player_index];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_1c = this_ptr->player_count + -1;
  if (-1 < local_1c) {
    do {
      local_14 = 0;
      if (0 < local_1c) {
        local_44[4] = 0;
        local_18 = &this_ptr->players[0].addr;
        pSVar9 = this_ptr->players;
        do {
          pSVar6 = pSVar9 + 1;
          if (*(int *)((int)local_44 + local_44[4] + 4) < *(int *)((int)local_44 + local_44[4])) {
            puVar7 = (uint *)((int)local_44 + local_44[4] + 4);
            uVar2 = *(uint *)((int)local_44 + local_44[4]);
            *(uint *)((int)local_44 + local_44[4]) = *puVar7;
            *puVar7 = uVar2;
            pSVar16 = this_ptr->players + local_14;
            local_bc = *(uint *)pSVar16->name;
            aEStack_b8[0] = *(EHeroType *)(pSVar16->name + 4);
            aEStack_b8[1] = *(EHeroType *)(pSVar16->name + 8);
            aEStack_b8[2] = *(EHeroType *)(pSVar16->name + 0xc);
            aEStack_b8[3] = *(EHeroType *)(pSVar16->name + 0x10);
            core_netgame_cpp_assignInt1_FUN_00543e20(&local_a0,(int *)local_18);
            local_9c = local_18->port;
            local_98 = pSVar16->last_arrival_time;
            local_94 = pSVar16->ping_quality;
            local_90 = pSVar16->last_ping_sent;
            local_8c = pSVar16->last_ping_response;
            local_88 = pSVar16->player_id;
            local_84 = pSVar16->last_update_time;
            local_80 = pSVar16->local_sync_stage;
            local_7c = pSVar16->state_change_time;
            local_78 = pSVar16->ready_flag;
            local_74 = pSVar16->sim_frame_index;
            local_70 = (pSVar9->player_input).action_state.walk;
            local_6c = (pSVar9->player_input).action_state.backup;
            local_68 = (pSVar9->player_input).action_state.run;
            local_64 = (pSVar9->player_input).action_state.fire;
            local_60 = (pSVar9->player_input).action_state.use_item;
            local_5c = (pSVar9->player_input).action_state.light;
            local_58 = (pSVar9->player_input).action_state.draw;
            local_54 = (pSVar9->player_input).action_state.jump;
            local_50 = (pSVar9->player_input).strafe_speed;
            local_4c = (pSVar9->player_input).turn_speed;
            local_48 = (pSVar9->player_input).look_up_down_speed;
            pSVar10 = pSVar6;
            for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
              pSVar16 = (SNetPlayer *)((int)pSVar16 + (uint)bVar17 * -8 + 4);
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar17 * -8 + 4);
              *(uint *)pSVar16->name = *(uint *)pSVar10->name;
              pSVar10 = pSVar10;
              pSVar16 = pSVar16;
            }
            puVar11 = &local_bc;
            pSVar9 = pSVar6;
            for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
              *(uint *)pSVar9->name = *puVar11;
              puVar11 = puVar11;
              pSVar9 = (SNetPlayer *)((int)pSVar9 + (uint)bVar17 * -8 + 4);
            }
          }
          local_18 = local_18 + 0xf;
          local_14 = local_14 + 1;
          local_44[4] = local_44[4] + 4;
          pSVar9 = pSVar6;
        } while (local_14 < local_1c);
      }
      local_1c = local_1c + -1;
    } while (-1 < local_1c);
  }
  return 1;
}
