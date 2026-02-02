// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// Address Range: [[00542470, 00542af1]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  SNetPlayer *pSVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  SNetPlayer *pSVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  SNetPlayer *pSVar14;
  byte bVar15;
  uint *in_stack_00000008;
  int aiStackY_208c [1986];
  int iStack_180;
  uint local_167;
  char local_163 [80];
  int local_113;
  char local_10f [20];
  int local_fb [2];
  int aiStack_f3 [13];
  uint local_bc;
  uint auStack_b8 [4];
  uint local_a8;
  uint local_a4;
  ushort local_9c;
  uint local_98;
  float local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44 [6];
  char *local_2c;
  CNetGame *local_28;
  SNetPlayer *local_24;
  SNetPlayer *local_20;
  int local_1c;
  char *local_18;
  int local_14;
  
  bVar15 = 0;
  if ((this_ptr->connection_type != 2) || (this_ptr->network_mode != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x7e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar8 = (uint *)&stack0xfffffe90;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar15 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
  }
  *(byte *)puVar8 = *(byte *)in_stack_00000008;
  iVar5 = -1;
  *(uint *)(this_ptr->unk + 0x54) = local_167;
  local_44[5] = -1;
  iVar11 = 0;
  if (0 < local_113) {
    piVar3 = local_fb;
    do {
      if (((short)piVar3[1] ==
           *(short *)(this_ptr->players[this_ptr->local_player_index].name + 0x20)) &&
         (*piVar3 == *(int *)(this_ptr->players[this_ptr->local_player_index].name + 0x1c))) {
        iVar5 = iVar11;
      }
      if (((short)piVar3[1] == *(short *)(this_ptr->players[*(int *)this_ptr->padding].name + 0x20))
         && (*piVar3 == *(int *)(this_ptr->players[*(int *)this_ptr->padding].name + 0x1c))) {
        local_44[5] = iVar11;
      }
      iVar11 = iVar11 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar11 < local_113);
  }
  if ((local_44[5] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar7 = local_163;
  pcVar12 = this_ptr->unk;
  do {
    cVar1 = *pcVar7;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  local_44[3] = 0;
  if (0 < this_ptr->player_count) {
    local_44[2] = 0;
    local_24 = this_ptr->players;
    local_2c = this_ptr->players[0].name + 0x1c;
    local_28 = this_ptr;
    do {
      iVar5 = 0;
      if (0 < local_113) {
        piVar3 = local_fb;
        do {
          if (((short)piVar3[1] == *(short *)(local_2c + 4)) && (*piVar3 == *(int *)local_2c))
          break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 10;
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
          DAT_00680a04 = local_44[3] ^ this_ptr->local_player_index;
          iVar11 = strcmp(local_24->name,pcVar7);
          if (iVar11 != 0) {
            DAT_00680a04 = 1;
          }
          if (*(int *)(local_28->players[0].unk1 + 0xc) == aiStack_f3[iVar5 * 10 + 2]) {
            if (DAT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            DAT_00680a04 = 1;
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
          *(int *)(this_ptr->players[local_44[3]].unk1 + 0xc) = aiStack_f3[iVar5 * 10 + 2];
          *(int *)(this_ptr->players[local_44[3]].name + 0x14) = aiStack_f3[iVar5 * 10];
          *(int *)(this_ptr->players[local_44[3]].name + 0x18) = aiStack_f3[iVar5 * 10 + 1];
        }
LAB_005429ed:
        local_24 = local_24 + 1;
        local_28 = (CNetGame *)(local_28->players[0].unk1 + 0x20);
        local_44[3] = local_44[3] + 1;
        local_10f[iVar5 * 0x28] = '\0';
        local_2c = local_2c + 0x78;
        local_44[2] = local_44[2] + 4;
      }
    } while (local_44[3] < this_ptr->player_count);
  }
  iVar5 = 0;
  if (0 < local_113) {
    iVar11 = 0;
    do {
      if (local_10f[iVar11] == '\0') break;
      iStack_180 = (int)local_fb + iVar11;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(this_ptr);
      *(uint *)(this_ptr->players[iVar4].unk1 + 0xc) =
           *(uint *)((int)aiStack_f3 + iVar11 + 8);
      local_44[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar11 = iVar11 + 0x28;
    } while (iVar5 < local_113);
  }
  *(int *)this_ptr->padding = local_44[*(int *)this_ptr->padding];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_1c = this_ptr->player_count + -1;
  if (-1 < local_1c) {
    local_20 = this_ptr->players;
    do {
      local_14 = 0;
      if (0 < local_1c) {
        local_44[4] = 0;
        local_18 = local_20->name + 0x1c;
        pSVar10 = local_20;
        do {
          pSVar6 = pSVar10 + 1;
          if (*(int *)((int)local_44 + local_44[4] + 4) < *(int *)((int)local_44 + local_44[4])) {
            puVar8 = (uint *)((int)local_44 + local_44[4] + 4);
            uVar2 = *(uint *)((int)local_44 + local_44[4]);
            *(uint *)((int)local_44 + local_44[4]) = *puVar8;
            iVar5 = local_14;
            *puVar8 = uVar2;
            pSVar14 = local_20 + iVar5;
            puVar8 = (uint *)((int)pSVar14 + (uint)bVar15 * -8 + 4);
            local_bc = *(uint *)pSVar14->name;
            puVar13 = auStack_b8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1;
            puVar9 = puVar8 + (uint)bVar15 * -2 + 1;
            auStack_b8[(uint)bVar15 * -2] = *puVar8;
            pcVar7 = local_18;
            *puVar13 = *puVar9;
            puVar13[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
            (puVar13 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (puVar9 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
            local_a8 = *(uint *)(pSVar14->name + 0x14);
            local_a4 = *(uint *)(pSVar14->name + 0x18);
            core_netgame_cpp_FUN_00543e20();
            local_9c = *(ushort *)(pcVar7 + 4);
            local_98 = *(uint *)(pSVar14->name + 0x24);
            local_94 = pSVar14->ping_quality;
            local_90 = pSVar14->last_ping_sent;
            local_8c = pSVar14->last_ping_response;
            local_88 = pSVar14->player_id;
            local_84 = *(uint *)pSVar14->unk1;
            local_80 = *(uint *)(pSVar14->unk1 + 4);
            local_7c = *(uint *)(pSVar14->unk1 + 8);
            local_78 = *(uint *)(pSVar14->unk1 + 0xc);
            local_74 = *(uint *)(pSVar14->unk1 + 0x10);
            local_70 = *(uint *)(pSVar10->unk1 + 0x14);
            local_6c = *(uint *)(pSVar10->unk1 + 0x18);
            local_68 = *(uint *)(pSVar10->unk1 + 0x1c);
            local_64 = *(uint *)(pSVar10->unk1 + 0x20);
            local_60 = pSVar10->sync_stage;
            local_5c = *(uint *)pSVar10->unk2;
            local_58 = *(uint *)(pSVar10->unk2 + 4);
            local_54 = *(uint *)(pSVar10->unk2 + 8);
            local_50 = *(uint *)(pSVar10->unk2 + 0xc);
            local_4c = *(uint *)(pSVar10->unk2 + 0x10);
            local_48 = *(uint *)(pSVar10->unk2 + 0x14);
            pSVar10 = pSVar6;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar14->name = *(uint *)pSVar10->name;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar15 * -8 + 4);
              pSVar14 = (SNetPlayer *)((int)pSVar14 + (uint)bVar15 * -8 + 4);
            }
            puVar8 = &local_bc;
            pSVar10 = pSVar6;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pSVar10->name = *puVar8;
              puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
              pSVar10 = (SNetPlayer *)((int)pSVar10 + (uint)bVar15 * -8 + 4);
            }
          }
          local_14 = local_14 + 1;
          local_44[4] = local_44[4] + 4;
          local_18 = local_18 + 0x78;
          pSVar10 = pSVar6;
        } while (local_14 < local_1c);
      }
      local_1c = local_1c + -1;
    } while (-1 < local_1c);
  }
  return 1;
}
