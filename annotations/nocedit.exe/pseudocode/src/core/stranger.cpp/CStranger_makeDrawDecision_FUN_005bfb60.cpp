// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae] [0060538d, 00605401] [0060f5af, 0060f63a]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *pCVar7;
  float *pfVar8;
  uint *puVar5;
  uint *puVar6;
  uint *puVar9;
  uint *puVar7;
  float *pfVar10;
  uint *puVar8;
  uint *puVar11;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  char *motion_name;
  int iVar12;
  float local_100;
  float local_f8;
  CQuaternion4f local_f0;
  CQuaternion4f local_e0;
  CQuaternion4f local_d0;
  CQuaternion4f local_c0;
  CQuaternion4f local_b0;
  CQuaternion4f local_a0;
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  CDeformableModelInstance *pCVar11;
  byte *pcVar19;
  char *pcVar14;
  int iVar15;
  CQuaternion4f *pCVar1;
  CDeformableModel_MotionBlendWeightFunc *pcVar16;
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  CDeformableModel_MotionBlendWeightFunc *pcVar17;
  CDeformableModel_MotionBlendWeightFunc *pcVar18;
  
  bVar9 = 0;
  iVar12 = (this_ptr->base).base.layer_action_index;
  if ((iVar12 < 0) || (0x10 < iVar12)) {
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
  pCVar7 = &(this_ptr->base).base.model;
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar7->motion_controller,0x28);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar7->motion_controller,0x29);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar7->motion_controller,0x24);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar7->motion_controller,0x22);
  local_f8 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_005bfd3a;
  pCVar7 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    (&pCVar7->motion_controller);
  local_1c = 1.0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar7->motion_controller);
  iVar12 = pSVar3->state_index;
  if ((iVar12 == 0x17) || (iVar12 == 0x18)) {
    fVar3 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar3 * (float)4;
  }
  else if ((iVar12 == 0x19) || (iVar12 == 0x1a)) {
    fVar3 = (float)0.25 - fVar2;
    goto LAB_005bfd02;
  }
  if ((int)local_1c < 0x3f800001) {
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
  pCVar7 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar7);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                       (&pCVar4->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar7->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar12 = 1;
    motion_name = (this_ptr->base).base.layer_actions[10].motion_name;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar7);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                         (&this_ptr_00->motion_list,motion_name,iVar12);
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar7->motion_controller,local_20,fVar3);
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
    pfVar8 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xe]].w;
    *pfVar8 = local_c0.w;
    pfVar8[1] = local_c0.x;
    pfVar8[2] = local_c0.y;
    pfVar8[3] = local_c0.z;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
               g_StrangerIndices[0xd],
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
               g_StrangerIndices[5],(this_ptr->base).base.layer_action_t,&local_f0);
    pfVar8 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xd]].w;
    pfVar10 = pfVar8 + (uint)bVar9 * -2 + 1;
    *pfVar8 = local_f0.w;
    pfVar8 = (float *)((int)&local_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *pfVar10 = *(float *)((int)&local_f0 + (uint)bVar9 * -8 + 4);
    pfVar10[(uint)bVar9 * -2 + 1] = *pfVar8;
    (pfVar10 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = pfVar8[(uint)bVar9 * -2 + 1];
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar3 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)0.5;
    local_100 = 0.0;
    if (fVar3 < 0.0) {
      local_100 = ((fVar3 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar3) {
      local_100 = ((fVar3 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar4 = (1.0 - fVar4) * local_f8 * local_100;
    if (0.0 < fVar4) {
      pcVar16 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
      iVar12 = g_StrangerIndices[0x11];
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar3,&local_90);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (&(this_ptr->base).base.model,&local_70,fVar4,iVar12,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,1);
    puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xe]].w;
    puVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[6]].w;
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0xd]].w;
    puVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[5]].w;
    puVar11 = puVar1 + (uint)bVar9 * -2 + 1;
    puVar9 = puVar2 + (uint)bVar9 * -2 + 1;
    *puVar1 = *puVar2;
    *puVar11 = *puVar9;
    puVar11[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    (puVar11 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar9 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar12 = (this_ptr->base).base.layer_action_index;
  if ((((iVar12 == 3) || (iVar12 == 4)) || ((iVar12 == 9 || ((iVar12 == 6 || (iVar12 == 7)))))) ||
     (iVar12 == 8)) {
    fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar3 = (1.0 - fVar3) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    pCVar7 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar7,&local_e0,fVar3,g_StrangerIndices[0x11],
               core_stranger_cpp_blendWeightCallback_FUN_005baee0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar7,&local_50,fVar3,g_StrangerIndices[0x11],
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
  pCVar7 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar7,&local_a0,1.0,g_StrangerIndices[4],
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar10,&local_b0);
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar7,&local_a0,1.0,g_StrangerIndices[3],
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
