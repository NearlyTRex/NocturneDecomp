// Name: core_scat.cpp_FUN_00520140
// Address: 00520140
// Address Range: [[00520140, 005203b8]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00520140(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_00520140(CScat *this_ptr,int hand_index)

{
  int iVar1;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_1938 [1521];
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
  CQuaternion4f local_bc;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
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
  
  bVar7 = 0;
  if (hand_index == 0) {
    local_1c = _DAT_01e62074;
    local_18 = _DAT_01e6207c;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(1.5707964,&local_cc);
    local_fc.w = local_cc.w;
    puVar4 = (uint *)((int)&local_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar3 = (uint *)((int)&local_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_fc + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_cc + (uint)bVar7 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(1.5707964,&local_bc);
    pCVar2 = &local_bc;
  }
  else {
    local_1c = _DAT_01e62078;
    local_18 = _DAT_01e62080;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_ac);
    local_fc.w = local_ac.w;
    puVar4 = (uint *)((int)&local_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar3 = (uint *)((int)&local_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_fc + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar7 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-1.5707964,&local_9c);
    pCVar2 = &local_9c;
  }
  puVar3 = (uint *)((int)pCVar2 + ((uint)bVar7 * -2 + 1) * 4);
  local_13c.w = pCVar2->w;
  puVar5 = (uint *)((int)&local_13c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
  *(uint *)((int)&local_13c + (uint)bVar7 * -8 + 4) = *puVar3;
  *puVar5 = *puVar4;
  puVar5[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  local_160 = (this_ptr->base).base.layer_action_t;
  if (local_160 <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(this_ptr->aim_yaw,&local_7c);
  local_10c.w = local_7c.w;
  puVar4 = (uint *)((int)&local_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_7c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_10c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar7 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  pCVar2 = &local_10c;
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(this_ptr->aim_pitch,&local_14c);
  local_11c.w = local_14c.w;
  puVar4 = (uint *)((int)&local_11c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_14c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_11c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_14c + (uint)bVar7 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_11c,pCVar2,&local_15c);
  local_12c.w = local_15c.w;
  puVar4 = (uint *)((int)&local_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_15c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_12c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_15c + (uint)bVar7 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  pCVar2 = &local_12c;
  core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,&local_fc,0x3f733333);
  local_ec.w = local_4c;
  pfVar6 = (float *)((int)&local_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(float *)((int)&local_ec + (uint)bVar7 * -8 + 4) = afStack_48[(uint)bVar7 * -2];
  *pfVar6 = afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfVar6[(uint)bVar7 * -2 + 1] =
       (afStack_48 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_ec,pCVar2,&local_3c);
  local_2c.w = local_3c.w;
  puVar4 = (uint *)((int)&local_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_3c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar7 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  iVar1 = local_1c;
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_1c,
             &local_2c,local_160);
  puVar3 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar1].w;
  pfVar6 = (float *)(puVar3 + (uint)bVar7 * -2 + 1);
  *puVar3 = local_8c;
  *pfVar6 = afStack_88[(uint)bVar7 * -2];
  pfVar6[(uint)bVar7 * -2 + 1] = afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (afStack_88 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  pCVar2 = &local_12c;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_fc,&local_13c,&local_5c);
  local_dc.w = local_5c.w;
  puVar4 = (uint *)((int)&local_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_dc + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_5c + (uint)bVar7 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_dc,pCVar2,&local_6c);
  iVar1 = local_18;
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  local_2c.w = local_6c.w;
  puVar4 = (uint *)((int)&local_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_6c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar7 * -8 + 4);
  *puVar4 = *puVar3;
  puVar4[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (&(this_ptr->base).base.model,&local_2c,local_160,iVar1,blend_callback);
  return;
}
