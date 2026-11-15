// Name: core_scat.cpp_CScat_blendAimBones_FUN_00542270
// Address: 00542270
// Address Range: [[00542270, 005424e8]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_00542270(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_00542270(CScat *this_ptr,int hand_index)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1938 [1521];
  CQuaternion4f *pCVar7;
  code *blend_callback;
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
  float local_bc [4];
  CQuaternion4f local_ac;
  float local_9c [4];
  uint local_8c;
  float afStack_88 [3];
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  CQuaternion4f local_5c;
  float local_4c;
  float afStack_48 [3];
  CQuaternion4f local_3c;
  CQuaternion4f local_2c;
  int local_1c;
  int local_18;
  
  bVar6 = 0;
  if (hand_index == 0) {
    local_1c = _DAT_01e7e020;
    local_18 = _DAT_01e7e028;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(1.5707964,&local_cc);
    local_fc.w = local_cc.w;
    pfVar2 = (float *)((int)&local_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_fc + (uint)bVar6 * -8 + 4) = local_bc[(uint)bVar6 * -2 + -3];
    *pfVar2 = local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (local_bc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0x3fc90fdb);
    pfVar2 = local_bc;
  }
  else {
    local_1c = _DAT_01e7e024;
    local_18 = _DAT_01e7e02c;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-1.5707964,&local_ac);
    local_fc.w = local_ac.w;
    pfVar2 = (float *)((int)&local_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_fc + (uint)bVar6 * -8 + 4) = local_9c[(uint)bVar6 * -2 + -3];
    *pfVar2 = local_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (local_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
    pfVar2 = local_9c;
  }
  pfVar3 = pfVar2 + (uint)bVar6 * -2 + 1;
  local_13c.w = *pfVar2;
  pfVar2 = (float *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_13c + (uint)bVar6 * -8 + 4) = *pfVar3;
  *pfVar2 = pfVar3[(uint)bVar6 * -2 + 1];
  pfVar2[(uint)bVar6 * -2 + 1] = (pfVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  local_160 = (this_ptr->base).base.layer_action_t;
  if (local_160 <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(this_ptr->aim_yaw,&local_7c);
  local_10c.w = local_7c.w;
  puVar5 = (uint *)((int)&local_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_10c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  pCVar7 = &local_10c;
  core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(this_ptr->aim_pitch,&local_14c);
  local_11c.w = local_14c.w;
  puVar5 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_11c,pCVar7,&local_15c);
  local_12c.w = local_15c.w;
  puVar5 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_15c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  pCVar7 = &local_12c;
  core_xform_cpp_slerpQuaternion_FUN_005b7940(&DAT_006081e0,&local_fc,0x3f733333);
  local_ec.w = local_4c;
  pfVar2 = (float *)((int)&local_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_ec + (uint)bVar6 * -8 + 4) = afStack_48[(uint)bVar6 * -2];
  *pfVar2 = afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  pfVar2[(uint)bVar6 * -2 + 1] =
       (afStack_48 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_ec,pCVar7,&local_3c);
  local_2c.w = local_3c.w;
  puVar5 = (uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  iVar1 = local_1c;
  core_xform_cpp_slerpQuaternion_FUN_005b7940
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_1c,
             &local_2c,local_160);
  puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar1].w;
  pfVar2 = (float *)(puVar4 + (uint)bVar6 * -2 + 1);
  *puVar4 = local_8c;
  *pfVar2 = afStack_88[(uint)bVar6 * -2];
  pfVar2[(uint)bVar6 * -2 + 1] = afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (pfVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_88 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  pCVar7 = &local_12c;
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_fc,&local_13c,&local_5c);
  local_dc.w = local_5c.w;
  puVar5 = (uint *)((int)&local_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_dc + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_dc,pCVar7,&local_6c);
  iVar1 = local_18;
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  local_2c.w = local_6c.w;
  puVar5 = (uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (&(this_ptr->base).base.model,&local_2c,local_160,iVar1,blend_callback);
  return;
}
