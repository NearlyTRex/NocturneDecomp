// Name: engine_model.c_getMRGLBounds_FUN_004dcf60
// Address: 004dcf60
// Address Range: [[004dcf60, 004dd40a]]
// Convention: __stack_esi
// Signature: SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_004dcf60(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

#include "nocturne.h"

SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_004dcf60(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

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
  uint *puVar10;
  uint *puVar11;
  SMRGLModelBounds *pSVar12;
  int iVar13;
  byte bVar14;
  double dVar15;
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
  SMRGLModelBounds local_74;
  int local_38;
  int *local_34;
  SMRGLModelBounds *local_30;
  int local_2c;
  SMRGLHeaderBasic *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar14 = 0;
  local_30 = output_bounds;
  if (mrgl_data->type == 0x20) {
    mrgl_data_00 = engine_model_c_loadModelFile_FUN_004dcd10((char *)(mrgl_data + 3));
    engine_model_c_getMRGLBounds_FUN_004dcf60(&mrgl_data_00->base,&local_74);
    pSVar12 = &local_74;
    puVar11 = &local_a8;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = (pSVar12->min_scaled).x;
      pSVar12 = (SMRGLModelBounds *)((int)pSVar12 + ((uint)bVar14 * -2 + 1) * 4);
      puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_004dcee0(mrgl_data_00);
    iVar6 = 0xd;
    puVar11 = local_110;
    puVar10 = &local_a8;
  }
  else if (mrgl_data->type == 0x26) {
    puVar11 = local_110;
    engine_boss_c_modelStructNotSupported4_FUN_0041a5a0(mrgl_data);
    iVar6 = 0xd;
    puVar10 = local_dc;
  }
  else {
    local_28 = mrgl_data + 1;
    local_34 = &mrgl_data[2].count;
    if (mrgl_data->type != 0x14) {
      g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
      g_INT_01cc4804 = 0x172;
      core_main_c_FUN_004c8440("Unable to read magnify!");
    }
    local_2c = (int)(0x7fffffff / (longlong)mrgl_data->count) * 2;
    if (local_28->type != 2) {
      _sprintf(local_160,"Unable to read verticies in model!");
      g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
      g_INT_01cc4804 = 0x176;
      core_main_c_FUN_004c8440(local_160);
    }
    iVar6 = local_2c;
    iVar7 = 0;
    iVar13 = -0x80000000;
    iVar9 = -0x80000000;
    local_20 = NAN;
    iVar5 = 0x7fffffff;
    iVar8 = 0x7fffffff;
    local_24 = -0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    piVar2 = local_34;
    if (0 < local_28[1].type) {
      do {
        if (iVar9 < *piVar2) {
          iVar9 = *piVar2;
        }
        if (iVar13 < piVar2[1]) {
          iVar13 = piVar2[1];
        }
        if ((int)local_24 < piVar2[2]) {
          local_24 = (float)piVar2[2];
        }
        if (*piVar2 < iVar8) {
          iVar8 = *piVar2;
        }
        if (piVar2[1] < iVar5) {
          iVar5 = piVar2[1];
        }
        if (piVar2[2] < (int)local_20) {
          local_20 = (float)piVar2[2];
        }
        iVar7 = iVar7 + 1;
        local_14 = (float)*piVar2 + local_14;
        local_18 = (float)piVar2[1] + local_18;
        local_1c = (float)piVar2[2] + local_1c;
        piVar2 = piVar2 + 3;
      } while (iVar7 < local_28[1].type);
    }
    uVar3 = (uint)((longlong)local_2c * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)local_2c * (longlong)iVar9) >> 0x20) << 0x10;
    local_98 = (uint)((longlong)local_2c * (longlong)iVar13) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)iVar13) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)local_2c * (longlong)(int)local_24) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)(int)local_24) >> 0x20) << 0x10;
    uVar4 = (uint)((longlong)local_2c * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)local_2c * (longlong)iVar8) >> 0x20) << 0x10;
    local_a4 = (uint)((longlong)local_2c * (longlong)iVar5) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)iVar5) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)local_2c * (longlong)(int)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)(int)local_20) >> 0x20) << 0x10;
    fVar1 = 1.0 / (float)local_28[1].type;
    local_14 = local_14 * fVar1;
    local_18 = local_18 * fVar1;
    fVar1 = local_1c * fVar1;
    local_a8 = uVar4;
    local_9c = uVar3;
    dVar15 = round((double)local_14);
    local_14 = (float)(int)ROUND(dVar15);
    local_94 = (uint)((longlong)iVar6 * (longlong)(int)local_14) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)(int)local_14) >> 0x20) << 0x10;
    local_20 = fVar1;
    dVar15 = round((double)local_1c);
    local_18 = (float)(int)ROUND(dVar15);
    local_94 = (uint)((longlong)(int)local_34 * (longlong)(int)local_18) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_34 * (longlong)(int)local_18) >> 0x20) << 0x10
    ;
    dVar15 = round((double)local_24);
    local_94 = (uint)((longlong)local_38 * (longlong)(int)ROUND(dVar15)) >> 0x10 |
               (int)((ulonglong)((longlong)local_38 * (longlong)(int)ROUND(dVar15)) >> 0x20) << 0x10
    ;
    local_8c = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = (int)uVar4 >> 0x1f;
    if (local_8c < (int)((uVar4 ^ uVar3) - uVar3)) {
      local_8c = (uVar4 ^ uVar3) - uVar3;
    }
    local_88 = (local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f);
    uVar3 = (int)local_b0 >> 0x1f;
    if (local_88 < (int)((local_b0 ^ uVar3) - uVar3)) {
      local_88 = (local_b0 ^ uVar3) - uVar3;
    }
    local_84 = (local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f);
    uVar3 = (int)local_ac >> 0x1f;
    if (local_84 < (int)((local_ac ^ uVar3) - uVar3)) {
      local_84 = (local_ac ^ uVar3) - uVar3;
    }
    local_1c = (float)local_84;
    iVar6 = 0xd;
    dVar15 = round
                       (SQRT((double)local_84 * (double)local_84 +
                             (double)local_88 * (double)local_88 +
                             (double)local_8c * (double)local_8c));
    local_94 = (int)ROUND(dVar15);
    puVar10 = &local_b4;
    puVar11 = local_11c;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
  }
  puVar11 = local_110;
  pSVar12 = local_30;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar12->min_scaled).x = *puVar11;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
    pSVar12 = (SMRGLModelBounds *)((int)pSVar12 + (uint)bVar14 * -8 + 4);
  }
  return local_30;
}
