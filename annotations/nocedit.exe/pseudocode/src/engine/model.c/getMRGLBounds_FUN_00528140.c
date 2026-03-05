// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
// Convention: __stack_esi
// Signature: SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output_bounds)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output_bounds)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  SMRGLHeaderExtended *header_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  SMRGLModelBounds *pSVar13;
  int iVar14;
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
  
  bVar15 = 0;
  local_30 = output_bounds;
  iVar6 = (header->base).type;
  if (iVar6 == 0x20) {
    header_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(header + 2));
    engine_model_c_getMRGLBounds_FUN_00528140(header_00,&local_74);
    pSVar13 = &local_74;
    puVar12 = &local_a8;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = (pSVar13->min_scaled).x;
      pSVar13 = (SMRGLModelBounds *)((int)pSVar13 + ((uint)bVar15 * -2 + 1) * 4);
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(header_00);
    iVar6 = 0xd;
    puVar12 = local_110;
    puVar11 = &local_a8;
  }
  else if (iVar6 == 0x26) {
    puVar12 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0(header);
    iVar6 = 0xd;
    puVar11 = local_dc;
  }
  else {
    local_28 = &header->child_count;
    local_34 = &header[1].child_count;
    if ((header->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    local_2c = (int)(0x7fffffff / (longlong)(header->base).count) * 2;
    if (*local_28 != 2) {
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
    if (0 < local_28[2]) {
      do {
        if (iVar10 < *local_34) {
          iVar10 = *local_34;
        }
        if (iVar14 < local_34[1]) {
          iVar14 = local_34[1];
        }
        if (local_24 < local_34[2]) {
          local_24 = local_34[2];
        }
        if (*local_34 < iVar9) {
          iVar9 = *local_34;
        }
        if (local_34[1] < iVar6) {
          iVar6 = local_34[1];
        }
        if (local_34[2] < local_20) {
          local_20 = local_34[2];
        }
        iVar3 = *local_34;
        piVar1 = local_34 + 1;
        piVar2 = local_34 + 2;
        local_34 = local_34 + 3;
        iVar7 = iVar7 + 1;
        local_14 = (float)iVar3 + local_14;
        local_18 = (float)*piVar1 + local_18;
        local_1c = (float)*piVar2 + local_1c;
      } while (iVar7 < local_28[2]);
    }
    local_9c = (uint)((longlong)local_2c * (longlong)iVar10) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)iVar10) >> 0x20) << 0x10;
    local_98 = (uint)((longlong)local_2c * (longlong)iVar14) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)iVar14) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)local_2c * (longlong)local_24) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)local_24) >> 0x20) << 0x10;
    local_a8 = (uint)((longlong)local_2c * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)iVar9) >> 0x20) << 0x10;
    local_a4 = (uint)((longlong)local_2c * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)iVar6) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)local_2c * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)local_20) >> 0x20) << 0x10;
    fVar5 = 1.0 / (float)local_28[2];
    local_14 = local_14 * fVar5;
    local_18 = local_18 * fVar5;
    local_1c = local_1c * fVar5;
    lVar4 = (longlong)local_2c * (longlong)(int)ROUND(ROUND(local_14));
    local_90 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)local_2c * (longlong)(int)ROUND(ROUND(local_18));
    local_8c = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)local_2c * (longlong)(int)ROUND(ROUND(local_1c));
    local_88 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    local_80 = (local_9c ^ (int)local_9c >> 0x1f) - ((int)local_9c >> 0x1f);
    uVar8 = (int)local_a8 >> 0x1f;
    if (local_80 < (int)((local_a8 ^ uVar8) - uVar8)) {
      local_80 = (local_a8 ^ uVar8) - uVar8;
    }
    local_7c = (local_98 ^ (int)local_98 >> 0x1f) - ((int)local_98 >> 0x1f);
    uVar8 = (int)local_a4 >> 0x1f;
    if (local_7c < (int)((local_a4 ^ uVar8) - uVar8)) {
      local_7c = (local_a4 ^ uVar8) - uVar8;
    }
    local_78 = (local_94 ^ (int)local_94 >> 0x1f) - ((int)local_94 >> 0x1f);
    uVar8 = (int)local_a0 >> 0x1f;
    if (local_78 < (int)((local_a0 ^ uVar8) - uVar8)) {
      local_78 = (local_a0 ^ uVar8) - uVar8;
    }
    local_10 = local_78;
    iVar6 = 0xd;
    local_84 = (int)ROUND(ROUND(SQRT((float10)local_78 * (float10)local_78 +
                                     (float10)local_7c * (float10)local_7c +
                                     (float10)local_80 * (float10)local_80)));
    puVar11 = &local_a8;
    puVar12 = local_110;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
  }
  puVar12 = local_110;
  pSVar13 = local_30;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar13->min_scaled).x = *puVar12;
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    pSVar13 = (SMRGLModelBounds *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
  }
  return local_30;
}
