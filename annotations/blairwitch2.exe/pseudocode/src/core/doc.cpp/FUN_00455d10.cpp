// Name: core_doc.cpp_FUN_00455d10
// Address: 00455d10
// Address Range: [[00455d10, 0045629e]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)

{
  uint *puVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  float afStackY_1a0c [636];
  int *apiStackY_101c [450];
  float afStackY_914 [400];
  float fVar7;
  float *pfVar8;
  code *blend_callback;
  int local_2c0 [12];
  byte local_290 [48];
  byte local_260 [48];
  uint local_230;
  float afStack_22c [7];
  float local_210 [4];
  float local_200 [4];
  float local_1f0 [4];
  float local_1e0 [4];
  float local_1d0 [4];
  float local_1c0 [4];
  float local_1b0 [4];
  float local_1a0 [4];
  CQuaternion4f local_190;
  uint local_180;
  float afStack_17c [7];
  uint local_160;
  uint local_150;
  uint local_140;
  float local_130;
  float local_120 [4];
  uint local_110;
  float afStack_10c [7];
  uint local_f0;
  float afStack_ec [7];
  float local_d0 [4];
  uint local_c0;
  uint local_b0;
  uint local_a0;
  uint local_90;
  uint local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  float local_64 [4];
  float local_54 [5];
  float local_40 [3];
  int local_34;
  int *apiStack_30 [3];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  local_14 = param_2 * _DAT_005d0277;
  if (param_1[0xdd].particle_systems[2].max_particles == 0) {
    if (param_1[0xde].particle_systems[1].position.x <= 0.0) {
      param_1[0xde].particle_systems[1].position.x = 0.0;
      goto LAB_00455d67;
    }
    fVar7 = param_1[0xde].particle_systems[1].position.x - local_14;
  }
  else {
    if (1.0 <= param_1[0xde].particle_systems[1].position.x) {
      param_1[0xde].particle_systems[1].position.x = 1.0;
      goto LAB_00455d67;
    }
    fVar7 = param_1[0xde].particle_systems[1].position.x + local_14;
  }
  param_1[0xde].particle_systems[1].position.x = fVar7;
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
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbf860a92);
  pfVar2 = afStack_22c + 0xf;
  local_1f0[0] = (float)local_f0;
  afStack_22c[(uint)bVar6 * -2 + 0x10] = afStack_ec[(uint)bVar6 * -2];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbf490fdb,pfVar2);
  local_d0[0] = afStack_17c[3];
  afStack_ec[(uint)bVar6 * -2 + 8] = afStack_17c[(uint)bVar6 * -2 + 4];
  afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
       afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
       (afStack_17c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_ec + 7);
  local_230 = local_90;
  afStack_22c[(uint)bVar6 * -2] = afStack_ec[(uint)bVar6 * -2 + 0x18];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0xbf060a92);
  pfVar2 = afStack_22c + 0x17;
  local_1d0[0] = (float)local_150;
  afStack_22c[(uint)bVar6 * -2 + 0x18] = afStack_17c[(uint)bVar6 * -2 + 0xc];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
       afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1] =
       (afStack_17c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb,pfVar2);
  local_1e0[0] = (float)local_140;
  afStack_22c[(uint)bVar6 * -2 + 0x14] = afStack_17c[(uint)bVar6 * -2 + 0x10];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15] =
       afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1] =
       (afStack_17c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_22c + 0x13);
  local_200[0] = (float)local_80;
  afStack_22c[(uint)bVar6 * -2 + 0xc] = afStack_ec[(uint)bVar6 * -2 + 0x1c];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb);
  piVar3 = &param_1[0xdd].scale.z;
  local_180 = afStack_22c[3];
  afStack_17c[(uint)bVar6 * -2] = afStack_22c[(uint)bVar6 * -2 + 4];
  afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  (afStack_17c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  local_1c = piVar3;
  if (param_1[0xdd].particle_systems[0].position.x <= 0.0) {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0);
    pfVar2 = afStack_10c + 3;
  }
  else {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(param_1[0xdd].particle_systems[0].position.x);
    pfVar2 = afStack_17c + 0x17;
  }
  pfVar8 = pfVar2 + (uint)bVar6 * -2 + 1;
  local_210[0] = *pfVar2;
  afStack_22c[(uint)bVar6 * -2 + 8] = *pfVar8;
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] = pfVar8[(uint)bVar6 * -2 + 1];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
       (pfVar8 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((float)local_1c[2] * (float)_DAT_005d027f);
  pfVar2 = afStack_22c + 0x1b;
  pfVar8 = afStack_22c + 7;
  local_1c0[0] = (float)local_c0;
  afStack_22c[(uint)bVar6 * -2 + 0x1c] = afStack_ec[(uint)bVar6 * -2 + 0xc];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternionInPlace_FUN_00593d20(pfVar8,pfVar2);
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            (&DAT_005fe2f0,&local_230,param_1[0xde].particle_systems[1].position.x);
  local_230 = local_b0;
  afStack_22c[(uint)bVar6 * -2] = afStack_ec[(uint)bVar6 * -2 + 0x10];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60
            (&local_230,afStack_22c + 7,param_1[0xde].particle_systems[1].position.x);
  local_1b0[0] = (float)local_a0;
  afStack_22c[(uint)bVar6 * -2 + 0x20] = afStack_ec[(uint)bVar6 * -2 + 0x14];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
  apiStack_30[2] = &param_1[3].render_needs_update;
  iVar4 = local_20 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_00593df0(apiStack_30[2] + local_20 * 4,afStack_22c + 0x1f);
  puVar1 = (uint *)((int)param_1[3].particle_systems + iVar4 + -0xc);
  pfVar2 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
  *puVar1 = local_110;
  *pfVar2 = afStack_10c[(uint)bVar6 * -2];
  pfVar2[(uint)bVar6 * -2 + 1] = afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (pfVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_10c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60
            (afStack_22c + 0xb,afStack_22c + 7,param_1[0xde].particle_systems[1].position.x);
  local_1a0[0] = afStack_ec[3];
  afStack_22c[(uint)bVar6 * -2 + 0x24] = afStack_ec[(uint)bVar6 * -2 + 4];
  afStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  (afStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25)[(uint)bVar6 * -2 + 1] =
       (afStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  iVar4 = local_18 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_00593df0(apiStack_30[2] + local_18 * 4,afStack_22c + 0x23);
  puVar1 = (uint *)((int)param_1[3].particle_systems + iVar4 + -0xc);
  pfVar2 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
  *puVar1 = local_160;
  *pfVar2 = afStack_17c[(uint)bVar6 * -2 + 8];
  pfVar2[(uint)bVar6 * -2 + 1] = afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
  (pfVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_17c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
  blend_callback = core_skeleton_cpp_FUN_00544cc0;
  fVar7 = param_1[0xde].particle_systems[1].position.x;
  iVar4 = local_24;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_180,afStack_22c + 7);
  local_190.w = local_130;
  pfVar2 = (float *)((int)&local_190 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_190 + (uint)bVar6 * -8 + 4) = afStack_17c[(uint)bVar6 * -2 + 0x14];
  *pfVar2 = afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
  pfVar2[(uint)bVar6 * -2 + 1] =
       (afStack_17c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            ((CDeformableModelInstance *)(param_1 + 1),&local_190,fVar7,iVar4,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)(param_1 + 1));
  local_70 = 0;
  local_68 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  pfVar2 = local_54 + 2;
  local_6c = 0x3fc90fdb;
  local_64[0] = 0.25;
  local_54[2] = (float)local_70;
  local_54[(uint)bVar6 * -2 + 3] = afStack_ec[(uint)bVar6 * -2 + 0x20];
  local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21];
  local_64[1] = -0.13;
  local_64[2] = 0.0;
  core_xform_cpp_FUN_00591c10(local_260,afStack_ec + 0x22,pfVar2);
  core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
            (local_260,param_1[6].footstep_sound_code + _DAT_01b4d290 * 0x30 + -0x24);
  core_xform_cpp_FUN_00591c10(local_290,&param_1->location,&param_1->orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_260,local_290);
  piVar3 = local_2c0;
  piVar5 = &param_1[0xdd].particle_systems[2].next_particle;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  local_40[0] = 0.1;
  local_40[1] = -1.0;
  pfVar2 = &param_1[0xdd].particle_systems[3].fade_current;
  local_40[2] = 0.6;
  if (pfVar2 != local_54 + 5) {
    *pfVar2 = 0.1;
    param_1[0xdd].particle_systems[3].active = -0x40800000;
    param_1[0xdd].particle_systems[3].owner = (CDemonActor *)0x3f19999a;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&param_1[0xdd].particle_systems[2].next_particle);
  local_64[3] = (float)local_34;
  local_54[(uint)bVar6 * -2] = (float)apiStack_30[(uint)bVar6 * -2];
  local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       (float)apiStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  piVar3 = &param_1[0xdd].particle_systems[3].max_particles;
  if ((float *)piVar3 != afStack_ec + 0x25) {
    *piVar3 = (int)local_64[3];
    param_1[0xdd].particle_systems[3].next_particle = (int)local_54[0];
    *(float *)&param_1[0xdd].particle_systems[3].field_0x20 = local_54[1];
  }
  pfVar2 = &param_1[0xdd].particle_systems[3].fade_current;
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            (pfVar2,&param_1[0xdd].particle_systems[2].next_particle);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
            (&g_CDemonLightInstance,param_1[0xde].particle_systems[1].position.x);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  if ((UVector3 *)pfVar2 != &g_CDemonLightInstance.base.base.position) {
    g_CDemonLightInstance.base.base.position.f.x = *pfVar2;
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
