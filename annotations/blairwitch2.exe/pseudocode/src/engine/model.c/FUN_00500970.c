// Name: engine_model.c_FUN_00500970
// Address: 00500970
// Address Range: [[00500970, 00500e1a]]
// Convention: unknown
// Signature: uint * engine_model_c_FUN_00500970(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * engine_model_c_FUN_00500970(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
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
  float10 fVar15;
  float10 fVar16;
  char acStack_160 [80];
  uint auStack_110 [13];
  uint auStack_dc [13];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint auStack_74 [16];
  int *piStack_34;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar13 = 0;
  if (*param_1 == 0x20) {
    uVar4 = engine_model_c_loadModelFile_FUN_00500720(param_1 + 6);
    engine_model_c_FUN_00500970(uVar4);
    puVar11 = auStack_74;
    puVar10 = &uStack_a8;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    engine_model_c_FUN_005008f0(uVar4);
    iVar6 = 0xd;
    puVar11 = auStack_110;
    puVar10 = &uStack_a8;
  }
  else if (*param_1 == 0x26) {
    puVar11 = auStack_110;
    engine_boss_c_FUN_0041a510(param_1);
    iVar6 = 0xd;
    puVar10 = auStack_dc;
  }
  else {
    piStack_34 = param_1 + 5;
    if (*param_1 != 0x14) {
      _DAT_01d046a0 = "..\\engine\\model.c";
      _DAT_01d046a4 = 0x173;
      core_main_c_FUN_004e4500("Unable to read magnify!");
    }
    iVar6 = (int)(0x7fffffff / (longlong)param_1[1]) * 2;
    if (param_1[2] != 2) {
      _sprintf(acStack_160,"Unable to read verticies in model!");
      _DAT_01d046a0 = "..\\engine\\model.c";
      _DAT_01d046a4 = 0x177;
      core_main_c_FUN_004e4500(acStack_160);
    }
    iVar7 = 0;
    iVar12 = -0x80000000;
    iVar9 = -0x80000000;
    iStack_20 = 0x7fffffff;
    iVar5 = 0x7fffffff;
    iVar8 = 0x7fffffff;
    iStack_24 = -0x80000000;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    piVar1 = piStack_34;
    if (0 < param_1[4]) {
      do {
        if (iVar9 < *piVar1) {
          iVar9 = *piVar1;
        }
        if (iVar12 < piVar1[1]) {
          iVar12 = piVar1[1];
        }
        if (iStack_24 < piVar1[2]) {
          iStack_24 = piVar1[2];
        }
        if (*piVar1 < iVar8) {
          iVar8 = *piVar1;
        }
        if (piVar1[1] < iVar5) {
          iVar5 = piVar1[1];
        }
        if (piVar1[2] < iStack_20) {
          iStack_20 = piVar1[2];
        }
        iVar7 = iVar7 + 1;
        fStack_14 = (float)*piVar1 + fStack_14;
        fStack_18 = (float)piVar1[1] + fStack_18;
        fStack_1c = (float)piVar1[2] + fStack_1c;
        piVar1 = piVar1 + 3;
      } while (iVar7 < param_1[4]);
    }
    uVar2 = (uint)((longlong)iVar6 * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)iVar6 * (longlong)iVar9) >> 0x20) << 0x10;
    uStack_98 = (uint)((longlong)iVar6 * (longlong)iVar12) >> 0x10 |
                (int)((ulonglong)((longlong)iVar6 * (longlong)iVar12) >> 0x20) << 0x10;
    uStack_94 = (uint)((longlong)iVar6 * (longlong)iStack_24) >> 0x10 |
                (int)((ulonglong)((longlong)iVar6 * (longlong)iStack_24) >> 0x20) << 0x10;
    uVar3 = (uint)((longlong)iVar6 * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iVar6 * (longlong)iVar8) >> 0x20) << 0x10;
    uStack_a4 = (uint)((longlong)iVar6 * (longlong)iVar5) >> 0x10 |
                (int)((ulonglong)((longlong)iVar6 * (longlong)iVar5) >> 0x20) << 0x10;
    uStack_a0 = (uint)((longlong)iVar6 * (longlong)iStack_20) >> 0x10 |
                (int)((ulonglong)((longlong)iVar6 * (longlong)iStack_20) >> 0x20) << 0x10;
    fVar15 = (float10)1 / (float10)param_1[4];
    fVar16 = (float10)fStack_1c * fVar15;
    fVar14 = (float10)(float)((float10)fStack_14 * fVar15);
    uStack_a8 = uVar3;
    uStack_9c = uVar2;
    iVar5 = round();
    uStack_90 = (uint)((longlong)iVar5 * (longlong)(int)ROUND(fVar14)) >> 0x10 |
                (int)((ulonglong)((longlong)iVar5 * (longlong)(int)ROUND(fVar14)) >> 0x20) << 0x10;
    fVar14 = (float10)(float)((float10)fStack_18 * fVar15);
    round();
    uStack_8c = (uint)((longlong)iVar6 * (longlong)(int)ROUND(fVar14)) >> 0x10 |
                (int)((ulonglong)((longlong)iVar6 * (longlong)(int)ROUND(fVar14)) >> 0x20) << 0x10;
    fVar14 = (float10)(float)fVar16;
    round();
    uStack_88 = (uint)((longlong)iVar6 * (longlong)(int)ROUND(fVar14)) >> 0x10 |
                (int)((ulonglong)((longlong)iVar6 * (longlong)(int)ROUND(fVar14)) >> 0x20) << 0x10;
    iStack_80 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    uVar2 = (int)uVar3 >> 0x1f;
    if (iStack_80 < (int)((uVar3 ^ uVar2) - uVar2)) {
      iStack_80 = (uVar3 ^ uVar2) - uVar2;
    }
    iStack_7c = (uStack_98 ^ (int)uStack_98 >> 0x1f) - ((int)uStack_98 >> 0x1f);
    uVar2 = (int)uStack_a4 >> 0x1f;
    if (iStack_7c < (int)((uStack_a4 ^ uVar2) - uVar2)) {
      iStack_7c = (uStack_a4 ^ uVar2) - uVar2;
    }
    iStack_78 = (uStack_94 ^ (int)uStack_94 >> 0x1f) - ((int)uStack_94 >> 0x1f);
    uVar2 = (int)uStack_a0 >> 0x1f;
    if (iStack_78 < (int)((uStack_a0 ^ uVar2) - uVar2)) {
      iStack_78 = (uStack_a0 ^ uVar2) - uVar2;
    }
    fVar14 = SQRT((float10)iStack_78 * (float10)iStack_78 +
                  (float10)iStack_7c * (float10)iStack_7c + (float10)iStack_80 * (float10)iStack_80)
    ;
    round();
    iStack_84 = (int)ROUND(fVar14);
    iVar6 = extraout_ECX;
    puVar10 = &uStack_a8;
    puVar11 = auStack_110;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
  }
  puVar11 = auStack_110;
  puVar10 = unaff_ESI;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}
