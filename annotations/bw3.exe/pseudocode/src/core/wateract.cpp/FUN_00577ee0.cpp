// Name: core_wateract.cpp_FUN_00577ee0
// Address: 00577ee0
// Address Range: [[00577ee0, 00578488]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00577ee0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_wateract_cpp_FUN_00577ee0(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *puVar8;
  int extraout_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  CDemonActor *pCVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  ulonglong uVar20;
  float fStack_34;
  int iStack_30;
  float fStack_28;
  int iStack_1c;
  int iStack_18;
  
  core_actor_cpp_FUN_00408890(param_1);
  iVar13 = *(int *)&param_1[1].field_0x130;
  *(float *)&param_1[0x201].field_0xdc =
       *(float *)&param_1->field_0x24 -
       *(float *)&param_1[1].field_0x10 * *(float *)&param_1[1].field_0x124;
  if (iVar13 == 0) {
    while( true ) {
      fVar14 = (float10)1 / (float10)*(float *)&param_1[1].field_0x12c;
      fVar15 = (float10)*(float *)&param_1[1].field_0x8 * fVar14;
      fVar14 = (float10)*(float *)(param_1 + 1) * fVar14;
      round();
      iVar4 = round();
      iVar5 = iVar4 + 1;
      iVar13 = (int)ROUND(fVar14);
      *(int *)&param_1[0x5e].field_0x154 = iVar13;
      iVar11 = iVar13 + 1;
      *(int *)(param_1 + 0x5f) = (int)ROUND(fVar15);
      *(int *)&param_1[1].field_0x144 = iVar5 * iVar11;
      if (iVar5 * iVar11 < 0x3e9) break;
      *(float *)&param_1[1].field_0x12c = *(float *)&param_1[1].field_0x12c * (float)_DAT_005d7203;
    }
    fVar1 = *(float *)(param_1 + 1);
    fVar2 = *(float *)&param_1[1].field_0x8;
    fStack_34 = -*(float *)&param_1[1].field_0x8 * (float)_DAT_005d71fb;
    iVar9 = 0;
    iStack_18 = 0;
    if (0 < iVar5) {
      do {
        fStack_28 = -*(float *)(param_1 + 1) * (float)_DAT_005d71fb;
        if (0 < iVar11) {
          fVar15 = (float10)_DAT_005d722b;
          fVar14 = (float10)_DAT_005d7223;
          fVar16 = (float10)_DAT_005d71fb;
          fVar17 = (float10)(fVar1 / (float)iVar13);
          pfVar6 = (float *)(&param_1[1].field_0x148 + iVar9 * 0x20);
          do {
            pfVar6[1] = 0.0;
            *pfVar6 = fStack_28;
            pfVar6[2] = fStack_34;
            fVar18 = (((float10)*(float *)(param_1 + 1) * fVar16 + (float10)*pfVar6) /
                     (float10)*(float *)(param_1 + 1)) * fVar15 * fVar14;
            iVar9 = round();
            *(int *)(iVar9 + 0x18) = (int)ROUND(fVar18) + 0x20000;
            fVar19 = ((float10)1 -
                     (float10)*(float *)(iVar9 + 8) / (float10)*(float *)&param_1[1].field_0x8) *
                     fVar15 * fVar14;
            fVar18 = (float10)fStack_28;
            uVar20 = round();
            iVar9 = (int)((ulonglong)uVar20 >> 0x20);
            pfVar6 = (float *)uVar20;
            fStack_28 = (float)(fVar18 + fVar17);
            pfVar6[-1] = (float)((int)ROUND(fVar19) + 0x20000);
          } while (extraout_ECX_01 < iVar11);
        }
        fStack_34 = fStack_34 + fVar2 / (float)iVar4;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iVar5);
    }
    puVar8 = &param_1[0x5f].field_0x4;
    iStack_30 = 0;
    if (0 < *(int *)(param_1 + 0x5f)) {
      do {
        iVar13 = 0;
        if (0 < *(int *)&param_1[0x5e].field_0x154) {
          iVar4 = iStack_30 % 4 << 0x16;
          iVar5 = (iStack_30 % 4 + 1) * 0x400000;
          do {
            *(uint *)(puVar8 + 4) = 3;
            *(uint *)(puVar8 + 0x14) = 0;
            uVar3 = *(uint *)(puVar8 + 0x14);
            *(uint *)(puVar8 + 0x10) = uVar3;
            *(uint *)(puVar8 + 0xc) = uVar3;
            *(uint *)(puVar8 + 8) = uVar3;
            iVar11 = (*(int *)&param_1[0x5e].field_0x154 + 1) * iStack_30 + iVar13;
            *(int *)(puVar8 + 0x30) = iVar11;
            iVar11 = iVar11 + 1;
            *(int *)(puVar8 + 0x38) = iVar4;
            *(int *)(puVar8 + 0x24) = iVar11;
            iVar7 = iVar13 % 4 << 0x16;
            iVar10 = (iVar13 % 4 + 1) * 0x400000;
            *(int *)(puVar8 + 0x34) = iVar7;
            *(int *)(puVar8 + 0x28) = iVar10;
            *(int *)(puVar8 + 0x2c) = iVar4;
            *(int *)(puVar8 + 0x18) = iVar11 + *(int *)&param_1[0x5e].field_0x154 + 1;
            *(int *)(puVar8 + 0x1c) = iVar10;
            *(int *)(puVar8 + 0x20) = iVar5;
            *(uint *)(puVar8 + 0x4c) = 3;
            *(uint *)(puVar8 + 0x5c) = 0;
            uVar3 = *(uint *)(puVar8 + 0x5c);
            *(uint *)(puVar8 + 0x58) = uVar3;
            *(uint *)(puVar8 + 0x54) = uVar3;
            *(uint *)(puVar8 + 0x50) = uVar3;
            iVar11 = *(int *)&param_1[0x5e].field_0x154;
            *(int *)(puVar8 + 0x7c) = iVar7;
            iVar11 = iVar13 + (iVar11 + 1) * iStack_30;
            *(int *)(puVar8 + 0x78) = iVar11;
            *(int *)(puVar8 + 0x80) = iVar4;
            iVar9 = *(int *)&param_1[0x5e].field_0x154;
            *(int *)(puVar8 + 100) = iVar7;
            iVar11 = iVar11 + iVar9 + 2;
            *(int *)(puVar8 + 0x6c) = iVar11;
            *(int *)(puVar8 + 0x70) = iVar10;
            *(int *)(puVar8 + 0x60) = iVar11 + -1;
            *(int *)(puVar8 + 0x74) = iVar5;
            *(int *)(puVar8 + 0x68) = iVar5;
            iVar13 = iVar13 + 1;
            puVar8 = puVar8 + 0x90;
          } while (iVar13 < *(int *)&param_1[0x5e].field_0x154);
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < *(int *)(param_1 + 0x5f));
    }
    *(int *)&param_1[0x201].field_0xe0 =
         *(int *)&param_1[0x5e].field_0x154 * *(int *)(param_1 + 0x5f) * 2;
  }
  else {
    *(uint *)&param_1[0x201].field_0xe0 = 0x20;
    *(uint *)&param_1[1].field_0x144 = 0;
    iVar13 = 0;
    if (0 < *(int *)&param_1[0x201].field_0xe0) {
      fVar15 = (float10)_DAT_005d7233;
      fVar14 = (float10)_DAT_005d7223;
      fVar16 = (float10)_DAT_005d721b;
      do {
        fVar17 = ((float10)iVar13 / (float10)*(int *)&param_1[0x201].field_0xe0) *
                 (float10)_DAT_005d720b * (float10)_DAT_005d7203;
        fVar18 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        *(float *)(&param_1[1].field_0x148 + *(int *)&param_1[1].field_0x144 * 0x20) =
             (float)(fVar18 * (float10)*(float *)(param_1 + 1) * (float10)_DAT_005d7213);
        *(uint *)(&param_1[1].field_0x14c + *(int *)&param_1[1].field_0x144 * 0x20) = 0;
        *(float *)(&param_1[1].field_0x150 + *(int *)&param_1[1].field_0x144 * 0x20) =
             (float)(fVar17 * (float10)*(float *)&param_1[1].field_0x8 * (float10)_DAT_005d7213);
        fVar17 = ((float10)*(float *)(&param_1[1].field_0x148 +
                                     *(int *)&param_1[1].field_0x144 * 0x20) /
                 (float10)*(float *)(param_1 + 1)) * fVar16 * fVar14 + fVar15;
        round();
        *(int *)(&param_1[2].field_0x8 + extraout_ECX) = (int)ROUND(fVar17);
        fVar17 = ((float10)*(float *)(&param_1[1].field_0x150 +
                                     *(int *)&param_1[1].field_0x144 * 0x20) /
                 (float10)*(float *)&param_1[1].field_0x8) * fVar16 * fVar14 + fVar15;
        round();
        *(int *)(&param_1[2].field_0xc + extraout_ECX_00) = (int)ROUND(fVar17);
        iVar13 = extraout_EDX + 1;
        iVar4 = *(int *)&param_1[0x201].field_0xe0;
        *(int *)&param_1[1].field_0x144 = *(int *)&param_1[1].field_0x144 + 1;
      } while (iVar13 < iVar4);
    }
    iVar13 = *(int *)&param_1[1].field_0x144 * 0x20;
    *(uint *)(&param_1[1].field_0x150 + iVar13) = 0;
    *(uint *)(&param_1[1].field_0x14c + iVar13) =
         *(uint *)(&param_1[1].field_0x150 + iVar13);
    *(uint *)(&param_1[1].field_0x148 + iVar13) =
         *(uint *)(&param_1[1].field_0x14c + iVar13);
    iVar13 = *(int *)&param_1[0x201].field_0xe0;
    iStack_1c = 0;
    *(int *)&param_1[1].field_0x144 = *(int *)&param_1[1].field_0x144 + 1;
    if (0 < iVar13) {
      puVar8 = &param_1[0x5f].field_0x4;
      pCVar12 = param_1;
      do {
        *(uint *)(puVar8 + 4) = 3;
        *(uint *)(puVar8 + 0x14) = 0;
        uVar3 = *(uint *)(puVar8 + 0x14);
        *(uint *)(puVar8 + 0x10) = uVar3;
        *(uint *)(puVar8 + 0xc) = uVar3;
        *(uint *)(puVar8 + 8) = uVar3;
        iVar4 = iStack_1c + 1;
        uVar3 = *(uint *)&param_1[0x201].field_0xe0;
        *(uint *)(puVar8 + 0x1c) = 0;
        *(uint *)(puVar8 + 0x20) = 0;
        *(uint *)(puVar8 + 0x18) = uVar3;
        iVar13 = iVar4 % *(int *)&param_1[0x201].field_0xe0;
        *(int *)(puVar8 + 0x24) = iStack_1c;
        *(uint *)(puVar8 + 0x28) = *(uint *)&pCVar12[2].field_0x8;
        uVar3 = *(uint *)&pCVar12[2].field_0xc;
        *(int *)(puVar8 + 0x30) = iVar13;
        *(uint *)(puVar8 + 0x2c) = uVar3;
        *(uint *)(puVar8 + 0x34) = *(uint *)(&param_1[2].field_0x8 + iVar13 * 0x20);
        pCVar12 = (CDemonActor *)&pCVar12->field_0x20;
        *(uint *)(puVar8 + 0x38) = *(uint *)(&param_1[2].field_0xc + iVar13 * 0x20);
        puVar8 = puVar8 + 0x48;
        iStack_1c = iVar4;
      } while (iVar4 < *(int *)&param_1[0x201].field_0xe0);
    }
  }
  core_wateract_cpp_FUN_00578490(param_1);
  *(uint *)&param_1[0x201].field_0xd4 = 0;
  *(uint *)&param_1[0x201].field_0xd8 = 0;
  return;
}
