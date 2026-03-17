// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  CSkeleton *this_ptr_00;
  uint *puVar9;
  float *pfVar10;
  uint *puVar5;
  uint *puVar6;
  uint *puVar11;
  uint *puVar7;
  float *pfVar12;
  uint *puVar13;
  uint *puVar8;
  uint *puVar14;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar15;
  CDeformableModelInstance *this_ptr_01;
  CQuaternion4f *pCVar16;
  char *motion_name;
  int iVar17;
  code *pcVar20;
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
  iVar17 = (this_ptr->base).base.layer_action_index;
  if ((iVar17 < 0) || (0x10 < iVar17)) {
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
  pCVar15 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar15->motion_controller,0x28);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar15->motion_controller,0x29);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar15->motion_controller,0x24);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar15->motion_controller,0x22);
  local_f8 = (1.0 - (fVar5 + fVar4 + fVar3 + fVar1)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_005bfd3a;
  pCVar15 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    (&pCVar15->motion_controller);
  local_1c = 1.0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar15->motion_controller);
  iVar17 = pSVar3->state_index;
  if ((iVar17 == 0x17) || (iVar17 == 0x18)) {
    fVar1 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar1 * (float)4;
  }
  else if ((iVar17 == 0x19) || (iVar17 == 0x1a)) {
    fVar1 = (float)0.25 - fVar2;
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
  pCVar15 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar15);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                       (&pCVar4->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar15->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar17 = 1;
    motion_name = (this_ptr->base).base.layer_actions[10].motion_name;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar15);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                         (&this_ptr_00->motion_list,motion_name,iVar17);
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar15->motion_controller,local_20,fVar1);
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (&(this_ptr->base).base.model,local_20,local_24,local_f8,INT_03f6bb10,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  if ((this_ptr->base).base.layer_action_index == 0) {
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + INT_03f6bb04,
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + INT_03f6bae4,
               (this_ptr->base).base.layer_action_t,&local_c0);
    pfVar10 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[INT_03f6bb04].w;
    *pfVar10 = local_c0.w;
    puVar7 = pfVar10 + (uint)bVar9 * -2 + 1 + (uint)bVar9 * -2 + 1;
    puVar9 = (uint *)((int)&local_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    pfVar10[(uint)bVar9 * -2 + 1] = *(float *)((int)&local_c0 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar9;
    puVar7[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + INT_03f6bb00,
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + INT_03f6bae0,
               (this_ptr->base).base.layer_action_t,&local_f0);
    pfVar10 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[INT_03f6bb00].w;
    pfVar12 = pfVar10 + (uint)bVar9 * -2 + 1;
    *pfVar10 = local_f0.w;
    pfVar10 = (float *)((int)&local_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *pfVar12 = *(float *)((int)&local_f0 + (uint)bVar9 * -8 + 4);
    pfVar12[(uint)bVar9 * -2 + 1] = *pfVar10;
    (pfVar12 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = pfVar10[(uint)bVar9 * -2 + 1];
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar1 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)0.5;
    local_100 = 0.0;
    if (fVar1 < 0.0) {
      local_100 = ((fVar1 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar1) {
      local_100 = ((fVar1 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar3 = (1.0 - fVar3) * local_f8 * local_100;
    if (0.0 < fVar3) {
      pcVar16 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
      iVar17 = INT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar1,&local_90);
      pCVar13 = &local_70;
      pCVar11 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar13 = (uint *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar9 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4);
      *puVar13 = *puVar9;
      puVar13[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar11,pCVar13,fVar3,iVar17,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,1);
    puVar9 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[INT_03f6bb04].w;
    puVar13 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[INT_03f6bae4].w;
    puVar5 = puVar13 + (uint)bVar9 * -2 + 1;
    *puVar9 = *puVar13;
    puVar8 = puVar9 + (uint)bVar9 * -2 + 1 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar9[(uint)bVar9 * -2 + 1] = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    puVar9 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[INT_03f6bb00].w;
    puVar13 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[INT_03f6bae0].w;
    puVar14 = puVar9 + (uint)bVar9 * -2 + 1;
    puVar11 = puVar13 + (uint)bVar9 * -2 + 1;
    *puVar9 = *puVar13;
    *puVar14 = *puVar11;
    puVar14[(uint)bVar9 * -2 + 1] = puVar11[(uint)bVar9 * -2 + 1];
    (puVar14 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar11 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar17 = (this_ptr->base).base.layer_action_index;
  if ((((iVar17 == 3) || (iVar17 == 4)) || ((iVar17 == 9 || ((iVar17 == 6 || (iVar17 == 7)))))) ||
     (iVar17 == 8)) {
    fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar1 = (1.0 - fVar1) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    pcVar17 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
    pCVar16 = &local_e0;
    pCVar15 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar13 = (uint *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar9 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4);
    pCVar12 = pCVar15;
    fVar3 = fVar1;
    iVar17 = INT_03f6bb10;
    *puVar13 = *puVar9;
    puVar13[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar12,pCVar16,fVar3,iVar17,pcVar17);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    local_50.w = local_60.w;
    puVar13 = (uint *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar9 = (uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4);
    *puVar13 = *puVar9;
    puVar13[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar15,&local_50,fVar1,INT_03f6bb10,
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
  pcVar19 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  pCVar16 = &local_a0;
  fVar1 = 1.0;
  this_ptr_01 = &(this_ptr->base).base.model;
  local_a0.w = local_d0.w;
  puVar13 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar9 = (uint *)((int)&local_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar9 * -8 + 4);
  pCVar15 = this_ptr_01;
  iVar17 = INT_03f6badc;
  *puVar13 = *puVar9;
  puVar13[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar15,pCVar16,fVar1,iVar17,(CDeformableModel_MotionBlendWeightFunc *)pcVar19);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar10,&local_b0);
  pcVar20 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  pCVar16 = &local_a0;
  fVar1 = 1.0;
  local_a0.w = local_b0.w;
  puVar13 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar9 = (uint *)((int)&local_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar9 * -8 + 4);
  iVar17 = INT_03f6bad8;
  *puVar13 = *puVar9;
  pcVar18 = pcVar20;
  puVar13[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_01,pCVar16,fVar1,iVar17,pcVar18);
  return;
}
