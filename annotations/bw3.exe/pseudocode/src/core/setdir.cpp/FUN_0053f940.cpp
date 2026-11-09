// Name: core_setdir.cpp_FUN_0053f940
// Address: 0053f940
// Address Range: [[0053f940, 00540b95]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_0053f940(CDemonSet *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_setdir_cpp_FUN_0053f940(CDemonSet *param_1,CDemonActor *param_2,int param_3)

{
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  CDemonRenderer *this_ptr;
  byte *puVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  SMRGLPrimitivePoly *pSVar9;
  int iVar10;
  int iVar11;
  byte *puVar12;
  uint *puVar13;
  byte *puVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  uint *puVar18;
  SMRGLPrimitivePoly *pSVar19;
  CVector3i *input;
  uint *puVar20;
  byte bVar21;
  float10 fVar22;
  float afStackY_1188 [883];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  CVector3i aCStack_2dc [4];
  int aiStack_2d8 [23];
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  SMRGLHeaderPrimitive aSStack_270 [4];
  uint uStack_26c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint auStack_248 [6];
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200 [6];
  uint auStack_1e8 [6];
  uint auStack_1d0 [6];
  byte auStack_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float afStack_19c [5];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  CVector3f CStack_134;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint local_cc;
  int iStack_c8;
  uint uStack_c4;
  uint local_c0;
  float *pfStack_bc;
  float fStack_b8;
  byte *puStack_a8;
  CDemonActor *pCStack_a4;
  SMRGLPrimitivePoly *pSStack_a0;
  int iStack_9c;
  byte *puStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  float fStack_80;
  float fStack_7c;
  int local_6c;
  float fStack_68;
  CDemonActor *pCStack_64;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  float *pfStack_54;
  float fStack_50;
  int iStack_40;
  uint *puStack_3c;
  CVector3f *pCStack_38;
  CVector3i *pCStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar21 = 0;
  local_cc = 0;
  if (param_2 == (CDemonActor *)0x0) {
    if (*(int *)&param_1->field_0x15aeb8 < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_00534890(param_1,0);
    }
    return 1;
  }
  if (*(int *)&param_1->field_0x15aeb8 < 0) {
    *(uint *)&param_1->field_0x15aec8 = 0xffffffff;
    *(uint *)&param_1->field_0x15aecc = 0;
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_0053f9af;
  if (0.0 < *(float *)&param_1->field_0x15aecc) {
    fVar8 = *(float *)&param_1->field_0x15aecc - *(float *)&g_CGamePtr->field_0x314;
    *(float *)&param_1->field_0x15aecc = fVar8;
    if (0.0 < fVar8) {
      if ((-1 < *(int *)&param_1->field_0x15aec8) &&
         (*(int *)&param_1->field_0x15aec8 != *(int *)&param_1->field_0x15aeb8)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890(param_1,*(int *)&param_1->field_0x15aec8);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_0053f9af:
  this_ptr = DAT_005f2afc;
  *(uint *)&param_1->field_0x15aecc = 0;
  local_c0 = _DAT_01c6cee8;
  _DAT_01c6cee8 = 0;
  local_6c = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  engine_matrix_c_FUN_0046d2f0(DAT_005f2afc,0,0,0x40,0x30);
  (**(code **)(*(int *)&param_2->field_0x154 + 0x1c))(param_2);
  iStack_18 = 0;
  pCStack_34 = aCStack_2dc;
  pfVar15 = local_200;
  pfVar16 = &fStack_218;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + (uint)bVar21 * -2 + 1;
    pfVar16 = pfVar16 + (uint)bVar21 * -2 + 1;
  }
  do {
    core_box_cpp_FUN_0041d8b0(&fStack_218,iStack_18);
    fStack_e0 = fStack_f8;
    afStack_118[(uint)bVar21 * -2 + 0xf] = afStack_118[(uint)bVar21 * -2 + 9];
    afStack_118[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10] =
         afStack_118[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
    *(int *)pCStack_34 = (int)ROUND(fStack_e0 * _DAT_005e3ce0);
    *(int *)(pCStack_34 + 4) = (int)ROUND(fStack_dc * _DAT_005e3ce0);
    *(int *)(pCStack_34 + 8) = (int)ROUND(fStack_d8 * _DAT_005e3ce0);
    iStack_18 = iStack_18 + 1;
    pCStack_34 = pCStack_34 + 0xc;
  } while (iStack_18 < 8);
  fStack_140 = fStack_218 + fStack_20c;
  fStack_13c = fStack_214 + fStack_208;
  fStack_138 = fStack_210 + fStack_204;
  fStack_164 = fStack_218 + fStack_20c;
  afStack_19c[(uint)bVar21 * -2 + 0xf] = afStack_19c[(uint)bVar21 * -2 + 0x18];
  afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10] =
       afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x19];
  fStack_170 = fStack_164 * _DAT_005d0c86;
  fStack_16c = fStack_160 * _DAT_005d0c86;
  fStack_168 = fStack_15c * _DAT_005d0c86;
  fStack_104 = fStack_164 * _DAT_005d0c86;
  afStack_118[(uint)bVar21 * -2 + 6] = afStack_19c[(uint)bVar21 * -2 + 0xc];
  afStack_118[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
       afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd];
  iStack_27c = (int)ROUND(fStack_104 * _DAT_005e3ce0);
  iStack_278 = (int)ROUND(fStack_100 * _DAT_005e3ce0);
  iStack_274 = (int)ROUND(fStack_fc * _DAT_005e3ce0);
  puVar12 = &DAT_00603eec;
  do {
    iVar10 = *(int *)(puVar12 + 0x18);
    puVar5 = puVar12 + 0x48;
    *(int *)(puVar12 + 0x14) =
         aiStack_2d8[iVar10 * 3] * *(int *)(puVar12 + 0xc) +
         *(int *)(puVar12 + 8) * *(int *)(aCStack_2dc + iVar10 * 0xc) +
         *(int *)(puVar12 + 0x10) * aiStack_2d8[iVar10 * 3 + 1];
    puVar12 = puVar5;
  } while (puVar5 != &DAT_0060409c);
  if (param_3 == 0) {
    fStack_14 = (float)(*(int *)param_1 * 10);
    fVar22 = (float10)(int)fStack_14 * (float10)*(float *)&g_CGamePtr->field_0x314;
    round();
    iStack_c8 = (int)ROUND(fVar22);
    if (iStack_c8 < 3) {
      iStack_c8 = 3;
    }
    if (*(int *)param_1 < iStack_c8) {
      iStack_c8 = *(int *)param_1;
    }
    fVar8 = *(float *)&param_1->field_0x15aec0 - *(float *)&g_CGamePtr->field_0x314;
    *(float *)&param_1->field_0x15aec0 = fVar8;
    if (fVar8 <= 0.0) {
      *(uint *)&param_1->field_0x15aebc = 0xffffffff;
      *(uint *)&param_1->field_0x15aec0 = 0;
    }
  }
  else {
    iStack_c8 = *(int *)param_1;
    *(uint *)&param_1->field_0x15aebc = 0xffffffff;
    _DAT_02125514 = 0;
    *(uint *)&param_1->field_0x15aec0 = 0;
  }
  (**(code **)(*(int *)&param_2->field_0x154 + 0x1c))(param_2);
  puVar13 = auStack_1d0;
  puVar18 = (uint *)auStack_1b8;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar18 = *puVar13;
    puVar13 = puVar13 + (uint)bVar21 * -2 + 1;
    puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
  }
  fStack_14 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960
                        ((CBoundingBox3D *)auStack_1b8);
  pfVar15 = &fStack_1a0;
  fStack_68 = fStack_14 * (float)_DAT_005d0c8e + 1.0;
  pfVar16 = (float *)((int)param_2 + (uint)bVar21 * -8 + 0x24);
  fStack_1a0 = *(float *)&param_2->field_0x20;
  afStack_19c[(uint)bVar21 * -2] = *pfVar16;
  afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] = pfVar16[(uint)bVar21 * -2 + 1];
  afStack_19c[0] = afStack_19c[0] + _DAT_005d0c96;
  uVar6 = core_setdir_cpp_FUN_00541a20(param_1,pfVar15);
  fStack_158 = (float)auStack_1b8._0_4_ + fStack_1ac;
  fStack_154 = (float)auStack_1b8._4_4_ + fStack_1a8;
  fStack_150 = fStack_1b0 + fStack_1a4;
  fStack_11c = (float)auStack_1b8._0_4_ + fStack_1ac;
  afStack_118[(uint)bVar21 * -2] = afStack_19c[(uint)bVar21 * -2 + 0x12];
  afStack_118[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
       afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x13];
  uStack_c4 = uVar6;
  pfVar15 = afStack_118 + 0xb;
  afStack_118[2] = fStack_11c * _DAT_005d0c86;
  afStack_118[3] = afStack_118[0] * _DAT_005d0c86;
  fStack_108 = afStack_118[1] * _DAT_005d0c86;
  afStack_ec[0] = fStack_11c * _DAT_005d0c86;
  afStack_118[(uint)bVar21 * -2 + 0xc] = afStack_118[(uint)bVar21 * -2 + 3];
  afStack_118[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd] =
       afStack_118[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
  core_actor_cpp_FUN_00408b80(param_2,pfVar15);
  fStack_14c = afStack_19c[2];
  afStack_19c[(uint)bVar21 * -2 + 0x15] = afStack_19c[(uint)bVar21 * -2 + 3];
  afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x16] =
       afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
  if (&fStack_1a0 != afStack_19c + 0x14) {
    fStack_1a0 = fStack_14c;
    afStack_19c[0] = fStack_148;
    afStack_19c[1] = (float)uStack_144;
  }
  if (uStack_c4 != _DAT_02125518) {
    iStack_c8 = *(int *)param_1;
    param_3 = 1;
    *(uint *)&param_1->field_0x15aebc = 0xffffffff;
    _DAT_02125514 = 0;
    *(uint *)&param_1->field_0x15aec0 = 0;
  }
  _DAT_02125518 = uStack_c4;
  _DAT_0270f3d4 = (uint)(uStack_c4 == 0xffffffff);
  iVar10 = 0;
  do {
    iVar7 = iVar10 + 4;
    *(uint *)(&stack0xfffffc64 + iVar10) = *(uint *)(&DAT_01c60dac + iVar10);
    iVar10 = iVar7;
  } while (iVar7 != 0xc0);
  _DAT_02701910 = 0;
  iStack_30 = 0;
  fStack_b8 = _DAT_005e3cfc * _DAT_005e3cfc;
  pfStack_bc = (float *)&param_2->field_0x20;
  for (iStack_20 = 0; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14d164; iStack_20 = iStack_20 + 1
      ) {
    pCVar1 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_30);
    iVar10 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x48))(pCVar1);
    if (((iVar10 != 0) && (pCVar1 != param_2)) &&
       (fVar8 = *(float *)&pCVar1->field_0x20 - *pfStack_bc,
       fVar3 = *(float *)&pCVar1->field_0x24 - pfStack_bc[1],
       fVar2 = *(float *)&pCVar1->field_0x28 - pfStack_bc[2],
       fVar2 * fVar2 + fVar3 * fVar3 + fVar8 * fVar8 <= fStack_b8)) {
      *(CDemonActor **)(&DAT_02701914 + _DAT_02701910 * 4) = pCVar1;
      (**(code **)(*(int *)&pCVar1->field_0x154 + 0x1c))(pCVar1);
      iVar7 = _DAT_02701910 * 0x18;
      puVar13 = auStack_248;
      puVar18 = &uStack_230;
      for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar18 = *puVar13;
        puVar13 = puVar13 + (uint)bVar21 * -2 + 1;
        puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
      }
      if ((uint *)(iVar7 + 0x2703854) != &uStack_230) {
        *(uint *)(iVar7 + 0x2703854) = uStack_230;
        *(uint *)(iVar7 + 0x2703858) = uStack_22c;
        *(uint *)(iVar7 + 0x270385c) = uStack_228;
      }
      if ((uint *)(iVar7 + 0x2703860) != &uStack_224) {
        *(uint *)(iVar7 + 0x2703860) = uStack_224;
        *(uint *)(iVar7 + 0x2703864) = uStack_220;
        *(uint *)(iVar7 + 0x2703868) = uStack_21c;
      }
      _DAT_02701910 = _DAT_02701910 + 1;
    }
    iStack_30 = iStack_30 + 4;
  }
  pCStack_38 = (CVector3f *)&param_2->field_0x20;
  fStack_50 = _DAT_005e3cfc * _DAT_005e3cfc;
  fStack_7c = _DAT_005e3cf8 * _DAT_005e3cf8;
  puStack_a8 = &param_1->field_0x4;
  while ((0 < iStack_c8 && (_DAT_02125514 < *(int *)param_1))) {
    if (uStack_c4 == *(uint *)(&param_1->field_0x1a0 + _DAT_02125514 * 0x1a4)) {
      pCStack_a4 = param_2;
      puVar14 = puStack_a8 + _DAT_02125514 * 0x1a4;
      pSStack_a0 = (SMRGLPrimitivePoly *)&DAT_00603eec;
      iStack_9c = _DAT_02125514;
      puStack_98 = puVar14;
      if ((*(int *)(puVar14 + 0x1a0) == 0) ||
         (fVar8 = *(float *)(puVar14 + 0x100) - *(float *)pCStack_38,
         fVar3 = *(float *)(puVar14 + 0x104) - *(float *)&pCStack_38->field_0x4,
         fVar2 = *(float *)(puVar14 + 0x108) - *(float *)&pCStack_38->field_0x8,
         fStack_7c < fVar2 * fVar2 + fVar3 * fVar3 + fVar8 * fVar8)) {
        fStack_94 = (float)(uStack_c4 ^ *(uint *)(&param_1->field_0x1a0 + _DAT_02125514 * 0x1a4));
      }
      else {
        fVar8 = (float)core_setutil_cpp_FUN_005420b0(puVar14,pCStack_38,fStack_68);
        if (fVar8 == 0.0) {
          fStack_94 = fVar8;
        }
        else {
          engine_drender_cpp_FUN_0046cb90(DAT_005f2afc,(CVector3f *)(puVar14 + 0x100));
          engine_matrix_c_FUN_0046d090(DAT_005f2afc,*(uint *)(puVar14 + 0x144));
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
                    (DAT_005f2afc,(CVector3f *)(puVar14 + 0x10c));
          uStack_90 = 0x800000ff;
          uStack_8c = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                    (DAT_005f2afc,pCStack_38);
          CStack_134._0_4_ = *(uint *)&param_2->field_0x30;
          CStack_134._8_4_ = *(uint *)&param_2->field_0x38;
          CStack_134._4_4_ = *(uint *)(puVar14 + 0x110);
          input = aCStack_2dc;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                    (DAT_005f2afc,&CStack_134,(CVector3f *)0x0);
          iVar10 = 0;
          do {
            engine_special_cpp_FUN_005632a3
                      ((SProjectedVertex *)(*(int *)DAT_005f2afc + iVar10),input);
            iVar7 = iVar10 + 0x30;
            input = input + 0xc;
            uVar6 = *(uint *)(iVar10 + 0x10 + *(int *)DAT_005f2afc);
            uStack_90 = uStack_90 & uVar6;
            uStack_8c = uStack_8c | uVar6;
            iVar10 = iVar7;
          } while (iVar7 != 0x180);
          if (((uStack_90 & 0x80000000) == 0) || ((char)uStack_90 == '\0')) {
            iVar10 = 0;
            pSVar19 = pSStack_a0 + 0x1b0;
            iStack_88 = 0;
            pSVar9 = pSStack_a0;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_1e8 + iVar10) = pSVar9;
              iVar10 = iVar10 + 4;
              iStack_88 = iStack_88 + 1;
              pSVar9 = pSVar9 + 0x48;
            } while (pSVar9 != pSVar19);
            iVar10 = 0;
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_a4);
            do {
              piVar17 = (int *)(*(int *)DAT_005f2afc + iVar10);
              iVar7 = piVar17[2];
              if (0 < iVar7) {
                iVar11 = iVar7 + 0x80;
                *piVar17 = (int)(((longlong)*piVar17 * (longlong)iVar11) / (longlong)iVar7);
                piVar17[1] = (int)(((longlong)piVar17[1] * (longlong)iVar11) / (longlong)piVar17[2])
                ;
                piVar17[2] = iVar11;
                engine_matrix_c_projectTransformedPoint_FUN_004e5590(piVar17);
              }
              iVar10 = iVar10 + 0x30;
            } while (iVar10 != 0x180);
            iVar10 = 0;
            fStack_3a0 = 1.0;
            do {
              if ((*(byte *)(*(int *)DAT_005f2afc + iVar10 + 0x13) & 0x80) != 0) {
                dVar4 = _DAT_005d0ca6;
                if (0 < *(int *)(*(int *)DAT_005f2afc + iVar10 + 8)) {
                  dVar4 = _DAT_005d0c9e;
                }
                fStack_3a0 = fStack_3a0 * (float)dVar4;
              }
              iVar10 = iVar10 + 0x30;
            } while (iVar10 != 0x180);
            iStack_1c = 0;
            iStack_84 = 0;
            if (0 < _DAT_02701910) {
              iStack_28 = 0;
              puStack_3c = (uint *)(&DAT_0212551c + iStack_9c * 0x3000);
              iStack_24 = 0x2703854;
              pfStack_54 = (float *)(puStack_98 + 0x100);
              do {
                pCStack_64 = *(CDemonActor **)(&DAT_02701914 + iStack_28);
                fVar8 = *(float *)&pCStack_64->field_0x20 - *pfStack_54;
                fVar3 = *(float *)&pCStack_64->field_0x24 - pfStack_54[1];
                fVar2 = *(float *)&pCStack_64->field_0x28 - pfStack_54[2];
                if (fVar2 * fVar2 + fVar3 * fVar3 + fVar8 * fVar8 <= fStack_50) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(pCStack_64);
                  uStack_60 = 0x800000ff;
                  uStack_5c = 0;
                  iStack_58 = 0;
                  iStack_2c = 0x180;
                  iStack_40 = iStack_24;
                  do {
                    core_box_cpp_FUN_0041d8b0(iStack_40,iStack_58);
                    fStack_188 = fStack_17c;
                    afStack_19c[(uint)bVar21 * -2 + 6] = afStack_19c[(uint)bVar21 * -2 + 9];
                    iVar10 = iStack_2c;
                    afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
                         afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
                    iStack_128 = (int)ROUND(fStack_188 * _DAT_005e3ce0);
                    iStack_124 = (int)ROUND(fStack_184 * _DAT_005e3ce0);
                    iStack_120 = (int)ROUND(fStack_180 * _DAT_005e3ce0);
                    engine_special_cpp_FUN_005632a3
                              ((SProjectedVertex *)(*(int *)DAT_005f2afc + iStack_2c),
                               (CVector3i *)&iStack_128);
                    iStack_2c = iVar10 + 0x30;
                    uVar6 = *(uint *)(*(int *)DAT_005f2afc + iVar10 + 0x10);
                    uStack_60 = uStack_60 & uVar6;
                    uStack_5c = uStack_5c | uVar6;
                    iStack_58 = iStack_58 + 1;
                  } while (iStack_58 < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_64);
                  if (((uStack_60 & 0x80000000) == 0) || ((char)uStack_60 == '\0')) {
                    if (iStack_84 == 0) {
                      puVar13 = puStack_3c;
                      puVar18 = (uint *)&DAT_02122514;
                      for (iVar10 = 0xc00; iVar10 != 0; iVar10 = iVar10 + -1) {
                        *puVar18 = *puVar13;
                        puVar13 = puVar13 + (uint)bVar21 * -2 + 1;
                        puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
                      }
                      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                        *(byte *)puVar18 = *(byte *)puVar13;
                        puVar13 = (uint *)((int)puVar13 + (uint)bVar21 * -2 + 1);
                        puVar18 = (uint *)((int)puVar18 + (uint)bVar21 * -2 + 1);
                      }
                      puVar12 = &DAT_02122514;
                      iStack_84 = 1;
                      iVar10 = 0;
                      do {
                        *(byte **)(&DAT_01c60dac + iVar10) = puVar12;
                        iVar10 = iVar10 + 4;
                        puVar12 = puVar12 + 0x100;
                      } while (iVar10 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                                (DAT_005f2afc,1);
                    }
                    uStack_26c = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                              (DAT_005f2afc,(uint)((uStack_5c & 0x80000000) != 0));
                    uStack_258 = 8;
                    uStack_254 = 0xc;
                    uStack_250 = 0xe;
                    uStack_24c = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,aSStack_270);
                    uStack_258 = 9;
                    uStack_254 = 0xb;
                    uStack_250 = 0xf;
                    uStack_24c = 0xd;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,aSStack_270);
                    uStack_254 = 9;
                    uStack_250 = 0xd;
                    uStack_258 = 8;
                    uStack_24c = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,aSStack_270);
                    uStack_250 = 0xf;
                    uStack_258 = 10;
                    uStack_254 = 0xe;
                    uStack_24c = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,aSStack_270);
                    uStack_258 = 8;
                    uStack_24c = 9;
                    uStack_254 = 10;
                    uStack_250 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,aSStack_270);
                    uStack_258 = 0xc;
                    uStack_254 = 0xd;
                    uStack_250 = 0xf;
                    uStack_24c = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,aSStack_270);
                  }
                }
                iStack_28 = iStack_28 + 4;
                iStack_24 = iStack_24 + 0x18;
                iStack_1c = iStack_1c + 1;
              } while (iStack_1c < _DAT_02701910);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
            if (iStack_84 == 0) {
              puVar12 = &DAT_0212551c + iStack_9c * 0x3000;
              iVar10 = 0;
              do {
                *(byte **)(&DAT_01c60dac + iVar10) = puVar12;
                iVar10 = iVar10 + 4;
                puVar12 = puVar12 + 0x100;
              } while (iVar10 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                      (DAT_005f2afc,(uint)((uStack_8c & 0x80000000) != 0));
            fStack_80 = 0.0;
            if (0 < iStack_88) {
              iVar10 = iStack_88 * 4;
              iVar7 = 0;
              do {
                iVar11 = engine_drender_cpp_FUN_0046b470
                                   (DAT_005f2afc,*(SMRGLPrimitivePoly **)((int)auStack_1e8 + iVar7))
                ;
                iVar7 = iVar7 + 4;
                fStack_80 = (float)((int)fStack_80 + iVar11);
              } while (iVar7 < iVar10);
            }
            if (*(int *)&g_CGamePtr->field_0x20c != 0) {
              puVar13 = (uint *)(iStack_9c * 0x3000 + 0x241351c);
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                puVar18 = *(uint **)(&DAT_01c60dac + iVar10);
                puVar20 = puVar13;
                for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar20 = *puVar18;
                  puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
                  puVar20 = puVar20 + (uint)bVar21 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(byte *)puVar20 = *(byte *)puVar18;
                  puVar18 = (uint *)((int)puVar18 + (uint)bVar21 * -2 + 1);
                  puVar20 = (uint *)((int)puVar20 + (uint)bVar21 * -2 + 1);
                }
                *(uint **)(&DAT_01c60dac + iVar10) = puVar13;
                puVar13 = puVar13 + 0x40;
                iVar10 = iVar11;
              } while (iVar11 != 0xc0);
              iVar10 = 0;
              pSVar19 = pSStack_a0;
              if (0 < iStack_88) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                            (DAT_005f2afc,pSVar19);
                  iVar10 = iVar10 + 1;
                  pSVar19 = pSVar19 + 0x48;
                } while (iVar10 < iStack_88);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
            fStack_14 = fStack_80;
            fStack_94 = (float)(int)fStack_80 * fStack_3a0;
          }
          else {
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_a4);
            fStack_94 = 0.0;
          }
        }
      }
      fStack_3a8 = fStack_94;
    }
    else {
      fStack_3a8 = -99999.9;
    }
    if ((param_3 == 0) && (0.0 < fStack_3a8)) {
      if (_DAT_02125514 == *(int *)&param_1->field_0x15aeb8) {
        fStack_3a8 = fStack_3a8 * (float)_DAT_005d0cae;
      }
      if (_DAT_02125514 == *(int *)&param_1->field_0x15aebc) {
        fStack_3a8 = fStack_3a8 * (float)_DAT_005d0cb6;
      }
    }
    *(float *)(&DAT_02701528 + _DAT_02125514 * 4) = fStack_3a8;
    iStack_c8 = iStack_c8 + -1;
    _DAT_02125514 = _DAT_02125514 + 1;
  }
  iVar10 = 0;
  do {
    iVar7 = iVar10 + 4;
    *(uint *)(&DAT_01c60dac + iVar10) = *(uint *)(&stack0xfffffc64 + iVar10);
    iVar10 = iVar7;
  } while (iVar7 != 0xc0);
  engine_matrix_c_popViewport_FUN_0046d320();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,local_6c);
  _DAT_01c6cee8 = local_c0;
  if (*(int *)param_1 <= _DAT_02125514) {
    iVar10 = -1;
    iVar7 = 0;
    fStack_3a4 = -1.0;
    if (0 < *(int *)param_1) {
      iVar11 = 0;
      do {
        if (fStack_3a4 < *(float *)(&DAT_02701528 + iVar11)) {
          fStack_3a4 = *(float *)(&DAT_02701528 + iVar11);
          iVar10 = iVar7;
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar7 < *(int *)param_1);
    }
    if (-1 < iVar10) {
      if ((*(int *)&param_1->field_0x15aeb8 < 0) ||
         (1 < param_3 || iVar10 != *(int *)&param_1->field_0x15aeb8 && 0.0 < fStack_3a4)) {
        *(uint *)&param_1->field_0x15ae5c = _DAT_0270f3d4;
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890(param_1,iVar10);
        local_cc = 1;
      }
    }
    _DAT_02125514 = 0;
  }
  return local_cc;
}
