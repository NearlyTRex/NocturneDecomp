// Name: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004e5080
// Address: 004e5080
// Address Range: [[004e5080, 004e56ce]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_004e5080(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_004e5080(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  CKeyFramedModel *pCVar11;
  int iVar12;
  SGem *pSVar13;
  CVector3f *pCVar14;
  CBoundingBox3D *pCVar15;
  uint *puVar16;
  float *pfVar17;
  uint *puVar18;
  byte bVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_10a0 [923];
  uint uStack_220;
  byte *puVar23;
  byte auStack_20c [48];
  uint auStack_1dc [12];
  byte auStack_1ac [48];
  uint auStack_17c [12];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  CMatrix3x3f CStack_11c;
  float fStack_f4;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [6];
  byte auStack_c4 [4];
  uint uStack_c0;
  float fStack_b8;
  float afStack_b4 [5];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  uint uStack_88;
  float afStack_84 [5];
  uint uStack_70;
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  SGem *pSStack_38;
  float *pfStack_34;
  float *pfStack_30;
  uint *puStack_2c;
  int iStack_28;
  SGem *pSStack_24;
  int iStack_18;
  int iStack_14;
  
  bVar19 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->panel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->gem_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->reflector_model);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->light_texture);
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->panel_model)
  ;
  pCVar15 = &pCVar11->bounds;
  pfVar17 = &fStack_f4;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar17 = (pCVar15->min).x;
    pCVar15 = (CBoundingBox3D *)((int)pCVar15 + (uint)bVar19 * -8 + 4);
    pfVar17 = pfVar17 + (uint)bVar19 * -2 + 1;
  }
  this_ptr->panel_radius = 12.1391;
  fVar20 = (float10)fcos((float10)_DAT_005f98bc * (float10)_DAT_005dc4ed);
  fVar1 = (this_ptr->emitter_pos).f.y;
  fVar2 = (this_ptr->emitter_pos).f.x;
  fVar3 = (this_ptr->emitter_pos).f.z;
  this_ptr->bbox_height = fStack_e4 - fStack_f0;
  this_ptr->bbox_extent = (float)(((float10)this_ptr->panel_radius + (float10)fStack_e0) / fVar20);
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = this_ptr->bbox_height;
    (this_ptr->emitter_pos).f.x = 0.0;
    fVar2 = (float)_DAT_005dc4f5;
    (this_ptr->emitter_pos).i.z = -0x40733333;
    (this_ptr->emitter_pos).f.y = fVar1 + fVar2;
  }
  fVar1 = (this_ptr->gem_pos).y;
  fVar2 = (this_ptr->gem_pos).x;
  fVar3 = (this_ptr->gem_pos).z;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    (this_ptr->gem_pos).y = 3.0;
    (this_ptr->gem_pos).z = -0.1;
    (this_ptr->gem_pos).x = 0.0;
  }
  core_xform_cpp_FUN_00591c10(auStack_1ac,&this_ptr->gem_pos,&this_ptr->gem_orient);
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->gem_model);
  pSStack_38 = this_ptr->gems;
  puStack_2c = (uint *)&this_ptr->gems[0].field_0x24;
  iStack_28 = 0;
  pfStack_30 = (float *)&this_ptr->gems[0].field_0x4;
  pfStack_34 = (float *)&this_ptr->gems[0].field_0x8;
  pCVar15 = &pCVar11->bounds;
  pfVar17 = afStack_dc;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar17 = (pCVar15->min).x;
    pCVar15 = (CBoundingBox3D *)((int)pCVar15 + (uint)bVar19 * -8 + 4);
    pfVar17 = pfVar17 + (uint)bVar19 * -2 + 1;
  }
  do {
    iVar12 = iStack_28;
    core_manpuz_cpp_FUN_004e6240(this_ptr,iStack_28);
    pSVar13 = pSStack_38 + iVar12;
    pSStack_24 = pSVar13;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
              (this_ptr,iVar12,(float *)pSVar13,pfStack_30,pfStack_34);
    *(uint *)&pSVar13->field_0x14 = 0;
    *(uint *)&pSVar13->field_0x10 = *(uint *)&pSVar13->field_0x14;
    *(uint *)&pSVar13->field_0x20 = 0;
    *(uint *)&pSVar13->field_0xc = *(uint *)&pSVar13->field_0x10;
    *(uint *)&pSVar13->field_0x1c = *(uint *)&pSVar13->field_0x20;
    iStack_14 = iVar12;
    CStack_94.y = (float)iVar12 * _DAT_005f98bc;
    *(uint *)&pSVar13->field_0xac = 0;
    *(uint *)&pSVar13->field_0xb0 = 0;
    *(uint *)&pSVar13->field_0x18 = *(uint *)&pSVar13->field_0x1c;
    *(uint *)&pSVar13->field_0xb4 = 0;
    CStack_94.x = 0.0;
    CStack_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_11c,&CStack_94);
    afStack_b4[4] = this_ptr->panel_radius;
    afStack_b4[2] = 0.0;
    afStack_b4[3] = 0.0;
    core_dirmat_cpp_FUN_00449530(&CStack_11c,afStack_b4 + 2,&CStack_94);
    pfVar17 = afStack_84 + 8;
    puVar23 = auStack_20c;
    afStack_64[0] = (float)uStack_58;
    afStack_84[(uint)bVar19 * -2 + 9] = afStack_84[(uint)bVar19 * -2 + 0xc];
    afStack_84[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10] =
         afStack_84[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd];
    core_xform_cpp_FUN_00591c10(puVar23,pfVar17);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_1ac,auStack_20c);
    puVar16 = auStack_17c;
    puVar18 = auStack_1dc;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar18 = *puVar16;
      puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_FUN_00592720(auStack_1dc);
    uStack_88 = uStack_70;
    afStack_84[(uint)bVar19 * -2] = afStack_84[(uint)bVar19 * -2 + 6];
    pSVar13 = pSStack_24;
    afStack_84[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_84[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
    if (&uStack_88 != puStack_2c) {
      *puStack_2c = uStack_88;
      puStack_2c[1] = afStack_84[0];
      puStack_2c[2] = afStack_84[1];
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(auStack_1dc);
    fStack_4c = afStack_84[2];
    afStack_84[(uint)bVar19 * -2 + 0xf] = afStack_84[(uint)bVar19 * -2 + 3];
    afStack_84[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x10] =
         afStack_84[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
    if ((float *)&pSVar13->field_0x30 != afStack_84 + 0xe) {
      *(float *)&pSVar13->field_0x30 = fStack_4c;
      *(uint *)&pSVar13->field_0x34 = uStack_48;
      *(uint *)&pSVar13->field_0x38 = uStack_44;
    }
    pCVar14 = &CStack_14c;
    __arrinit(&CStack_14c,4,&g_CVectorTypeInfo);
    iStack_18 = 0;
    do {
      uStack_c0 = 0;
      core_xform_cpp_FUN_00591530(auStack_c4,auStack_1dc);
      CStack_a0.x = fStack_b8;
      *(float *)((int)&CStack_a0 + (uint)bVar19 * -8 + 4) = afStack_b4[(uint)bVar19 * -2];
      *(float *)((int)&CStack_a0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      if (pCVar14 != &CStack_a0) {
        pCVar14->x = CStack_a0.x;
        pCVar14->y = CStack_a0.y;
        pCVar14->z = CStack_a0.z;
      }
      iStack_18 = iStack_18 + 1;
      pCVar14 = pCVar14 + 1;
    } while (iStack_18 < 4);
    uStack_220 = 0x4e54a6;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
              ((CDemonTriangle *)&pSStack_24->field_0x3c,&CStack_134,&CStack_140,&CStack_14c);
    puStack_2c = puStack_2c + 0x2e;
    uStack_220 = 0x4e54d6;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
              ((CDemonTriangle *)&pSStack_24->field_0x74,&CStack_134,&CStack_128,&CStack_140);
    pfStack_30 = pfStack_30 + 0x2e;
    pfStack_34 = pfStack_34 + 0x2e;
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 0xc);
  fVar20 = (float10)fcos((float10)_DAT_005f98bc);
  fVar21 = (float10)fsin((float10)_DAT_005f98bc);
  fVar1 = (this_ptr->gem_pos).y;
  fVar10 = (float)_DAT_005dc4fd;
  fVar22 = (float10)_DAT_005dc4ed;
  fVar2 = this_ptr->panel_radius;
  puVar23 = &this_ptr->reflectors[0].field_0xc;
  fVar3 = (this_ptr->emitter_pos).f.y;
  fVar9 = (float)_DAT_005dc505;
  *(float *)&this_ptr->reflectors[0].field_0x14 =
       (float)(fVar20 * (float10)this_ptr->panel_radius * fVar22);
  *(float *)puVar23 = (float)((float10)fVar2 * fVar21 * fVar22);
  *(float *)&this_ptr->reflectors[0].field_0x10 = fVar3 * fVar9 + fVar1 * fVar10;
  if (this_ptr->reflectors != (SReflector *)puVar23) {
    *(uint *)this_ptr->reflectors = *(uint *)puVar23;
    *(uint *)&this_ptr->reflectors[0].field_0x4 =
         *(uint *)&this_ptr->reflectors[0].field_0x10;
    *(uint *)&this_ptr->reflectors[0].field_0x8 =
         *(uint *)&this_ptr->reflectors[0].field_0x14;
  }
  puVar23 = &this_ptr->reflectors[0].field_0x28;
  *(uint *)puVar23 = 0xbda4de71;
  *(uint *)&this_ptr->reflectors[0].field_0x30 = 0;
  *(uint *)&this_ptr->reflectors[0].field_0x2c = 0xbfc529dc;
  *(float *)&this_ptr->reflectors[0].field_0x4 =
       *(float *)&this_ptr->reflectors[0].field_0x4 + _DAT_005dc50d;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            ((CMatrix3x3f *)&this_ptr->reflectors[0].field_0x34,(CVector3f *)puVar23);
  fVar1 = *(float *)this_ptr->reflectors;
  uVar4 = *(uint *)&this_ptr->reflectors[0].field_0x8;
  uVar5 = *(uint *)&this_ptr->reflectors[0].field_0x10;
  fVar2 = *(float *)&this_ptr->reflectors[0].field_0xc;
  uVar6 = *(uint *)&this_ptr->reflectors[0].field_0x14;
  uVar7 = *(uint *)&this_ptr->reflectors[0].field_0x28;
  *(uint *)&this_ptr->reflectors[1].field_0x4 =
       *(uint *)&this_ptr->reflectors[0].field_0x4;
  uVar8 = *(uint *)&this_ptr->reflectors[0].field_0x30;
  *(uint *)&this_ptr->reflectors[1].field_0x8 = uVar4;
  fVar3 = *(float *)&this_ptr->reflectors[0].field_0x2c;
  puVar23 = &this_ptr->reflectors[1].field_0x28;
  *(uint *)&this_ptr->reflectors[1].field_0x10 = uVar5;
  *(uint *)&this_ptr->reflectors[1].field_0x14 = uVar6;
  *(uint *)puVar23 = uVar7;
  *(uint *)&this_ptr->reflectors[1].field_0x30 = uVar8;
  *(float *)(this_ptr->reflectors + 1) = -fVar1;
  *(float *)&this_ptr->reflectors[1].field_0xc = -fVar2;
  *(float *)&this_ptr->reflectors[1].field_0x2c = -fVar3;
  iVar12 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            ((CMatrix3x3f *)&this_ptr->reflectors[1].field_0x34,(CVector3f *)puVar23);
  do {
    core_manpuz_cpp_FUN_004e7600(this_ptr,iVar12);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 2);
  return;
}
