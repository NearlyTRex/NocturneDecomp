// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
// Convention: __cdecl
// Signature: void engine_model.c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended * header, SMRGLModelBounds * output)

#include "nocturne.h"

void __cdecl
engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int extraout_EAX;
  SMRGLHeaderExtended *header_00;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  byte bVar13;
  double dVar14;
  SMRGLModelBounds *in_stack_fffffe8c;
  char acStack_15c [64];
  uint uStack_11c;
  uint auStack_118 [2];
  uint local_110 [10];
  uint auStack_e8 [11];
  int aiStack_bc [2];
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_88;
  int local_84;
  int local_80;
  uint *puStack_3c;
  int *local_34;
  int *local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_10;
  
  bVar13 = 0;
  iVar5 = (header->base).type;
  if (iVar5 == 0x20) {
    header_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(header + 2));
    engine_model_c_getMRGLBounds_FUN_00528140(header_00,in_stack_fffffe8c);
    piVar1 = &local_84;
    piVar12 = aiStack_bc;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar12 = *piVar1;
      piVar1 = piVar1 + (uint)bVar13 * -2 + 1;
      piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(header_00);
    iVar5 = 0xd;
    puVar10 = &uStack_11c;
    puVar9 = &uStack_b4;
  }
  else if (iVar5 == 0x26) {
    puVar10 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0(header);
    iVar5 = 0xd;
    puVar9 = auStack_e8;
  }
  else {
    local_34 = &header[1].child_count;
    if ((header->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar5 = (int)(0x7fffffff / (longlong)(header->base).count) * 2;
    if (*local_24 != 2) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_15c,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x176;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffea0);
    }
    iVar6 = 0;
    iVar11 = -0x80000000;
    iVar8 = -0x80000000;
    local_1c = 0x7fffffff;
    iVar4 = 0x7fffffff;
    iVar7 = 0x7fffffff;
    local_20 = -0.0;
    local_18 = 0.0;
    local_10 = 0.0;
    piVar1 = unaff_ESI;
    if (0 < local_24[2]) {
      do {
        if (iVar8 < *piVar1) {
          iVar8 = *piVar1;
        }
        if (iVar11 < piVar1[1]) {
          iVar11 = piVar1[1];
        }
        if ((int)local_20 < piVar1[2]) {
          local_20 = (float)piVar1[2];
        }
        if (*piVar1 < iVar7) {
          iVar7 = *piVar1;
        }
        if (piVar1[1] < iVar4) {
          iVar4 = piVar1[1];
        }
        if (piVar1[2] < local_1c) {
          local_1c = piVar1[2];
        }
        iVar6 = iVar6 + 1;
        local_10 = (float)*piVar1 + local_10;
        local_18 = (float)piVar1[2] + local_18;
        piVar1 = piVar1 + 3;
      } while (iVar6 < local_24[2]);
    }
    uVar2 = (uint)((longlong)iVar5 * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar5 * (longlong)iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)iVar11) >> 0x20) << 0x10;
    local_90 = (uint)((longlong)iVar5 * (longlong)(int)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)(int)local_20) >> 0x20) << 0x10;
    uVar3 = (uint)((longlong)iVar5 * (longlong)iVar7) >> 0x10 |
            (int)((ulonglong)((longlong)iVar5 * (longlong)iVar7) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar5 * (longlong)iVar4) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)iVar4) >> 0x20) << 0x10;
    local_9c = (uint)((longlong)iVar5 * (longlong)local_1c) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)local_1c) >> 0x20) << 0x10;
    local_a4 = uVar3;
    local_98 = uVar2;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)(local_10 * (1.0 / (float)local_24[2])));
    local_90 = (uint)((longlong)extraout_EAX * (longlong)(int)ROUND(dVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)extraout_EAX * (longlong)(int)ROUND(dVar14)) >> 0x20) <<
               0x10;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)local_18);
    local_90 = (uint)((longlong)(int)unaff_ESI * (longlong)(int)ROUND(dVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)(int)unaff_ESI * (longlong)(int)ROUND(dVar14)) >> 0x20)
               << 0x10;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)local_20);
    local_90 = (uint)((longlong)(int)local_34 * (longlong)(int)ROUND(dVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_34 * (longlong)(int)ROUND(dVar14)) >> 0x20) <<
               0x10;
    local_88 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    uVar2 = (int)uVar3 >> 0x1f;
    if (local_88 < (int)((uVar3 ^ uVar2) - uVar2)) {
      local_88 = (uVar3 ^ uVar2) - uVar2;
    }
    local_84 = (local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f);
    uVar2 = (int)uStack_ac >> 0x1f;
    if (local_84 < (int)((uStack_ac ^ uVar2) - uVar2)) {
      local_84 = (uStack_ac ^ uVar2) - uVar2;
    }
    local_80 = (local_9c ^ (int)local_9c >> 0x1f) - ((int)local_9c >> 0x1f);
    uVar2 = (int)local_a8 >> 0x1f;
    if (local_80 < (int)((local_a8 ^ uVar2) - uVar2)) {
      local_80 = (local_a8 ^ uVar2) - uVar2;
    }
    dVar14 = crt_math_c_round_FUN_005fe6b0
                       (SQRT((double)local_80 * (double)local_80 +
                             (double)local_84 * (double)local_84 +
                             (double)local_88 * (double)local_88));
    local_90 = (int)ROUND(dVar14);
    iVar5 = extraout_ECX;
    puVar9 = &uStack_b0;
    puVar10 = auStack_118;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  puVar10 = &uStack_11c;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puStack_3c = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    puStack_3c = puStack_3c + (uint)bVar13 * -2 + 1;
  }
  return;
}
