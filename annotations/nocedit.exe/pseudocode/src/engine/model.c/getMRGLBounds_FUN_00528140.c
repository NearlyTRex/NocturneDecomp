// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
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
  uint *puVar11;
  uint *puVar12;
  SMRGLModelBounds *pSVar13;
  int iVar14;
  uint *puVar6;
  byte bVar15;
  char local_160 [80];
  uint local_110 [13];
  uint local_dc [13];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
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
    pSVar13 = &local_74;
    puVar6 = &local_a8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      pSVar13 = (SMRGLModelBounds *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
      *puVar6 = (pSVar13->min_scaled).x;
      pSVar13 = pSVar13;
      puVar6 = puVar6 + (uint)bVar15 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(mrgl_data_00);
    iVar4 = 0xd;
    puVar6 = local_110;
    puVar11 = &local_a8;
  }
  else if (iVar4 == 0x26) {
    puVar6 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0((SMRGLHeaderExtended *)local_dc);
    iVar4 = 0xd;
    puVar11 = local_110 + 0xc;
  }
  else {
    local_34 = &mrgl_data[1].child_count;
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
    piVar3 = local_34;
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
        iVar7 = iVar7 + 1;
        local_14 = (float)iVar3 + local_14;
        local_18 = (float)*piVar1 + local_18;
        local_1c = (float)*piVar2 + local_1c;
        piVar3 = piVar3 + 3;
      } while (iVar7 < mrgl_data[1].base.count);
    }
    local_9c = (uint)((longlong)iVar4 * (longlong)iVar10) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)iVar10) >> 0x20) << 0x10;
    local_98 = (uint)((longlong)iVar4 * (longlong)iVar14) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)iVar14) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar4 * (longlong)local_24) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)local_24) >> 0x20) << 0x10;
    local_a8 = (uint)((longlong)iVar4 * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)iVar9) >> 0x20) << 0x10;
    local_a4 = (uint)((longlong)iVar4 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)iVar6) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar4 * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)local_20) >> 0x20) << 0x10;
    fVar5 = 1.0 / (float)mrgl_data[1].base.count;
    lVar4 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_14 * fVar5));
    local_90 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_18 * fVar5));
    local_8c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_1c * fVar5));
    local_88 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    local_80 = (local_9c ^ (int)local_9c >> 0x1f) - ((int)local_9c >> 0x1f);
    uVar8 = (int)local_a8 >> 0x1f;
    if (local_80 < (int)((local_a8 ^ uVar8) - uVar8)) {
      local_80 = (local_a8 ^ uVar8) - uVar8;
    }
    local_7c = (local_98 ^ (int)local_98 >> 0x1f) - ((int)local_98 >> 0x1f);
    uVar5 = (int)local_a4 >> 0x1f;
    if (local_7c < (int)((local_a4 ^ uVar5) - uVar5)) {
      local_7c = (local_a4 ^ uVar5) - uVar5;
    }
    local_78 = (local_94 ^ (int)local_94 >> 0x1f) - ((int)local_94 >> 0x1f);
    uVar5 = (int)local_a0 >> 0x1f;
    if (local_78 < (int)((local_a0 ^ uVar5) - uVar5)) {
      local_78 = (local_a0 ^ uVar5) - uVar5;
    }
    iVar4 = 0xd;
    local_84 = (int)ROUND(ROUND(SQRT((float10)local_78 * (float10)local_78 +
                                     (float10)local_7c * (float10)local_7c +
                                     (float10)local_80 * (float10)local_80)));
    puVar11 = &local_a8;
    puVar6 = local_110;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
    *puVar6 = *puVar11;
    puVar11 = puVar11;
    puVar6 = puVar6 + (uint)bVar15 * -2 + 1;
  }
  puVar12 = (uint *)(local_160 + 0x4c);
  puVar6 = (uint *)local_34;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    *puVar6 = *puVar12;
    puVar12 = puVar12;
    puVar6 = puVar6 + (uint)bVar15 * -2 + 1;
  }
  return (SMRGLModelBounds *)local_34;
}
