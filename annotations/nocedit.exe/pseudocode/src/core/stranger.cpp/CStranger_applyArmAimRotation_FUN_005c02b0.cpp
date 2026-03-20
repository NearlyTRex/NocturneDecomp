// Name: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0
// Address: 005c02b0
// Address Range: [[005c02b0, 005c06a6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(CStranger *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(CStranger *this_ptr,int arm_side)

{
  CDeformableModelInstance *this_ptr_02;
  float fVar1;
  SArmAimData *pSVar2;
  CSkeleton *this_ptr_01;
  int motion_index;
  float fVar3;
  CQuaternion4f *quat1_in;
  uint *puVar5;
  CQuaternion4f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar6;
  float afStackY_19b8 [1520];
  char *motion_name;
  CQuaternion4f *pCVar8;
  float local_1e0;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  CQuaternion4f local_1ac;
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
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
  float local_34;
  char *local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  int iVar7;
  float fVar8;
  CDeformableModelInstance *this_ptr_00;
  
  bVar6 = 0;
  if (arm_side == 0) {
    local_24 = g_StrangerIndices[3];
    local_28 = g_StrangerIndices[5];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_11c);
    local_1cc.w = local_11c.w;
    puVar6 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(1.5707964,&local_1ac);
    pSVar2 = &this_ptr->left_arm_aim;
    pCVar1 = &local_1ac;
  }
  else {
    local_24 = g_StrangerIndices[4];
    local_28 = g_StrangerIndices[6];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_1dc);
    local_1cc.w = local_1dc.w;
    puVar6 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_1dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1dc + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_ec);
    pSVar2 = &this_ptr->right_arm_aim;
    pCVar1 = &local_ec;
  }
  puVar2 = (uint *)((int)pCVar1 + (uint)bVar6 * -8 + 4);
  local_1bc.w = pCVar1->w;
  puVar4 = (uint *)((int)&local_1bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  *(uint *)((int)&local_1bc + (uint)bVar6 * -8 + 4) = *puVar2;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  fVar1 = (this_ptr->base).base.layer_action_t;
  fVar1 = (1.0 - (1.0 - pSVar2->kickback_factor) * fVar1) * fVar1;
  if (0.0 < fVar1) {
    iVar7 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    this_ptr_02 = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                            (this_ptr_02);
    motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                             (&this_ptr_01->motion_list,motion_name,iVar7);
    fVar3 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                      (&this_ptr_02->motion_controller,motion_index,
                       (this_ptr->base).base.layer_action_t);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_02,motion_index,fVar3,fVar1,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(pSVar2->target_yaw,&local_4c);
    pCVar8 = &local_16c;
    local_16c.w = local_4c.w;
    puVar6 = (uint *)((int)&local_16c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_16c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(pSVar2->target_pitch,&local_19c);
    local_17c.w = local_19c.w;
    puVar6 = (uint *)((int)&local_17c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_17c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_19c + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_17c,pCVar8,&local_ac);
    pCVar8 = &local_1cc;
    fVar8 = 0.95;
    local_18c.w = local_ac.w;
    puVar6 = (uint *)((int)&local_18c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_18c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&CQuaternion4f_00665998,pCVar8,fVar8,&local_9c);
    pCVar8 = &local_18c;
    local_15c.w = local_9c.w;
    puVar6 = (uint *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_15c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_9c + (uint)bVar6 * -8 + 4);
    fVar3 = fVar1;
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,pCVar8,&local_bc);
    local_14c.w = local_bc.w;
    puVar6 = (uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_bc + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    quat1_in = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(quat1_in,&local_14c,fVar3,&local_6c);
    pcVar5 = (char *)((int)this_ptr + (uint)bVar6 * -8 + local_24 * 0x10 + 0x80c);
    (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[local_24].w = local_6c.w;
    puVar5 = (uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)pcVar5 = *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
    *(uint *)(pcVar5 + (uint)bVar6 * -8 + 4) = *puVar5;
    *(uint *)(pcVar5 + (uint)bVar6 * -8 + 4 + ((uint)bVar6 * -2 + 1) * 4) =
         puVar5[(uint)bVar6 * -2 + 1];
    pCVar8 = &local_18c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,&local_1bc,&local_8c);
    local_12c.w = local_8c.w;
    puVar6 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_8c + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_12c,pCVar8,&local_7c);
    local_13c.w = local_7c.w;
    puVar6 = (uint *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar5 = (uint *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_13c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_7c + (uint)bVar6 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr_02,&local_13c,fVar1,local_28,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    if ((float)0.0001 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(1.5707964,&local_5c);
      pCVar8 = &local_fc;
      local_fc.w = local_5c.w;
      puVar6 = (uint *)((int)&local_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar5 = (uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_fc + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,pCVar8,&local_dc);
      local_10c.w = local_dc.w;
      puVar6 = (uint *)((int)&local_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar5 = (uint *)((int)&local_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_10c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_dc + (uint)bVar6 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (quat1_in,&local_10c,this_ptr->arm_recoil_blend,&local_cc);
      puVar6 = (uint *)((int)this_ptr + (uint)bVar6 * -8 + local_24 * 0x10 + 0x80c);
      (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[local_24].w = local_cc.w;
      puVar7 = puVar6 + (uint)bVar6 * -2 + 1;
      puVar5 = (uint *)((int)&local_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *puVar6 = *(uint *)((int)&local_cc + (uint)bVar6 * -8 + 4);
      *puVar7 = *puVar5;
      puVar7[(uint)bVar6 * -2 + 1] = puVar5[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
