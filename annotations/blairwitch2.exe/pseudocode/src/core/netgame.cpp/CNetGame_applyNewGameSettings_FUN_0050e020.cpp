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
  uint *puVar8;
  uint *puVar9;
  SNetPlayer *pSVar10;
  SNetPacketHeader *pSVar11;
  int iVar12;
  char *pcVar13;
  uint *puVar14;
  SNetPlayer *pSVar15;
  byte bVar16;
  uint auStackY_2094 [1986];
  SNetPacketHeader aSStack_178 [9];
  uint local_16f;
  char local_16b [80];
  int local_11b;
  char local_117 [20];
  SNetworkAddr local_103 [8];
  int aiStack_fb [13];
  uint local_c4;
  uint auStack_c0 [4];
  uint local_b0;
  uint local_ac;
  SIpAddr local_a8;
  ushort local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44 [4];
  int *local_34;
  int local_30;
  CNetGame *local_2c;
  SNetPlayer *local_28;
  uint local_24;
  SNetPlayer *local_20;
  SIpAddr *local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x7e6;
    core_main_c_FUN_004e4500("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  pSVar11 = aSStack_178;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pSVar11 = *(uint *)packet;
    packet = (UNetPacket *)((int)packet + (uint)bVar16 * -8 + 4);
    pSVar11 = pSVar11 + (uint)bVar16 * -8 + 4;
  }
  *pSVar11 = packet->header;
  iVar5 = -1;
  this_ptr->random_seed = local_16f;
  local_44[3] = -1;
  iVar12 = 0;
  if (0 < local_11b) {
    pSVar3 = local_103;
    do {
      if ((*(short *)(pSVar3 + 4) ==
           *(short *)&this_ptr->players[this_ptr->local_player_index].field_0x20) &&
         (*(int *)&this_ptr->players[this_ptr->local_player_index].field_0x1c == *(int *)pSVar3)) {
        iVar5 = iVar12;
      }
      if ((*(short *)(pSVar3 + 4) ==
           *(short *)&this_ptr->players[this_ptr->server_player_index].field_0x20) &&
         (*(int *)&this_ptr->players[this_ptr->server_player_index].field_0x1c == *(int *)pSVar3)) {
        local_44[3] = iVar12;
      }
      iVar12 = iVar12 + 1;
      pSVar3 = pSVar3 + 0x28;
    } while (iVar12 < local_11b);
  }
  if ((local_44[3] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar7 = local_16b;
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
  local_24 = 0;
  if (0 < this_ptr->player_count) {
    local_30 = 0;
    local_28 = this_ptr->players;
    local_34 = (int *)&this_ptr->players[0].field_0x1c;
    local_2c = this_ptr;
    do {
      iVar5 = 0;
      if (0 < local_11b) {
        pSVar3 = local_103;
        do {
          if ((*(short *)(pSVar3 + 4) == (short)local_34[1]) && (*local_34 == *(int *)pSVar3))
          break;
          iVar5 = iVar5 + 1;
          pSVar3 = pSVar3 + 0x28;
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
          iVar12 = _strcmp((char *)local_28,pcVar7);
          if (iVar12 != 0) {
            DAT_0061b124 = 1;
          }
          if (*(int *)&local_2c->players[0].field_0x44 == aiStack_fb[iVar5 * 10 + 2]) {
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
            *(char *)pSVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pSVar10->field_0x1 = cVar1;
            pSVar10 = (SNetPlayer *)&pSVar10->field_0x2;
          } while (cVar1 != '\0');
          *(int *)&this_ptr->players[local_24].field_0x44 = aiStack_fb[iVar5 * 10 + 2];
          *(int *)&this_ptr->players[local_24].field_0x14 = aiStack_fb[iVar5 * 10];
          *(int *)&this_ptr->players[local_24].field_0x18 = aiStack_fb[iVar5 * 10 + 1];
        }
LAB_0050e59e:
        local_28 = local_28 + 1;
        local_2c = (CNetGame *)&local_2c->players[0].field_0x60;
        local_24 = local_24 + 1;
        local_117[iVar5 * 0x28] = '\0';
        local_34 = local_34 + 0x20;
        local_30 = local_30 + 4;
      }
    } while ((int)local_24 < this_ptr->player_count);
  }
  iVar5 = 0;
  if (0 < local_11b) {
    iVar12 = 0;
    do {
      if (local_117[iVar12] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70
                        (this_ptr,local_103 + iVar12,local_117 + iVar12,
                         *(int *)((int)aiStack_fb + iVar12),*(int *)((int)aiStack_fb + iVar12 + 4));
      *(uint *)&this_ptr->players[iVar4].field_0x44 =
           *(uint *)((int)aiStack_fb + iVar12 + 8);
      local_44[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar12 = iVar12 + 0x28;
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
        local_1c = (SIpAddr *)&local_20->field_0x1c;
        pSVar10 = local_20;
        do {
          pSVar6 = pSVar10 + 1;
          if (*(int *)((int)local_44 + local_14 + 4) < *(int *)((int)local_44 + local_14)) {
            puVar8 = (uint *)((int)local_44 + local_14 + 4);
            uVar2 = *(uint *)((int)local_44 + local_14);
            *(uint *)((int)local_44 + local_14) = *puVar8;
            *puVar8 = uVar2;
            pSVar15 = local_20 + local_18;
            puVar8 = (uint *)((int)pSVar15 + (uint)bVar16 * -8 + 4);
            local_c4 = *(uint *)pSVar15;
            puVar14 = auStack_c0 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1;
            puVar9 = puVar8 + (uint)bVar16 * -2 + 1;
            auStack_c0[(uint)bVar16 * -2] = *puVar8;
            *puVar14 = *puVar9;
            puVar14[(uint)bVar16 * -2 + 1] = puVar9[(uint)bVar16 * -2 + 1];
            (puVar14 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                 (puVar9 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
            local_b0 = *(uint *)&pSVar15->field_0x14;
            local_ac = *(uint *)&pSVar15->field_0x18;
            core_netgame_cpp_IpAddr_copy_FUN_0050f9c0(&local_a8,local_1c);
            local_a4 = *(ushort *)(local_1c + 1);
            local_a0 = *(uint *)&pSVar15->field_0x24;
            local_9c = *(uint *)&pSVar15->field_0x28;
            local_98 = *(uint *)&pSVar15->field_0x2c;
            local_94 = *(uint *)&pSVar15->field_0x30;
            local_90 = *(uint *)&pSVar15->field_0x34;
            local_8c = *(uint *)&pSVar15->field_0x38;
            local_88 = *(uint *)&pSVar15->field_0x3c;
            local_84 = *(uint *)&pSVar15->field_0x40;
            local_80 = *(uint *)&pSVar15->field_0x44;
            local_7c = *(uint *)&pSVar15->field_0x48;
            local_78 = *(uint *)&pSVar10->field_0x4c;
            local_74 = *(uint *)&pSVar10->field_0x50;
            local_70 = *(uint *)&pSVar10->field_0x54;
            local_6c = *(uint *)&pSVar10->field_0x58;
            local_68 = *(uint *)&pSVar10->field_0x5c;
            local_64 = *(uint *)&pSVar10->field_0x60;
            local_60 = *(uint *)&pSVar10->field_0x64;
            local_5c = *(uint *)&pSVar10->field_0x68;
            local_58 = *(uint *)&pSVar10->field_0x6c;
            local_54 = *(uint *)&pSVar10->field_0x70;
            local_50 = *(uint *)&pSVar10->field_0x74;
            local_4c = *(uint *)&pSVar10->field_0x78;
            local_48 = *(uint *)&pSVar10->field_0x7c;
            pSVar10 = pSVar6;
            for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar15 = *(uint *)pSVar10;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar16 * -8 + 4);
              pSVar15 = (SNetPlayer *)((int)pSVar15 + (uint)bVar16 * -8 + 4);
            }
            puVar8 = &local_c4;
            pSVar10 = pSVar6;
            for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar10 = *puVar8;
              puVar8 = puVar8 + (uint)bVar16 * -2 + 1;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar16 * -8 + 4);
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0x20;
          pSVar10 = pSVar6;
        } while (local_18 < local_44[2]);
      }
      local_44[2] = local_44[2] + -1;
    } while (-1 < local_44[2]);
  }
  return 1;
}
