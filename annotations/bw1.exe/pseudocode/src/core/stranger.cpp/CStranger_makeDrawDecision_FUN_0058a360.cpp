// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360
// Address: 0058a360
// Address Range: [[0058a360, 0058aaae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(CStranger *this_ptr)

{
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
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
  code *pcVar16;
  float local_100;
  float local_f8;
  uint local_f0;
  CQuaternion4f local_e0;
  CQuaternion4f local_d0;
  uint local_c0;
  float afStack_bc [3];
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
  
  bVar9 = 0;
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((iVar15 < 0) || (0x15 < iVar15)) {
    _DAT_01d1d400 = "..\\core\\stranger.cpp";
    _DAT_01d1d404 = 0xae2;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CStranger::makeDrawDecision - draw motion out of range!");
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
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x35)
  ;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x36)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x31)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x2f)
  ;
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_0058a53a;
  pCVar11 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020(&pCVar11->base);
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar11->base);
  iVar15 = pSVar2->state_index;
  if ((iVar15 == 0x22) || (iVar15 == 0x23)) {
    fVar1 = fVar1 + (float)_DAT_005f6b69;
LAB_0058a502:
    local_1c = fVar1 * (float)_DAT_005f6b61;
  }
  else if ((iVar15 == 0x24) || (iVar15 == 0x25)) {
    fVar1 = (float)_DAT_005f6b59 - fVar1;
    goto LAB_0058a502;
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
LAB_0058a53a:
  if (local_f8 <= (float)_DAT_005f6b71) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar15 = 1;
  pcVar14 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_name;
  pCVar11 = &(this_ptr->base).base.model;
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar11);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       (&pCVar3->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                       (&pCVar11->base,local_20,(this_ptr->base).base.layer_action_t);
  local_18 = local_24;
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar15 = 1;
    pcVar14 = (this_ptr->base).base.layer_actions[10].motion_name;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar11);
    iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       (&pCVar3->motion_list,pcVar14,iVar15);
    local_20 = iVar15;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                         (&pCVar11->base,iVar15,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
            (&(this_ptr->base).base.model,local_20,local_18,local_f8,_DAT_02c83644,
             core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  if ((this_ptr->base).base.layer_action_index == 0) {
    local_30 = (CDeformableModelInstance *)
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((int)local_30 + _DAT_02c83638 * 0x10,(int)local_30 + _DAT_02c83618 * 0x10,
               (this_ptr->base).base.layer_action_t);
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83638].w;
    pfVar6 = (float *)(puVar4 + (uint)bVar9 * -2 + 1);
    *puVar4 = local_c0;
    *pfVar6 = afStack_bc[(uint)bVar9 * -2];
    pfVar6[(uint)bVar9 * -2 + 1] = afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (pfVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((local_30->base).current_motion_name + _DAT_02c83634 * 0x10 + -0x30,
               (local_30->base).current_motion_name + _DAT_02c83614 * 0x10 + -0x30,
               (this_ptr->base).base.layer_action_t);
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83634].w;
    puVar7 = puVar4 + (uint)bVar9 * -2 + 1;
    *puVar4 = local_f0;
    *puVar7 = *(uint *)(&stack0xffffff14 + (uint)bVar9 * -8);
    puVar7[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar1 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)_DAT_005f6b79;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar1 < 0.0) {
      local_100 = ((fVar1 + _DAT_005f6b81) / (0xBF860A92 + _DAT_005f6b81)) * _DAT_005f6b85;
    }
    if (0.0 < fVar1) {
      local_100 = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar16 = core_stranger_cpp_FUN_00585040;
      iVar15 = _DAT_02c83644;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar1,&local_90);
      pCVar13 = &local_70;
      pCVar11 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar7 = (uint *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4);
      *puVar7 = *puVar4;
      puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar11,pCVar13,local_100,iVar15,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,1);
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83638].w;
    puVar7 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83618].w;
    puVar8 = puVar4 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar4 = *puVar7;
    *puVar8 = *puVar5;
    puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83634].w;
    puVar7 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83614].w;
    puVar8 = puVar4 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar4 = *puVar7;
    *puVar8 = *puVar5;
    puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((((iVar15 == 3) || (iVar15 == 4)) || ((iVar15 == 9 || ((iVar15 == 6 || (iVar15 == 7)))))) ||
     (iVar15 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    fVar1 = local_38;
    pcVar16 = core_stranger_cpp_FUN_00585040;
    pCVar13 = &local_e0;
    pCVar11 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar7 = (uint *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar4 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4);
    pCVar12 = pCVar11;
    iVar15 = _DAT_02c83644;
    *puVar7 = *puVar4;
    puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
    local_30 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,pCVar13,fVar1,iVar15,pcVar16);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    local_50.w = local_60.w;
    puVar7 = (uint *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar4 = (uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar4;
    puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_30,&local_50,local_38,_DAT_02c83644,core_stranger_cpp_FUN_00585040);
    if ((this_ptr->base).base.layer_action_index != 0xe) {
      return;
    }
  }
  else if ((this_ptr->base).base.layer_action_index != 0xe) {
    return;
  }
  fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                           (float10)1);
  local_34 = (float)fVar10;
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_34,&local_d0);
  pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  pCVar13 = &local_a0;
  fVar1 = 1.0;
  pCVar12 = &(this_ptr->base).base.model;
  local_a0.w = local_d0.w;
  puVar7 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar4 = (uint *)((int)&local_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar9 * -8 + 4);
  pCVar11 = pCVar12;
  iVar15 = _DAT_02c83610;
  *puVar7 = *puVar4;
  puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar11,pCVar13,fVar1,iVar15,pcVar16);
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_34,&local_b0);
  pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  pCVar13 = &local_a0;
  fVar1 = 1.0;
  local_a0.w = local_b0.w;
  puVar7 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar4 = (uint *)((int)&local_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar9 * -8 + 4);
  iVar15 = _DAT_02c8360c;
  *puVar7 = *puVar4;
  puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar12,pCVar13,fVar1,iVar15,pcVar16);
  return;
}
