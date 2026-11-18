// Name: core_doc.cpp_CDoc_updateLantern_FUN_00455d10
// Address: 00455d10
// Address Range: [[00455d10, 0045629e]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateLantern_FUN_00455d10(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_doc_cpp_CDoc_updateLantern_FUN_00455d10(CDoc *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_1a0c [636];
  CQuaternion4f *apCStackY_101c [850];
  float fVar10;
  CQuaternion4f *quat1_inout;
  code *blend_callback;
  CVector3f *pCVar11;
  CVector3f *in_stack_fffffd40;
  CMatrix3x4f local_290;
  CMatrix3x4f local_260;
  CQuaternion4f local_230;
  CQuaternion4f local_220;
  CQuaternion4f local_210;
  CQuaternion4f local_200;
  CQuaternion4f local_1f0;
  CQuaternion4f local_1e0;
  CQuaternion4f local_1d0;
  CQuaternion4f local_1c0;
  CQuaternion4f local_1b0;
  CQuaternion4f local_1a0;
  CQuaternion4f local_190;
  CQuaternion4f local_180;
  CQuaternion4f local_170;
  CQuaternion4f local_160;
  CQuaternion4f local_150;
  CQuaternion4f local_140;
  CQuaternion4f local_130;
  CQuaternion4f local_120;
  CQuaternion4f local_110;
  CQuaternion4f local_100;
  CQuaternion4f local_f0;
  CQuaternion4f local_e0;
  CQuaternion4f local_d0;
  CQuaternion4f local_c0;
  CQuaternion4f local_b0;
  CQuaternion4f local_a0;
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  float local_70;
  float local_6c [2];
  CVector3f local_64;
  float local_58;
  float local_54 [2];
  CVector3f local_4c;
  uint local_40;
  uint local_3c;
  uint local_38;
  float local_34;
  CQuaternion4f *apCStack_30 [3];
  int local_24;
  int local_20;
  SArmAimData *local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  local_14 = delta_time * 2.0f;
  if (this_ptr->lantern_mode == 0) {
    if (this_ptr->lantern_tween_pct <= 0.0) {
      this_ptr->lantern_tween_pct = 0.0;
      goto LAB_00455d67;
    }
    fVar10 = this_ptr->lantern_tween_pct - local_14;
  }
  else {
    if (1.0 <= this_ptr->lantern_tween_pct) {
      this_ptr->lantern_tween_pct = 1.0;
      goto LAB_00455d67;
    }
    fVar10 = this_ptr->lantern_tween_pct + local_14;
  }
  this_ptr->lantern_tween_pct = fVar10;
LAB_00455d67:
  if (this_ptr->lantern_tween_pct < 0.0) {
    this_ptr->lantern_tween_pct = 0.0;
  }
  if (this_ptr->lantern_tween_pct <= 1.0) {
    if (ABS(this_ptr->lantern_tween_pct) == 0.0) {
      return;
    }
  }
  else {
    this_ptr->lantern_tween_pct = 1.0;
  }
  local_20 = g_INT_01b4d268;
  local_18 = g_INT_01b4d270;
  local_24 = g_INT_01b4d290;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.0471976,&local_f0);
  pCVar2 = &local_1f0;
  local_1f0.w = local_f0.w;
  puVar4 = (uint *)((int)&local_1f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_1f0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_f0 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-0.7853982,&local_170);
  local_d0.w = local_170.w;
  puVar4 = (uint *)((int)&local_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_170 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_d0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_170 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_d0,pCVar2,&local_90);
  local_230.w = local_90.w;
  puVar4 = (uint *)((int)&local_230 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_230 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-0.5235988,&local_150);
  pCVar2 = &local_1d0;
  local_1d0.w = local_150.w;
  puVar4 = (uint *)((int)&local_1d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_150 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_1d0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_150 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_140);
  local_1e0.w = local_140.w;
  puVar4 = (uint *)((int)&local_1e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_140 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_1e0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_140 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1e0,pCVar2,&local_80);
  local_200.w = local_80.w;
  puVar4 = (uint *)((int)&local_200 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_200 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_220);
  local_180.w = local_220.w;
  puVar4 = (uint *)((int)&local_180 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_220 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_180 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_220 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  local_1c = &this_ptr->left_arm_aim;
  if (this_ptr->turn_angle <= 0.0) {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0.0,&local_100);
    pCVar2 = &local_100;
  }
  else {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(this_ptr->turn_angle,&local_120);
    pCVar2 = &local_120;
  }
  puVar3 = (uint *)((int)pCVar2 + ((uint)bVar9 * -2 + 1) * 4);
  local_210.w = pCVar2->w;
  puVar6 = (uint *)((int)&local_210 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar4 = puVar3 + (uint)bVar9 * -2 + 1;
  *(uint *)((int)&local_210 + (uint)bVar9 * -8 + 4) = *puVar3;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0
            (local_1c->target_pitch * (float)0.5,&local_c0);
  pCVar2 = &local_1c0;
  quat1_inout = &local_210;
  local_1c0.w = local_c0.w;
  puVar4 = (uint *)((int)&local_1c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_1c0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_c0 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_multiplyQuaternionInPlace_FUN_00593d20(quat1_inout,pCVar2);
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            (&g_IdentityQuaternion,&local_230,this_ptr->lantern_tween_pct,&local_b0);
  local_230.w = local_b0.w;
  puVar4 = (uint *)((int)&local_230 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_230 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  fVar10 = this_ptr->lantern_tween_pct;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_230,&local_210,&local_a0);
  local_1b0.w = local_a0.w;
  puVar4 = (uint *)((int)&local_1b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_1b0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4);
  iVar1 = local_20;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  apCStack_30[2] = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            (apCStack_30[2] + local_20,&local_1b0,fVar10,&local_110);
  pfVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar1].w;
  pfVar7 = pfVar5 + (uint)bVar9 * -2 + 1;
  *pfVar5 = local_110.w;
  pfVar5 = (float *)((int)&local_110 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *pfVar7 = *(float *)((int)&local_110 + (uint)bVar9 * -8 + 4);
  pfVar7[(uint)bVar9 * -2 + 1] = *pfVar5;
  (pfVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = pfVar5[(uint)bVar9 * -2 + 1];
  fVar10 = this_ptr->lantern_tween_pct;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_200,&local_210,&local_e0);
  local_1a0.w = local_e0.w;
  puVar4 = (uint *)((int)&local_1a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_1a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_e0 + (uint)bVar9 * -8 + 4);
  iVar1 = local_18;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            (apCStack_30[2] + local_18,&local_1a0,fVar10,&local_160);
  pfVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar1].w;
  pfVar7 = pfVar5 + (uint)bVar9 * -2 + 1;
  *pfVar5 = local_160.w;
  pfVar5 = (float *)((int)&local_160 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *pfVar7 = *(float *)((int)&local_160 + (uint)bVar9 * -8 + 4);
  pfVar7[(uint)bVar9 * -2 + 1] = *pfVar5;
  (pfVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = pfVar5[(uint)bVar9 * -2 + 1];
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  fVar10 = this_ptr->lantern_tween_pct;
  iVar1 = local_24;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_180,&local_210,&local_130);
  local_190.w = local_130.w;
  puVar4 = (uint *)((int)&local_190 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar3 = (uint *)((int)&local_130 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_190 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_130 + (uint)bVar9 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (this_ptr_00,&local_190,fVar10,iVar1,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr_00);
  local_70 = 0.0;
  local_6c[1] = 0.0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  pCVar11 = &local_4c;
  local_6c[0] = 1.5707964;
  local_64.x = 0.25;
  local_4c.x = local_70;
  *(float *)((int)&local_4c + (uint)bVar9 * -8 + 4) = local_6c[(uint)bVar9 * -2];
  *(float *)((int)&local_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       local_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_64.y = -0.13;
  local_64.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(&local_260,&local_64,pCVar11);
  core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
            (&local_260,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + g_INT_01b4d290);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_290,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&local_260,&local_290,(CMatrix3x4f *)&stack0xfffffd40);
  pfVar5 = (float *)&stack0xfffffd40;
  pCVar8 = &this_ptr->lantern_transform;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar8->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar9 * -8 + 4);
  }
  local_40 = 0x3dcccccd;
  local_3c = 0xbf800000;
  local_38 = 0x3f19999a;
  if (&this_ptr->lantern_light_position != (CVector3f *)&local_40) {
    (this_ptr->lantern_light_position).x = 0.1;
    (this_ptr->lantern_light_position).y = -1.0;
    (this_ptr->lantern_light_position).z = 0.6;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&this_ptr->lantern_transform,in_stack_fffffd40);
  local_58 = local_34;
  local_54[(uint)bVar9 * -2] = (float)apCStack_30[(uint)bVar9 * -2];
  local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       (float)apCStack_30[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  if (&this_ptr->lantern_light_direction != (CVector3f *)&local_58) {
    (this_ptr->lantern_light_direction).x = local_58;
    (this_ptr->lantern_light_direction).y = local_54[0];
    (this_ptr->lantern_light_direction).z = local_54[1];
  }
  pCVar11 = &this_ptr->lantern_light_position;
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0(pCVar11,&this_ptr->lantern_transform);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
            (&g_CDemonLightInstance,this_ptr->lantern_tween_pct);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  if (pCVar11 != (CVector3f *)&g_CDemonLightInstance.base.base.position) {
    g_CDemonLightInstance.base.base.position.f.x = pCVar11->x;
    g_CDemonLightInstance.base.base.position.f.z = (this_ptr->lantern_light_position).z;
    g_CDemonLightInstance.base.base.position.f.y = (this_ptr->lantern_light_position).y;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&g_CDemonLightInstance.base.base.rotation_matrix,&this_ptr->lantern_light_direction);
  g_CDemonLightInstance.antialiasing_enabled = 1;
  g_CDemonLightInstance.base.max_distance = 16.0;
  g_CDemonLightInstance.base.base.focal_length = 32.0;
  core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(g_CDemonSetPtr,&g_CDemonLightInstance);
  return;
}
