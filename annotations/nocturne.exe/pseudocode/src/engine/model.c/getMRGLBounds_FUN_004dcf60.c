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
  SMRGLModelBounds *pSVar10;
  int iVar11;
  SMRGLModelBounds *pSVar12;
  byte bVar13;
  double dVar14;
  char local_160 [68];
  int local_11c [3];
  int local_110 [13];
  byte local_dc [44];
  uint local_b0;
  uint local_ac;
  SMRGLModelBounds local_a8;
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
  
  bVar13 = 0;
  local_30 = output_bounds;
  if (mrgl_data->type == 0x20) {
    mrgl_data_00 = engine_model_c_loadModelFile_FUN_004dcd10((char *)(mrgl_data + 3));
    engine_model_c_getMRGLBounds_FUN_004dcf60(&mrgl_data_00->base,&local_74);
    pSVar10 = &local_74;
    pSVar12 = &local_a8;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      (pSVar12->min_scaled).x = (pSVar10->min_scaled).x;
      pSVar10 = (SMRGLModelBounds *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
      pSVar12 = (SMRGLModelBounds *)((int)pSVar12 + ((uint)bVar13 * -2 + 1) * 4);
    }
    engine_model_c_freeMRGLData_FUN_004dcee0(mrgl_data_00);
    iVar6 = 0xd;
    piVar2 = local_110;
    pSVar10 = &local_a8;
  }
  else if (mrgl_data->type == 0x26) {
    piVar2 = local_110;
    engine_boss_c_modelStructNotSupported4_FUN_0041a5a0
              ((SMRGLHeaderExtended *)mrgl_data,(SMRGLModelBounds *)local_dc);
    iVar6 = 0xd;
    pSVar10 = (SMRGLModelBounds *)local_dc;
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
    iVar11 = -0x80000000;
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
        if (iVar11 < piVar2[1]) {
          iVar11 = piVar2[1];
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
    local_a8.max_scaled.y =
         (uint)((longlong)local_2c * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)local_2c * (longlong)iVar11) >> 0x20) << 0x10;
    local_a8.max_scaled.z =
         (uint)((longlong)local_2c * (longlong)(int)local_24) >> 0x10 |
         (int)((ulonglong)((longlong)local_2c * (longlong)(int)local_24) >> 0x20) << 0x10;
    uVar4 = (uint)((longlong)local_2c * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)local_2c * (longlong)iVar8) >> 0x20) << 0x10;
    local_a8.min_scaled.y =
         (uint)((longlong)local_2c * (longlong)iVar5) >> 0x10 |
         (int)((ulonglong)((longlong)local_2c * (longlong)iVar5) >> 0x20) << 0x10;
    local_a8.min_scaled.z =
         (uint)((longlong)local_2c * (longlong)(int)local_20) >> 0x10 |
         (int)((ulonglong)((longlong)local_2c * (longlong)(int)local_20) >> 0x20) << 0x10;
    fVar1 = 1.0 / (float)local_28[1].type;
    local_14 = local_14 * fVar1;
    local_18 = local_18 * fVar1;
    fVar1 = local_1c * fVar1;
    local_a8.min_scaled.x = uVar4;
    local_a8.max_scaled.x = uVar3;
    dVar14 = round((double)local_14);
    local_14 = (float)(int)ROUND(dVar14);
    local_a8.max_scaled.z =
         (uint)((longlong)iVar6 * (longlong)(int)local_14) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * (longlong)(int)local_14) >> 0x20) << 0x10;
    local_20 = fVar1;
    dVar14 = round((double)local_1c);
    local_18 = (float)(int)ROUND(dVar14);
    local_a8.max_scaled.z =
         (uint)((longlong)(int)local_34 * (longlong)(int)local_18) >> 0x10 |
         (int)((ulonglong)((longlong)(int)local_34 * (longlong)(int)local_18) >> 0x20) << 0x10;
    dVar14 = round((double)local_24);
    local_a8.max_scaled.z =
         (uint)((longlong)local_38 * (longlong)(int)ROUND(dVar14)) >> 0x10 |
         (int)((ulonglong)((longlong)local_38 * (longlong)(int)ROUND(dVar14)) >> 0x20) << 0x10;
    local_a8.center_scaled.y = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = (int)uVar4 >> 0x1f;
    if (local_a8.center_scaled.y < (int)((uVar4 ^ uVar3) - uVar3)) {
      local_a8.center_scaled.y = (uVar4 ^ uVar3) - uVar3;
    }
    local_a8.center_scaled.z =
         (local_a8.min_scaled.y ^ local_a8.min_scaled.y >> 0x1f) - (local_a8.min_scaled.y >> 0x1f);
    uVar3 = (int)local_b0 >> 0x1f;
    if (local_a8.center_scaled.z < (int)((local_b0 ^ uVar3) - uVar3)) {
      local_a8.center_scaled.z = (local_b0 ^ uVar3) - uVar3;
    }
    local_a8.radius_scaled =
         (local_a8.min_scaled.z ^ local_a8.min_scaled.z >> 0x1f) - (local_a8.min_scaled.z >> 0x1f);
    uVar3 = (int)local_ac >> 0x1f;
    if (local_a8.radius_scaled < (int)((local_ac ^ uVar3) - uVar3)) {
      local_a8.radius_scaled = (local_ac ^ uVar3) - uVar3;
    }
    local_1c = (float)local_a8.radius_scaled;
    iVar6 = 0xd;
    dVar14 = round
                       (SQRT((double)local_a8.radius_scaled * (double)local_a8.radius_scaled +
                             (double)local_a8.center_scaled.z * (double)local_a8.center_scaled.z +
                             (double)local_a8.center_scaled.y * (double)local_a8.center_scaled.y));
    local_a8.max_scaled.z = (int)ROUND(dVar14);
    pSVar10 = (SMRGLModelBounds *)(local_dc + 0x28);
    piVar2 = local_11c;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar2 = (pSVar10->min_scaled).x;
    pSVar10 = (SMRGLModelBounds *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
    piVar2 = piVar2 + (uint)bVar13 * -2 + 1;
  }
  piVar2 = local_110;
  pSVar10 = local_30;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar10->min_scaled).x = *piVar2;
    piVar2 = piVar2 + (uint)bVar13 * -2 + 1;
    pSVar10 = (SMRGLModelBounds *)((int)pSVar10 + (uint)bVar13 * -8 + 4);
  }
  return local_30;
}
