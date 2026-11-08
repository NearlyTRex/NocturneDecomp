// Name: FUN_0050e020
// Address: 0050e020
// Address Range: [[0050e020, 0050e6b1]]
// Convention: unknown
// Signature: undefined4 FUN_0050e020(int *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050e020(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int aiStackY_2094 [1986];
  int local_16f;
  char local_16b [80];
  int local_11b;
  char local_117 [20];
  int local_103 [2];
  int aiStack_fb [13];
  int local_c4;
  int aiStack_c0 [4];
  int local_b0;
  int local_ac;
  byte local_a8 [4];
  ushort local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
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
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [4];
  int *local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  if ((*param_1 != 2) || (param_1[1] != 1)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x7e6;
    FUN_004e4500("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar9 = (uint *)&stack0xfffffe88;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + (uint)bVar14 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
  }
  *(byte *)puVar9 = *(byte *)param_2;
  iVar4 = -1;
  param_1[0x5f] = local_16f;
  local_44[3] = -1;
  iVar10 = 0;
  if (0 < local_11b) {
    piVar11 = local_103;
    do {
      if (((short)piVar11[1] == (short)param_1[param_1[0x49] * 0x20 + 0x10]) &&
         (param_1[param_1[0x49] * 0x20 + 0xf] == *piVar11)) {
        iVar4 = iVar10;
      }
      if (((short)piVar11[1] == (short)param_1[param_1[0x48] * 0x20 + 0x10]) &&
         (param_1[param_1[0x48] * 0x20 + 0xf] == *piVar11)) {
        local_44[3] = iVar10;
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 10;
    } while (iVar10 < local_11b);
  }
  if ((local_44[3] < 0) || (iVar4 < 0)) {
    return 0;
  }
  pcVar6 = local_16b;
  piVar11 = param_1 + 0x4a;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar11 + 1) = cVar1;
    piVar11 = (int *)((int)piVar11 + 2);
  } while (cVar1 != '\0');
  local_24 = 0;
  if (0 < param_1[7]) {
    local_30 = 0;
    local_28 = param_1 + 8;
    local_34 = param_1 + 0xf;
    local_2c = param_1;
    do {
      iVar4 = 0;
      if (0 < local_11b) {
        piVar11 = local_103;
        do {
          if (((short)piVar11[1] == (short)local_34[1]) && (*local_34 == *piVar11)) break;
          iVar4 = iVar4 + 1;
          piVar11 = piVar11 + 10;
        } while (iVar4 < local_11b);
      }
      if (iVar4 == local_11b) {
        if (local_24 == param_1[0x49]) {
          _DAT_01d046a0 = "..\\core\\netgame.cpp";
          _DAT_01d046a4 = 0x811;
          FUN_004e4500("Hell froze");
        }
        FUN_0050e6c0(param_1,local_24);
      }
      else {
        *(int *)((int)local_44 + local_30) = iVar4;
        pcVar6 = local_117 + iVar4 * 0x28;
        piVar11 = local_28;
        if (local_24 == param_1[0x49]) {
          DAT_0061b124 = local_24 ^ param_1[0x49];
          iVar10 = FUN_005b8c30(local_28,pcVar6);
          if (iVar10 != 0) {
            DAT_0061b124 = 1;
          }
          if (local_2c[0x19] == aiStack_fb[iVar4 * 10 + 2]) {
            if (DAT_0061b124 == 0) goto LAB_0050e59e;
          }
          else {
            DAT_0061b124 = 1;
          }
          FUN_0050eb80(param_1);
        }
        else {
          do {
            cVar1 = *pcVar6;
            *(char *)piVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            *(char *)((int)piVar11 + 1) = cVar1;
            piVar11 = (int *)((int)piVar11 + 2);
          } while (cVar1 != '\0');
          param_1[local_24 * 0x20 + 0x19] = aiStack_fb[iVar4 * 10 + 2];
          param_1[local_24 * 0x20 + 0xd] = aiStack_fb[iVar4 * 10];
          param_1[local_24 * 0x20 + 0xe] = aiStack_fb[iVar4 * 10 + 1];
        }
LAB_0050e59e:
        local_28 = local_28 + 0x20;
        local_2c = local_2c + 0x20;
        local_24 = local_24 + 1;
        local_117[iVar4 * 0x28] = '\0';
        local_34 = local_34 + 0x20;
        local_30 = local_30 + 4;
      }
    } while ((int)local_24 < param_1[7]);
  }
  iVar4 = 0;
  if (0 < local_11b) {
    iVar10 = 0;
    do {
      if (local_117[iVar10] == '\0') break;
      iVar3 = FUN_0050ce70(param_1,(int)local_103 + iVar10,local_117 + iVar10,
                           *(uint *)((int)aiStack_fb + iVar10),
                           *(uint *)((int)aiStack_fb + iVar10 + 4));
      param_1[iVar3 * 0x20 + 0x19] = *(int *)((int)aiStack_fb + iVar10 + 8);
      local_44[iVar3] = iVar4;
      iVar4 = iVar4 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar4 < local_11b);
  }
  param_1[0x48] = local_44[param_1[0x48]];
  param_1[0x49] = local_44[param_1[0x49]];
  local_44[2] = param_1[7] + -1;
  if (-1 < param_1[7] + -1) {
    local_20 = param_1 + 8;
    do {
      local_18 = 0;
      if (0 < local_44[2]) {
        local_14 = 0;
        local_1c = local_20 + 7;
        piVar11 = local_20;
        do {
          piVar5 = piVar11 + 0x20;
          if (*(int *)((int)local_44 + local_14 + 4) < *(int *)((int)local_44 + local_14)) {
            puVar9 = (uint *)((int)local_44 + local_14 + 4);
            uVar2 = *(uint *)((int)local_44 + local_14);
            *(uint *)((int)local_44 + local_14) = *puVar9;
            *puVar9 = uVar2;
            piVar13 = local_20 + local_18 * 0x20;
            piVar7 = piVar13 + (uint)bVar14 * -2 + 1;
            local_c4 = *piVar13;
            piVar12 = aiStack_c0 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1;
            piVar8 = piVar7 + (uint)bVar14 * -2 + 1;
            aiStack_c0[(uint)bVar14 * -2] = *piVar7;
            *piVar12 = *piVar8;
            piVar12[(uint)bVar14 * -2 + 1] = piVar8[(uint)bVar14 * -2 + 1];
            (piVar12 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                 (piVar8 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
            local_b0 = piVar13[5];
            local_ac = piVar13[6];
            FUN_0050f9c0(local_a8,local_1c);
            local_a4 = (short)local_1c[1];
            local_a0 = piVar13[9];
            local_9c = piVar13[10];
            local_98 = piVar13[0xb];
            local_94 = piVar13[0xc];
            local_90 = piVar13[0xd];
            local_8c = piVar13[0xe];
            local_88 = piVar13[0xf];
            local_84 = piVar13[0x10];
            local_80 = piVar13[0x11];
            local_7c = piVar13[0x12];
            local_78 = piVar11[0x13];
            local_74 = piVar11[0x14];
            local_70 = piVar11[0x15];
            local_6c = piVar11[0x16];
            local_68 = piVar11[0x17];
            local_64 = piVar11[0x18];
            local_60 = piVar11[0x19];
            local_5c = piVar11[0x1a];
            local_58 = piVar11[0x1b];
            local_54 = piVar11[0x1c];
            local_50 = piVar11[0x1d];
            local_4c = piVar11[0x1e];
            local_48 = piVar11[0x1f];
            piVar11 = piVar5;
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar13 = *piVar11;
              piVar11 = piVar11 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
            piVar11 = &local_c4;
            piVar13 = piVar5;
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar13 = *piVar11;
              piVar11 = piVar11 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0x20;
          piVar11 = piVar5;
        } while (local_18 < local_44[2]);
      }
      local_44[2] = local_44[2] + -1;
    } while (-1 < local_44[2]);
  }
  return 1;
}
