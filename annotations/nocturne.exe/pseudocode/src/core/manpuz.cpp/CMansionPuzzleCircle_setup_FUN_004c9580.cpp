// Name: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004c9580
// Address: 004c9580
// Address Range: [[004c9580, 004c9bdc]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_004c9580(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_004c9580(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CKeyFramedModel *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  int iVar11;
  SGem *pSVar12;
  CMatrix3x4f *pCVar13;
  uint uVar14;
  CMatrix3x4f *pCVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  CMatrix3x4f local_1dc;
  CMatrix3x4f local_1ac;
  CMatrix3x4f local_17c;
  CVector3f local_14c;
  CVector3f local_140;
  CVector3f local_134;
  CVector3f local_128;
  CMatrix3x4f local_11c;
  CMatrix3x3f local_ec;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  int local_38;
  SGem *local_34;
  float *local_30;
  float *local_2c;
  CVector3f *local_28;
  SGem *local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar16 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->panel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->gem_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->reflector_model);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(this_ptr->light_texture).textures);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->panel_model);
  local_c4 = (pCVar8->bounds).min.x;
  local_c0 = (pCVar8->bounds).min.y;
  local_bc = (pCVar8->bounds).min.z;
  local_b8 = (pCVar8->bounds).max.x;
  local_b4 = (pCVar8->bounds).max.y;
  local_b0 = (pCVar8->bounds).max.z;
  this_ptr->panel_radius = 12.1391;
  fVar17 = (float10)fcos((float10)0.5235988f * (float10)0.5);
  fVar1 = (this_ptr->emitter_pos).f.y;
  fVar2 = (this_ptr->emitter_pos).f.x;
  fVar3 = (this_ptr->emitter_pos).f.z;
  this_ptr->bbox_extent = (float)(((float10)this_ptr->panel_radius + (float10)local_b0) / fVar17);
  this_ptr->bbox_height = local_b4 - local_c0;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = this_ptr->bbox_height;
    (this_ptr->emitter_pos).f.x = 0.0;
    fVar2 = (float)2;
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
  local_18 = local_b0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_17c,&this_ptr->gem_pos,&(this_ptr->gem_orient).vec);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->gem_model);
  local_ac = (pCVar8->bounds).min.x;
  local_a8 = (pCVar8->bounds).min.y;
  local_a4 = (pCVar8->bounds).min.z;
  local_a0 = (pCVar8->bounds).max.x;
  local_9c = (pCVar8->bounds).max.y;
  local_98 = (pCVar8->bounds).max.z;
  local_34 = this_ptr->gems;
  local_28 = &this_ptr->gems[0].position;
  local_2c = &this_ptr->gems[0].color.g;
  local_30 = &this_ptr->gems[0].color.b;
  local_38 = 0;
  do {
    iVar11 = local_38;
    core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(this_ptr,local_38);
    pSVar12 = local_34 + iVar11;
    local_24 = pSVar12;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
              (this_ptr,iVar11,(float *)pSVar12,local_2c,local_30);
    (pSVar12->hum_color).b = 0.0;
    (pSVar12->hum_color).g = (pSVar12->hum_color).b;
    fVar1 = (pSVar12->hum_color).g;
    (pSVar12->light).b = 0.0;
    (pSVar12->hum_color).r = fVar1;
    (pSVar12->light).g = (pSVar12->light).b;
    fVar1 = (pSVar12->light).g;
    local_14 = iVar11;
    local_94.y = (float)iVar11 * 0.5235988f;
    pSVar12->sfx_handles[0] = 0;
    pSVar12->sfx_handles[1] = 0;
    (pSVar12->light).r = fVar1;
    pSVar12->sfx_handles[2] = 0;
    local_94.x = 0.0;
    local_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_ec,&local_94);
    pCVar10 = &local_94;
    local_88.z = this_ptr->panel_radius;
    local_88.x = 0.0;
    local_88.y = 0.0;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_ec,&local_7c,&local_88)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_1ac,pCVar9,pCVar10);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_17c,&local_1ac,&local_1dc);
    pCVar13 = &local_1dc;
    pCVar15 = &local_11c;
    for (iVar11 = 0xc; pCVar10 = local_28, iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar15->m[0].w = pCVar13->m[0].w;
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    pCVar9 = core_xform_cpp_getTranslation_FUN_0055bc00(&local_11c,&local_4c);
    pSVar12 = local_24;
    if (pCVar9 != pCVar10) {
      pCVar10->x = pCVar9->x;
      pCVar10->y = pCVar9->y;
      pCVar10->z = pCVar9->z;
    }
    pCVar9 = &local_24->rotation;
    pCVar10 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_11c,&local_64);
    if (pCVar9 != pCVar10) {
      pCVar9->x = pCVar10->x;
      (pSVar12->rotation).y = pCVar10->y;
      (pSVar12->rotation).z = pCVar10->z;
    }
    pCVar10 = &local_14c;
    uVar14 = 0;
    __arrinit(&local_14c,4,&g_CVectorTypeInfo_005993b0);
    do {
      local_70.y = 0.0;
      local_70.x = local_ac;
      if ((uVar14 & 1) != 0) {
        local_70.x = local_a0;
      }
      local_70.z = local_a4;
      if ((uVar14 & 2) != 0) {
        local_70.z = local_98;
      }
      local_20 = local_70.x;
      local_1c = local_70.z;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_58,&local_70,&local_11c);
      if (pCVar10 != pCVar9) {
        pCVar10->x = pCVar9->x;
        pCVar10->y = pCVar9->y;
        pCVar10->z = pCVar9->z;
      }
      uVar14 = uVar14 + 1;
      pCVar10 = pCVar10 + 1;
    } while ((int)uVar14 < 4);
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
              (&local_24->collision_tri_a,&local_134,&local_140,&local_14c);
    local_30 = local_30 + 0x2e;
    iVar11 = local_38 + 1;
    local_38 = iVar11;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
              (&local_24->collision_tri_b,&local_134,&local_128,&local_140);
    local_28 = (CVector3f *)&local_28[0xf].y;
    local_2c = local_2c + 0x2e;
  } while (iVar11 < 0xc);
  fVar17 = (float10)fcos((float10)0.5235988f);
  fVar18 = (float10)fsin((float10)0.5235988f);
  fVar1 = (this_ptr->gem_pos).y;
  fVar5 = (float)0.75;
  fVar19 = (float10)0.5;
  fVar2 = this_ptr->panel_radius;
  pCVar10 = &this_ptr->reflectors[0].target_position;
  fVar3 = (this_ptr->emitter_pos).f.y;
  fVar4 = (float)0.25;
  this_ptr->reflectors[0].target_position.z =
       (float)(fVar17 * (float10)this_ptr->panel_radius * fVar19);
  pCVar10->x = (float)((float10)fVar2 * fVar18 * fVar19);
  this_ptr->reflectors[0].target_position.y = fVar3 * fVar4 + fVar1 * fVar5;
  if (this_ptr->reflectors != (SReflector *)pCVar10) {
    this_ptr->reflectors[0].start_position.x = pCVar10->x;
    this_ptr->reflectors[0].start_position.y = this_ptr->reflectors[0].target_position.y;
    this_ptr->reflectors[0].start_position.z = this_ptr->reflectors[0].target_position.z;
  }
  pCVar10 = &this_ptr->reflectors[0].rotation;
  pCVar10->x = -0.0805024;
  this_ptr->reflectors[0].rotation.z = 0.0;
  this_ptr->reflectors[0].rotation.y = -1.54034;
  this_ptr->reflectors[0].start_position.y =
       this_ptr->reflectors[0].start_position.y + -4.0f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&this_ptr->reflectors[0].rotation_matrix,pCVar10);
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
  pCVar10 = &this_ptr->reflectors[1].rotation;
  this_ptr->reflectors[1].target_position.y = fVar3;
  this_ptr->reflectors[1].target_position.z = fVar5;
  pCVar10->x = fVar6;
  this_ptr->reflectors[1].rotation.z = fVar7;
  this_ptr->reflectors[1].start_position.x = -fVar1;
  this_ptr->reflectors[1].target_position.x = -fVar4;
  this_ptr->reflectors[1].rotation.y = -fVar2;
  iVar11 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&this_ptr->reflectors[1].rotation_matrix,pCVar10);
  do {
    core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(this_ptr,iVar11);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  return;
}
