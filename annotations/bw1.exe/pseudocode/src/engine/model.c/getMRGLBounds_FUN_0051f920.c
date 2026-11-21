// Name: engine_model.c_getMRGLBounds_FUN_0051f920
// Address: 0051f920
// Address Range: [[0051f920, 0051fdca]]
// Convention: __stack_esi
// Signature: SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_0051f920(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_0051f920(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

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
  int iVar9;
  SMRGLModelBounds *pSVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  byte bVar14;
  double dVar15;
  char acStack_160 [68];
  uint auStack_11c [3];
  uint uStack_110;
  uint auStack_10c [12];
  SMRGLModelBounds SStack_dc;
  uint uStack_a8;
  byte auStack_a4 [108];
  int iStack_38;
  int *piStack_34;
  SMRGLModelBounds *pSStack_30;
  int iStack_2c;
  SMRGLHeaderBasic *pSStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar14 = 0;
  pSStack_30 = output_bounds;
  if (mrgl_data->type == 0x20) {
    mrgl_data_00 = engine_model_c_loadModelFile_FUN_0051f6d0((char *)(mrgl_data + 3));
    engine_model_c_getMRGLBounds_FUN_0051f920
              (&mrgl_data_00->base,(SMRGLModelBounds *)(auStack_a4 + 0x30));
    puVar11 = (uint *)(auStack_a4 + 0x30);
    puVar13 = &uStack_a8;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_0051f8a0(mrgl_data_00);
    iVar6 = 0xd;
    puVar11 = auStack_10c;
    pSVar10 = (SMRGLModelBounds *)auStack_a4;
  }
  else if (mrgl_data->type == 0x26) {
    puVar11 = &uStack_110;
    engine_boss_c_modelStructNotSupported4_FUN_0041d980((SMRGLHeaderExtended *)mrgl_data,&SStack_dc)
    ;
    iVar6 = 0xd;
    pSVar10 = &SStack_dc;
  }
  else {
    pSStack_28 = mrgl_data + 1;
    piStack_34 = &mrgl_data[2].count;
    if (mrgl_data->type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 371;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Unable to read magnify!");
    }
    iStack_2c = (int)(0x7fffffff / (longlong)mrgl_data->count) * 2;
    if (pSStack_28->type != 2) {
      _sprintf(acStack_160,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 375;
      core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_160);
    }
    iVar6 = iStack_2c;
    iVar7 = 0;
    iVar12 = -0x80000000;
    iVar9 = -0x80000000;
    fStack_20 = NAN;
    iVar5 = 0x7fffffff;
    iVar8 = 0x7fffffff;
    fStack_24 = -0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    piVar2 = piStack_34;
    if (0 < pSStack_28[1].type) {
      do {
        if (iVar9 < *piVar2) {
          iVar9 = *piVar2;
        }
        if (iVar12 < piVar2[1]) {
          iVar12 = piVar2[1];
        }
        if ((int)fStack_24 < piVar2[2]) {
          fStack_24 = (float)piVar2[2];
        }
        if (*piVar2 < iVar8) {
          iVar8 = *piVar2;
        }
        if (piVar2[1] < iVar5) {
          iVar5 = piVar2[1];
        }
        if (piVar2[2] < (int)fStack_20) {
          fStack_20 = (float)piVar2[2];
        }
        iVar7 = iVar7 + 1;
        fStack_14 = (float)*piVar2 + fStack_14;
        fStack_18 = (float)piVar2[1] + fStack_18;
        fStack_1c = (float)piVar2[2] + fStack_1c;
        piVar2 = piVar2 + 3;
      } while (iVar7 < pSStack_28[1].type);
    }
    uVar3 = (uint)((longlong)iStack_2c * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)iStack_2c * (longlong)iVar9) >> 0x20) << 0x10;
    auStack_a4._12_4_ =
         (uint)((longlong)iStack_2c * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)iStack_2c * (longlong)iVar12) >> 0x20) << 0x10;
    auStack_a4._16_4_ =
         (uint)((longlong)iStack_2c * (longlong)(int)fStack_24) >> 0x10 |
         (int)((ulonglong)((longlong)iStack_2c * (longlong)(int)fStack_24) >> 0x20) << 0x10;
    uVar4 = (uint)((longlong)iStack_2c * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iStack_2c * (longlong)iVar8) >> 0x20) << 0x10;
    auStack_a4._0_4_ =
         (uint)((longlong)iStack_2c * (longlong)iVar5) >> 0x10 |
         (int)((ulonglong)((longlong)iStack_2c * (longlong)iVar5) >> 0x20) << 0x10;
    auStack_a4._4_4_ =
         (uint)((longlong)iStack_2c * (longlong)(int)fStack_20) >> 0x10 |
         (int)((ulonglong)((longlong)iStack_2c * (longlong)(int)fStack_20) >> 0x20) << 0x10;
    fVar1 = 1.0 / (float)pSStack_28[1].type;
    fStack_14 = fStack_14 * fVar1;
    fStack_18 = fStack_18 * fVar1;
    fVar1 = fStack_1c * fVar1;
    uStack_a8 = uVar4;
    auStack_a4._8_4_ = uVar3;
    dVar15 = round((double)fStack_14);
    fStack_14 = (float)(int)ROUND(dVar15);
    auStack_a4._16_4_ =
         (uint)((longlong)iVar6 * (longlong)(int)fStack_14) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * (longlong)(int)fStack_14) >> 0x20) << 0x10;
    fStack_20 = fVar1;
    dVar15 = round((double)fStack_1c);
    fStack_18 = (float)(int)ROUND(dVar15);
    auStack_a4._16_4_ =
         (uint)((longlong)(int)piStack_34 * (longlong)(int)fStack_18) >> 0x10 |
         (int)((ulonglong)((longlong)(int)piStack_34 * (longlong)(int)fStack_18) >> 0x20) << 0x10;
    dVar15 = round((double)fStack_24);
    auStack_a4._16_4_ =
         (uint)((longlong)iStack_38 * (longlong)(int)ROUND(dVar15)) >> 0x10 |
         (int)((ulonglong)((longlong)iStack_38 * (longlong)(int)ROUND(dVar15)) >> 0x20) << 0x10;
    auStack_a4._24_4_ = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = (int)uVar4 >> 0x1f;
    if ((int)auStack_a4._24_4_ < (int)((uVar4 ^ uVar3) - uVar3)) {
      auStack_a4._24_4_ = (uVar4 ^ uVar3) - uVar3;
    }
    auStack_a4._28_4_ =
         (auStack_a4._0_4_ ^ (int)auStack_a4._0_4_ >> 0x1f) - ((int)auStack_a4._0_4_ >> 0x1f);
    uVar3 = SStack_dc.extent.y >> 0x1f;
    if ((int)auStack_a4._28_4_ < (int)((SStack_dc.extent.y ^ uVar3) - uVar3)) {
      auStack_a4._28_4_ = (SStack_dc.extent.y ^ uVar3) - uVar3;
    }
    auStack_a4._32_4_ =
         (auStack_a4._4_4_ ^ (int)auStack_a4._4_4_ >> 0x1f) - ((int)auStack_a4._4_4_ >> 0x1f);
    uVar3 = SStack_dc.extent.z >> 0x1f;
    if ((int)auStack_a4._32_4_ < (int)((SStack_dc.extent.z ^ uVar3) - uVar3)) {
      auStack_a4._32_4_ = (SStack_dc.extent.z ^ uVar3) - uVar3;
    }
    fStack_1c = (float)auStack_a4._32_4_;
    iVar6 = 0xd;
    dVar15 = round
                       (SQRT((double)(int)auStack_a4._32_4_ * (double)(int)auStack_a4._32_4_ +
                             (double)(int)auStack_a4._28_4_ * (double)(int)auStack_a4._28_4_ +
                             (double)(int)auStack_a4._24_4_ * (double)(int)auStack_a4._24_4_));
    auStack_a4._16_4_ = (int)ROUND(dVar15);
    pSVar10 = (SMRGLModelBounds *)&SStack_dc.extent;
    puVar11 = auStack_11c;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = (pSVar10->min_scaled).x;
    pSVar10 = (SMRGLModelBounds *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
  }
  puVar11 = &uStack_110;
  pSVar10 = pSStack_30;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar10->min_scaled).x = *puVar11;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
    pSVar10 = (SMRGLModelBounds *)((int)pSVar10 + (uint)bVar14 * -8 + 4);
  }
  return pSStack_30;
}
