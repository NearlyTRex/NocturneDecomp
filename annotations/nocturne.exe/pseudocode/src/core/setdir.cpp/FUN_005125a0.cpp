// Name: core_setdir.cpp_FUN_005125a0
// Address: 005125a0
// Address Range: [[005125a0, 005135c3]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_005125a0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_setdir_cpp_FUN_005125a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float *pfVar5;
  byte *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  byte *puVar12;
  uint *puVar13;
  byte *puVar14;
  uint *puVar15;
  byte bVar16;
  float10 fVar17;
  float fVar18;
  float fStack_2f0;
  float fStack_2ec;
  uint auStack_2e8 [48];
  byte auStack_228 [4];
  int aiStack_224 [24];
  int iStack_1c4;
  int iStack_1c0;
  int aiStack_1bc [6];
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint auStack_194 [6];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float afStack_14c [7];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  byte auStack_110 [16];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int iStack_f4;
  uint uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  byte auStack_d0 [16];
  uint uStack_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  int iStack_b0;
  float fStack_ac;
  int *piStack_9c;
  int iStack_98;
  byte *puStack_94;
  int iStack_90;
  int *piStack_8c;
  float fStack_88;
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  float *pfStack_50;
  float fStack_4c;
  int iStack_3c;
  uint *puStack_38;
  float *pfStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  
  bVar16 = 0;
  local_bc = 0;
  if (param_2 == 0) {
    if (param_1[0x56aaf] < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(param_1,0);
    }
    return 1;
  }
  if (param_1[0x56aaf] < 0) {
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_0051260f;
  if (0.0 < (float)param_1[0x56ab3]) {
    fVar18 = (float)param_1[0x56ab3] - *(float *)(0x01C775EC + 0x264);
    param_1[0x56ab3] = (int)fVar18;
    if (0.0 < fVar18) {
      if ((-1 < param_1[0x56ab2]) && (param_1[0x56ab2] != param_1[0x56aaf])) {
        core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(param_1,param_1[0x56ab2]);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_0051260f:
  piVar11 = DAT_005ae704;
  param_1[0x56ab3] = 0;
  local_b8 = _DAT_01c02594;
  _DAT_01c02594 = 0;
  local_b4 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(piVar11);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(DAT_005ae704,0,0,0x40,0x30);
  iVar10 = 0;
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&local_160);
  piVar11 = aiStack_224;
  do {
    iVar7 = iVar10;
    pfVar5 = (float *)core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                                (&local_160,auStack_d0,iVar10);
    iVar10 = iVar10 + 1;
    *piVar11 = (int)ROUND(*pfVar5 * _DAT_005a1a70);
    piVar11[1] = (int)ROUND(pfVar5[1] * _DAT_005a1a70);
    piVar11[2] = (int)ROUND(pfVar5[2] * _DAT_005a1a70);
    piVar11 = piVar11 + 3;
  } while (iVar10 < 8);
  fStack_130 = local_160 + fStack_154;
  fStack_100 = (local_160 + fStack_154) * 0.5f;
  fStack_12c = fStack_15c + fStack_150;
  fStack_fc = (fStack_15c + fStack_150) * 0.5f;
  fStack_128 = fStack_158 + afStack_14c[0];
  fStack_f8 = (fStack_158 + afStack_14c[0]) * 0.5f;
  iStack_1c4 = (int)ROUND(fStack_100 * _DAT_005a1a70);
  iStack_1c0 = (int)ROUND(fStack_fc * _DAT_005a1a70);
  aiStack_1bc[0] = (int)ROUND(fStack_f8 * _DAT_005a1a70);
  puVar12 = &DAT_005be774;
  do {
    iVar10 = *(int *)(puVar12 + 0x18);
    puVar6 = puVar12 + 0x48;
    *(int *)(puVar12 + 0x14) =
         aiStack_224[iVar10 * 3 + 1] * *(int *)(puVar12 + 0xc) +
         *(int *)(puVar12 + 8) * aiStack_224[iVar10 * 3] +
         *(int *)(puVar12 + 0x10) * aiStack_224[iVar10 * 3 + 2];
    puVar12 = puVar6;
  } while (puVar6 != &DAT_005be924);
  if (param_3 == 0) {
    iStack_18 = *param_1 * 10;
    iVar7 = 0x512b48;
    fVar17 = (float10)round
                                ((float10)iStack_18 * (float10)*(float *)(0x01C775EC + 0x264));
    iStack_54 = (int)ROUND(fVar17);
    if (iStack_54 < 3) {
      iStack_54 = 3;
    }
    if (*param_1 < iStack_54) {
      iStack_54 = *param_1;
    }
    fVar18 = (float)param_1[0x56ab1] - *(float *)(0x01C775EC + 0x264);
    param_1[0x56ab1] = (int)fVar18;
    if (fVar18 <= 0.0) {
      param_1[0x56ab0] = -1;
      param_1[0x56ab1] = 0;
    }
  }
  else {
    pfStack_50 = (float *)*param_1;
    param_1[0x56ab0] = -1;
    _DAT_020875f4 = 0;
    param_1[0x56ab1] = 0;
  }
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&fStack_17c,iVar7);
  fStack_1c = (float)core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(&fStack_17c);
  fStack_e0 = fStack_17c + fStack_170;
  fStack_11c = fStack_e0 * 0.5f;
  fStack_dc = fStack_178 + fStack_16c;
  fStack_d8 = fStack_174 + fStack_168;
  fStack_118 = fStack_dc * 0.5f;
  fStack_114 = fStack_d8 * 0.5f;
  local_b4 = fStack_1c * (float)1.5 + 1.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,auStack_110,&fStack_11c);
  iStack_b0 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(param_1,auStack_110);
  _DAT_026714b0 = (uint)(iStack_b0 == -1);
  iVar10 = 0;
  do {
    iVar7 = iVar10 + 4;
    *(uint *)((int)auStack_2e8 + iVar10) = *(uint *)(&DAT_01bd4260 + iVar10);
    iVar10 = iVar7;
  } while (iVar7 != 0xc0);
  iVar10 = 0;
  _DAT_026639ec = 0;
  fStack_ac = 100.0f * 100.0f;
  for (iStack_24 = 0; iStack_24 < *(int *)(0x01E57284 + 0x14cd6c); iStack_24 = iStack_24 + 1) {
    iVar7 = *(int *)(iVar10 + 0x14cd70 + 0x01E57284);
    iVar8 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x40))(iVar7);
    if (((iVar8 != 0) && (iVar7 != param_2)) &&
       (fVar18 = *(float *)(iVar7 + 0x20) - *(float *)(param_2 + 0x20),
       fVar3 = *(float *)(iVar7 + 0x24) - *(float *)(param_2 + 0x24),
       fVar2 = *(float *)(iVar7 + 0x28) - *(float *)(param_2 + 0x28),
       fVar2 * fVar2 + fVar3 * fVar3 + fVar18 * fVar18 <= fStack_ac)) {
      *(int *)(&DAT_026639f0 + _DAT_026639ec * 4) = iVar7;
      puVar9 = (uint *)(**(code **)(*(int *)(iVar7 + 0x14c) + 0x14))(iVar7,afStack_14c);
      iVar7 = _DAT_026639ec * 0x18;
      if ((uint *)(iVar7 + 0x2665930) != puVar9) {
        *(uint *)(iVar7 + 0x2665930) = *puVar9;
        *(uint *)(iVar7 + 0x2665934) = puVar9[1];
        *(uint *)(iVar7 + 0x2665938) = puVar9[2];
      }
      if ((uint *)(iVar7 + 0x266593c) != puVar9 + 3) {
        *(uint *)(iVar7 + 0x266593c) = puVar9[3];
        *(uint *)(iVar7 + 0x2665940) = puVar9[4];
        *(uint *)(iVar7 + 0x2665944) = puVar9[5];
      }
      _DAT_026639ec = _DAT_026639ec + 1;
    }
    iVar10 = iVar10 + 4;
  }
  pfStack_34 = (float *)(param_2 + 0x20);
  fStack_4c = 100.0f * 100.0f;
  fStack_70 = 200.0f * 200.0f;
  piStack_9c = param_1 + 1;
  do {
    if ((iStack_54 < 1) || (*param_1 <= _DAT_020875f4)) {
      iVar10 = 0;
      do {
        iVar7 = iVar10 + 4;
        *(uint *)(&DAT_01bd4260 + iVar10) = *(uint *)((int)auStack_2e8 + iVar10);
        iVar10 = iVar7;
      } while (iVar7 != 0xc0);
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
      engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,local_b8);
      _DAT_01c02594 = local_bc;
      if (*param_1 <= _DAT_020875f4) {
        fStack_2f0 = -1.0;
        iVar10 = -1;
        iVar7 = 0;
        if (0 < *param_1) {
          iVar8 = 0;
          do {
            if (fStack_2f0 < *(float *)(&DAT_02663604 + iVar8)) {
              fStack_2f0 = *(float *)(&DAT_02663604 + iVar8);
              iVar10 = iVar7;
            }
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar7 < *param_1);
        }
        if (-1 < iVar10) {
          if ((param_1[0x56aaf] < 0) ||
             (1 < param_3 || iVar10 != param_1[0x56aaf] && 0.0 < fStack_2f0)) {
            param_1[0x56a98] = _DAT_026714b0;
            core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(param_1,iVar10);
            uStack_c0 = 1;
          }
        }
        _DAT_020875f4 = 0;
      }
      return uStack_c0;
    }
    if (iStack_b0 == param_1[_DAT_020875f4 * 0x68 + 0x67]) {
      iStack_98 = param_2;
      puStack_94 = &DAT_005be774;
      piVar11 = piStack_9c + _DAT_020875f4 * 0x68;
      piStack_8c = piVar11;
      iStack_90 = _DAT_020875f4;
      if ((float)piVar11[0x67] == 0.0) {
        fStack_88 = (float)piVar11[0x67];
        fVar18 = fStack_88;
      }
      else {
        fVar18 = (float)piVar11[0x40] - *pfStack_34;
        if ((((float)piVar11[0x42] - pfStack_34[2]) * ((float)piVar11[0x42] - pfStack_34[2]) +
             ((float)piVar11[0x41] - pfStack_34[1]) * ((float)piVar11[0x41] - pfStack_34[1]) +
             fVar18 * fVar18 <= fStack_70) &&
           (iVar10 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
                               (piVar11,pfStack_34,local_b4), iVar10 != 0)) {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                    (DAT_005ae704,piVar11 + 0x40);
          engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                    (DAT_005ae704,piVar11[0x50]);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
                    (DAT_005ae704,piVar11 + 0x43);
          uStack_84 = 0x800000ff;
          uStack_80 = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                    (DAT_005ae704,pfStack_34);
          fStack_f8 = *(float *)(param_2 + 0x30);
          uStack_f0 = *(uint *)(param_2 + 0x38);
          iStack_f4 = piVar11[0x44];
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,&fStack_f8,0);
          puVar14 = auStack_228;
          iVar10 = 0;
          do {
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar10,puVar14)
            ;
            iVar7 = iVar10 + 0x30;
            puVar14 = puVar14 + 0xc;
            uVar1 = *(uint *)(iVar10 + 0x10 + *DAT_005ae704);
            uStack_84 = uStack_84 & uVar1;
            uStack_80 = uStack_80 | uVar1;
            iVar10 = iVar7;
          } while (iVar7 != 0x180);
          if (((uStack_84 & 0x80000000) == 0) || ((char)uStack_84 == '\0')) {
            iVar10 = 0;
            puVar12 = puStack_94 + 0x1b0;
            iStack_7c = 0;
            puVar6 = puStack_94;
            do {
              *(byte **)((int)auStack_194 + iVar10) = puVar6;
              iVar10 = iVar10 + 4;
              iStack_7c = iStack_7c + 1;
              puVar6 = puVar6 + 0x48;
            } while (puVar6 != puVar12);
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(iStack_98);
            iStack_30 = 0;
            do {
              piVar11 = (int *)(*DAT_005ae704 + iStack_30);
              iVar10 = piVar11[2];
              if (0 < iVar10) {
                iVar7 = iVar10 + 0x80;
                *piVar11 = (int)(((longlong)*piVar11 * (longlong)iVar7) / (longlong)iVar10);
                piVar11[1] = (int)(((longlong)piVar11[1] * (longlong)iVar7) / (longlong)piVar11[2]);
                piVar11[2] = iVar7;
                engine_matrix_c_projectTransformedPoint_FUN_004cd260(piVar11);
              }
              iStack_30 = iStack_30 + 0x30;
            } while (iStack_30 != 0x180);
            iVar10 = 0;
            fStack_2ec = 1.0;
            do {
              if ((*(byte *)(*DAT_005ae704 + iVar10 + 0x13) & 0x80) != 0) {
                dVar4 = 0.0625;
                if (0 < *(int *)(*DAT_005ae704 + iVar10 + 8)) {
                  dVar4 = 0.5;
                }
                fStack_2ec = fStack_2ec * (float)dVar4;
              }
              iVar10 = iVar10 + 0x30;
            } while (iVar10 != 0x180);
            iStack_20 = 0;
            iStack_78 = 0;
            iStack_30 = 0x180;
            if (0 < _DAT_026639ec) {
              iStack_2c = 0;
              puStack_38 = (uint *)(&DAT_020875f8 + iStack_90 * 0x3000);
              iStack_28 = 0x2665930;
              pfStack_50 = (float *)(piStack_8c + 0x40);
              do {
                iStack_60 = *(int *)(&DAT_026639f0 + iStack_2c);
                fVar18 = *(float *)(iStack_60 + 0x20) - *pfStack_50;
                fVar3 = *(float *)(iStack_60 + 0x24) - pfStack_50[1];
                fVar2 = *(float *)(iStack_60 + 0x28) - pfStack_50[2];
                if (fVar2 * fVar2 + fVar3 * fVar3 + fVar18 * fVar18 <= fStack_4c) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(iStack_60);
                  iVar7 = 0;
                  uStack_5c = 0x800000ff;
                  uStack_58 = 0;
                  iStack_3c = iStack_28;
                  iVar10 = 0x180;
                  do {
                    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(iStack_3c,&fStack_128,iVar7);
                    iStack_ec = (int)ROUND(fStack_128 * _DAT_005a1a70);
                    iStack_e8 = (int)ROUND(fStack_124 * _DAT_005a1a70);
                    iStack_e4 = (int)ROUND(fStack_120 * _DAT_005a1a70);
                    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                              (*DAT_005ae704 + iVar10,&iStack_ec);
                    iVar7 = iVar7 + 1;
                    uVar1 = *(uint *)(iVar10 + 0x10 + *DAT_005ae704);
                    uStack_5c = uStack_5c & uVar1;
                    uStack_58 = uStack_58 | uVar1;
                    iVar10 = iVar10 + 0x30;
                  } while (iVar7 < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(iStack_60);
                  if (((uStack_5c & 0x80000000) == 0) || ((char)uStack_5c == '\0')) {
                    if (iStack_78 == 0) {
                      iStack_78 = 1;
                      puVar9 = puStack_38;
                      puVar13 = (uint *)&DAT_020845f4;
                      for (iVar10 = 0xc00; iVar10 != 0; iVar10 = iVar10 + -1) {
                        *puVar13 = *puVar9;
                        puVar9 = puVar9 + (uint)bVar16 * -2 + 1;
                        puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      }
                      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                        *(byte *)puVar13 = *(byte *)puVar9;
                        puVar9 = (uint *)((int)puVar9 + (uint)bVar16 * -2 + 1);
                        puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      }
                      puVar12 = &DAT_020845f4;
                      iVar10 = 0;
                      do {
                        *(byte **)(&DAT_01bd4260 + iVar10) = puVar12;
                        iVar10 = iVar10 + 4;
                        puVar12 = puVar12 + 0x100;
                      } while (iVar10 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                                (DAT_005ae704,1);
                    }
                    aiStack_1bc[1] = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                              (DAT_005ae704,(uStack_58 & 0x80000000) != 0);
                    uStack_19c = 0xe;
                    uStack_1a4 = 8;
                    uStack_1a0 = 0xc;
                    uStack_198 = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,aiStack_1bc);
                    uStack_198 = 0xd;
                    uStack_1a4 = 9;
                    uStack_1a0 = 0xb;
                    uStack_19c = 0xf;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,aiStack_1bc);
                    uStack_1a4 = 8;
                    uStack_1a0 = 9;
                    uStack_19c = 0xd;
                    uStack_198 = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,aiStack_1bc);
                    uStack_1a4 = 10;
                    uStack_1a0 = 0xe;
                    uStack_19c = 0xf;
                    uStack_198 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,aiStack_1bc);
                    uStack_1a4 = 8;
                    uStack_19c = 0xb;
                    uStack_1a0 = 10;
                    uStack_198 = 9;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,aiStack_1bc);
                    uStack_1a0 = 0xd;
                    uStack_1a4 = 0xc;
                    uStack_19c = 0xf;
                    uStack_198 = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,aiStack_1bc);
                  }
                }
                iStack_2c = iStack_2c + 4;
                iStack_28 = iStack_28 + 0x18;
                iStack_20 = iStack_20 + 1;
              } while (iStack_20 < _DAT_026639ec);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
            if (iStack_78 == 0) {
              puVar12 = &DAT_020875f8 + iStack_90 * 0x3000;
              iVar10 = 0;
              do {
                *(byte **)(&DAT_01bd4260 + iVar10) = puVar12;
                iVar10 = iVar10 + 4;
                puVar12 = puVar12 + 0x100;
              } while (iVar10 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                      (DAT_005ae704,(uStack_80 & 0x80000000) != 0);
            fStack_74 = 0.0;
            if (0 < iStack_7c) {
              iVar10 = iStack_7c * 4;
              iVar7 = 0;
              do {
                iVar8 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
                                  (DAT_005ae704,*(uint *)((int)auStack_194 + iVar7));
                iVar7 = iVar7 + 4;
                fStack_74 = (float)((int)fStack_74 + iVar8);
              } while (iVar7 < iVar10);
            }
            if (*(int *)(0x01C775EC + 0x1e8) != 0) {
              puVar9 = (uint *)(iStack_90 * 0x3000 + 0x23755f8);
              iVar10 = 0;
              do {
                iVar8 = iVar10 + 4;
                puVar13 = *(uint **)(&DAT_01bd4260 + iVar10);
                puVar15 = puVar9;
                for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar15 = *puVar13;
                  puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                  puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(byte *)puVar15 = *(byte *)puVar13;
                  puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                }
                *(uint **)(&DAT_01bd4260 + iVar10) = puVar9;
                puVar9 = puVar9 + 0x40;
                iVar10 = iVar8;
              } while (iVar8 != 0xc0);
              iVar10 = 0;
              puVar12 = puStack_94;
              if (0 < iStack_7c) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                            (DAT_005ae704,puVar12);
                  iVar10 = iVar10 + 1;
                  puVar12 = puVar12 + 0x48;
                } while (iVar10 < iStack_7c);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
            fStack_1c = fStack_74;
            fStack_88 = (float)(int)fStack_74 * fStack_2ec;
            fVar18 = fStack_88;
            goto LAB_00512d30;
          }
          core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(iStack_98);
        }
        fStack_88 = 0.0;
        fVar18 = fStack_88;
      }
    }
    else {
      fVar18 = -99999.9;
    }
LAB_00512d30:
    if ((param_3 == 0) && (0.0 < fVar18)) {
      if (_DAT_020875f4 == param_1[0x56aaf]) {
        fVar18 = fVar18 * (float)3;
      }
      if (_DAT_020875f4 == param_1[0x56ab0]) {
        fVar18 = fVar18 * (float)0.20000000000000001;
      }
    }
    *(float *)(&DAT_02663604 + _DAT_020875f4 * 4) = fVar18;
    iStack_54 = iStack_54 + -1;
    _DAT_020875f4 = _DAT_020875f4 + 1;
  } while( true );
}
