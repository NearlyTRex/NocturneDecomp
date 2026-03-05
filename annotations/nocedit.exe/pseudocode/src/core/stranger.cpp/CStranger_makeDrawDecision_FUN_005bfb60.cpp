// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

{
  CQuaternion4f *pCVar1;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar19;
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
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  CDeformableModel_MotionBlendWeightFunc *pcVar16;
  CDeformableModel_MotionBlendWeightFunc *pcVar17;
  CDeformableModel_MotionBlendWeightFunc *pcVar18;
  
  bVar9 = 0;
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((iVar15 < 0) || (0x10 < iVar15)) {
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
  pCVar11 = &(this_ptr->base).base.model;
  local_30 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar11->motion_controller,0x28);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar11->motion_controller,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar11->motion_controller,0x24);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar11->motion_controller,0x22);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_005bfd3a;
  pCVar11 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    (&pCVar11->motion_controller);
  local_1c = 1.0;
  local_18 = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar11->motion_controller);
  iVar15 = pSVar3->state_index;
  if ((iVar15 == 0x17) || (iVar15 == 0x18)) {
    fVar2 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar2 * (float)4;
  }
  else if ((iVar15 == 0x19) || (iVar15 == 0x1a)) {
    fVar2 = (float)0.25 - fVar2;
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
  pCVar11 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar11);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                       (&pCVar4->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar11->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  local_18 = local_24;
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar15 = 1;
    pcVar14 = (this_ptr->base).base.layer_actions[10].motion_name;
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar11);
    iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                       (&pCVar4->motion_list,pcVar14,iVar15);
    local_20 = iVar15;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar11->motion_controller,iVar15,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (&(this_ptr->base).base.model,local_20,local_18,local_f8,INT_03f6bb10,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  if ((this_ptr->base).base.layer_action_index == 0) {
    local_30 = (CDeformableModelInstance *)(this_ptr->base).base.model.bone_transform.bone_rotations
    ;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)((int)local_30 + INT_03f6bb04 * 0x10),
               (CQuaternion4f *)((int)local_30 + INT_03f6bae4 * 0x10),
               (this_ptr->base).base.layer_action_t,&local_c0);
    pCVar13 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04;
    puVar6 = (uint *)((int)pCVar13 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar13->w = local_c0.w;
    puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar5 = (uint *)((int)&local_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *puVar6 = *(uint *)((int)&local_c0 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar5;
    puVar7[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + INT_03f6bb00 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + INT_03f6bae0 * 0x10 + -0x30),
               (this_ptr->base).base.layer_action_t,&local_f0);
    pCVar13 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00;
    puVar6 = (uint *)((int)pCVar13 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar13->w = local_f0.w;
    puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar5 = (uint *)((int)&local_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *puVar6 = *(uint *)((int)&local_f0 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar5;
    puVar7[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar2 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)0.5;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar2 < 0.0) {
      local_100 = ((fVar2 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar2) {
      local_100 = ((fVar2 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar16 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
      iVar15 = INT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar2,&local_90);
      pCVar13 = &local_70;
      pCVar11 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar6 = (uint *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar5 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar11,pCVar13,local_100,iVar15,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,1);
    pCVar13 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04;
    pCVar1 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae4;
    puVar7 = (uint *)((int)pCVar13 + ((uint)bVar9 * -2 + 1) * 4);
    puVar5 = (uint *)((int)pCVar1 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar13->w = pCVar1->w;
    puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar7 = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    pCVar13 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00;
    pCVar1 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae0;
    puVar7 = (uint *)((int)pCVar13 + ((uint)bVar9 * -2 + 1) * 4);
    puVar5 = (uint *)((int)pCVar1 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar13->w = pCVar1->w;
    puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar7 = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
  }
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((((iVar15 == 3) || (iVar15 == 4)) || ((iVar15 == 9 || ((iVar15 == 6 || (iVar15 == 7)))))) ||
     (iVar15 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    fVar2 = local_38;
    pcVar17 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
    pCVar13 = &local_e0;
    pCVar11 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar6 = (uint *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar5 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4);
    pCVar12 = pCVar11;
    iVar15 = INT_03f6bb10;
    *puVar6 = *puVar5;
    puVar6[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    local_30 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar12,pCVar13,fVar2,iVar15,pcVar17);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    local_50.w = local_60.w;
    puVar6 = (uint *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar5 = (uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_30,&local_50,local_38,INT_03f6bb10,
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
  local_34 = (float)fVar10;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,&local_d0);
  pcVar19 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  pCVar13 = &local_a0;
  fVar2 = 1.0;
  pCVar12 = &(this_ptr->base).base.model;
  local_a0.w = local_d0.w;
  puVar6 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar5 = (uint *)((int)&local_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar9 * -8 + 4);
  pCVar11 = pCVar12;
  iVar15 = INT_03f6badc;
  *puVar6 = *puVar5;
  puVar6[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar11,pCVar13,fVar2,iVar15,pcVar19);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,&local_b0);
  pcVar19 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  pCVar13 = &local_a0;
  fVar2 = 1.0;
  local_a0.w = local_b0.w;
  puVar6 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar5 = (uint *)((int)&local_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar9 * -8 + 4);
  iVar15 = INT_03f6bad8;
  *puVar6 = *puVar5;
  pcVar18 = pcVar19;
  puVar6[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar12,pCVar13,fVar2,iVar15,pcVar18);
  return;
}
