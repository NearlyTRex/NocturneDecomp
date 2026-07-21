// Name: sound_mp3.cpp_reorderShortBlockSamples_FUN_004e5d80
// Address: 004e5d80
// Address Range: [[004e5d80, 004e60bd]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80(uint *param_1,uint *param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_4c = ((int *)*param_4)[4] + *(int *)*param_4 * 3;
  iVar8 = 0;
  puVar9 = param_2;
  do {
    puVar9 = puVar9 + 0x12;
    puVar4 = param_2 + iVar8 * 0x12;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar9);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  if ((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 0x14) != 2)) {
    local_58 = param_2;
    iVar8 = 0;
    puVar9 = param_1;
    do {
      puVar9 = puVar9 + 0x12;
      puVar3 = param_1 + iVar8 * 0x12;
      puVar4 = local_58;
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      } while (puVar3 != puVar9);
      iVar8 = iVar8 + 1;
      local_58 = local_58 + 0x12;
    } while (iVar8 < 0x20);
  }
  else if (*(int *)(param_3 + 0x18) == 0) {
    local_4c = local_4c * 0x94;
    iVar8 = 0;
    local_38 = *(int *)(&DAT_005bc158 + local_4c);
    iVar14 = local_4c + 0x34;
    do {
      local_24 = 0;
      local_2c = iVar8 * 3;
      do {
        if (0 < local_38) {
          iVar10 = local_24 * local_38 + iVar8 * 3;
          iVar6 = local_38 + iVar10;
          iVar5 = local_2c;
          do {
            iVar11 = iVar10 / 0x12;
            iVar12 = iVar10 % 0x12;
            iVar7 = iVar5 / 0x12;
            iVar13 = iVar5 % 0x12;
            iVar10 = iVar10 + 1;
            iVar5 = iVar5 + 3;
            param_2[iVar7 * 0x12 + iVar13] = param_1[iVar11 * 0x12 + iVar12];
          } while (iVar10 < iVar6);
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while (local_24 < 3);
      iVar8 = *(int *)(&DAT_005bc158 + local_4c);
      piVar1 = (int *)(&DAT_005bc15c + local_4c);
      local_4c = local_4c + 4;
      local_38 = *piVar1 - iVar8;
    } while (local_4c != iVar14);
  }
  else {
    local_54 = param_2;
    iVar8 = 0;
    local_5c = param_1;
    do {
      local_5c = local_5c + 0x12;
      puVar4 = param_1 + iVar8 * 0x12;
      puVar9 = local_54;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      } while (puVar4 != local_5c);
      iVar8 = iVar8 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar8 < 2);
    local_4c = local_4c * 0x94;
    iVar8 = *(int *)(&DAT_005bc160 + local_4c);
    local_34 = *(int *)(&DAT_005bc164 + local_4c) - iVar8;
    local_50 = local_4c + 0xc;
    do {
      local_28 = 0;
      local_30 = iVar8 * 3;
      do {
        if (0 < local_34) {
          iVar5 = local_28 * local_34 + iVar8 * 3;
          iVar10 = local_34 + iVar5;
          iVar14 = local_30;
          do {
            iVar6 = iVar5 / 0x12;
            iVar11 = iVar5 % 0x12;
            iVar5 = iVar5 + 1;
            param_2[(iVar14 / 0x12) * 0x12 + iVar14 % 0x12] = param_1[iVar6 * 0x12 + iVar11];
            iVar14 = iVar14 + 3;
          } while (iVar5 < iVar10);
        }
        local_28 = local_28 + 1;
        local_30 = local_30 + 1;
      } while (local_28 < 3);
      iVar8 = *(int *)(&DAT_005bc158 + local_50);
      piVar1 = (int *)(&DAT_005bc15c + local_50);
      local_50 = local_50 + 4;
      local_34 = *piVar1 - iVar8;
    } while (local_50 != local_4c + 0x34);
  }
  return;
}
