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
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar12;
  CDeformableModelInstance *pCVar13;
  CQuaternion4f *pCVar14;
  char *pcVar15;
  int iVar16;
  code *pcVar17;
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
  
  bVar10 = 0;
  iVar16 = (this_ptr->base).base.layer_action_index;
  if ((iVar16 < 0) || (0x15 < iVar16)) {
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
  pCVar12 = &(this_ptr->base).base.model;
  local_30 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar12->base,0x35)
  ;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar12->base,0x36)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar12->base,0x31)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar12->base,0x2f)
  ;
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_0058a53a;
  pCVar12 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020(&pCVar12->base);
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar12->base);
  iVar16 = pSVar2->state_index;
  if ((iVar16 == 0x22) || (iVar16 == 0x23)) {
    fVar1 = fVar1 + (float)_DAT_005f6b69;
LAB_0058a502:
    local_1c = fVar1 * (float)_DAT_005f6b61;
  }
  else if ((iVar16 == 0x24) || (iVar16 == 0x25)) {
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
  iVar16 = 1;
  pcVar15 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_name;
  pCVar12 = &(this_ptr->base).base.model;
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar12);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       (&pCVar3->motion_list,pcVar15,iVar16);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                       (&pCVar12->base,local_20,(this_ptr->base).base.layer_action_t);
  local_18 = local_24;
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar16 = 1;
    pcVar15 = (this_ptr->base).base.layer_actions[10].motion_name;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar12);
    iVar16 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       (&pCVar3->motion_list,pcVar15,iVar16);
    local_20 = iVar16;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                         (&pCVar12->base,iVar16,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
            (&(this_ptr->base).base.model,local_20,local_18,local_f8,_DAT_02c83644,
             core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  if ((this_ptr->base).base.layer_action_index == 0) {
    local_30 = (CDeformableModelInstance *)
               (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((CQuaternion4f *)((int)local_30 + _DAT_02c83638 * 0x10),
               (CQuaternion4f *)((int)local_30 + _DAT_02c83618 * 0x10),
               (this_ptr->base).base.layer_action_t,&local_c0);
    pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83638].w;
    pfVar7 = pfVar4 + (uint)bVar10 * -2 + 1;
    *pfVar4 = local_c0.w;
    pfVar4 = (float *)((int)&local_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar7 = *(float *)((int)&local_c0 + (uint)bVar10 * -8 + 4);
    pfVar7[(uint)bVar10 * -2 + 1] = *pfVar4;
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar4[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((CQuaternion4f *)
               ((local_30->base).current_motion_name + _DAT_02c83634 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_30->base).current_motion_name + _DAT_02c83614 * 0x10 + -0x30),
               (this_ptr->base).base.layer_action_t,&local_f0);
    pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83634].w;
    pfVar7 = pfVar4 + (uint)bVar10 * -2 + 1;
    *pfVar4 = local_f0.w;
    pfVar4 = (float *)((int)&local_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar7 = *(float *)((int)&local_f0 + (uint)bVar10 * -8 + 4);
    pfVar7[(uint)bVar10 * -2 + 1] = *pfVar4;
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar4[(uint)bVar10 * -2 + 1];
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
      pcVar17 = core_stranger_cpp_FUN_00585040;
      iVar16 = _DAT_02c83644;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar1,&local_90);
      pCVar14 = &local_70;
      pCVar12 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar8 = (uint *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar5 = (uint *)((int)&local_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar10 * -8 + 4);
      *puVar8 = *puVar5;
      puVar8[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,pCVar14,local_100,iVar16,pcVar17);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,1);
    puVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83638].w;
    puVar8 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83618].w;
    puVar9 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar5 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83634].w;
    puVar8 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_02c83614].w;
    puVar9 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar5 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  }
  iVar16 = (this_ptr->base).base.layer_action_index;
  if ((((iVar16 == 3) || (iVar16 == 4)) || ((iVar16 == 9 || ((iVar16 == 6 || (iVar16 == 7)))))) ||
     (iVar16 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    fVar1 = local_38;
    pcVar17 = core_stranger_cpp_FUN_00585040;
    pCVar14 = &local_e0;
    pCVar12 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar8 = (uint *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar5 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar10 * -8 + 4);
    pCVar13 = pCVar12;
    iVar16 = _DAT_02c83644;
    *puVar8 = *puVar5;
    puVar8[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    local_30 = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar13,pCVar14,fVar1,iVar16,pcVar17);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    local_50.w = local_60.w;
    puVar8 = (uint *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar5 = (uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar5;
    puVar8[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_30,&local_50,local_38,_DAT_02c83644,core_stranger_cpp_FUN_00585040);
    if ((this_ptr->base).base.layer_action_index != 0xe) {
      return;
    }
  }
  else if ((this_ptr->base).base.layer_action_index != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                           (float10)1);
  local_34 = (float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_34,&local_d0);
  pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  pCVar14 = &local_a0;
  fVar1 = 1.0;
  pCVar13 = &(this_ptr->base).base.model;
  local_a0.w = local_d0.w;
  puVar8 = (uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar5 = (uint *)((int)&local_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar10 * -8 + 4);
  pCVar12 = pCVar13;
  iVar16 = _DAT_02c83610;
  *puVar8 = *puVar5;
  puVar8[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar12,pCVar14,fVar1,iVar16,pcVar17);
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_34,&local_b0);
  pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  pCVar14 = &local_a0;
  fVar1 = 1.0;
  local_a0.w = local_b0.w;
  puVar8 = (uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar5 = (uint *)((int)&local_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar10 * -8 + 4);
  iVar16 = _DAT_02c8360c;
  *puVar8 = *puVar5;
  puVar8[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar13,pCVar14,fVar1,iVar16,pcVar17);
  return;
}
