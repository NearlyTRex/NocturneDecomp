// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// Address Range: [[00542470, 00542af1]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  SNetworkAddr *pSVar3;
  int iVar4;
  int iVar5;
  SNetPlayer *pSVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  SNetPlayer *pSVar10;
  uint *puVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  SNetPlayer *pSVar15;
  byte bVar16;
  int aiStackY_208c [1986];
  uint local_167;
  char local_163 [80];
  int local_113;
  char local_10f [20];
  SNetworkAddr local_fb;
  int aiStack_f3 [13];
  uint local_bc;
  int aiStack_b8 [4];
  int local_a8;
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
  
  bVar16 = 0;
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x7e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  piVar8 = (int *)&stack0xfffffe90;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = (packet->header).size;
    packet = (UNetPacket *)((int)packet + (uint)bVar16 * -8 + 4);
    piVar8 = piVar8 + (uint)bVar16 * -2 + 1;
  }
  *(char *)piVar8 = packet->raw[0];
  iVar5 = -1;
  this_ptr->random_seed = local_167;
  local_44[5] = -1;
  iVar12 = 0;
  if (0 < local_113) {
    pSVar3 = &local_fb;
    do {
      if ((pSVar3->port == this_ptr->players[this_ptr->local_player_index].addr.port) &&
         (pSVar3->ip_address == this_ptr->players[this_ptr->local_player_index].addr.ip_address)) {
        iVar5 = iVar12;
      }
      if ((pSVar3->port == this_ptr->players[this_ptr->server_player_index].addr.port) &&
         (pSVar3->ip_address == this_ptr->players[this_ptr->server_player_index].addr.ip_address)) {
        local_44[5] = iVar12;
      }
      iVar12 = iVar12 + 1;
      pSVar3 = pSVar3 + 5;
    } while (iVar12 < local_113);
  }
  if ((local_44[5] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar7 = local_163;
  pcVar13 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar7;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  local_44[3] = 0;
  if (0 < this_ptr->player_count) {
    local_44[2] = 0;
    local_24 = this_ptr->players;
    local_2c = &this_ptr->players[0].addr;
    local_28 = this_ptr;
    do {
      iVar5 = 0;
      if (0 < local_113) {
        pSVar3 = &local_fb;
        do {
          if ((pSVar3->port == local_2c->port) && (pSVar3->ip_address == local_2c->ip_address))
          break;
          iVar5 = iVar5 + 1;
          pSVar3 = pSVar3 + 5;
        } while (iVar5 < local_113);
      }
      if (iVar5 == local_113) {
        if (local_44[3] == this_ptr->local_player_index) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x811;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(this_ptr,local_44[3]);
      }
      else {
        *(int *)((int)local_44 + local_44[2]) = iVar5;
        pcVar7 = local_10f + iVar5 * 0x28;
        pSVar10 = local_24;
        if (local_44[3] == this_ptr->local_player_index) {
          INT_00680a04 = local_44[3] ^ this_ptr->local_player_index;
          iVar12 = strcmp(local_24->name,pcVar7);
          if (iVar12 != 0) {
            INT_00680a04 = 1;
          }
          if (local_28->players[0].ready_flag == aiStack_f3[iVar5 * 10 + 2]) {
            if (INT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            INT_00680a04 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(this_ptr);
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
          this_ptr->players[local_44[3]].ready_flag = aiStack_f3[iVar5 * 10 + 2];
          this_ptr->players[local_44[3]].hero_number = aiStack_f3[iVar5 * 10];
          this_ptr->players[local_44[3]].aim_mode = aiStack_f3[iVar5 * 10 + 1];
        }
LAB_005429ed:
        local_24 = local_24 + 1;
        local_28 = (CNetGame *)(local_28->players[0].controls.action_states + 3);
        local_44[3] = local_44[3] + 1;
        local_10f[iVar5 * 0x28] = '\0';
        local_2c = local_2c + 0xf;
        local_44[2] = local_44[2] + 4;
      }
    } while (local_44[3] < this_ptr->player_count);
  }
  iVar5 = 0;
  if (0 < local_113) {
    iVar12 = 0;
    do {
      if (local_10f[iVar12] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                        (this_ptr,(SNetworkAddr *)((int)&local_fb.ip_address + iVar12),
                         local_10f + iVar12,*(int *)((int)aiStack_f3 + iVar12),
                         *(int *)((int)aiStack_f3 + iVar12 + 4));
      this_ptr->players[iVar4].ready_flag = *(int *)((int)aiStack_f3 + iVar12 + 8);
      local_44[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar12 = iVar12 + 0x28;
    } while (iVar5 < local_113);
  }
  this_ptr->server_player_index = local_44[this_ptr->server_player_index];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_1c = this_ptr->player_count + -1;
  if (-1 < local_1c) {
    local_20 = this_ptr->players;
    do {
      local_14 = 0;
      if (0 < local_1c) {
        local_44[4] = 0;
        local_18 = &local_20->addr;
        pSVar10 = local_20;
        do {
          pSVar6 = pSVar10 + 1;
          if (*(int *)((int)local_44 + local_44[4] + 4) < *(int *)((int)local_44 + local_44[4])) {
            puVar11 = (uint *)((int)local_44 + local_44[4] + 4);
            uVar2 = *(uint *)((int)local_44 + local_44[4]);
            *(uint *)((int)local_44 + local_44[4]) = *puVar11;
            iVar5 = local_14;
            *puVar11 = uVar2;
            pSVar15 = local_20 + iVar5;
            piVar8 = (int *)((int)pSVar15 + (uint)bVar16 * -8 + 4);
            local_bc = *(uint *)pSVar15->name;
            piVar14 = aiStack_b8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1;
            piVar9 = piVar8 + (uint)bVar16 * -2 + 1;
            aiStack_b8[(uint)bVar16 * -2] = *piVar8;
            pSVar3 = local_18;
            *piVar14 = *piVar9;
            piVar14[(uint)bVar16 * -2 + 1] = piVar9[(uint)bVar16 * -2 + 1];
            (piVar14 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                 (piVar9 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
            local_a8 = pSVar15->hero_number;
            local_a4 = pSVar15->aim_mode;
            core_netgame_cpp_copyInteger_FUN_00543e20(&local_a0,(int *)local_18);
            local_9c = pSVar3->port;
            local_98 = pSVar15->last_arrival_time;
            local_94 = pSVar15->ping_quality;
            local_90 = pSVar15->last_ping_sent;
            local_8c = pSVar15->last_ping_response;
            local_88 = pSVar15->player_id;
            local_84 = pSVar15->last_update_time;
            local_80 = pSVar15->local_sync_stage;
            local_7c = pSVar15->state_change_time;
            local_78 = pSVar15->ready_flag;
            local_74 = pSVar15->sim_frame_index;
            local_70 = (pSVar10->controls).action_states[0];
            local_6c = (pSVar10->controls).action_states[1];
            local_68 = (pSVar10->controls).action_states[2];
            local_64 = (pSVar10->controls).action_states[3];
            local_60 = (pSVar10->controls).action_states[4];
            local_5c = (pSVar10->controls).action_states[5];
            local_58 = (pSVar10->controls).action_states[6];
            local_54 = (pSVar10->controls).action_states[7];
            local_50 = (pSVar10->controls).strafe_speed;
            local_4c = (pSVar10->controls).turn_speed;
            local_48 = (pSVar10->controls).look_up_down_speed;
            pSVar10 = pSVar6;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar15->name = *(uint *)pSVar10->name;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar16 * -8 + 4);
              pSVar15 = (SNetPlayer *)((int)pSVar15 + (uint)bVar16 * -8 + 4);
            }
            puVar11 = &local_bc;
            pSVar10 = pSVar6;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar10->name = *puVar11;
              puVar11 = puVar11 + (uint)bVar16 * -2 + 1;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar16 * -8 + 4);
            }
          }
          local_14 = local_14 + 1;
          local_44[4] = local_44[4] + 4;
          local_18 = local_18 + 0xf;
          pSVar10 = pSVar6;
        } while (local_14 < local_1c);
      }
      local_1c = local_1c + -1;
    } while (-1 < local_1c);
  }
  return 1;
}
