// Name: FUN_004dcf60
// Address: 004dcf60
// Address Range: [[004dcf60, 004dd40a]]
// Convention: unknown
// Signature: uint * FUN_004dcf60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004dcf60(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *unaff_ESI;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  byte bVar13;
  float10 fVar14;
  byte local_160 [68];
  uint local_11c [3];
  uint local_110 [13];
  uint local_dc [10];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_8c;
  int local_88;
  int local_84;
  uint local_74 [15];
  int local_38;
  int *local_34;
  float local_24;
  int local_20;
  float local_1c;
  float local_14;
  
  bVar13 = 0;
  if (*param_1 == 0x20) {
    uVar4 = engine_model_c_loadModelFile_FUN_004dcd10(param_1 + 6);
    FUN_004dcf60(uVar4);
    puVar11 = local_74;
    puVar10 = &local_a8;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    FUN_004dcee0(uVar4);
    iVar6 = 0xd;
    puVar11 = local_110;
    puVar10 = &local_a8;
  }
  else if (*param_1 == 0x26) {
    puVar11 = local_110;
    FUN_0041a5a0(param_1);
    iVar6 = 0xd;
    puVar10 = local_dc;
  }
  else {
    local_34 = param_1 + 5;
    if (*param_1 != 0x14) {
      _DAT_01cc4800 = "..\\engine\\model.c";
      _DAT_01cc4804 = 0x172;
      FUN_004c8440("Unable to read magnify!");
    }
    iVar6 = (int)(0x7fffffff / (longlong)param_1[1]) * 2;
    if (param_1[2] != 2) {
      _sprintf(local_160,"Unable to read verticies in model!");
      _DAT_01cc4800 = "..\\engine\\model.c";
      _DAT_01cc4804 = 0x176;
      FUN_004c8440(local_160);
    }
    iVar7 = 0;
    iVar12 = -0x80000000;
    iVar9 = -0x80000000;
    local_20 = 0x7fffffff;
    iVar5 = 0x7fffffff;
    iVar8 = 0x7fffffff;
    local_24 = -0.0;
    local_1c = 0.0;
    local_14 = 0.0;
    piVar1 = local_34;
    if (0 < param_1[4]) {
      do {
        if (iVar9 < *piVar1) {
          iVar9 = *piVar1;
        }
        if (iVar12 < piVar1[1]) {
          iVar12 = piVar1[1];
        }
        if ((int)local_24 < piVar1[2]) {
          local_24 = (float)piVar1[2];
        }
        if (*piVar1 < iVar8) {
          iVar8 = *piVar1;
        }
        if (piVar1[1] < iVar5) {
          iVar5 = piVar1[1];
        }
        if (piVar1[2] < local_20) {
          local_20 = piVar1[2];
        }
        iVar7 = iVar7 + 1;
        local_14 = (float)*piVar1 + local_14;
        local_1c = (float)piVar1[2] + local_1c;
        piVar1 = piVar1 + 3;
      } while (iVar7 < param_1[4]);
    }
    uVar2 = (uint)((longlong)iVar6 * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)iVar6 * (longlong)iVar9) >> 0x20) << 0x10;
    local_98 = (uint)((longlong)iVar6 * (longlong)iVar12) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)iVar12) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar6 * (longlong)(int)local_24) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)(int)local_24) >> 0x20) << 0x10;
    uVar3 = (uint)((longlong)iVar6 * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iVar6 * (longlong)iVar8) >> 0x20) << 0x10;
    local_a4 = (uint)((longlong)iVar6 * (longlong)iVar5) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)iVar5) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar6 * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)local_20) >> 0x20) << 0x10;
    local_a8 = uVar3;
    local_9c = uVar2;
    fVar14 = (float10)round((float10)(local_14 * (1.0 / (float)param_1[4])))
    ;
    local_94 = (uint)((longlong)iVar6 * (longlong)(int)ROUND(fVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)(int)ROUND(fVar14)) >> 0x20) << 0x10;
    fVar14 = (float10)round((float10)local_1c);
    local_94 = (uint)((longlong)(int)local_34 * (longlong)(int)ROUND(fVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_34 * (longlong)(int)ROUND(fVar14)) >> 0x20) <<
               0x10;
    fVar14 = (float10)round((float10)local_24);
    local_94 = (uint)((longlong)local_38 * (longlong)(int)ROUND(fVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)local_38 * (longlong)(int)ROUND(fVar14)) >> 0x20) << 0x10
    ;
    local_8c = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    uVar2 = (int)uVar3 >> 0x1f;
    if (local_8c < (int)((uVar3 ^ uVar2) - uVar2)) {
      local_8c = (uVar3 ^ uVar2) - uVar2;
    }
    local_88 = (local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f);
    uVar2 = (int)local_b0 >> 0x1f;
    if (local_88 < (int)((local_b0 ^ uVar2) - uVar2)) {
      local_88 = (local_b0 ^ uVar2) - uVar2;
    }
    local_84 = (local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f);
    uVar2 = (int)local_ac >> 0x1f;
    if (local_84 < (int)((local_ac ^ uVar2) - uVar2)) {
      local_84 = (local_ac ^ uVar2) - uVar2;
    }
    iVar6 = 0xd;
    fVar14 = (float10)round
                                (SQRT((float10)local_84 * (float10)local_84 +
                                      (float10)local_88 * (float10)local_88 +
                                      (float10)local_8c * (float10)local_8c));
    local_94 = (int)ROUND(fVar14);
    puVar10 = &local_b4;
    puVar11 = local_11c;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
  }
  puVar11 = local_110;
  puVar10 = unaff_ESI;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}
