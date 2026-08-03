// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10
// Address: 00539b10
// Address Range: [[00539b10, 0053a25e]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(CStranger *this_ptr)

{
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  float local_100;
  float local_f8;
  uint local_f0;
  CQuaternion4f local_e0;
  float local_d0;
  float afStack_cc [7];
  float local_b0;
  CQuaternion4f local_a0;
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  CQuaternion4f local_70;
  float local_60;
  float afStack_5c [3];
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
  
  bVar9 = 0;
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((iVar15 < 0) || (0x10 < iVar15)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\stranger.cpp";
    g_INT_01cc4804 = 0xa7c;
    core_main_c_FUN_004c8440("CStranger::makeDrawDecision - draw motion out of range!");
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
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&pCVar11->motion_controller,0x28);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&pCVar11->motion_controller,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&pCVar11->motion_controller,0x24);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&pCVar11->motion_controller,0x22);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_00539cea;
  pCVar11 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                    (&pCVar11->motion_controller);
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar11->motion_controller);
  iVar15 = pSVar2->state_index;
  if ((iVar15 == 0x17) || (iVar15 == 0x18)) {
    fVar1 = fVar1 + (float)-0.75;
LAB_00539cb2:
    local_1c = fVar1 * (float)4;
  }
  else if ((iVar15 == 0x19) || (iVar15 == 0x1a)) {
    fVar1 = (float)0.25 - fVar1;
    goto LAB_00539cb2;
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
LAB_00539cea:
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
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar11);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                       (&pCVar3->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                       (&pCVar11->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  local_18 = local_24;
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar15 = 1;
    pcVar14 = (this_ptr->base).base.layer_actions[10].motion_name;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar11);
    iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                       (&pCVar3->motion_list,pcVar14,iVar15);
    local_20 = iVar15;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                         (&pCVar11->motion_controller,iVar15,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (&(this_ptr->base).base.model,local_20,local_18,local_f8,_DAT_02dc9f94,
             core_skeleton_cpp_FUN_0051b650);
  if ((this_ptr->base).base.layer_action_index == 0) {
    local_30 = (CDeformableModelInstance *)
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              ((int)local_30 + _DAT_02dc9f88 * 0x10,(int)local_30 + _DAT_02dc9f68 * 0x10,
               (this_ptr->base).base.layer_action_t);
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02dc9f88].w;
    pfVar8 = (float *)(puVar4 + (uint)bVar9 * -2 + 1);
    *puVar4 = afStack_cc[3];
    *pfVar8 = afStack_cc[(uint)bVar9 * -2 + 4];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              ((local_30->motion_controller).current_motion_name + _DAT_02dc9f84 * 0x10 + -0x30,
               (local_30->motion_controller).current_motion_name + _DAT_02dc9f64 * 0x10 + -0x30,
               (this_ptr->base).base.layer_action_t);
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02dc9f84].w;
    puVar6 = puVar4 + (uint)bVar9 * -2 + 1;
    *puVar4 = local_f0;
    *puVar6 = *(uint *)(&stack0xffffff14 + (uint)bVar9 * -8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar1 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)0.5;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar1 < 0.0) {
      local_100 = ((fVar1 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar1) {
      local_100 = ((fVar1 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar16 = core_stranger_cpp_FUN_00534e90;
      iVar15 = _DAT_02dc9f94;
      core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(fVar1,&local_90);
      pCVar13 = &local_70;
      pCVar11 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar6 = (uint *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4);
      *puVar6 = *puVar4;
      puVar6[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                (pCVar11,pCVar13,local_100,iVar15,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0053a260(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0053a260(this_ptr,1);
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02dc9f88].w;
    puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02dc9f68].w;
    puVar7 = puVar4 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar6 + (uint)bVar9 * -2 + 1;
    *puVar4 = *puVar6;
    *puVar7 = *puVar5;
    puVar7[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02dc9f84].w;
    puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02dc9f64].w;
    puVar7 = puVar4 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar6 + (uint)bVar9 * -2 + 1;
    *puVar4 = *puVar6;
    *puVar7 = *puVar5;
    puVar7[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((((iVar15 == 3) || (iVar15 == 4)) || ((iVar15 == 9 || ((iVar15 == 6 || (iVar15 == 7)))))) ||
     (iVar15 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    fVar1 = local_38;
    pcVar16 = core_stranger_cpp_FUN_00534e90;
    pCVar13 = &local_e0;
    pCVar11 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar6 = (uint *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar4 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4);
    pCVar12 = pCVar11;
    iVar15 = _DAT_02dc9f94;
    *puVar6 = *puVar4;
    puVar6[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
    local_30 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (pCVar12,pCVar13,fVar1,iVar15,pcVar16);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0((this_ptr->right_arm_aim).target_yaw);
    local_50.w = local_60;
    pfVar8 = (float *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_50 + (uint)bVar9 * -8 + 4) = afStack_5c[(uint)bVar9 * -2];
    *pfVar8 = afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar8[(uint)bVar9 * -2 + 1] =
         (afStack_5c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (local_30,&local_50,local_38,_DAT_02dc9f94,core_stranger_cpp_FUN_00534e90);
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
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_34);
  pcVar16 = core_skeleton_cpp_FUN_0051b650;
  pCVar13 = &local_a0;
  fVar1 = 1.0;
  pCVar12 = &(this_ptr->base).base.model;
  local_a0.w = local_d0;
  pfVar8 = (float *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2];
  pCVar11 = pCVar12;
  iVar15 = _DAT_02dc9f60;
  *pfVar8 = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  pfVar8[(uint)bVar9 * -2 + 1] =
       (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (pCVar11,pCVar13,fVar1,iVar15,pcVar16);
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_34);
  pcVar16 = core_skeleton_cpp_FUN_0051b650;
  pCVar13 = &local_a0;
  fVar1 = 1.0;
  local_a0.w = local_b0;
  pfVar8 = (float *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 8];
  iVar15 = _DAT_02dc9f5c;
  *pfVar8 = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
  pfVar8[(uint)bVar9 * -2 + 1] =
       (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (pCVar12,pCVar13,fVar1,iVar15,pcVar16);
  return;
}
