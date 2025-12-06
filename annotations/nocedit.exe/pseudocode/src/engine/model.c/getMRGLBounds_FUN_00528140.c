// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
// Convention: __cdecl
// Signature: void engine_model.c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended * header, SMRGLModelBounds * output)

#include "nocturne.h"

void __cdecl
engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  SMRGLHeaderExtended *header_00;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  byte bVar13;
  float10 fVar14;
  double dVar15;
  char acStack_15c [4];
  SMRGLModelBounds *in_stack_fffffeac;
  uint local_110 [4];
  uint uStack_100;
  uint auStack_fc [13];
  uint auStack_c8 [9];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  uint auStack_64 [12];
  int *local_34;
  int *local_24;
  int local_20;
  uint *local_1c;
  float local_10;
  
  bVar13 = 0;
  iVar7 = (header->base).type;
  if (iVar7 == 0x20) {
    header_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(header + 2));
    acStack_15c[0] = 'r';
    acStack_15c[1] = -0x7b;
    acStack_15c[2] = 'R';
    acStack_15c[3] = '\0';
    engine_model_c_getMRGLBounds_FUN_00528140(header_00,in_stack_fffffeac);
    puVar11 = auStack_64;
    puVar10 = &local_9c;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(header_00);
    iVar7 = 0xd;
    puVar11 = auStack_fc;
    puVar10 = &local_94;
  }
  else if (iVar7 == 0x26) {
    puVar11 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0(header);
    iVar7 = 0xd;
    puVar10 = auStack_c8;
  }
  else {
    local_34 = &header[1].child_count;
    if ((header->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar7 = (int)(0x7fffffff / (longlong)(header->base).count) * 2;
    if (*local_24 != 2) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_15c,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x176;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffea0);
    }
    iVar6 = 0;
    iVar12 = -0x80000000;
    iVar9 = -0x80000000;
    local_1c = (uint *)0x7fffffff;
    iVar5 = 0x7fffffff;
    iVar8 = 0x7fffffff;
    local_20 = -0x80000000;
    local_10 = 0.0;
    if (0 < local_24[2]) {
      do {
        if (iVar9 < *unaff_ESI) {
          iVar9 = *unaff_ESI;
        }
        if (iVar12 < unaff_ESI[1]) {
          iVar12 = unaff_ESI[1];
        }
        if (local_20 < unaff_ESI[2]) {
          local_20 = unaff_ESI[2];
        }
        if (*unaff_ESI < iVar8) {
          iVar8 = *unaff_ESI;
        }
        if (unaff_ESI[1] < iVar5) {
          iVar5 = unaff_ESI[1];
        }
        if (unaff_ESI[2] < (int)local_1c) {
          local_1c = (uint *)unaff_ESI[2];
        }
        iVar1 = *unaff_ESI;
        unaff_ESI = unaff_ESI + 3;
        iVar6 = iVar6 + 1;
        local_10 = (float)iVar1 + local_10;
      } while (iVar6 < local_24[2]);
    }
    uVar3 = (uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar7 * (longlong)iVar12) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar12) >> 0x20) << 0x10;
    local_90 = (uint)((longlong)iVar7 * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)local_20) >> 0x20) << 0x10;
    uVar4 = (uint)((longlong)iVar7 * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar7 * (longlong)iVar5) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar5) >> 0x20) << 0x10;
    iVar5 = (int)((ulonglong)((longlong)iVar7 * (longlong)(int)local_1c) >> 0x20);
    local_9c = (uint)((longlong)iVar7 * (longlong)(int)local_1c) >> 0x10 | iVar5 << 0x10;
    local_10 = local_10 * (1.0 / (float)local_24[2]);
    fVar14 = (float10)local_10;
    local_a4 = uVar4;
    local_98 = uVar3;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar5,iVar7));
    lVar2 = (longlong)SUB84 /* extract 2-byte value */(dVar15,0) * (longlong)(int)ROUND(fVar14);
    iVar7 = (int)((ulonglong)lVar2 >> 0x20);
    local_88 = (uint)lVar2 >> 0x10 | iVar7 << 0x10;
    fVar14 = (float10)local_10;
    builtin_strncpy(acStack_15c,"?R",4);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar7,local_88));
    iVar7 = (int)((ulonglong)((longlong)local_20 * (longlong)(int)ROUND(fVar14)) >> 0x20);
    local_80 = (uint)((longlong)local_20 * (longlong)(int)ROUND(fVar14)) >> 0x10 | iVar7 << 0x10;
    fVar14 = (float10)local_10;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar7,local_80));
    local_78 = (uint)((longlong)(int)local_1c * (longlong)(int)ROUND(fVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_1c * (longlong)(int)ROUND(fVar14)) >> 0x20) <<
               0x10;
    iStack_70 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = (int)uVar4 >> 0x1f;
    if (iStack_70 < (int)((uVar4 ^ uVar3) - uVar3)) {
      iStack_70 = (uVar4 ^ uVar3) - uVar3;
    }
    iStack_6c = (local_88 ^ (int)local_88 >> 0x1f) - ((int)local_88 >> 0x1f);
    uVar3 = (int)local_94 >> 0x1f;
    if (iStack_6c < (int)((local_94 ^ uVar3) - uVar3)) {
      iStack_6c = (local_94 ^ uVar3) - uVar3;
    }
    iStack_68 = (local_84 ^ (int)local_84 >> 0x1f) - ((int)local_84 >> 0x1f);
    uVar3 = (int)local_90 >> 0x1f;
    if (iStack_68 < (int)((local_90 ^ uVar3) - uVar3)) {
      iStack_68 = (local_90 ^ uVar3) - uVar3;
    }
    fVar14 = SQRT((float10)iStack_68 * (float10)iStack_68 +
                  (float10)iStack_6c * (float10)iStack_6c + (float10)iStack_70 * (float10)iStack_70)
    ;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,iStack_68));
    iStack_70 = (int)ROUND(fVar14);
    iVar7 = extraout_ECX;
    puVar10 = &local_98;
    puVar11 = &uStack_100;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
  }
  puVar11 = auStack_fc;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *local_1c = *puVar11;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    local_1c = local_1c + (uint)bVar13 * -2 + 1;
  }
  return;
}
