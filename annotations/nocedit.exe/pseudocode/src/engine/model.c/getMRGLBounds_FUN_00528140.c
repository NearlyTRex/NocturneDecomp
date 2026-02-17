// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  SMRGLHeaderExtended *header_00;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *unaff_ESI;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  byte bVar15;
  SMRGLModelBounds *in_stack_fffffea0;
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
  uint local_74 [16];
  int *local_34;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar15 = 0;
  iVar7 = (header->base).type;
  if (iVar7 == 0x20) {
    header_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(header + 2));
    engine_model_c_getMRGLBounds_FUN_00528140(header_00,in_stack_fffffea0);
    puVar13 = local_74;
    puVar12 = &local_a8;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(header_00);
    iVar7 = 0xd;
    puVar13 = local_110;
    puVar12 = &local_a8;
  }
  else if (iVar7 == 0x26) {
    puVar13 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0(header);
    iVar7 = 0xd;
    puVar12 = local_dc;
  }
  else {
    local_34 = &header[1].child_count;
    if ((header->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar7 = (int)(0x7fffffff / (longlong)(header->base).count) * 2;
    if (header->child_count != 2) {
      _sprintf(&stack0xfffffea0,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x176;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffea0);
    }
    iVar8 = 0;
    iVar14 = -0x80000000;
    iVar11 = -0x80000000;
    local_20 = 0x7fffffff;
    iVar6 = 0x7fffffff;
    iVar10 = 0x7fffffff;
    local_24 = -0x80000000;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    if (0 < header[1].base.count) {
      do {
        if (iVar11 < *local_34) {
          iVar11 = *local_34;
        }
        if (iVar14 < local_34[1]) {
          iVar14 = local_34[1];
        }
        if (local_24 < local_34[2]) {
          local_24 = local_34[2];
        }
        if (*local_34 < iVar10) {
          iVar10 = *local_34;
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
        iVar8 = iVar8 + 1;
        local_14 = (float)iVar3 + local_14;
        local_18 = (float)*piVar1 + local_18;
        local_1c = (float)*piVar2 + local_1c;
      } while (iVar8 < header[1].base.count);
    }
    local_9c = (uint)((longlong)iVar7 * (longlong)iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20) << 0x10;
    local_98 = (uint)((longlong)iVar7 * (longlong)iVar14) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar14) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar7 * (longlong)local_24) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)local_24) >> 0x20) << 0x10;
    local_a8 = (uint)((longlong)iVar7 * (longlong)iVar10) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) << 0x10;
    local_a4 = (uint)((longlong)iVar7 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar6) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar7 * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)local_20) >> 0x20) << 0x10;
    fVar5 = 1.0 / (float)header[1].base.count;
    lVar4 = (longlong)iVar7 * (longlong)(int)ROUND(ROUND(local_14 * fVar5));
    local_90 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)iVar7 * (longlong)(int)ROUND(ROUND(local_18 * fVar5));
    local_8c = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)iVar7 * (longlong)(int)ROUND(ROUND(local_1c * fVar5));
    local_88 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    local_80 = (local_9c ^ (int)local_9c >> 0x1f) - ((int)local_9c >> 0x1f);
    uVar9 = (int)local_a8 >> 0x1f;
    if (local_80 < (int)((local_a8 ^ uVar9) - uVar9)) {
      local_80 = (local_a8 ^ uVar9) - uVar9;
    }
    local_7c = (local_98 ^ (int)local_98 >> 0x1f) - ((int)local_98 >> 0x1f);
    uVar9 = (int)local_a4 >> 0x1f;
    if (local_7c < (int)((local_a4 ^ uVar9) - uVar9)) {
      local_7c = (local_a4 ^ uVar9) - uVar9;
    }
    local_78 = (local_94 ^ (int)local_94 >> 0x1f) - ((int)local_94 >> 0x1f);
    uVar9 = (int)local_a0 >> 0x1f;
    if (local_78 < (int)((local_a0 ^ uVar9) - uVar9)) {
      local_78 = (local_a0 ^ uVar9) - uVar9;
    }
    iVar7 = 0xd;
    local_84 = (int)ROUND(ROUND(SQRT((float10)local_78 * (float10)local_78 +
                                     (float10)local_7c * (float10)local_7c +
                                     (float10)local_80 * (float10)local_80)));
    puVar12 = &local_a8;
    puVar13 = local_110;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
  }
  puVar13 = local_110;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *unaff_ESI = *puVar13;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar15 * -2 + 1;
  }
  return;
}
