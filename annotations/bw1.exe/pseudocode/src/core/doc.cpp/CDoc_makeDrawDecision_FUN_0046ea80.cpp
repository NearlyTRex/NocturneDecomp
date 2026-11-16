// Name: core_doc.cpp_CDoc_makeDrawDecision_FUN_0046ea80
// Address: 0046ea80
// Address Range: [[0046ea80, 0046f1f0]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_makeDrawDecision_FUN_0046ea80(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_makeDrawDecision_FUN_0046ea80(CDoc *this_ptr)

{
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *pCVar12;
  char *pcVar13;
  int iVar14;
  code *pcVar15;
  float local_f0;
  float local_ec;
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
  float local_28;
  int local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar10 = 0;
  iVar14 = (this_ptr->base).base.layer_action_index;
  if ((iVar14 < 0) || (0x15 < iVar14)) {
    _DAT_01d1d400 = "..\\core\\doc.cpp";
    _DAT_01d1d404 = 0xc50;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_f0 = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].from_bone_index
      == 0) {
    local_f0 = (this_ptr->base).base.layer_action_t;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].to_bone_index ==
      0) {
    local_f0 = (1.0 - (this_ptr->base).base.layer_action_t) * local_f0;
  }
  pCVar11 = &(this_ptr->base).base.model;
  local_30 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x2d)
  ;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x2e)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x29)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x7e)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x80)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x6f)
  ;
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar11->base,0x27)
  ;
  local_f0 = (1.0 - (local_18 + (float)local_30)) * local_f0;
  if (local_f0 < 0.0) {
    local_f0 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_0046ecd2;
  pCVar11 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020(&pCVar11->base);
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar11->base);
  iVar14 = pSVar2->state_index;
  if ((iVar14 == 0x1a) || (iVar14 == 0x1b)) {
    fVar1 = fVar1 + (float)_DAT_005da07c;
LAB_0046ec9a:
    local_1c = fVar1 * (float)_DAT_005da074;
  }
  else if ((iVar14 == 0x1c) || (iVar14 == 0x1d)) {
    fVar1 = (float)_DAT_005da06c - fVar1;
    goto LAB_0046ec9a;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_f0 = local_f0 * local_1c;
LAB_0046ecd2:
  if ((float)_DAT_005da084 < local_f0) {
    if (1.0 < local_f0) {
      local_f0 = 1.0;
    }
    iVar14 = 1;
    pcVar13 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
              motion_name;
    pCVar11 = &(this_ptr->base).base.model;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar11);
    local_24 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         (&pCVar3->motion_list,pcVar13,iVar14);
    local_28 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                         (&pCVar11->base,local_24,(this_ptr->base).base.layer_action_t);
    local_18 = local_28;
    if ((((this_ptr->base).base.layer_action_index == 9) &&
        (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
      iVar14 = 1;
      pcVar13 = (this_ptr->base).base.layer_actions[10].motion_name;
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar11);
      iVar14 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         (&pCVar3->motion_list,pcVar13,iVar14);
      local_24 = iVar14;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                           (&pCVar11->base,iVar14,local_18);
    }
    local_28 = local_18;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (&(this_ptr->base).base.model,local_24,local_18,local_f0,_DAT_01b68858,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    if ((this_ptr->base).base.layer_action_index == 0) {
      local_30 = (CDeformableModelInstance *)
                 (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((CQuaternion4f *)((int)local_30 + _DAT_01b6884c * 0x10),
                 (CQuaternion4f *)((int)local_30 + _DAT_01b6882c * 0x10),
                 (this_ptr->base).base.layer_action_t,&local_50);
      iVar14 = _DAT_01b68828;
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b6884c].w
      ;
      pfVar8 = pfVar4 + (uint)bVar10 * -2 + 1;
      *pfVar4 = local_50.w;
      pfVar4 = (float *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *pfVar8 = *(float *)((int)&local_50 + (uint)bVar10 * -8 + 4);
      pfVar8[(uint)bVar10 * -2 + 1] = *pfVar4;
      (pfVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar4[(uint)bVar10 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((CQuaternion4f *)((int)local_30 + _DAT_01b68848 * 0x10),
                 (CQuaternion4f *)((int)local_30 + iVar14 * 0x10),
                 (this_ptr->base).base.layer_action_t,&local_d0);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b68848].w
      ;
      pfVar8 = pfVar4 + (uint)bVar10 * -2 + 1;
      *pfVar4 = local_d0.w;
      pfVar4 = (float *)((int)&local_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *pfVar8 = *(float *)((int)&local_d0 + (uint)bVar10 * -8 + 4);
      pfVar8[(uint)bVar10 * -2 + 1] = *pfVar4;
      (pfVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar4[(uint)bVar10 * -2 + 1];
    }
    iVar14 = (this_ptr->base).base.layer_action_index;
    if ((iVar14 == 1) || (iVar14 == 0x13)) {
      fVar1 = (this_ptr->right_arm_aim).target_pitch;
      local_ec = 0.0;
      local_20 = 0x3e860a92;
      local_2c = 0x3f19999a;
      if (fVar1 < 0.0) {
        local_ec = ((fVar1 + _DAT_005da08c) / (0xBF860A92 + _DAT_005da08c)) * _DAT_005da090;
      }
      if (0.0 < fVar1) {
        local_ec = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,3);
      local_ec = (1.0 - local_18) * local_f0 * local_ec;
      if (0.0 < local_ec) {
        pcVar15 = core_doc_cpp_FUN_00468a20;
        iVar14 = _DAT_01b68858;
        core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar1,&local_70);
        pCVar12 = &local_80;
        pCVar11 = &(this_ptr->base).base.model;
        local_80.w = local_70.w;
        puVar6 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        puVar7 = (uint *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(uint *)((int)&local_80 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&local_70 + (uint)bVar10 * -8 + 4);
        *puVar6 = *puVar7;
        puVar6[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCVar11,pCVar12,local_ec,iVar14,pcVar15);
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,3);
      local_38 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30
                ((this_ptr->right_arm_aim).target_yaw,&local_60);
      fVar1 = local_38;
      pcVar15 = core_doc_cpp_FUN_00468a20;
      pCVar12 = &local_b0;
      pCVar11 = &(this_ptr->base).base.model;
      local_b0.w = local_60.w;
      puVar6 = (uint *)((int)&local_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar7 = (uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_b0 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4);
      iVar14 = _DAT_01b68858;
      *puVar6 = *puVar7;
      puVar6[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar11,pCVar12,fVar1,iVar14,pcVar15);
      core_doc_cpp_CDoc_applyArmAimRotation_FUN_0046f200(this_ptr,1);
      iVar14 = _DAT_01b68828;
      puVar7 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b6884c].w
      ;
      puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b6882c].w
      ;
      puVar9 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar6 + (uint)bVar10 * -2 + 1;
      *puVar7 = *puVar6;
      *puVar9 = *puVar5;
      puVar9[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (puVar5 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      puVar7 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b68848].w
      ;
      puVar5 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar6 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + iVar14 * 0x10 + 0x80c);
      *puVar7 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar14].w;
      puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
      *puVar5 = *puVar6;
      puVar5[(uint)bVar10 * -2 + 1] = *puVar7;
      (puVar5 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    }
    iVar14 = (this_ptr->base).base.layer_action_index;
    if (((iVar14 == 3) || (iVar14 == 4)) ||
       ((iVar14 == 9 ||
        ((((iVar14 == 6 || (iVar14 == 7)) || (iVar14 == 0x11)) ||
         ((iVar14 == 0x12 || (iVar14 == 8)))))))) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,3);
      local_34 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
                ((this_ptr->right_arm_aim).target_pitch,&local_c0);
      fVar1 = local_34;
      pcVar15 = core_doc_cpp_FUN_00468a20;
      pCVar12 = &local_90;
      pCVar11 = &(this_ptr->base).base.model;
      local_90.w = local_c0.w;
      puVar6 = (uint *)((int)&local_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar7 = (uint *)((int)&local_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_90 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_c0 + (uint)bVar10 * -8 + 4);
      this_ptr_00 = pCVar11;
      iVar14 = _DAT_01b68858;
      *puVar6 = *puVar7;
      puVar6[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
      local_30 = pCVar11;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (this_ptr_00,pCVar12,fVar1,iVar14,pcVar15);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30
                ((this_ptr->right_arm_aim).target_yaw,&local_a0);
      pCVar11 = local_30;
      fVar1 = local_34;
      pcVar15 = core_doc_cpp_FUN_00468a20;
      pCVar12 = &local_e0;
      local_e0.w = local_a0.w;
      puVar6 = (uint *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar7 = (uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_e0 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4);
      iVar14 = _DAT_01b68858;
      *puVar6 = *puVar7;
      puVar6[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar11,pCVar12,fVar1,iVar14,pcVar15);
      return;
    }
  }
  return;
}
