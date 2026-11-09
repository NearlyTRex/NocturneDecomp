// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00
// Address: 00506b00
// Address Range: [[00506b00, 00507191]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00506b00(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00506b00(CNetGame *this_ptr,UNetPacket *packet)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  SNetPacketHeader *pSVar12;
  int iVar13;
  char *pcVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  uint auStackY_2094 [1986];
  SNetPacketHeader aSStack_178 [9];
  uint local_16f;
  char local_16b [80];
  int local_11b;
  char local_117 [20];
  int local_103 [2];
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
  char *local_28;
  uint local_24;
  uint *local_20;
  SIpAddr *local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  if ((*(int *)this_ptr != 2) || (*(int *)&this_ptr->field_0x4 != 1)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x7e6;
    core_main_c_FUN_004e4330("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  pSVar12 = aSStack_178;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pSVar12 = *(uint *)packet;
    packet = (UNetPacket *)((int)packet + (uint)bVar17 * -8 + 4);
    pSVar12 = pSVar12 + (uint)bVar17 * -8 + 4;
  }
  *pSVar12 = packet->header;
  iVar4 = -1;
  *(uint *)&this_ptr->field_0x17c = local_16f;
  local_44[3] = -1;
  iVar13 = 0;
  if (0 < local_11b) {
    iVar6 = *(int *)&this_ptr->field_0x120 * 0x80;
    iVar5 = *(int *)&this_ptr->field_0x124 * 0x80;
    piVar3 = local_103;
    do {
      if (((short)piVar3[1] == *(short *)(&this_ptr->field_0x40 + iVar5)) &&
         (*(int *)(&this_ptr->field_0x3c + iVar5) == *piVar3)) {
        iVar4 = iVar13;
      }
      if (((short)piVar3[1] == *(short *)(&this_ptr->field_0x40 + iVar6)) &&
         (*(int *)(&this_ptr->field_0x3c + iVar6) == *piVar3)) {
        local_44[3] = iVar13;
      }
      iVar13 = iVar13 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar13 < local_11b);
  }
  if ((local_44[3] < 0) || (iVar4 < 0)) {
    return 0;
  }
  pcVar8 = local_16b;
  pcVar14 = &this_ptr->field_0x128;
  do {
    cVar1 = *pcVar8;
    *pcVar14 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar14[1] = cVar1;
    pcVar14 = pcVar14 + 2;
  } while (cVar1 != '\0');
  local_24 = 0;
  if (0 < *(int *)&this_ptr->field_0x1c) {
    local_30 = 0;
    local_28 = &this_ptr->field_0x20;
    local_34 = (int *)&this_ptr->field_0x3c;
    local_2c = this_ptr;
    do {
      iVar4 = 0;
      if (0 < local_11b) {
        piVar3 = local_103;
        do {
          if (((short)piVar3[1] == (short)local_34[1]) && (*local_34 == *piVar3)) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < local_11b);
      }
      if (iVar4 == local_11b) {
        if (local_24 == *(uint *)&this_ptr->field_0x124) {
          _DAT_01d71de0 = "..\\core\\netgame.cpp";
          _DAT_01d71de4 = 0x811;
          core_main_c_FUN_004e4330("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(this_ptr,local_24);
      }
      else {
        *(int *)((int)local_44 + local_30) = iVar4;
        pcVar14 = local_117 + iVar4 * 0x28;
        pcVar8 = local_28;
        if (local_24 == *(uint *)&this_ptr->field_0x124) {
          DAT_00603454 = local_24 ^ *(uint *)&this_ptr->field_0x124;
          iVar13 = _strcmp(local_28,pcVar14);
          if (iVar13 != 0) {
            DAT_00603454 = 1;
          }
          if (*(int *)&local_2c->field_0x64 == aiStack_fb[iVar4 * 10 + 2]) {
            if (DAT_00603454 == 0) goto LAB_0050707e;
          }
          else {
            DAT_00603454 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
        }
        else {
          do {
            cVar1 = *pcVar14;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          *(int *)(&this_ptr->field_0x64 + local_24 * 0x80) = aiStack_fb[iVar4 * 10 + 2];
          *(int *)(&this_ptr->field_0x34 + local_24 * 0x80) = aiStack_fb[iVar4 * 10];
          *(int *)(&this_ptr->field_0x38 + local_24 * 0x80) = aiStack_fb[iVar4 * 10 + 1];
        }
LAB_0050707e:
        local_28 = local_28 + 0x80;
        local_2c = (CNetGame *)&local_2c->field_0x80;
        local_24 = local_24 + 1;
        local_117[iVar4 * 0x28] = '\0';
        local_34 = local_34 + 0x20;
        local_30 = local_30 + 4;
      }
    } while ((int)local_24 < *(int *)&this_ptr->field_0x1c);
  }
  iVar4 = 0;
  if (0 < local_11b) {
    iVar13 = 0;
    do {
      if (local_117[iVar13] == '\0') break;
      iVar5 = core_netgame_cpp_FUN_00505950
                        (this_ptr,(int)local_103 + iVar13,local_117 + iVar13,
                         *(uint *)((int)aiStack_fb + iVar13),
                         *(uint *)((int)aiStack_fb + iVar13 + 4));
      *(uint *)(&this_ptr->field_0x64 + iVar5 * 0x80) =
           *(uint *)((int)aiStack_fb + iVar13 + 8);
      local_44[iVar5] = iVar4;
      iVar4 = iVar4 + 1;
      iVar13 = iVar13 + 0x28;
    } while (iVar4 < local_11b);
  }
  *(int *)&this_ptr->field_0x120 = local_44[*(int *)&this_ptr->field_0x120];
  *(int *)&this_ptr->field_0x124 = local_44[*(int *)&this_ptr->field_0x124];
  local_44[2] = *(int *)&this_ptr->field_0x1c + -1;
  if (-1 < local_44[2]) {
    local_20 = (uint *)&this_ptr->field_0x20;
    do {
      local_18 = 0;
      if (0 < local_44[2]) {
        local_14 = 0;
        local_1c = (SIpAddr *)(local_20 + 7);
        puVar11 = local_20;
        do {
          puVar7 = puVar11 + 0x20;
          if (*(int *)((int)local_44 + local_14 + 4) < *(int *)((int)local_44 + local_14)) {
            puVar16 = (uint *)((int)local_44 + local_14 + 4);
            uVar2 = *(uint *)((int)local_44 + local_14);
            *(uint *)((int)local_44 + local_14) = *puVar16;
            *puVar16 = uVar2;
            puVar16 = local_20 + local_18 * 0x20;
            puVar9 = puVar16 + (uint)bVar17 * -2 + 1;
            local_c4 = *puVar16;
            puVar15 = auStack_c0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1;
            puVar10 = puVar9 + (uint)bVar17 * -2 + 1;
            auStack_c0[(uint)bVar17 * -2] = *puVar9;
            *puVar15 = *puVar10;
            puVar15[(uint)bVar17 * -2 + 1] = puVar10[(uint)bVar17 * -2 + 1];
            (puVar15 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (puVar10 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            local_b0 = puVar16[5];
            local_ac = puVar16[6];
            core_netgame_cpp_IpAddr_copy_FUN_005084a0(&local_a8,local_1c);
            local_a4 = *(ushort *)(local_1c + 1);
            local_a0 = puVar16[9];
            local_9c = puVar16[10];
            local_98 = puVar16[0xb];
            local_94 = puVar16[0xc];
            local_90 = puVar16[0xd];
            local_8c = puVar16[0xe];
            local_88 = puVar16[0xf];
            local_84 = puVar16[0x10];
            local_80 = puVar16[0x11];
            local_7c = puVar16[0x12];
            local_78 = puVar11[0x13];
            local_74 = puVar11[0x14];
            local_70 = puVar11[0x15];
            local_6c = puVar11[0x16];
            local_68 = puVar11[0x17];
            local_64 = puVar11[0x18];
            local_60 = puVar11[0x19];
            local_5c = puVar11[0x1a];
            local_58 = puVar11[0x1b];
            local_54 = puVar11[0x1c];
            local_50 = puVar11[0x1d];
            local_4c = puVar11[0x1e];
            local_48 = puVar11[0x1f];
            puVar11 = puVar7;
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar16 = *puVar11;
              puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
              puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
            }
            puVar11 = &local_c4;
            puVar16 = puVar7;
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar16 = *puVar11;
              puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
              puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0x20;
          puVar11 = puVar7;
        } while (local_18 < local_44[2]);
      }
      local_44[2] = local_44[2] + -1;
    } while (-1 < local_44[2]);
  }
  return 1;
}
