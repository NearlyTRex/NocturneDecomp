// Name: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
// Address: 00508a70
// Address Range: [[00508a70, 005090cc]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle *this_ptr)

{
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  CKeyFramedModel *pCVar8;
  CKeyFramedModel *pCVar14;
  CVector3f *pCVar9;
  CVector3f *pCVar16;
  CVector3f *pCVar10;
  CVector3f *pCVar17;
  int iVar11;
  SGem *pSVar12;
  int reflector_index;
  CMatrix3x4f *pCVar13;
  uint uVar14;
  CMatrix3x4f *pCVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar20;
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
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar1;
  float fVar2;
  
  bVar16 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->panel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->gem_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->reflector_model);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(this_ptr->light_texture).textures);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->panel_model);
  fVar9 = (pCVar8->bounds).min.y;
  fVar10 = (pCVar8->bounds).max.y;
  fVar11 = (pCVar8->bounds).max.z;
  this_ptr->panel_radius = 12.1391;
  fVar17 = (float10)fcos((float10)0.5235988f * (float10)0.5);
  fVar1 = (this_ptr->emitter_pos).f.y;
  fVar2 = (this_ptr->emitter_pos).f.x;
  fVar3 = (this_ptr->emitter_pos).f.z;
  this_ptr->bbox_extent = (float)(((float10)this_ptr->panel_radius + (float10)fVar11) / fVar17);
  this_ptr->bbox_height = fVar10 - fVar9;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar9 = this_ptr->bbox_height;
    (this_ptr->emitter_pos).f.x = 0.0;
    fVar10 = (float)2;
    (this_ptr->emitter_pos).i.z = -0x40733333;
    (this_ptr->emitter_pos).f.y = fVar9 + fVar10;
  }
  fVar9 = (this_ptr->gem_pos).y;
  fVar10 = (this_ptr->gem_pos).x;
  fVar11 = (this_ptr->gem_pos).z;
  if (SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9) == 0.0) {
    (this_ptr->gem_pos).y = 3.0;
    (this_ptr->gem_pos).z = -0.1;
    (this_ptr->gem_pos).x = 0.0;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_17c,&this_ptr->gem_pos,&(this_ptr->gem_orient).vec);
  pCVar14 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->gem_model);
  fVar9 = (pCVar14->bounds).min.x;
  fVar10 = (pCVar14->bounds).min.z;
  fVar11 = (pCVar14->bounds).max.x;
  fVar12 = (pCVar14->bounds).max.z;
  local_28 = &this_ptr->gems[0].position;
  local_2c = &this_ptr->gems[0].color.g;
  local_30 = &this_ptr->gems[0].color.b;
  local_38 = 0;
  do {
    core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20(this_ptr,local_38);
    pSVar12 = this_ptr->gems + local_38;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_0050a420
              (this_ptr,local_38,(float *)pSVar12,local_2c,local_30);
    (pSVar12->hum_color).b = 0.0;
    (pSVar12->hum_color).g = (pSVar12->hum_color).b;
    fVar8 = (pSVar12->hum_color).g;
    (pSVar12->light).b = 0.0;
    (pSVar12->hum_color).r = fVar8;
    (pSVar12->light).g = (pSVar12->light).b;
    fVar8 = (pSVar12->light).g;
    local_94.y = (float)local_38 * 0.5235988f;
    pSVar12->sfx_handles[0] = 0;
    pSVar12->sfx_handles[1] = 0;
    (pSVar12->light).r = fVar8;
    pSVar12->sfx_handles[2] = 0;
    local_94.x = 0.0;
    local_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_ec,&local_94);
    pCVar16 = &local_94;
    local_88.z = this_ptr->panel_radius;
    local_88.x = 0.0;
    local_88.y = 0.0;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ec,&local_7c,&local_88)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_1ac,pCVar9,pCVar16);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_17c,&local_1ac,&local_1dc);
    pCVar13 = &local_1dc;
    pCVar15 = &local_11c;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + (uint)bVar16 * -8 + 4);
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + (uint)bVar16 * -8 + 4);
      pCVar15->m[0].w = pCVar13->m[0].w;
      pCVar13 = pCVar13;
      pCVar15 = pCVar15;
    }
    pCVar16 = core_xform_cpp_getTranslation_FUN_005f6110(&local_11c,&local_4c);
    if (pCVar16 != local_28) {
      local_28->x = pCVar16->x;
      local_28->y = pCVar16->y;
      local_28->z = pCVar16->z;
    }
    pCVar10 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_11c,&local_64);
    if (&pSVar12->rotation != pCVar10) {
      (pSVar12->rotation).x = pCVar10->x;
      (pSVar12->rotation).y = pCVar10->y;
      (pSVar12->rotation).z = pCVar10->z;
    }
    pCVar16 = &local_14c;
    uVar14 = 0;
    __arrinit(&local_14c,4,&g_CVectorTypeInfo);
    do {
      local_70.y = 0.0;
      local_70.x = fVar9;
      if ((uVar14 & 1) != 0) {
        local_70.x = fVar11;
      }
      local_70.z = fVar10;
      if ((uVar14 & 2) != 0) {
        local_70.z = fVar12;
      }
      pCVar17 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_58,&local_70,&local_11c);
      if (pCVar16 != pCVar17) {
        pCVar16->x = pCVar17->x;
        pCVar16->y = pCVar17->y;
        pCVar16->z = pCVar17->z;
      }
      uVar14 = uVar14 + 1;
      pCVar16 = pCVar16 + 1;
    } while ((int)uVar14 < 4);
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              (&pSVar12->collision_tri_a,&local_134,&local_140,&local_14c);
    local_30 = local_30 + 0x2e;
    local_38 = local_38 + 1;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              (&pSVar12->collision_tri_b,&local_134,&local_128,&local_140);
    local_28 = (CVector3f *)&local_28[0xf].y;
    local_2c = local_2c + 0x2e;
  } while (local_38 < 0xc);
  fVar20 = (float10)fcos((float10)0.5235988f);
  fVar18 = (float10)fsin((float10)0.5235988f);
  fVar9 = (this_ptr->gem_pos).y;
  fVar8 = (float)0.75;
  fVar19 = (float10)0.5;
  fVar10 = this_ptr->panel_radius;
  pCVar16 = &this_ptr->reflectors[0].target_position;
  fVar11 = (this_ptr->emitter_pos).f.y;
  fVar12 = (float)0.25;
  this_ptr->reflectors[0].target_position.z =
       (float)(fVar20 * (float10)this_ptr->panel_radius * fVar19);
  pCVar16->x = (float)((float10)fVar10 * fVar18 * fVar19);
  this_ptr->reflectors[0].target_position.y = fVar11 * fVar12 + fVar9 * fVar8;
  if (this_ptr->reflectors != (SReflector *)pCVar16) {
    this_ptr->reflectors[0].start_position.x = pCVar16->x;
    this_ptr->reflectors[0].start_position.y = this_ptr->reflectors[0].target_position.y;
    this_ptr->reflectors[0].start_position.z = this_ptr->reflectors[0].target_position.z;
  }
  pCVar16 = &this_ptr->reflectors[0].rotation;
  pCVar16->x = -0.0805024;
  this_ptr->reflectors[0].rotation.z = 0.0;
  this_ptr->reflectors[0].rotation.y = -1.54034;
  this_ptr->reflectors[0].start_position.y =
       this_ptr->reflectors[0].start_position.y + -4.0f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->reflectors[0].rotation_matrix,pCVar16);
  fVar9 = this_ptr->reflectors[0].start_position.x;
  fVar10 = this_ptr->reflectors[0].start_position.z;
  fVar11 = this_ptr->reflectors[0].target_position.y;
  fVar4 = this_ptr->reflectors[0].target_position.x;
  fVar5 = this_ptr->reflectors[0].target_position.z;
  fVar6 = this_ptr->reflectors[0].rotation.x;
  this_ptr->reflectors[1].start_position.y = this_ptr->reflectors[0].start_position.y;
  fVar7 = this_ptr->reflectors[0].rotation.z;
  this_ptr->reflectors[1].start_position.z = fVar10;
  fVar10 = this_ptr->reflectors[0].rotation.y;
  pCVar16 = &this_ptr->reflectors[1].rotation;
  this_ptr->reflectors[1].target_position.y = fVar11;
  this_ptr->reflectors[1].target_position.z = fVar5;
  pCVar16->x = fVar6;
  this_ptr->reflectors[1].rotation.z = fVar7;
  this_ptr->reflectors[1].start_position.x = -fVar9;
  this_ptr->reflectors[1].target_position.x = -fVar4;
  this_ptr->reflectors[1].rotation.y = -fVar10;
  reflector_index = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->reflectors[1].rotation_matrix,pCVar16);
  do {
    core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_0050af80
              (this_ptr,reflector_index);
    reflector_index = reflector_index + 1;
  } while (reflector_index < 2);
  return;
}
