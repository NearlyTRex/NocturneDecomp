// Name: core_glass.cpp_FUN_004c49e0
// Address: 004c49e0
// Address Range: [[004c49e0, 004c5247]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004c49e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004c49e0(CDemonActor *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *puVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  float *pfVar6;
  int extraout_EDX;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_1120 [1013];
  float fStack_138;
  char *pcStack_134;
  float fStack_130;
  float in_stack_fffffed4;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  byte auStack_108 [12];
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [6];
  float fStack_84;
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  float afStack_54 [3];
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  float afStack_38 [7];
  int iStack_1c;
  byte *puStack_18;
  float fStack_14;
  int iVar15;
  
  bVar11 = 0;
  core_actor_cpp_FUN_00408a80(param_1);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&param_1[1].field_0xc);
  if (*(int *)&param_1[1].field_0x90 != 0) {
    uStack_40 = 0;
    uStack_44 = 0;
    fStack_48 = *(float *)(param_1 + 1) * _DAT_005d9352;
    core_dirmat_cpp_FUN_00449530(&param_1->field_0x3c,afStack_80 + 0xe);
    fStack_e4 = fStack_3c;
    afStack_e0[(uint)bVar11 * -2] = afStack_38[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_fc = *(float *)&param_1->field_0x20 + fStack_e4;
    afStack_f8[0] = *(float *)&param_1->field_0x24 + afStack_e0[0];
    afStack_f8[1] = *(float *)&param_1->field_0x28 + afStack_e0[1];
    CStack_d8._0_4_ = fStack_fc;
    afStack_e0[(uint)bVar11 * -2 + 3] = afStack_f8[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (&CStack_f0 != (CVector3f *)(afStack_e0 + 2)) {
      CStack_f0._0_4_ = CStack_d8._0_4_;
      CStack_f0._4_4_ = CStack_d8._4_4_;
      CStack_f0._8_4_ = CStack_d8._8_4_;
    }
    fStack_48 = -fStack_48;
    core_dirmat_cpp_FUN_00449530(&param_1->field_0x3c,afStack_80 + 0xe);
    fStack_6c = fStack_c0;
    afStack_80[(uint)bVar11 * -2 + 6] = afStack_e0[(uint)bVar11 * -2 + 9];
    afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    afStack_80[2] = *(float *)&param_1->field_0x20 + fStack_6c;
    afStack_80[3] = *(float *)&param_1->field_0x24 + fStack_68;
    afStack_80[4] = *(float *)&param_1->field_0x28 + fStack_64;
    afStack_54[0] = afStack_80[2];
    afStack_80[(uint)bVar11 * -2 + 0xc] = afStack_80[(uint)bVar11 * -2 + 3];
    afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if ((CVector3f *)afStack_9c != (CVector3f *)(afStack_80 + 0xb)) {
      afStack_9c[0] = afStack_54[0];
      afStack_9c[1] = afStack_54[1];
      afStack_9c[2] = afStack_54[2];
    }
    uStack_44 = *(uint *)&param_1[1].field_0x4;
    core_dirmat_cpp_FUN_00449530(&param_1->field_0x3c,afStack_80 + 0xe);
    fStack_b4 = fStack_138;
    afStack_e0[(uint)bVar11 * -2 + 0xc] = (float)(&pcStack_134)[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         (&fStack_130)[(uint)bVar11 * -2 + (uint)bVar11 * -2];
    fStack_cc = *(float *)&param_1->field_0x20 + fStack_b4;
    fStack_c8 = *(float *)&param_1->field_0x24 + fStack_b0;
    fStack_c4 = *(float *)&param_1->field_0x28 + fStack_ac;
    fStack_84 = fStack_cc;
    afStack_80[(uint)bVar11 * -2] = afStack_e0[(uint)bVar11 * -2 + 6];
    afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if ((float *)auStack_108 != &fStack_84) {
      auStack_108._0_4_ = fStack_84;
      auStack_108._4_4_ = afStack_80[0];
      auStack_108._8_4_ = afStack_80[1];
    }
    fStack_48 = -fStack_48;
    core_dirmat_cpp_FUN_00449530(&param_1->field_0x3c,afStack_80 + 0xe);
    fStack_120 = in_stack_fffffed4;
    *(uint *)((int)&stack0xfffffee4 + (uint)bVar11 * -8) =
         *(uint *)(&stack0xfffffed8 + (uint)bVar11 * -8);
    *(uint *)((int)&stack0xfffffee4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
         *(uint *)(&stack0xfffffedc + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    fStack_a8 = *(float *)&param_1->field_0x20 + fStack_120;
    fStack_a4 = *(float *)&param_1->field_0x24 + fStack_11c;
    fStack_a0 = *(float *)&param_1->field_0x28 + fStack_118;
    afStack_60[0] = fStack_a8;
    afStack_80[(uint)bVar11 * -2 + 9] = afStack_e0[(uint)bVar11 * -2 + 0xf];
    afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    if (&CStack_114 != (CVector3f *)(afStack_80 + 8)) {
      CStack_114._0_4_ = afStack_60[0];
      CStack_114._4_4_ = afStack_60[1];
      CStack_114._8_4_ = afStack_60[2];
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_004f98d0
              ((CMirror *)&param_1[1].field_0x94,&CStack_f0,(CVector3f *)afStack_9c,
               (CVector3f *)auStack_108,&CStack_114);
  }
  fVar12 = (float10)*(float *)(param_1 + 1) * (float10)_DAT_005d935a;
  round();
  *(int *)&param_1[4].field_0x1b8 = (int)ROUND(fVar12) + 1;
  if (4 < (int)ROUND(fVar12) + 1) {
    *(uint *)&param_1[4].field_0x1b8 = 4;
  }
  fVar12 = (float10)*(float *)&param_1[1].field_0x4 * (float10)_DAT_005d935a;
  round();
  *(int *)&param_1[4].field_0x1bc = (int)ROUND(fVar12) + 1;
  if (4 < (int)ROUND(fVar12) + 1) {
    *(uint *)&param_1[4].field_0x1bc = 4;
  }
  iVar4 = *(int *)&param_1[4].field_0x1b8 * *(int *)&param_1[4].field_0x1bc;
  *(int *)&param_1[4].field_0x1c0 =
       (*(int *)&param_1[4].field_0x1b8 + 1) * (*(int *)&param_1[4].field_0x1bc + 1);
  *(int *)&param_1[4].field_0x1c4 = iVar4;
  if ((0x19 < *(int *)&param_1[4].field_0x1c0) || (0x10 < iVar4)) {
    fStack_130 = (float)"CGlass::setup - Too many verticies(%d) or faces(%d)!";
    _DAT_01d046a0 = "..\\core\\glass.cpp";
    _DAT_01d046a4 = 0x86;
    pcStack_134 = (char *)0x4c4af2;
    core_main_c_FUN_004e4500();
  }
  iVar4 = *(int *)&param_1[4].field_0x1b8;
  fVar1 = *(float *)(param_1 + 1);
  fStack_14 = *(float *)&param_1[1].field_0x4 / (float)*(int *)&param_1[4].field_0x1bc;
  iVar9 = 0;
  afStack_80[1] = 0.0;
  afStack_80[2] = 0.0;
  afStack_80[3] = 0.0;
  puStack_18 = &param_1[1].field_0x234;
  for (iVar15 = 0; iVar15 < *(int *)&param_1[4].field_0x1bc + 1; iVar15 = iVar15 + 1) {
    afStack_80[1] = -*(float *)(param_1 + 1) * (float)_DAT_005d935a;
    pfVar6 = (float *)(puStack_18 + iVar9 * 0xc);
    for (iVar7 = 0; iVar7 < *(int *)&param_1[4].field_0x1b8 + 1; iVar7 = iVar7 + 1) {
      if (pfVar6 != afStack_80 + 1) {
        *pfVar6 = afStack_80[1];
        pfVar6[1] = afStack_80[2];
        pfVar6[2] = afStack_80[3];
      }
      fVar12 = (float10)_DAT_005d9362;
      fVar13 = (float10)_DAT_005d936a;
      fVar14 = ((float10)iVar7 / (float10)*(int *)&param_1[4].field_0x1b8) * fVar12 + fVar13;
      round();
      *(int *)(extraout_ECX + 0x740) = (int)ROUND(fVar14);
      fVar13 = fVar13 + ((float10)(*(int *)&param_1[4].field_0x1bc - iVar15) /
                        (float10)*(int *)&param_1[4].field_0x1bc) * fVar12;
      round();
      pfVar6 = (float *)(extraout_EDX + 0xc);
      *(int *)(extraout_ECX_00 + 0x7a0) = (int)ROUND(fVar13);
      iVar9 = iVar9 + 1;
      afStack_80[1] = afStack_80[1] + fVar1 / (float)iVar4;
    }
    afStack_80[2] = afStack_80[2] + fStack_14;
  }
  iVar4 = 0;
  iStack_1c = 0;
  if (0 < *(int *)&param_1[4].field_0x1bc) {
    do {
      iVar15 = 0;
      if (0 < *(int *)&param_1[4].field_0x1b8) {
        puVar5 = &param_1[2].field_0x2a0 + iStack_1c * 0x48;
        do {
          *(uint *)(puVar5 + 4) = 4;
          *(uint *)(puVar5 + 0x14) = 0;
          uVar3 = *(uint *)(puVar5 + 0x14);
          *(uint *)(puVar5 + 0x10) = uVar3;
          *(uint *)(puVar5 + 0xc) = uVar3;
          *(uint *)(puVar5 + 8) = uVar3;
          iVar9 = (*(int *)&param_1[4].field_0x1b8 + 1) * iVar4 + iVar15;
          *(int *)(puVar5 + 0x18) = iVar9;
          *(uint *)(puVar5 + 0x1c) = *(uint *)(&param_1[2].field_0x1d8 + iVar9 * 4);
          *(uint *)(puVar5 + 0x20) = *(uint *)(&param_1[2].field_0x23c + iVar9 * 4);
          *(int *)(puVar5 + 0x24) = iVar9 + 1;
          *(uint *)(puVar5 + 0x28) = *(uint *)(&param_1[2].field_0x1dc + iVar9 * 4);
          *(uint *)(puVar5 + 0x2c) = *(uint *)(&param_1[2].field_0x240 + iVar9 * 4);
          *(int *)(puVar5 + 0x30) = *(int *)&param_1[4].field_0x1b8 + iVar9 + 2;
          *(uint *)(puVar5 + 0x34) =
               *(uint *)
                (&param_1[2].field_0x1e0 + (*(int *)&param_1[4].field_0x1b8 + iVar9) * 4);
          *(uint *)(puVar5 + 0x38) =
               *(uint *)
                (&param_1[2].field_0x244 + (*(int *)&param_1[4].field_0x1b8 + iVar9) * 4);
          *(int *)(puVar5 + 0x3c) = *(int *)&param_1[4].field_0x1b8 + iVar9 + 1;
          *(uint *)(puVar5 + 0x40) =
               *(uint *)
                (&param_1[2].field_0x1dc + (*(int *)&param_1[4].field_0x1b8 + iVar9) * 4);
          *(uint *)(puVar5 + 0x44) =
               *(uint *)
                (&param_1[2].field_0x240 + (iVar9 + *(int *)&param_1[4].field_0x1b8) * 4);
          iVar15 = iVar15 + 1;
          iStack_1c = iStack_1c + 1;
          puVar5 = puVar5 + 0x48;
        } while (iVar15 < *(int *)&param_1[4].field_0x1b8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)&param_1[4].field_0x1bc);
  }
  *(uint *)&param_1->field_0xfc = (uint)(*(int *)&param_1[1].field_0x24 < 0xfde9);
  fStack_130 = 7.00852e-39;
  iVar4 = _stricmp(&param_1[1].field_0x2c,(char *)0x5d92dd);
  if (iVar4 == 0) {
    param_1[1].field_0x2c = 0;
  }
  cVar2 = param_1[1].field_0x2c;
  *(uint *)&param_1->field_0x104 = 0;
  if (cVar2 == '\0') {
    *(uint *)&param_1->field_0x104 = 1;
  }
  iVar4 = *(int *)&param_1[1].field_0x218;
  *(uint *)&param_1[4].field_0x1c8 = 0;
  if (iVar4 != 0) {
    pcVar10 = &param_1[1].field_0x224;
    fStack_130 = 7.008643e-39;
    iVar4 = _strcmp(pcVar10,"7YEARS.RAW");
    if (iVar4 == 0) {
      fStack_130 = 7.008677e-39;
      iVar4 = _stricmp(&param_1[1].field_0x14,"factwin.raw");
      if (iVar4 == 0) {
        pcVar8 = "factwinx.raw";
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.008716e-39;
      iVar4 = _stricmp(&param_1[1].field_0x14,"dockwin.raw");
      if (iVar4 == 0) {
        pcVar8 = "dockwinx.raw";
        pcVar10 = &param_1[1].field_0x224;
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.008802e-39;
      iVar4 = _stricmp(&param_1[1].field_0x14,"windo10.raw");
      if (iVar4 == 0) {
        pcVar8 = "windo10x.raw";
        pcVar10 = &param_1[1].field_0x224;
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.008887e-39;
      iVar4 = _stricmp(&param_1[1].field_0x14,"windo11.raw");
      if (iVar4 == 0) {
        pcVar8 = "windo11x.raw";
        pcVar10 = &param_1[1].field_0x224;
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') {
            return;
          }
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
        return;
      }
    }
  }
  return;
}
