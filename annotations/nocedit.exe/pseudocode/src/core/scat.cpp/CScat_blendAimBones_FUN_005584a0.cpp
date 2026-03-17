// Name: core_scat.cpp_CScat_blendAimBones_FUN_005584a0
// Address: 005584a0
// Address Range: [[005584a0, 00558718]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_005584a0(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_005584a0(CScat *this_ptr,int hand_index)

{
  float *pfVar1;
  float t;
  uint *puVar2;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar6;
  uint *puVar5;
  byte bVar6;
  float afStackY_1938 [1521];
  CQuaternion4f *pCVar7;
  float local_160;
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  CQuaternion4f local_cc;
  CQuaternion4f local_bc;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  CQuaternion4f local_5c;
  CQuaternion4f local_4c;
  CQuaternion4f local_3c;
  CQuaternion4f local_2c;
  int local_1c;
  int local_18;
  byte *blend_callback;
  int iVar1;
  
  bVar6 = 0;
  if (hand_index == 0) {
    local_1c = INT_03106168;
    local_18 = INT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_cc);
    local_fc.w = local_cc.w;
    puVar6 = (uint *)((int)&local_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_fc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_cc + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar2;
    puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(1.5707964,&local_bc);
    pCVar2 = &local_bc;
  }
  else {
    local_1c = INT_0310616c;
    local_18 = INT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_ac);
    local_fc.w = local_ac.w;
    puVar6 = (uint *)((int)&local_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_fc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar2;
    puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_9c);
    pCVar2 = &local_9c;
  }
  puVar3 = (uint *)((int)pCVar2 + (uint)bVar6 * -8 + 4);
  local_13c.w = pCVar2->w;
  puVar2 = (uint *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = puVar3 + (uint)bVar6 * -2 + 1;
  *(uint *)((int)&local_13c + (uint)bVar6 * -8 + 4) = *puVar3;
  *puVar2 = *puVar4;
  puVar2[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  t = (this_ptr->base).base.layer_action_t;
  if (t <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(this_ptr->aim_yaw,&local_7c);
  local_10c.w = local_7c.w;
  puVar6 = (uint *)((int)&local_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_10c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  pCVar7 = &local_10c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->aim_pitch,&local_14c);
  local_11c.w = local_14c.w;
  puVar6 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_11c,pCVar7,&local_15c);
  local_12c.w = local_15c.w;
  puVar6 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_15c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  pCVar7 = &local_12c;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0(&CQuaternion4f_00665998,&local_fc,0.95,&local_4c);
  local_ec.w = local_4c.w;
  puVar6 = (uint *)((int)&local_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_ec + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar7,&local_3c);
  local_2c.w = local_3c.w;
  puVar6 = (uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_1c,
             &local_2c,t,&local_8c);
  pfVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[local_1c].w;
  *pfVar1 = local_8c.w;
  puVar5 = pfVar1 + (uint)bVar6 * -2 + 1 + (uint)bVar6 * -2 + 1;
  puVar2 = (uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  pfVar1[(uint)bVar6 * -2 + 1] = *(float *)((int)&local_8c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar2;
  puVar5[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  pCVar7 = &local_12c;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_fc,&local_13c,&local_5c);
  local_dc.w = local_5c.w;
  puVar6 = (uint *)((int)&local_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_dc + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar7,&local_6c);
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  local_2c.w = local_6c.w;
  puVar6 = (uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar2 = (uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
  *puVar6 = *puVar2;
  puVar6[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (&(this_ptr->base).base.model,&local_2c,t,local_18,
             (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  return;
}
