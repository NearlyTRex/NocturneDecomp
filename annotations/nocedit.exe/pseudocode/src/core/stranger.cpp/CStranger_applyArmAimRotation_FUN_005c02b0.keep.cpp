// Name: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0
// Address: 005c02b0
// MANUAL RECONSTRUCTION
// Address Range: [[005c02b0, 005c06a6] [0060d067, 0060d0da] [0060f8d6, 0060fa65]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(CStranger *this_ptr,int arm_side)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(CStranger *this_ptr,int arm_side)

{
  CDeformableModelInstance *this_ptr_02;
  float fVar1;
  SArmAimData *pSVar2;
  CSkeleton *this_ptr_01;
  int motion_index;
  float fVar3;
  CQuaternion4f *quat1_in;
  CQuaternion4f *pCVar1;
  char *motion_name;
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
  int local_28;
  int local_24;

  if (arm_side == 0) {
    local_24 = g_StrangerIndices[3];
    local_28 = g_StrangerIndices[5];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_11c);
    local_1cc = local_11c;
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(1.5707964,&local_1ac);
    pSVar2 = &this_ptr->left_arm_aim;
    pCVar1 = &local_1ac;
  }
  else {
    local_24 = g_StrangerIndices[4];
    local_28 = g_StrangerIndices[6];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_1dc);
    local_1cc = local_1dc;
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_ec);
    pSVar2 = &this_ptr->right_arm_aim;
    pCVar1 = &local_ec;
  }
  local_1bc = *pCVar1;
  fVar1 = (this_ptr->base).base.layer_action_t;
  fVar1 = (1.0 - (1.0 - pSVar2->kickback_factor) * fVar1) * fVar1;
  if (0.0 < fVar1) {
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    this_ptr_02 = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                            (this_ptr_02);
    motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                             (&this_ptr_01->motion_list,motion_name,1);
    fVar3 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                      (&this_ptr_02->motion_controller,motion_index,
                       (this_ptr->base).base.layer_action_t);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_02,motion_index,fVar3,fVar1,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(pSVar2->target_yaw,&local_4c);
    local_16c = local_4c;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(pSVar2->target_pitch,&local_19c);
    local_17c = local_19c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_17c,&local_16c,&local_ac);
    local_18c = local_ac;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&CQuaternion4f_00665998,&local_1cc,0.95,&local_9c);
    local_15c = local_9c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,&local_18c,&local_bc);
    local_14c = local_bc;
    quat1_in = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(quat1_in,&local_14c,fVar1,&local_6c);
    (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[local_24] = local_6c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,&local_1bc,&local_8c);
    local_12c = local_8c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_12c,&local_18c,&local_7c);
    local_13c = local_7c;
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr_02,&local_13c,fVar1,local_28,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    if ((float)0.0001 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(1.5707964,&local_5c);
      local_fc = local_5c;
      core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,&local_fc,&local_dc);
      local_10c = local_dc;
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (quat1_in,&local_10c,this_ptr->arm_recoil_blend,&local_cc);
      (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[local_24] = local_cc;
      return;
    }
  }
  return;
}
