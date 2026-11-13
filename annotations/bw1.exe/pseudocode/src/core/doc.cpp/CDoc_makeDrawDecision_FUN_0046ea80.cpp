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
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar10;
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *pCVar11;
  char *pcVar12;
  int iVar13;
  code *pcVar14;
  float local_f0;
  float local_ec;
  CQuaternion4f local_e0;
  uint local_d0;
  float afStack_cc [7];
  CQuaternion4f local_b0;
  float local_a0;
  float afStack_9c [3];
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  float local_70;
  float afStack_6c [7];
  uint local_50;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  uint local_2c;
  float local_28;
  int local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  iVar13 = (this_ptr->base).base.layer_action_index;
  if ((iVar13 < 0) || (0x15 < iVar13)) {
    _DAT_01d1d400 = "..\\core\\doc.cpp";
    _DAT_01d1d404 = 0xc50;
    core_main_c_FUN_005030e0("CDoc::makeDrawDecision - draw motion out of range!");
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
  pCVar10 = &(this_ptr->base).base.model;
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(pCVar10,0x2d);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar10,0x2e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar10,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar10,0x7e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar10,0x80);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar10,0x6f);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar10,0x27);
  local_f0 = (1.0 - (local_18 + (float)local_30)) * local_f0;
  if (local_f0 < 0.0) {
    local_f0 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_0046ecd2;
  pCVar10 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_FUN_00525020(&pCVar10->base);
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar10->base);
  iVar13 = pSVar2->state_index;
  if ((iVar13 == 0x1a) || (iVar13 == 0x1b)) {
    fVar1 = fVar1 + (float)_DAT_005da07c;
LAB_0046ec9a:
    local_1c = fVar1 * (float)_DAT_005da074;
  }
  else if ((iVar13 == 0x1c) || (iVar13 == 0x1d)) {
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
    iVar13 = 1;
    pcVar12 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
              motion_name;
    pCVar10 = &(this_ptr->base).base.model;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar10);
    local_24 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         (&pCVar3->motion_list,pcVar12,iVar13);
    local_28 = (float)core_motion_cpp_FUN_00525110
                                (pCVar10,local_24,(this_ptr->base).base.layer_action_t);
    local_18 = local_28;
    if ((((this_ptr->base).base.layer_action_index == 9) &&
        (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
      iVar13 = 1;
      pcVar12 = (this_ptr->base).base.layer_actions[10].motion_name;
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar10);
      iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         (&pCVar3->motion_list,pcVar12,iVar13);
      local_24 = iVar13;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      local_18 = (float)core_motion_cpp_FUN_00525110(pCVar10,iVar13,local_18);
    }
    local_28 = local_18;
    core_skeleton_cpp_FUN_00568100
              (&(this_ptr->base).base.model,local_24,local_18,local_f0,_DAT_01b68858,
               core_skeleton_cpp_FUN_00567360);
    if ((this_ptr->base).base.layer_action_index == 0) {
      local_30 = (CDeformableModelInstance *)
                 (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((CQuaternion4f *)((int)local_30 + _DAT_01b6884c * 0x10),
                 (CQuaternion4f *)((int)local_30 + _DAT_01b6882c * 0x10),
                 (this_ptr->base).base.layer_action_t);
      iVar13 = _DAT_01b68828;
      puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b6884c].w
      ;
      pfVar7 = (float *)(puVar6 + (uint)bVar9 * -2 + 1);
      *puVar6 = local_50;
      *pfVar7 = afStack_6c[(uint)bVar9 * -2 + 8];
      pfVar7[(uint)bVar9 * -2 + 1] = afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
      (pfVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((CQuaternion4f *)((int)local_30 + _DAT_01b68848 * 0x10),
                 (CQuaternion4f *)((int)local_30 + iVar13 * 0x10),
                 (this_ptr->base).base.layer_action_t);
      puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b68848].w
      ;
      pfVar7 = (float *)(puVar6 + (uint)bVar9 * -2 + 1);
      *puVar6 = local_d0;
      *pfVar7 = afStack_cc[(uint)bVar9 * -2];
      pfVar7[(uint)bVar9 * -2 + 1] = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (pfVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    }
    iVar13 = (this_ptr->base).base.layer_action_index;
    if ((iVar13 == 1) || (iVar13 == 0x13)) {
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
        pcVar14 = core_doc_cpp_FUN_00468a20;
        iVar13 = _DAT_01b68858;
        core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar1);
        pCVar11 = &local_80;
        pCVar10 = &(this_ptr->base).base.model;
        local_80.w = local_70;
        pfVar7 = (float *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(float *)((int)&local_80 + (uint)bVar9 * -8 + 4) = afStack_6c[(uint)bVar9 * -2];
        *pfVar7 = afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        pfVar7[(uint)bVar9 * -2 + 1] =
             (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCVar10,pCVar11,local_ec,iVar13,pcVar14);
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,3);
      local_38 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30((this_ptr->right_arm_aim).target_yaw);
      fVar1 = local_38;
      pcVar14 = core_doc_cpp_FUN_00468a20;
      pCVar11 = &local_b0;
      pCVar10 = &(this_ptr->base).base.model;
      local_b0.w = afStack_6c[3];
      pfVar7 = (float *)((int)&local_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_b0 + (uint)bVar9 * -8 + 4) = afStack_6c[(uint)bVar9 * -2 + 4];
      iVar13 = _DAT_01b68858;
      *pfVar7 = afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar10,pCVar11,fVar1,iVar13,pcVar14);
      core_doc_cpp_FUN_0046f200(this_ptr,1);
      iVar13 = _DAT_01b68828;
      puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b6884c].w
      ;
      puVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b6882c].w
      ;
      puVar8 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar4 = puVar5 + (uint)bVar9 * -2 + 1;
      *puVar6 = *puVar5;
      *puVar8 = *puVar4;
      puVar8[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (puVar4 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      puVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b68848].w
      ;
      puVar4 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar5 = (uint *)((int)this_ptr + (uint)bVar9 * -8 + iVar13 * 0x10 + 0x80c);
      *puVar6 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar13].w;
      puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
      *puVar4 = *puVar5;
      puVar4[(uint)bVar9 * -2 + 1] = *puVar6;
      (puVar4 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    }
    iVar13 = (this_ptr->base).base.layer_action_index;
    if (((iVar13 == 3) || (iVar13 == 4)) ||
       ((iVar13 == 9 ||
        ((((iVar13 == 6 || (iVar13 == 7)) || (iVar13 == 0x11)) ||
         ((iVar13 == 0x12 || (iVar13 == 8)))))))) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,3);
      local_34 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((this_ptr->right_arm_aim).target_pitch);
      fVar1 = local_34;
      pcVar14 = core_doc_cpp_FUN_00468a20;
      pCVar11 = &local_90;
      pCVar10 = &(this_ptr->base).base.model;
      local_90.w = afStack_cc[3];
      pfVar7 = (float *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_90 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 4];
      this_ptr_00 = pCVar10;
      iVar13 = _DAT_01b68858;
      *pfVar7 = afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      local_30 = pCVar10;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (this_ptr_00,pCVar11,fVar1,iVar13,pcVar14);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30((this_ptr->right_arm_aim).target_yaw);
      pCVar10 = local_30;
      fVar1 = local_34;
      pcVar14 = core_doc_cpp_FUN_00468a20;
      pCVar11 = &local_e0;
      local_e0.w = local_a0;
      pfVar7 = (float *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_e0 + (uint)bVar9 * -8 + 4) = afStack_9c[(uint)bVar9 * -2];
      iVar13 = _DAT_01b68858;
      *pfVar7 = afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar10,pCVar11,fVar1,iVar13,pcVar14);
      return;
    }
  }
  return;
}
