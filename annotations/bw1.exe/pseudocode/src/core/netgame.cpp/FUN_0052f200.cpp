// Name: FUN_0052f200
// Address: 0052f200
// Address Range: [[0052f200, 0052f889]]
// Convention: unknown
// Signature: undefined4 FUN_0052f200(int *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052f200(int *param_1,uint *param_2)

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
  int aiStackY_2090 [1986];
  int local_16b;
  char local_167 [80];
  int local_117;
  char local_113 [20];
  int local_ff [2];
  int aiStack_f7 [13];
  int local_c0;
  int aiStack_bc [4];
  int local_ac;
  int local_a8;
  byte local_a4 [4];
  ushort local_a0;
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
  int local_44 [5];
  int *local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  
  bVar14 = 0;
  if ((*param_1 != 2) || (param_1[1] != 1)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x7e6;
    FUN_005030e0("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar9 = (uint *)&stack0xfffffe8c;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + (uint)bVar14 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
  }
  *(byte *)puVar9 = *(byte *)param_2;
  iVar4 = -1;
  param_1[0x5d] = local_16b;
  local_44[4] = -1;
  iVar10 = 0;
  if (0 < local_117) {
    piVar11 = local_ff;
    do {
      if (((short)piVar11[1] == (short)param_1[param_1[0x47] * 0x1f + 0x10]) &&
         (param_1[param_1[0x47] * 0x1f + 0xf] == *piVar11)) {
        iVar4 = iVar10;
      }
      if (((short)piVar11[1] == (short)param_1[param_1[0x46] * 0x1f + 0x10]) &&
         (param_1[param_1[0x46] * 0x1f + 0xf] == *piVar11)) {
        local_44[4] = iVar10;
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 10;
    } while (iVar10 < local_117);
  }
  if ((local_44[4] < 0) || (iVar4 < 0)) {
    return 0;
  }
  pcVar6 = local_167;
  piVar11 = param_1 + 0x48;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar11 + 1) = cVar1;
    piVar11 = (int *)((int)piVar11 + 2);
  } while (cVar1 != '\0');
  local_20 = 0;
  if (0 < param_1[7]) {
    local_2c = 0;
    local_28 = param_1 + 0xf;
    local_24 = param_1 + 8;
    local_30 = param_1;
    do {
      iVar4 = 0;
      if (0 < local_117) {
        piVar11 = local_ff;
        do {
          if (((short)piVar11[1] == (short)local_28[1]) && (*local_28 == *piVar11)) break;
          iVar4 = iVar4 + 1;
          piVar11 = piVar11 + 10;
        } while (iVar4 < local_117);
      }
      if (iVar4 == local_117) {
        if (local_20 == param_1[0x47]) {
          _DAT_01d1d400 = "..\\core\\netgame.cpp";
          _DAT_01d1d404 = 0x811;
          FUN_005030e0("Hell froze");
        }
        FUN_0052f890(param_1,local_20);
      }
      else {
        *(int *)((int)local_44 + local_2c) = iVar4;
        pcVar6 = local_113 + iVar4 * 0x28;
        piVar11 = local_24;
        if (local_20 == param_1[0x47]) {
          DAT_00622584 = local_20 ^ param_1[0x47];
          iVar10 = FUN_005c0f80(local_24,pcVar6);
          if (iVar10 != 0) {
            DAT_00622584 = 1;
          }
          if (local_30[0x19] == aiStack_f7[iVar4 * 10 + 2]) {
            if (DAT_00622584 == 0) goto LAB_0052f785;
          }
          else {
            DAT_00622584 = 1;
          }
          FUN_0052fd80(param_1);
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
          param_1[local_20 * 0x1f + 0x19] = aiStack_f7[iVar4 * 10 + 2];
          param_1[local_20 * 0x1f + 0xd] = aiStack_f7[iVar4 * 10];
          param_1[local_20 * 0x1f + 0xe] = aiStack_f7[iVar4 * 10 + 1];
        }
LAB_0052f785:
        local_24 = local_24 + 0x1f;
        local_30 = local_30 + 0x1f;
        local_20 = local_20 + 1;
        local_113[iVar4 * 0x28] = '\0';
        local_28 = local_28 + 0x1f;
        local_2c = local_2c + 4;
      }
    } while ((int)local_20 < param_1[7]);
  }
  iVar4 = 0;
  if (0 < local_117) {
    iVar10 = 0;
    do {
      if (local_113[iVar10] == '\0') break;
      iVar3 = FUN_0052e040(param_1,(int)local_ff + iVar10,local_113 + iVar10,
                           *(uint *)((int)aiStack_f7 + iVar10),
                           *(uint *)((int)aiStack_f7 + iVar10 + 4));
      param_1[iVar3 * 0x1f + 0x19] = *(int *)((int)aiStack_f7 + iVar10 + 8);
      local_44[iVar3] = iVar4;
      iVar4 = iVar4 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar4 < local_117);
  }
  param_1[0x46] = local_44[param_1[0x46]];
  param_1[0x47] = local_44[param_1[0x47]];
  local_18 = param_1[7] + -1;
  if (-1 < param_1[7] + -1) {
    local_1c = param_1 + 8;
    do {
      local_44[2] = 0;
      if (0 < local_18) {
        local_44[3] = 0;
        local_14 = local_1c + 7;
        piVar11 = local_1c;
        do {
          iVar4 = local_44[2];
          piVar5 = piVar11 + 0x1f;
          if (*(int *)((int)local_44 + local_44[3] + 4) < *(int *)((int)local_44 + local_44[3])) {
            puVar9 = (uint *)((int)local_44 + local_44[3] + 4);
            uVar2 = *(uint *)((int)local_44 + local_44[3]);
            *(uint *)((int)local_44 + local_44[3]) = *puVar9;
            *puVar9 = uVar2;
            piVar13 = local_1c + iVar4 * 0x1f;
            piVar7 = piVar13 + (uint)bVar14 * -2 + 1;
            local_c0 = *piVar13;
            piVar12 = aiStack_bc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1;
            piVar8 = piVar7 + (uint)bVar14 * -2 + 1;
            aiStack_bc[(uint)bVar14 * -2] = *piVar7;
            *piVar12 = *piVar8;
            piVar12[(uint)bVar14 * -2 + 1] = piVar8[(uint)bVar14 * -2 + 1];
            (piVar12 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                 (piVar8 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
            local_ac = piVar13[5];
            local_a8 = piVar13[6];
            FUN_00530bd0(local_a4,local_14);
            local_a0 = (short)local_14[1];
            local_9c = piVar13[9];
            local_98 = piVar13[10];
            local_94 = piVar13[0xb];
            local_90 = piVar13[0xc];
            local_8c = piVar13[0xd];
            local_88 = piVar13[0xe];
            local_84 = piVar13[0xf];
            local_80 = piVar13[0x10];
            local_7c = piVar13[0x11];
            local_78 = piVar13[0x12];
            local_74 = piVar11[0x13];
            local_70 = piVar11[0x14];
            local_6c = piVar11[0x15];
            local_68 = piVar11[0x16];
            local_64 = piVar11[0x17];
            local_60 = piVar11[0x18];
            local_5c = piVar11[0x19];
            local_58 = piVar11[0x1a];
            local_54 = piVar11[0x1b];
            local_50 = piVar11[0x1c];
            local_4c = piVar11[0x1d];
            local_48 = piVar11[0x1e];
            piVar11 = piVar5;
            for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar13 = *piVar11;
              piVar11 = piVar11 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
            piVar11 = &local_c0;
            piVar13 = piVar5;
            for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar13 = *piVar11;
              piVar11 = piVar11 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
          }
          local_44[2] = local_44[2] + 1;
          local_44[3] = local_44[3] + 4;
          local_14 = local_14 + 0x1f;
          piVar11 = piVar5;
        } while (local_44[2] < local_18);
      }
      local_18 = local_18 + -1;
    } while (-1 < local_18);
  }
  return 1;
}
