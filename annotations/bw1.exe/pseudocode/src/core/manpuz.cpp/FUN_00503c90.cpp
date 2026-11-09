// Name: core_manpuz.cpp_FUN_00503c90
// Address: 00503c90
// Address Range: [[00503c90, 005042de]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00503c90(CMansionPuzzleCircle *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_00503c90(CMansionPuzzleCircle *param_1)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  byte *puVar4;
  int iVar5;
  float *pfVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_10a0 [923];
  uint uStack_220;
  CMatrix3x4f *output_matrix;
  CVector3f *position;
  CMatrix3x4f aCStack_20c [48];
  uint auStack_1dc [12];
  CMatrix3x4f aCStack_1ac [48];
  uint auStack_17c [12];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  CMatrix3x3f aCStack_11c [40];
  uint uStack_f4;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  uint auStack_dc [6];
  byte auStack_c4 [4];
  uint uStack_c0;
  CVector3f CStack_b8;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  CVector3f CStack_a0;
  byte auStack_94 [8];
  uint uStack_8c;
  uint uStack_88;
  float afStack_84 [5];
  uint uStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  byte *puStack_38;
  float *pfStack_34;
  float *pfStack_30;
  uint *puStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  core_actor_cpp_FUN_00408850((CDemonActor *)param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1->field_0x158);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1->field_0x2d4);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1->field_0x450);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&param_1->field_0x14c0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&param_1->field_0x158);
  puVar8 = (uint *)&pCVar3->field_0x338;
  puVar9 = &uStack_f4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  *(uint *)&param_1->field_0x150c = 0x414239c1;
  fVar11 = (float10)fcos((float10)_DAT_0060343c * (float10)_DAT_005e743d);
  *(float *)&param_1->field_0x1510 = fStack_e4 - fStack_f0;
  *(float *)&param_1->field_0x1508 =
       (float)(((float10)*(float *)&param_1->field_0x150c + (float10)fStack_e0) / fVar11);
  if (SQRT(*(float *)&param_1->field_0x5ec * *(float *)&param_1->field_0x5ec +
           *(float *)&param_1->field_0x5e4 * *(float *)&param_1->field_0x5e4 +
           *(float *)&param_1->field_0x5e8 * *(float *)&param_1->field_0x5e8) == 0.0) {
    *(uint *)&param_1->field_0x5e4 = 0;
    fVar1 = (float)_DAT_005e7445;
    *(uint *)&param_1->field_0x5ec = 0xbf8ccccd;
    *(float *)&param_1->field_0x5e8 = *(float *)&param_1->field_0x1510 + fVar1;
  }
  if (SQRT(*(float *)&param_1->field_0x5d4 * *(float *)&param_1->field_0x5d4 +
           *(float *)&param_1->field_0x5cc * *(float *)&param_1->field_0x5cc +
           *(float *)&param_1->field_0x5d0 * *(float *)&param_1->field_0x5d0) == 0.0) {
    *(uint *)&param_1->field_0x5d0 = 0x40400000;
    *(uint *)&param_1->field_0x5d4 = 0xbdcccccd;
    *(uint *)&param_1->field_0x5cc = 0;
  }
  core_xform_cpp_FUN_005b5760
            (aCStack_1ac,(CVector3f *)&param_1->field_0x5cc,(CVector3f *)&param_1->field_0x5d8);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&param_1->field_0x2d4);
  puStack_38 = &param_1->field_0xaa0;
  puStack_2c = (uint *)&param_1->field_0xac4;
  iStack_28 = 0;
  pfStack_30 = (float *)&param_1->field_0xaa4;
  pfStack_34 = (float *)&param_1->field_0xaa8;
  puVar8 = (uint *)&pCVar3->field_0x338;
  puVar9 = auStack_dc;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  do {
    iVar5 = iStack_28;
    core_manpuz_cpp_FUN_00504ee0(param_1,iStack_28);
    pfVar6 = (float *)(puStack_38 + iVar5 * 0xb8);
    pfStack_24 = pfVar6;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
              (param_1,iVar5,pfVar6,pfStack_30,pfStack_34);
    pfVar6[5] = 0.0;
    pfVar6[4] = pfVar6[5];
    pfVar6[8] = 0.0;
    pfVar6[3] = pfVar6[4];
    pfVar6[7] = pfVar6[8];
    iStack_14 = iVar5;
    auStack_94._4_4_ = (float)iVar5 * _DAT_0060343c;
    pfVar6[0x2b] = 0.0;
    pfVar6[0x2c] = 0.0;
    pfVar6[6] = pfVar6[7];
    pfVar6[0x2d] = 0.0;
    auStack_94._0_4_ = 0;
    uStack_8c = 0;
    core_dirmat_cpp_FUN_0045f3e0(aCStack_11c,(CVector3f *)auStack_94);
    pCVar7 = (CVector3f *)auStack_94;
    uStack_a4 = *(uint *)&param_1->field_0x150c;
    uStack_ac = 0;
    uStack_a8 = 0;
    core_dirmat_cpp_FUN_0045f690(aCStack_11c,&uStack_ac);
    position = &CStack_64;
    output_matrix = aCStack_20c;
    CStack_64._0_4_ = CStack_58._0_4_;
    *(uint *)((int)&CStack_64 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar10 * -8 + 4);
    *(uint *)((int)&CStack_64 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_xform_cpp_FUN_005b5760(output_matrix,position,pCVar7);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_1ac,aCStack_20c);
    puVar8 = auStack_17c;
    puVar9 = auStack_1dc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_FUN_005b6270(auStack_1dc);
    uStack_88 = uStack_70;
    afStack_84[(uint)bVar10 * -2] = afStack_84[(uint)bVar10 * -2 + 6];
    pfVar6 = pfStack_24;
    afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (&uStack_88 != puStack_2c) {
      *puStack_2c = uStack_88;
      puStack_2c[1] = afStack_84[0];
      puStack_2c[2] = afStack_84[1];
    }
    core_xform_cpp_FUN_005b5930(auStack_1dc);
    fStack_4c = afStack_84[2];
    afStack_48[(uint)bVar10 * -2] = afStack_84[(uint)bVar10 * -2 + 3];
    afStack_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (pfVar6 + 0xc != &fStack_4c) {
      pfVar6[0xc] = fStack_4c;
      pfVar6[0xd] = afStack_48[0];
      pfVar6[0xe] = afStack_48[1];
    }
    pCVar7 = &CStack_14c;
    __arrinit(&CStack_14c,4,&g_CVectorTypeInfo);
    iStack_18 = 0;
    do {
      uStack_c0 = 0;
      core_xform_cpp_FUN_005b5080(auStack_c4,auStack_1dc);
      CStack_a0._0_4_ = CStack_b8._0_4_;
      *(uint *)(auStack_94 + (uint)bVar10 * -8 + -8) =
           *(uint *)((int)&CStack_b8 + (uint)bVar10 * -8 + 4);
      *(uint *)(auStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4) =
           *(uint *)((int)&CStack_b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if (pCVar7 != &CStack_a0) {
        *(uint *)pCVar7 = CStack_a0._0_4_;
        *(uint *)&pCVar7->field_0x4 = CStack_a0._4_4_;
        *(uint *)&pCVar7->field_0x8 = CStack_a0._8_4_;
      }
      iStack_18 = iStack_18 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iStack_18 < 4);
    uStack_220 = 0x5040b6;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
              ((CDemonTriangle *)(pfStack_24 + 0xf),&CStack_134,&CStack_140,&CStack_14c);
    puStack_2c = puStack_2c + 0x2e;
    uStack_220 = 0x5040e6;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
              ((CDemonTriangle *)(pfStack_24 + 0x1d),&CStack_134,&CStack_128,&CStack_140);
    pfStack_30 = pfStack_30 + 0x2e;
    pfStack_34 = pfStack_34 + 0x2e;
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 0xc);
  fVar11 = (float10)fcos((float10)_DAT_0060343c);
  fVar12 = (float10)fsin((float10)_DAT_0060343c);
  fVar2 = (float)_DAT_005e744d;
  fVar13 = (float10)_DAT_005e743d;
  puVar4 = &param_1->field_0x134c;
  fVar1 = (float)_DAT_005e7455;
  *(float *)&param_1->field_0x1354 =
       (float)(fVar11 * (float10)*(float *)&param_1->field_0x150c * fVar13);
  *(float *)puVar4 = (float)((float10)*(float *)&param_1->field_0x150c * fVar12 * fVar13);
  *(float *)&param_1->field_0x1350 =
       *(float *)&param_1->field_0x5e8 * fVar1 + *(float *)&param_1->field_0x5d0 * fVar2;
  if (&param_1->field_0x1340 != puVar4) {
    *(uint *)&param_1->field_0x1340 = *(uint *)puVar4;
    *(uint *)&param_1->field_0x1344 = *(uint *)&param_1->field_0x1350;
    *(uint *)&param_1->field_0x1348 = *(uint *)&param_1->field_0x1354;
  }
  *(uint *)&param_1->field_0x1368 = 0xbda4de71;
  *(uint *)&param_1->field_0x1370 = 0;
  *(uint *)&param_1->field_0x136c = 0xbfc529dc;
  *(float *)&param_1->field_0x1344 = *(float *)&param_1->field_0x1344 + _DAT_005e745d;
  core_dirmat_cpp_FUN_0045f3e0
            ((CMatrix3x3f *)&param_1->field_0x1374,(CVector3f *)&param_1->field_0x1368);
  *(uint *)&param_1->field_0x13a4 = *(uint *)&param_1->field_0x1344;
  *(uint *)&param_1->field_0x13a8 = *(uint *)&param_1->field_0x1348;
  *(uint *)&param_1->field_0x13b0 = *(uint *)&param_1->field_0x1350;
  *(uint *)&param_1->field_0x13b4 = *(uint *)&param_1->field_0x1354;
  *(uint *)&param_1->field_0x13c8 = *(uint *)&param_1->field_0x1368;
  *(uint *)&param_1->field_0x13d0 = *(uint *)&param_1->field_0x1370;
  *(float *)&param_1->field_0x13a0 = -*(float *)&param_1->field_0x1340;
  *(float *)&param_1->field_0x13ac = -*(float *)&param_1->field_0x134c;
  *(float *)&param_1->field_0x13cc = -*(float *)&param_1->field_0x136c;
  iVar5 = 0;
  core_dirmat_cpp_FUN_0045f3e0
            ((CMatrix3x3f *)&param_1->field_0x13d4,(CVector3f *)&param_1->field_0x13c8);
  do {
    core_manpuz_cpp_FUN_005062a0(param_1,iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}
