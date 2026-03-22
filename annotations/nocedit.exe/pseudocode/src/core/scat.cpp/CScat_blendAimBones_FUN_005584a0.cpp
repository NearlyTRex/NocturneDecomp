// Name: core_scat.cpp_CScat_blendAimBones_FUN_005584a0
// Address: 005584a0
// Address Range: [[005584a0, 00558718] [006057a9, 006058d8] [0060f4d3, 0060f542]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_005584a0(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_005584a0(CScat *this_ptr,int hand_index)

{
  float *pfVar1;
  float t;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1938 [1521];
  CQuaternion4f *pCVar3;
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
  
  if (hand_index == 0) {
    local_1c = g_ScatIndices[3];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_cc);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(1.5707964,&local_bc);
    pCVar2 = &local_bc;
  }
  else {
    local_1c = g_ScatIndices[4];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_ac);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_9c);
    pCVar2 = &local_9c;
  }
  local_13c.w = pCVar2->w;
  local_13c.x = pCVar2->x;
  local_13c.y = pCVar2->y;
  local_13c.z = pCVar2->z;
  t = (this_ptr->base).base.layer_action_t;
  if (t <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(this_ptr->aim_yaw,&local_7c);
  pCVar3 = &local_10c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->aim_pitch,&local_14c);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_11c,pCVar3,&local_15c);
  pCVar3 = &local_12c;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0(&CQuaternion4f_00665998,&local_fc,0.95,&local_4c);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar3,&local_3c);
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_1c,
             &local_2c,t,&local_8c);
  pfVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[local_1c].w;
  *pfVar1 = local_8c.w;
  pfVar1[1] = local_8c.x;
  pfVar1[2] = local_8c.y;
  pfVar1[3] = local_8c.z;
  pCVar3 = &local_12c;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_fc,&local_13c,&local_5c);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar3,&local_6c);
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (&(this_ptr->base).base.model,&local_2c,t,(int)local_6c.z,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
