// Name: core_doc.cpp_FUN_00455d10
// Address: 00455d10
// Address Range: [[00455d10, 0045629e]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)

{
  CQuaternion4f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  float *pfVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  byte bVar10;
  float afStackY_1a0c [627];
  int aiStackY_1040 [3];
  float afStackY_1034 [6];
  int *apiStackY_101c [850];
  float fVar11;
  CQuaternion4f *quat1_inout;
  code *blend_callback;
  CVector3f *euler_angles;
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
  int local_58;
  int local_54 [2];
  CVector3f local_4c;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int *apiStack_30 [3];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  local_14 = param_2 * _DAT_005d0277;
  if (param_1[0xdd].particle_systems[2].max_particles == 0) {
    if (param_1[0xde].particle_systems[1].position.x <= 0.0) {
      param_1[0xde].particle_systems[1].position.x = 0.0;
      goto LAB_00455d67;
    }
    fVar11 = param_1[0xde].particle_systems[1].position.x - local_14;
  }
  else {
    if (1.0 <= param_1[0xde].particle_systems[1].position.x) {
      param_1[0xde].particle_systems[1].position.x = 1.0;
      goto LAB_00455d67;
    }
    fVar11 = param_1[0xde].particle_systems[1].position.x + local_14;
  }
  param_1[0xde].particle_systems[1].position.x = fVar11;
LAB_00455d67:
  if (param_1[0xde].particle_systems[1].position.x < 0.0) {
    param_1[0xde].particle_systems[1].position.x = 0.0;
  }
  if (param_1[0xde].particle_systems[1].position.x <= 1.0) {
    if (ABS(param_1[0xde].particle_systems[1].position.x) == 0.0) {
      return;
    }
  }
  else {
    param_1[0xde].particle_systems[1].position.x = 1.0;
  }
  local_20 = _DAT_01b4d268;
  local_18 = _DAT_01b4d270;
  local_24 = _DAT_01b4d290;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.0471976,&local_f0);
  pCVar1 = &local_1f0;
  local_1f0.w = local_f0.w;
  puVar3 = (uint *)((int)&local_1f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_1f0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_f0 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-0.7853982,&local_170);
  local_d0.w = local_170.w;
  puVar3 = (uint *)((int)&local_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_170 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_d0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_170 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_d0,pCVar1,&local_90);
  local_230.w = local_90.w;
  puVar3 = (uint *)((int)&local_230 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_230 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_90 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-0.5235988,&local_150);
  pCVar1 = &local_1d0;
  local_1d0.w = local_150.w;
  puVar3 = (uint *)((int)&local_1d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_150 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_1d0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_150 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_140);
  local_1e0.w = local_140.w;
  puVar3 = (uint *)((int)&local_1e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_140 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_1e0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_140 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1e0,pCVar1,&local_80);
  local_200.w = local_80.w;
  puVar3 = (uint *)((int)&local_200 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_200 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_80 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_220);
  piVar5 = &param_1[0xdd].scale.z;
  local_180.w = local_220.w;
  puVar3 = (uint *)((int)&local_180 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_220 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_180 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_220 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  local_1c = piVar5;
  if (param_1[0xdd].particle_systems[0].position.x <= 0.0) {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0.0,&local_100);
    pCVar1 = &local_100;
  }
  else {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
              (param_1[0xdd].particle_systems[0].position.x,&local_120);
    pCVar1 = &local_120;
  }
  puVar2 = (uint *)((int)pCVar1 + ((uint)bVar10 * -2 + 1) * 4);
  local_210.w = pCVar1->w;
  puVar6 = (uint *)((int)&local_210 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar3 = puVar2 + (uint)bVar10 * -2 + 1;
  *(uint *)((int)&local_210 + (uint)bVar10 * -8 + 4) = *puVar2;
  *puVar6 = *puVar3;
  puVar6[(uint)bVar10 * -2 + 1] = puVar3[(uint)bVar10 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0
            ((float)local_1c[2] * (float)_DAT_005d027f,&local_c0);
  pCVar1 = &local_1c0;
  quat1_inout = &local_210;
  local_1c0.w = local_c0.w;
  puVar3 = (uint *)((int)&local_1c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_1c0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_c0 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_xform_cpp_multiplyQuaternionInPlace_FUN_00593d20(quat1_inout,pCVar1);
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            ((CQuaternion4f *)&DAT_005fe2f0,&local_230,param_1[0xde].particle_systems[1].position.x,
             &local_b0);
  local_230.w = local_b0.w;
  puVar3 = (uint *)((int)&local_230 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_230 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  fVar11 = param_1[0xde].particle_systems[1].position.x;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_230,&local_210,&local_a0);
  local_1b0.w = local_a0.w;
  puVar3 = (uint *)((int)&local_1b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_1b0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  apiStack_30[2] = &param_1[3].render_needs_update;
  iVar7 = local_20 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            ((CQuaternion4f *)(apiStack_30[2] + local_20 * 4),&local_1b0,fVar11,&local_110);
  pfVar4 = (float *)((int)param_1[3].particle_systems + iVar7 + -0xc);
  pfVar8 = pfVar4 + (uint)bVar10 * -2 + 1;
  *pfVar4 = local_110.w;
  pfVar4 = (float *)((int)&local_110 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *pfVar8 = *(float *)((int)&local_110 + (uint)bVar10 * -8 + 4);
  pfVar8[(uint)bVar10 * -2 + 1] = *pfVar4;
  (pfVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar4[(uint)bVar10 * -2 + 1];
  fVar11 = param_1[0xde].particle_systems[1].position.x;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_200,&local_210,&local_e0);
  local_1a0.w = local_e0.w;
  puVar3 = (uint *)((int)&local_1a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_1a0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_e0 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  iVar7 = local_18 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            ((CQuaternion4f *)(apiStack_30[2] + local_18 * 4),&local_1a0,fVar11,&local_160);
  pfVar4 = (float *)((int)param_1[3].particle_systems + iVar7 + -0xc);
  pfVar8 = pfVar4 + (uint)bVar10 * -2 + 1;
  *pfVar4 = local_160.w;
  pfVar4 = (float *)((int)&local_160 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *pfVar8 = *(float *)((int)&local_160 + (uint)bVar10 * -8 + 4);
  pfVar8[(uint)bVar10 * -2 + 1] = *pfVar4;
  (pfVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar4[(uint)bVar10 * -2 + 1];
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  fVar11 = param_1[0xde].particle_systems[1].position.x;
  iVar7 = local_24;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_180,&local_210,&local_130);
  local_190.w = local_130.w;
  puVar3 = (uint *)((int)&local_190 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar2 = (uint *)((int)&local_130 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_190 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_130 + (uint)bVar10 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar10 * -2 + 1] = puVar2[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            ((CDeformableModelInstance *)(param_1 + 1),&local_190,fVar11,iVar7,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)(param_1 + 1));
  local_70 = 0.0;
  local_6c[1] = 0.0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  euler_angles = &local_4c;
  local_6c[0] = 1.5707964;
  local_64.x = 0.25;
  local_4c.x = local_70;
  *(float *)((int)&local_4c + (uint)bVar10 * -8 + 4) = local_6c[(uint)bVar10 * -2];
  *(float *)((int)&local_4c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_64.y = -0.13;
  local_64.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_260,&local_64,euler_angles);
  core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
            (&local_260,
             (CMatrix3x4f *)(param_1[6].footstep_sound_code + _DAT_01b4d290 * 0x30 + -0x24));
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_290,&(param_1->location).position,&(param_1->orient).vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&local_260,&local_290,(CMatrix3x4f *)&stack0xfffffd40);
  piVar5 = (int *)&stack0xfffffd40;
  piVar9 = &param_1[0xdd].particle_systems[2].next_particle;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = *piVar5;
    piVar5 = piVar5 + (uint)bVar10 * -2 + 1;
    piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
  }
  local_40 = 0x3dcccccd;
  local_3c = 0xbf800000;
  pfVar4 = &param_1[0xdd].particle_systems[3].fade_current;
  local_38 = 0x3f19999a;
  if (pfVar4 != (float *)&local_40) {
    *pfVar4 = 0.1;
    param_1[0xdd].particle_systems[3].active = -0x40800000;
    param_1[0xdd].particle_systems[3].owner = (CDemonActor *)0x3f19999a;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0
            ((CMatrix3x4f *)&param_1[0xdd].particle_systems[2].next_particle,in_stack_fffffd40);
  local_58 = local_34;
  local_54[(uint)bVar10 * -2] = (int)apiStack_30[(uint)bVar10 * -2];
  local_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       (int)apiStack_30[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  piVar5 = &param_1[0xdd].particle_systems[3].max_particles;
  if (piVar5 != &local_58) {
    *piVar5 = local_58;
    param_1[0xdd].particle_systems[3].next_particle = local_54[0];
    *(int *)&param_1[0xdd].particle_systems[3].field_0x20 = local_54[1];
  }
  pfVar4 = &param_1[0xdd].particle_systems[3].fade_current;
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            ((CVector3f *)pfVar4,(CMatrix3x4f *)&param_1[0xdd].particle_systems[2].next_particle);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
            (&g_CDemonLightInstance,param_1[0xde].particle_systems[1].position.x);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  if ((UVector3 *)pfVar4 != &g_CDemonLightInstance.base.base.position) {
    g_CDemonLightInstance.base.base.position.f.x = *pfVar4;
    g_CDemonLightInstance.base.base.position.f.z = (float)param_1[0xdd].particle_systems[3].owner;
    g_CDemonLightInstance.base.base.position.f.y = (float)param_1[0xdd].particle_systems[3].active;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&g_CDemonLightInstance.base.base.rotation_matrix,
             (CVector3f *)&param_1[0xdd].particle_systems[3].max_particles);
  g_CDemonLightInstance.antialiasing_enabled = 1;
  g_CDemonLightInstance.base.max_distance = 16.0;
  g_CDemonLightInstance.base.base.focal_length = 32.0;
  core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(g_CDemonSetPtr,&g_CDemonLightInstance);
  return;
}
