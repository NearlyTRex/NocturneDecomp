// Name: engine_model.c_getMRGLBounds_FUN_004f8170
// Address: 004f8170
// Address Range: [[004f8170, 004f861a]]
// Convention: __stack_esi
// Signature: SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_004f8170(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_004f8170(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  SMRGLHeaderExtended *mrgl_data_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  SMRGLModelBounds *pSVar11;
  int iVar12;
  byte bVar13;
  double dVar14;
  char acStack_160 [68];
  uint auStack_11c [3];
  uint uStack_110;
  uint auStack_10c [13];
  uint auStack_d8 [9];
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  SMRGLModelBounds SStack_74;
  int iStack_38;
  int *piStack_34;
  SMRGLModelBounds *pSStack_30;
  SMRGLModelBounds *pSStack_2c;
  SMRGLHeaderBasic *pSStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar13 = 0;
  pSStack_30 = output_bounds;
  if (mrgl_data->type == 0x20) {
    mrgl_data_00 = engine_model_c_loadModelFile_FUN_004f7f20((char *)(mrgl_data + 3));
    engine_model_c_getMRGLBounds_FUN_004f8170(&mrgl_data_00->base,&SStack_74);
    pSVar11 = &SStack_74;
    puVar10 = &uStack_a8;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = (pSVar11->min_scaled).x;
      pSVar11 = (SMRGLModelBounds *)((int)pSVar11 + ((uint)bVar13 * -2 + 1) * 4);
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_004f80f0(mrgl_data_00);
    iVar5 = 0xd;
    puVar10 = auStack_10c;
    puVar9 = &uStack_a4;
  }
  else if (mrgl_data->type == 0x26) {
    puVar10 = &uStack_110;
    engine_boss_c_modelStructNotSupported4_FUN_0041acc0(mrgl_data);
    iVar5 = 0xd;
    puVar9 = auStack_d8;
  }
  else {
    pSStack_28 = mrgl_data + 1;
    piStack_34 = &mrgl_data[2].count;
    if (mrgl_data->type != 0x14) {
      _DAT_01d71de0 = "..\\engine\\model.c";
      _DAT_01d71de4 = 0x173;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Unable to read magnify!");
    }
    pSStack_2c = (SMRGLModelBounds *)((int)(0x7fffffff / (longlong)mrgl_data->count) * 2);
    if (pSStack_28->type != 2) {
      _sprintf(acStack_160,"Unable to read verticies in model!");
      _DAT_01d71de0 = "..\\engine\\model.c";
      _DAT_01d71de4 = 0x177;
      core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_160);
    }
    pSVar11 = pSStack_2c;
    iVar6 = 0;
    iVar12 = -0x80000000;
    iVar8 = -0x80000000;
    fStack_20 = NAN;
    iVar5 = 0x7fffffff;
    iVar7 = 0x7fffffff;
    fStack_24 = -0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    piVar2 = piStack_34;
    if (0 < pSStack_28[1].type) {
      do {
        if (iVar8 < *piVar2) {
          iVar8 = *piVar2;
        }
        if (iVar12 < piVar2[1]) {
          iVar12 = piVar2[1];
        }
        if ((int)fStack_24 < piVar2[2]) {
          fStack_24 = (float)piVar2[2];
        }
        if (*piVar2 < iVar7) {
          iVar7 = *piVar2;
        }
        if (piVar2[1] < iVar5) {
          iVar5 = piVar2[1];
        }
        if (piVar2[2] < (int)fStack_20) {
          fStack_20 = (float)piVar2[2];
        }
        iVar6 = iVar6 + 1;
        fStack_14 = (float)*piVar2 + fStack_14;
        fStack_18 = (float)piVar2[1] + fStack_18;
        fStack_1c = (float)piVar2[2] + fStack_1c;
        piVar2 = piVar2 + 3;
      } while (iVar6 < pSStack_28[1].type);
    }
    uVar3 = (uint)((longlong)(int)pSStack_2c * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)(int)pSStack_2c * (longlong)iVar8) >> 0x20) << 0x10;
    uStack_98 = (uint)((longlong)(int)pSStack_2c * (longlong)iVar12) >> 0x10 |
                (int)((ulonglong)((longlong)(int)pSStack_2c * (longlong)iVar12) >> 0x20) << 0x10;
    uStack_94 = (uint)((longlong)(int)pSStack_2c * (longlong)(int)fStack_24) >> 0x10 |
                (int)((ulonglong)((longlong)(int)pSStack_2c * (longlong)(int)fStack_24) >> 0x20) <<
                0x10;
    uVar4 = (uint)((longlong)(int)pSStack_2c * (longlong)iVar7) >> 0x10 |
            (int)((ulonglong)((longlong)(int)pSStack_2c * (longlong)iVar7) >> 0x20) << 0x10;
    uStack_a4 = (uint)((longlong)(int)pSStack_2c * (longlong)iVar5) >> 0x10 |
                (int)((ulonglong)((longlong)(int)pSStack_2c * (longlong)iVar5) >> 0x20) << 0x10;
    uStack_a0 = (uint)((longlong)(int)pSStack_2c * (longlong)(int)fStack_20) >> 0x10 |
                (int)((ulonglong)((longlong)(int)pSStack_2c * (longlong)(int)fStack_20) >> 0x20) <<
                0x10;
    fVar1 = 1.0 / (float)pSStack_28[1].type;
    fStack_14 = fStack_14 * fVar1;
    fStack_18 = fStack_18 * fVar1;
    fVar1 = fStack_1c * fVar1;
    uStack_a8 = uVar4;
    uStack_9c = uVar3;
    dVar14 = round((double)fStack_14);
    fStack_14 = (float)(int)ROUND(dVar14);
    uStack_94 = (uint)((longlong)(int)pSVar11 * (longlong)(int)fStack_14) >> 0x10 |
                (int)((ulonglong)((longlong)(int)pSVar11 * (longlong)(int)fStack_14) >> 0x20) <<
                0x10;
    fStack_20 = fVar1;
    dVar14 = round((double)fStack_1c);
    fStack_18 = (float)(int)ROUND(dVar14);
    uStack_94 = (uint)((longlong)(int)piStack_34 * (longlong)(int)fStack_18) >> 0x10 |
                (int)((ulonglong)((longlong)(int)piStack_34 * (longlong)(int)fStack_18) >> 0x20) <<
                0x10;
    dVar14 = round((double)fStack_24);
    uStack_94 = (uint)((longlong)iStack_38 * (longlong)(int)ROUND(dVar14)) >> 0x10 |
                (int)((ulonglong)((longlong)iStack_38 * (longlong)(int)ROUND(dVar14)) >> 0x20) <<
                0x10;
    iStack_8c = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = (int)uVar4 >> 0x1f;
    if (iStack_8c < (int)((uVar4 ^ uVar3) - uVar3)) {
      iStack_8c = (uVar4 ^ uVar3) - uVar3;
    }
    iStack_88 = (uStack_a4 ^ (int)uStack_a4 >> 0x1f) - ((int)uStack_a4 >> 0x1f);
    uVar3 = (int)uStack_b0 >> 0x1f;
    if (iStack_88 < (int)((uStack_b0 ^ uVar3) - uVar3)) {
      iStack_88 = (uStack_b0 ^ uVar3) - uVar3;
    }
    iStack_84 = (uStack_a0 ^ (int)uStack_a0 >> 0x1f) - ((int)uStack_a0 >> 0x1f);
    uVar3 = (int)uStack_ac >> 0x1f;
    if (iStack_84 < (int)((uStack_ac ^ uVar3) - uVar3)) {
      iStack_84 = (uStack_ac ^ uVar3) - uVar3;
    }
    fStack_1c = (float)iStack_84;
    iVar5 = 0xd;
    dVar14 = round
                       (SQRT((double)iStack_84 * (double)iStack_84 +
                             (double)iStack_88 * (double)iStack_88 +
                             (double)iStack_8c * (double)iStack_8c));
    uStack_94 = (int)ROUND(dVar14);
    puVar9 = &uStack_b4;
    puVar10 = auStack_11c;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  puVar10 = auStack_10c;
  pSVar11 = pSStack_2c;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar11->min_scaled).x = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    pSVar11 = (SMRGLModelBounds *)((int)pSVar11 + (uint)bVar13 * -8 + 4);
  }
  return pSStack_2c;
}
