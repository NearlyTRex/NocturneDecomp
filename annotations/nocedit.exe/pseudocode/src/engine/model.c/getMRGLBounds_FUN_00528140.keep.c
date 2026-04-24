// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// MANUAL RECONSTRUCTION
// Address Range: [[00528140, 005285ea] [03fc3673, 03fc3741]]
// Convention: __stack_esi
// Signature: SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *output_bounds)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *output_bounds)

{
  longlong lVar1;
  int *piVar3;
  SMRGLHeaderExtended *mrgl_data_00;
  int iVar6;
  int iVar4;
  int iVar7;
  uint uVar8;
  uint uVar5;
  int iVar9;
  int iVar10;
  SMRGLModelBounds *puVar11;
  uint *puVar12;
  SMRGLModelBounds *pSVar13;
  int iVar14;
  SMRGLModelBounds *pSVar6;
  byte bVar15;
  char local_160 [80];
  SMRGLModelBounds local_110;
  SMRGLModelBounds local_dc;
  SMRGLModelBounds local_a8;
  SMRGLModelBounds local_74;
  int *local_34;
  SMRGLModelBounds *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  longlong lVar4;
  int *piVar2;
  float fVar5;
  int *piVar1;
  int iVar3;
  
  bVar15 = 0;
  iVar4 = (mrgl_data->base).type;
  if (iVar4 == 0x20) {
    mrgl_data_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(mrgl_data + 2));
    engine_model_c_getMRGLBounds_FUN_00528140(mrgl_data_00,&local_74);
    engine_model_c_freeMRGLData_FUN_005280b0(mrgl_data_00);
    iVar4 = 0xd;
    pSVar6 = &local_110;
    puVar11 = &local_a8;
  }
  else if (iVar4 == 0x26) {
    pSVar6 = &local_110;
    engine_boss_c_modelStructNotSupported4_FUN_0041dbe0(mrgl_data,&local_dc);
    iVar4 = 0xd;
    puVar11 = &local_dc;
  }
  else {
    piVar3 = &mrgl_data[1].child_count;
    if ((mrgl_data->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar4 = (int)(0x7fffffff / (longlong)(mrgl_data->base).count) * 2;
    if (mrgl_data->child_count != 2) {
      _sprintf(local_160,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x176;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_160);
    }
    iVar7 = 0;
    iVar14 = -0x80000000;
    iVar10 = -0x80000000;
    local_20 = 0x7fffffff;
    iVar6 = 0x7fffffff;
    iVar9 = 0x7fffffff;
    local_24 = -0x80000000;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    if (0 < mrgl_data[1].base.count) {
      do {
        if (iVar10 < *piVar3) {
          iVar10 = *piVar3;
        }
        if (iVar14 < piVar3[1]) {
          iVar14 = piVar3[1];
        }
        if (local_24 < piVar3[2]) {
          local_24 = piVar3[2];
        }
        if (*piVar3 < iVar9) {
          iVar9 = *piVar3;
        }
        if (piVar3[1] < iVar6) {
          iVar6 = piVar3[1];
        }
        if (piVar3[2] < local_20) {
          local_20 = piVar3[2];
        }
        iVar3 = *piVar3;
        piVar1 = piVar3 + 1;
        piVar2 = piVar3 + 2;
        piVar3 = piVar3 + 3;
        iVar7 = iVar7 + 1;
        local_14 = (float)iVar3 + local_14;
        local_18 = (float)*piVar1 + local_18;
        local_1c = (float)*piVar2 + local_1c;
      } while (iVar7 < mrgl_data[1].base.count);
    }
    local_a8.max_scaled.x =
         (uint)((longlong)iVar4 * (longlong)iVar10) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar10) >> 0x20) << 0x10;
    local_a8.max_scaled.y =
         (uint)((longlong)iVar4 * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar14) >> 0x20) << 0x10;
    local_a8.max_scaled.z =
         (uint)((longlong)iVar4 * (longlong)local_24) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)local_24) >> 0x20) << 0x10;
    local_a8.min_scaled.x =
         (uint)((longlong)iVar4 * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar9) >> 0x20) << 0x10;
    local_a8.min_scaled.y =
         (uint)((longlong)iVar4 * (longlong)iVar6) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar6) >> 0x20) << 0x10;
    local_a8.min_scaled.z =
         (uint)((longlong)iVar4 * (longlong)local_20) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)local_20) >> 0x20) << 0x10;
    fVar5 = 1.0 / (float)mrgl_data[1].base.count;
    lVar4 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_14 * fVar5));
    local_a8.center_scaled.x = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_18 * fVar5));
    local_a8.center_scaled.y = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_1c * fVar5));
    local_a8.center_scaled.z = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    local_a8.extent.x =
         (local_a8.max_scaled.x ^ local_a8.max_scaled.x >> 0x1f) - (local_a8.max_scaled.x >> 0x1f);
    uVar8 = local_a8.min_scaled.x >> 0x1f;
    if (local_a8.extent.x < (int)((local_a8.min_scaled.x ^ uVar8) - uVar8)) {
      local_a8.extent.x = (local_a8.min_scaled.x ^ uVar8) - uVar8;
    }
    local_a8.extent.y =
         (local_a8.max_scaled.y ^ local_a8.max_scaled.y >> 0x1f) - (local_a8.max_scaled.y >> 0x1f);
    uVar5 = local_a8.min_scaled.y >> 0x1f;
    if (local_a8.extent.y < (int)((local_a8.min_scaled.y ^ uVar5) - uVar5)) {
      local_a8.extent.y = (local_a8.min_scaled.y ^ uVar5) - uVar5;
    }
    local_a8.extent.z =
         (local_a8.max_scaled.z ^ local_a8.max_scaled.z >> 0x1f) - (local_a8.max_scaled.z >> 0x1f);
    uVar5 = local_a8.min_scaled.z >> 0x1f;
    if (local_a8.extent.z < (int)((local_a8.min_scaled.z ^ uVar5) - uVar5)) {
      local_a8.extent.z = (local_a8.min_scaled.z ^ uVar5) - uVar5;
    }
    iVar4 = 0xd;
    local_a8.radius_scaled =
         (int)ROUND(ROUND(SQRT((float10)local_a8.extent.z * (float10)local_a8.extent.z +
                               (float10)local_a8.extent.y * (float10)local_a8.extent.y +
                               (float10)local_a8.extent.x * (float10)local_a8.extent.x)));
    puVar11 = &local_a8;
    pSVar6 = &local_110;
  }
  local_110 = *puVar11;
  *output_bounds = local_110;
  return output_bounds;
}
