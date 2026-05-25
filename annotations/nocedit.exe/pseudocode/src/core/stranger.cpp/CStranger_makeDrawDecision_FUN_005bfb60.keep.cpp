// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
// Address: 005bfb60
// MANUAL RECONSTRUCTION
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae] [0060538d, 00605401] [0060f5af, 0060f63a] [0060fba0, 0060fbe7]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

{
  float *pfVar1;
  float *puVar2;
  float *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *pCVar8;
  float10 fVar10;
  char *motion_name;
  int iVar9;
  float local_100;
  float local_f8;
  CQuaternion4f local_f0;
  CQuaternion4f local_d0;
  CQuaternion4f local_c0;
  CQuaternion4f local_b0;
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  CQuaternion4f local_60;
  float local_24;
  int local_20;
  float local_1c;
  char *pcVar14;
  int iVar15;
  CDeformableModel_MotionBlendWeightFunc *pcVar16;
  
  iVar9 = (this_ptr->base).base.layer_action_index;
  if ((iVar9 < 0) || (0x10 < iVar9)) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xa85;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f8 = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].from_bone_index
      == 0) {
    local_f8 = (this_ptr->base).base.layer_action_t;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].to_bone_index ==
      0) {
    local_f8 = (1.0 - (this_ptr->base).base.layer_action_t) * local_f8;
  }
  pCVar8 = &(this_ptr->base).base.model;
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar8->motion_controller,0x28);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar8->motion_controller,0x29);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar8->motion_controller,0x24);
  fVar7 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar8->motion_controller,0x22);
  local_f8 = (1.0 - (fVar7 + fVar6 + fVar5 + fVar4)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_005bfd3a;
  pCVar8 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    (&pCVar8->motion_controller);
  local_1c = 1.0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar8->motion_controller);
  iVar9 = pSVar3->state_index;
  if ((iVar9 == 0x17) || (iVar9 == 0x18)) {
    fVar4 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar4 * (float)4;
  }
  else if ((iVar9 == 0x19) || (iVar9 == 0x1a)) {
    fVar4 = (float)0.25 - fVar2;
    goto LAB_005bfd02;
  }
  if (local_1c <= 1.0f) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_f8 = local_f8 * local_1c;
LAB_005bfd3a:
  if (local_f8 <= (float)0.0001) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar15 = 1;
  pcVar14 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_name;
  pCVar8 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar8);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                       (&pCVar4->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar8->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar9 = 1;
    motion_name = (this_ptr->base).base.layer_actions[10].motion_name;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar8);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                         (&this_ptr_00->motion_list,motion_name,iVar9);
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
    local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar8->motion_controller,local_20,fVar4);
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (&(this_ptr->base).base.model,local_20,local_24,local_f8,g_StrangerIndices[0x11],
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  if ((this_ptr->base).base.layer_action_index == 0) {
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
               g_StrangerIndices[0xe],
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
               g_StrangerIndices[6],(this_ptr->base).base.layer_action_t,&local_c0);
    pfVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xe]].w;
    *pfVar1 = local_c0.w;
    pfVar1[1] = local_c0.x;
    pfVar1[2] = local_c0.y;
    pfVar1[3] = local_c0.z;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
               g_StrangerIndices[0xd],
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
               g_StrangerIndices[5],(this_ptr->base).base.layer_action_t,&local_f0);
    pfVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xd]].w;
    *pfVar1 = local_f0.w;
    pfVar1[1] = local_f0.x;
    pfVar1[2] = local_f0.y;
    pfVar1[3] = local_f0.z;
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar4 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)0.5;
    local_100 = 0.0;
    if (fVar4 < 0.0) {
      local_100 = ((fVar4 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar4) {
      local_100 = ((fVar4 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    fVar5 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar5 = (1.0 - fVar5) * local_f8 * local_100;
    if (0.0 < fVar5) {
      pcVar16 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
      iVar9 = g_StrangerIndices[0x11];
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar4,&local_90);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (&(this_ptr->base).base.model,&local_90,fVar5,iVar9,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,1);
    puVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xe]].w;
    puVar3 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[6]].w;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
    puVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xd]].w;
    puVar3 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[5]].w;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
  }
  iVar9 = (this_ptr->base).base.layer_action_index;
  if ((((iVar9 == 3) || (iVar9 == 4)) || ((iVar9 == 9 || ((iVar9 == 6 || (iVar9 == 7)))))) ||
     (iVar9 == 8)) {
    fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar4 = (1.0 - fVar4) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    pCVar8 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar8,&local_80,fVar4,g_StrangerIndices[0x11],
               core_stranger_cpp_blendWeightCallback_FUN_005baee0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar8,&local_60,fVar4,g_StrangerIndices[0x11],
               core_stranger_cpp_blendWeightCallback_FUN_005baee0);
    if ((this_ptr->base).base.layer_action_index != 0xe) {
      return;
    }
  }
  else if ((this_ptr->base).base.layer_action_index != 0xe) {
    return;
  }
  fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)2.7f,
                           (float10)1);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)fVar10,&local_d0);
  pCVar8 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar8,&local_d0,1.0,g_StrangerIndices[4],
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar10,&local_b0);
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar8,&local_b0,1.0,g_StrangerIndices[3],
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
