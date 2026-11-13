// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880
// Address: 00567880
// Address Range: [[00567880, 00567fce]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00567880(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00567880(CStranger *this_ptr)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  CSkeleton *pCVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  char *pcVar14;
  code *pcVar15;
  float local_100;
  float local_f8;
  uint local_f0;
  CQuaternion4f local_e0;
  float local_d0;
  float afStack_cc [7];
  float local_b0;
  CQuaternion4f local_a0;
  float local_90;
  float afStack_8c [7];
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
  iVar3 = (this_ptr->base).base.layer_action_index;
  if ((iVar3 < 0) || (0x10 < iVar3)) {
    _DAT_01d046a0 = "..\\core\\stranger.cpp";
    _DAT_01d046a4 = 0xa78;
    core_main_c_FUN_004e4500("CStranger::makeDrawDecision - draw motion out of range!");
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
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(pCVar11,0x28);
  local_18 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x24);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x22);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_00567a5a;
  pCVar11 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_FUN_00503e60(&pCVar11->base);
  local_1c = 1.0;
  local_18 = fVar2;
  iVar3 = core_motion_cpp_FUN_005035c0(pCVar11);
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((iVar3 == 0x17) || (iVar3 == 0x18)) {
    fVar2 = fVar2 + (float)_DAT_005eb8f5;
LAB_00567a22:
    local_1c = fVar2 * (float)_DAT_005eb8ed;
  }
  else if ((iVar3 == 0x19) || (iVar3 == 0x1a)) {
    fVar2 = (float)_DAT_005eb8e5 - fVar2;
    goto LAB_00567a22;
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
LAB_00567a5a:
  if (local_f8 <= (float)_DAT_005eb8fd) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar3 = 1;
  pcVar14 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_name;
  pCVar11 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar11);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                       (&pCVar4->motion_list,pcVar14,iVar3);
  local_24 = (float)core_motion_cpp_FUN_00503f50
                              (pCVar11,local_20,(this_ptr->base).base.layer_action_t);
  local_18 = local_24;
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar3 = 1;
    pcVar14 = (this_ptr->base).base.layer_actions[10].motion_name;
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar11);
    iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      (&pCVar4->motion_list,pcVar14,iVar3);
    local_20 = iVar3;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
    local_18 = (float)core_motion_cpp_FUN_00503f50(pCVar11,iVar3,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
            (&(this_ptr->base).base.model,local_20,local_18,local_f8,_DAT_0264be74,
             core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  if ((this_ptr->base).base.layer_action_index == 0) {
    local_30 = (CDeformableModelInstance *)
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              ((int)local_30 + _DAT_0264be68 * 0x10,(int)local_30 + _DAT_0264be48 * 0x10,
               (this_ptr->base).base.layer_action_t);
    puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_0264be68].w;
    pfVar7 = (float *)(puVar1 + (uint)bVar9 * -2 + 1);
    *puVar1 = afStack_cc[3];
    *pfVar7 = afStack_cc[(uint)bVar9 * -2 + 4];
    pfVar7[(uint)bVar9 * -2 + 1] = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (pfVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              ((local_30->base).current_motion_name + _DAT_0264be64 * 0x10 + -0x30,
               (local_30->base).current_motion_name + _DAT_0264be44 * 0x10 + -0x30,
               (this_ptr->base).base.layer_action_t);
    puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_0264be64].w;
    puVar6 = puVar1 + (uint)bVar9 * -2 + 1;
    *puVar1 = local_f0;
    *puVar6 = *(uint *)(&stack0xffffff14 + (uint)bVar9 * -8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar2 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)_DAT_005eb905;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar2 < 0.0) {
      local_100 = ((fVar2 + _DAT_005eb90d) / (0xBF860A92 + _DAT_005eb90d)) * _DAT_005eb911;
    }
    if (0.0 < fVar2) {
      local_100 = ((fVar2 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar15 = core_stranger_cpp_FUN_005625c0;
      iVar3 = _DAT_0264be74;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fVar2);
      pCVar13 = &local_70;
      pCVar11 = &(this_ptr->base).base.model;
      local_70.w = local_90;
      pfVar7 = (float *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_70 + (uint)bVar9 * -8 + 4) = afStack_8c[(uint)bVar9 * -2];
      *pfVar7 = afStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_8c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar11,pCVar13,local_100,iVar3,pcVar15);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_00567fd0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_00567fd0(this_ptr,1);
    puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_0264be68].w;
    puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_0264be48].w;
    puVar8 = puVar1 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar6 + (uint)bVar9 * -2 + 1;
    *puVar1 = *puVar6;
    *puVar8 = *puVar5;
    puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_0264be64].w;
    puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_0264be44].w;
    puVar8 = puVar1 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar6 + (uint)bVar9 * -2 + 1;
    *puVar1 = *puVar6;
    *puVar8 = *puVar5;
    puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar3 = (this_ptr->base).base.layer_action_index;
  if ((((iVar3 == 3) || (iVar3 == 4)) || ((iVar3 == 9 || ((iVar3 == 6 || (iVar3 == 7)))))) ||
     (iVar3 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((this_ptr->right_arm_aim).target_pitch);
    fVar2 = local_38;
    pcVar15 = core_stranger_cpp_FUN_005625c0;
    pCVar13 = &local_e0;
    pCVar11 = &(this_ptr->base).base.model;
    local_e0.w = afStack_8c[3];
    pfVar7 = (float *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_e0 + (uint)bVar9 * -8 + 4) = afStack_8c[(uint)bVar9 * -2 + 4];
    pCVar12 = pCVar11;
    iVar3 = _DAT_0264be74;
    *pfVar7 = afStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_8c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    local_30 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (pCVar12,pCVar13,fVar2,iVar3,pcVar15);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0((this_ptr->right_arm_aim).target_yaw);
    local_50.w = local_60;
    pfVar7 = (float *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_50 + (uint)bVar9 * -8 + 4) = afStack_5c[(uint)bVar9 * -2];
    *pfVar7 = afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_5c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (local_30,&local_50,local_38,_DAT_0264be74,core_stranger_cpp_FUN_005625c0);
    if ((this_ptr->base).base.layer_action_index != 0xe) {
      return;
    }
  }
  else if ((this_ptr->base).base.layer_action_index != 0xe) {
    return;
  }
  fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005fc208,
                           (float10)1);
  local_34 = (float)fVar10;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_34);
  pcVar15 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  pCVar13 = &local_a0;
  fVar2 = 1.0;
  pCVar12 = &(this_ptr->base).base.model;
  local_a0.w = local_d0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2];
  pCVar11 = pCVar12;
  iVar3 = _DAT_0264be40;
  *pfVar7 = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  pfVar7[(uint)bVar9 * -2 + 1] =
       (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar11,pCVar13,fVar2,iVar3,pcVar15);
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_34);
  pcVar15 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  pCVar13 = &local_a0;
  fVar2 = 1.0;
  local_a0.w = local_b0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 8];
  iVar3 = _DAT_0264be3c;
  *pfVar7 = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
  pfVar7[(uint)bVar9 * -2 + 1] =
       (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar12,pCVar13,fVar2,iVar3,pcVar15);
  return;
}
