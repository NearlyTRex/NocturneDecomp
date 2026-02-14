// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

#include "nocturne.h"

void __cdecl engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  SMRGLHeaderExtended *header_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *unaff_ESI;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  byte bVar12;
  double dVar13;
  SMRGLModelBounds *in_stack_fffffea0;
  uint auStack_11c [3];
  uint local_110 [13];
  uint local_dc [10];
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
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
  int iStack_38;
  int *local_34;
  float local_24;
  int local_20;
  float local_1c;
  float local_14;
  
  bVar12 = 0;
  iVar5 = (header->base).type;
  if (iVar5 == 0x20) {
    header_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(header + 2));
    engine_model_c_getMRGLBounds_FUN_00528140(header_00,in_stack_fffffea0);
    puVar10 = local_74;
    puVar9 = &local_a8;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(header_00);
    iVar5 = 0xd;
    puVar10 = local_110;
    puVar9 = &local_a8;
  }
  else if (iVar5 == 0x26) {
    puVar10 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0(header);
    iVar5 = 0xd;
    puVar9 = local_dc;
  }
  else {
    local_34 = &header[1].child_count;
    if ((header->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar5 = (int)(0x7fffffff / (longlong)(header->base).count) * 2;
    if (header->child_count != 2) {
      _sprintf(&stack0xfffffea0,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x176;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffea0);
    }
    iVar6 = 0;
    iVar11 = -0x80000000;
    iVar8 = -0x80000000;
    local_20 = 0x7fffffff;
    iVar4 = 0x7fffffff;
    iVar7 = 0x7fffffff;
    local_24 = -0.0;
    local_1c = 0.0;
    local_14 = 0.0;
    piVar1 = local_34;
    if (0 < header[1].base.count) {
      do {
        if (iVar8 < *piVar1) {
          iVar8 = *piVar1;
        }
        if (iVar11 < piVar1[1]) {
          iVar11 = piVar1[1];
        }
        if ((int)local_24 < piVar1[2]) {
          local_24 = (float)piVar1[2];
        }
        if (*piVar1 < iVar7) {
          iVar7 = *piVar1;
        }
        if (piVar1[1] < iVar4) {
          iVar4 = piVar1[1];
        }
        if (piVar1[2] < local_20) {
          local_20 = piVar1[2];
        }
        iVar6 = iVar6 + 1;
        local_14 = (float)*piVar1 + local_14;
        local_1c = (float)piVar1[2] + local_1c;
        piVar1 = piVar1 + 3;
      } while (iVar6 < header[1].base.count);
    }
    uVar2 = (uint)((longlong)iVar5 * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x20) << 0x10;
    local_98 = (uint)((longlong)iVar5 * (longlong)iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)iVar11) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar5 * (longlong)(int)local_24) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)(int)local_24) >> 0x20) << 0x10;
    uVar3 = (uint)((longlong)iVar5 * (longlong)iVar7) >> 0x10 |
            (int)((ulonglong)((longlong)iVar5 * (longlong)iVar7) >> 0x20) << 0x10;
    local_a4 = (uint)((longlong)iVar5 * (longlong)iVar4) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)iVar4) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar5 * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)local_20) >> 0x20) << 0x10;
    local_a8 = uVar3;
    local_9c = uVar2;
    dVar13 = round((double)(local_14 * (1.0 / (float)header[1].base.count)))
    ;
    local_94 = (uint)((longlong)iVar5 * (longlong)(int)ROUND(dVar13)) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)(int)ROUND(dVar13)) >> 0x20) << 0x10;
    dVar13 = round((double)local_1c);
    local_94 = (uint)((longlong)(int)local_34 * (longlong)(int)ROUND(dVar13)) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_34 * (longlong)(int)ROUND(dVar13)) >> 0x20) <<
               0x10;
    dVar13 = round((double)local_24);
    local_94 = (uint)((longlong)iStack_38 * (longlong)(int)ROUND(dVar13)) >> 0x10 |
               (int)((ulonglong)((longlong)iStack_38 * (longlong)(int)ROUND(dVar13)) >> 0x20) <<
               0x10;
    local_8c = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    uVar2 = (int)uVar3 >> 0x1f;
    if (local_8c < (int)((uVar3 ^ uVar2) - uVar2)) {
      local_8c = (uVar3 ^ uVar2) - uVar2;
    }
    local_88 = (local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f);
    uVar2 = (int)uStack_b0 >> 0x1f;
    if (local_88 < (int)((uStack_b0 ^ uVar2) - uVar2)) {
      local_88 = (uStack_b0 ^ uVar2) - uVar2;
    }
    local_84 = (local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f);
    uVar2 = (int)uStack_ac >> 0x1f;
    if (local_84 < (int)((uStack_ac ^ uVar2) - uVar2)) {
      local_84 = (uStack_ac ^ uVar2) - uVar2;
    }
    iVar5 = 0xd;
    dVar13 = round
                       (SQRT((double)local_84 * (double)local_84 +
                             (double)local_88 * (double)local_88 +
                             (double)local_8c * (double)local_8c));
    local_94 = (int)ROUND(dVar13);
    puVar9 = &uStack_b4;
    puVar10 = auStack_11c;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
  }
  puVar10 = local_110;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *unaff_ESI = *puVar10;
    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar12 * -2 + 1;
  }
  return;
}
