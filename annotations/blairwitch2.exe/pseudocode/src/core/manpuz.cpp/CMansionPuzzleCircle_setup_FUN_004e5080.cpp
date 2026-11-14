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
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CKeyFramedModel *pCVar8;
  int iVar9;
  SGem *pSVar10;
  CVector3f *pCVar11;
  CBoundingBox3D *pCVar12;
  CMatrix3x4f *pCVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float afStackY_10a0 [923];
  uint uStack_220;
  CMatrix3x4f CStack_20c;
  float afStack_1dc [12];
  CMatrix3x4f CStack_1ac;
  CMatrix3x4f CStack_17c;
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
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  SGem *pSStack_38;
  float *pfStack_34;
  float *pfStack_30;
  CVector3f *pCStack_2c;
  int iStack_28;
  SGem *pSStack_24;
  int iStack_18;
  int iStack_14;
  
  bVar15 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->panel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->gem_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->reflector_model);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->light_texture);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->panel_model);
  pCVar12 = &pCVar8->bounds;
  pfVar14 = &fStack_f4;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar14 = (pCVar12->min).x;
    pCVar12 = (CBoundingBox3D *)((int)pCVar12 + (uint)bVar15 * -8 + 4);
    pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
  }
  this_ptr->panel_radius = 12.1391;
  fVar16 = (float10)fcos((float10)_DAT_005f98bc * (float10)_DAT_005dc4ed);
  fVar1 = (this_ptr->emitter_pos).f.y;
  fVar2 = (this_ptr->emitter_pos).f.x;
  fVar3 = (this_ptr->emitter_pos).f.z;
  this_ptr->bbox_height = fStack_e4 - fStack_f0;
  this_ptr->bbox_extent = (float)(((float10)this_ptr->panel_radius + (float10)fStack_e0) / fVar16);
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
  core_xform_cpp_FUN_00591c10(&CStack_1ac,&this_ptr->gem_pos,&this_ptr->gem_orient);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->gem_model);
  pSStack_38 = this_ptr->gems;
  pCStack_2c = &this_ptr->gems[0].position;
  iStack_28 = 0;
  pfStack_30 = &this_ptr->gems[0].color.g;
  pfStack_34 = &this_ptr->gems[0].color.b;
  pCVar12 = &pCVar8->bounds;
  pfVar14 = afStack_dc;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar14 = (pCVar12->min).x;
    pCVar12 = (CBoundingBox3D *)((int)pCVar12 + (uint)bVar15 * -8 + 4);
    pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
  }
  do {
    iVar9 = iStack_28;
    core_manpuz_cpp_FUN_004e6240(this_ptr,iStack_28);
    pSVar10 = pSStack_38 + iVar9;
    pSStack_24 = pSVar10;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
              (this_ptr,iVar9,(float *)pSVar10,pfStack_30,pfStack_34);
    (pSVar10->hum_color).b = 0.0;
    (pSVar10->hum_color).g = (pSVar10->hum_color).b;
    fVar1 = (pSVar10->hum_color).g;
    (pSVar10->light).b = 0.0;
    (pSVar10->hum_color).r = fVar1;
    (pSVar10->light).g = (pSVar10->light).b;
    fVar1 = (pSVar10->light).g;
    iStack_14 = iVar9;
    CStack_94.y = (float)iVar9 * _DAT_005f98bc;
    pSVar10->sfx_handles[0] = 0;
    pSVar10->sfx_handles[1] = 0;
    (pSVar10->light).r = fVar1;
    pSVar10->sfx_handles[2] = 0;
    CStack_94.x = 0.0;
    CStack_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_11c,&CStack_94);
    afStack_b4[4] = this_ptr->panel_radius;
    afStack_b4[2] = 0.0;
    afStack_b4[3] = 0.0;
    core_dirmat_cpp_FUN_00449530(&CStack_11c,afStack_b4 + 2,&CStack_94);
    pfVar14 = afStack_84 + 8;
    pCVar13 = &CStack_20c;
    afStack_64[0] = (float)uStack_58;
    afStack_84[(uint)bVar15 * -2 + 9] = afStack_84[(uint)bVar15 * -2 + 0xc];
    afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
    core_xform_cpp_FUN_00591c10(pCVar13,pfVar14);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&CStack_1ac,&CStack_20c,&CStack_17c);
    pCVar13 = &CStack_17c;
    pfVar14 = afStack_1dc;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar14 = pCVar13->m[0].w;
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar15 * -2 + 1) * 4);
      pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_FUN_00592720(afStack_1dc);
    fStack_88 = fStack_70;
    afStack_84[(uint)bVar15 * -2] = afStack_84[(uint)bVar15 * -2 + 6];
    pSVar10 = pSStack_24;
    afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    if ((CVector3f *)&fStack_88 != pCStack_2c) {
      pCStack_2c->x = fStack_88;
      pCStack_2c->y = afStack_84[0];
      pCStack_2c->z = afStack_84[1];
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(afStack_1dc);
    fStack_4c = afStack_84[2];
    afStack_84[(uint)bVar15 * -2 + 0xf] = afStack_84[(uint)bVar15 * -2 + 3];
    afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
         afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    if (&pSVar10->rotation != (CVector3f *)(afStack_84 + 0xe)) {
      (pSVar10->rotation).x = fStack_4c;
      (pSVar10->rotation).y = fStack_48;
      (pSVar10->rotation).z = fStack_44;
    }
    pCVar11 = &CStack_14c;
    __arrinit(&CStack_14c,4,&g_CVectorTypeInfo);
    iStack_18 = 0;
    do {
      uStack_c0 = 0;
      core_xform_cpp_FUN_00591530(auStack_c4,afStack_1dc);
      CStack_a0.x = fStack_b8;
      *(float *)((int)&CStack_a0 + (uint)bVar15 * -8 + 4) = afStack_b4[(uint)bVar15 * -2];
      *(float *)((int)&CStack_a0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      if (pCVar11 != &CStack_a0) {
        pCVar11->x = CStack_a0.x;
        pCVar11->y = CStack_a0.y;
        pCVar11->z = CStack_a0.z;
      }
      iStack_18 = iStack_18 + 1;
      pCVar11 = pCVar11 + 1;
    } while (iStack_18 < 4);
    uStack_220 = 0x4e54a6;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
              (&pSStack_24->collision_tri_a,&CStack_134,&CStack_140,&CStack_14c);
    pCStack_2c = (CVector3f *)((int)(pCStack_2c + 0xf) + 4);
    uStack_220 = 0x4e54d6;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
              (&pSStack_24->collision_tri_b,&CStack_134,&CStack_128,&CStack_140);
    pfStack_30 = pfStack_30 + 0x2e;
    pfStack_34 = pfStack_34 + 0x2e;
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 0xc);
  fVar16 = (float10)fcos((float10)_DAT_005f98bc);
  fVar17 = (float10)fsin((float10)_DAT_005f98bc);
  fVar1 = (this_ptr->gem_pos).y;
  fVar5 = (float)_DAT_005dc4fd;
  fVar18 = (float10)_DAT_005dc4ed;
  fVar2 = this_ptr->panel_radius;
  pCVar11 = &this_ptr->reflectors[0].target_position;
  fVar3 = (this_ptr->emitter_pos).f.y;
  fVar4 = (float)_DAT_005dc505;
  this_ptr->reflectors[0].target_position.z =
       (float)(fVar16 * (float10)this_ptr->panel_radius * fVar18);
  pCVar11->x = (float)((float10)fVar2 * fVar17 * fVar18);
  this_ptr->reflectors[0].target_position.y = fVar3 * fVar4 + fVar1 * fVar5;
  if (this_ptr->reflectors != (SReflector *)pCVar11) {
    this_ptr->reflectors[0].start_position.x = pCVar11->x;
    this_ptr->reflectors[0].start_position.y = this_ptr->reflectors[0].target_position.y;
    this_ptr->reflectors[0].start_position.z = this_ptr->reflectors[0].target_position.z;
  }
  pCVar11 = &this_ptr->reflectors[0].rotation;
  pCVar11->x = -0.0805024;
  this_ptr->reflectors[0].rotation.z = 0.0;
  this_ptr->reflectors[0].rotation.y = -1.54034;
  this_ptr->reflectors[0].start_position.y =
       this_ptr->reflectors[0].start_position.y + _DAT_005dc50d;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&this_ptr->reflectors[0].rotation_matrix,pCVar11);
  fVar1 = this_ptr->reflectors[0].start_position.x;
  fVar2 = this_ptr->reflectors[0].start_position.z;
  fVar3 = this_ptr->reflectors[0].target_position.y;
  fVar4 = this_ptr->reflectors[0].target_position.x;
  fVar5 = this_ptr->reflectors[0].target_position.z;
  fVar6 = this_ptr->reflectors[0].rotation.x;
  this_ptr->reflectors[1].start_position.y = this_ptr->reflectors[0].start_position.y;
  fVar7 = this_ptr->reflectors[0].rotation.z;
  this_ptr->reflectors[1].start_position.z = fVar2;
  fVar2 = this_ptr->reflectors[0].rotation.y;
  pCVar11 = &this_ptr->reflectors[1].rotation;
  this_ptr->reflectors[1].target_position.y = fVar3;
  this_ptr->reflectors[1].target_position.z = fVar5;
  pCVar11->x = fVar6;
  this_ptr->reflectors[1].rotation.z = fVar7;
  this_ptr->reflectors[1].start_position.x = -fVar1;
  this_ptr->reflectors[1].target_position.x = -fVar4;
  this_ptr->reflectors[1].rotation.y = -fVar2;
  iVar9 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&this_ptr->reflectors[1].rotation_matrix,pCVar11);
  do {
    core_manpuz_cpp_FUN_004e7600(this_ptr,iVar9);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  return;
}
