// Name: core_doc.cpp_FUN_0046ea80
// Address: 0046ea80
// Address Range: [[0046ea80, 0046f1f0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046ea80(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046ea80(CCharacter *param_1)

{
  CQuaternion4f *pCVar1;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  float local_f0;
  float local_ec;
  CQuaternion4f local_e0;
  float local_d0;
  float afStack_cc [7];
  CQuaternion4f local_b0;
  float local_a0;
  float afStack_9c [3];
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  float local_70;
  float afStack_6c [7];
  float local_50;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  uint local_2c;
  float local_28;
  int local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar11 = 0;
  if ((param_1->layer_action_index < 0) || (0x15 < param_1->layer_action_index)) {
    _DAT_01d1d400 = "..\\core\\doc.cpp";
    _DAT_01d1d404 = 0xc50;
    core_main_c_FUN_005030e0("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_f0 = 1.0;
  if (param_1->layer_actions[param_1->layer_action_index].from_bone_index == 0) {
    local_f0 = param_1->layer_action_t;
  }
  if (param_1->layer_actions[param_1->layer_action_index].to_bone_index == 0) {
    local_f0 = (1.0 - param_1->layer_action_t) * local_f0;
  }
  pCVar12 = &param_1->model;
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(pCVar12,0x2d);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar12,0x2e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar12,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar12,0x7e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar12,0x80);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar12,0x6f);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar12,0x27);
  local_f0 = (1.0 - (local_18 + (float)local_30)) * local_f0;
  if (local_f0 < 0.0) {
    local_f0 = 0.0;
  }
  if (param_1->layer_action_index != 0xe) goto LAB_0046ecd2;
  fVar2 = core_motion_cpp_FUN_00525020(&(param_1->model).base);
  local_1c = 1.0;
  local_18 = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&(param_1->model).base);
  iVar15 = pSVar3->state_index;
  if ((iVar15 == 0x1a) || (iVar15 == 0x1b)) {
    fVar2 = fVar2 + (float)_DAT_005da07c;
LAB_0046ec9a:
    local_1c = fVar2 * (float)_DAT_005da074;
  }
  else if ((iVar15 == 0x1c) || (iVar15 == 0x1d)) {
    fVar2 = (float)_DAT_005da06c - fVar2;
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
    iVar15 = 1;
    pcVar14 = param_1->layer_actions[param_1->layer_action_index].motion_name;
    pCVar12 = &param_1->model;
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar12);
    local_24 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         (&pCVar4->motion_list,pcVar14,iVar15);
    local_28 = (float)core_motion_cpp_FUN_00525110(pCVar12,local_24,param_1->layer_action_t);
    local_18 = local_28;
    if (((param_1->layer_action_index == 9) && (1.0 <= param_1->layer_action_t)) &&
       (*(int *)(param_1[2].flames[0x1a].on_event + 0x30) != 0)) {
      iVar15 = 1;
      pcVar14 = param_1->layer_actions[10].motion_name;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar12);
      iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         (&pCVar4->motion_list,pcVar14,iVar15);
      local_24 = iVar15;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      local_18 = (float)core_motion_cpp_FUN_00525110(pCVar12,iVar15,local_18);
    }
    local_28 = local_18;
    core_skeleton_cpp_FUN_00568100
              (&param_1->model,local_24,local_18,local_f0,_DAT_01b68858,
               core_skeleton_cpp_FUN_00567360);
    if (param_1->layer_action_index == 0) {
      local_30 = (CDeformableModelInstance *)
                 (param_1->model).bone_transform.pose_data.bone_rotations;
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((CQuaternion4f *)((int)local_30 + _DAT_01b6884c * 0x10),
                 (CQuaternion4f *)((int)local_30 + _DAT_01b6882c * 0x10),param_1->layer_action_t);
      iVar15 = _DAT_01b68828;
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b6884c;
      pfVar7 = (float *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar13->w = local_50;
      pfVar8 = pfVar7 + (uint)bVar11 * -2 + 1;
      *pfVar7 = afStack_6c[(uint)bVar11 * -2 + 8];
      *pfVar8 = afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
      pfVar8[(uint)bVar11 * -2 + 1] =
           (afStack_6c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((CQuaternion4f *)((int)local_30 + _DAT_01b68848 * 0x10),
                 (CQuaternion4f *)((int)local_30 + iVar15 * 0x10),param_1->layer_action_t);
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b68848;
      pfVar7 = (float *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar13->w = local_d0;
      pfVar8 = pfVar7 + (uint)bVar11 * -2 + 1;
      *pfVar7 = afStack_cc[(uint)bVar11 * -2];
      *pfVar8 = afStack_cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      pfVar8[(uint)bVar11 * -2 + 1] =
           (afStack_cc + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    }
    if ((param_1->layer_action_index == 1) || (param_1->layer_action_index == 0x13)) {
      fVar2 = (float)param_1[2].flames[0x1a].globe.intensity_multiplier;
      local_ec = 0.0;
      local_20 = 0x3e860a92;
      local_2c = 0x3f19999a;
      if (fVar2 < 0.0) {
        local_ec = ((fVar2 + _DAT_005da08c) / (0xBF860A92 + _DAT_005da08c)) * _DAT_005da090;
      }
      if (0.0 < fVar2) {
        local_ec = ((fVar2 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      local_ec = (1.0 - local_18) * local_f0 * local_ec;
      if (0.0 < local_ec) {
        pcVar16 = core_doc_cpp_FUN_00468a20;
        iVar15 = _DAT_01b68858;
        core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar2);
        pCVar13 = &local_80;
        pCVar12 = &param_1->model;
        local_80.w = local_70;
        pfVar7 = (float *)((int)&local_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *(float *)((int)&local_80 + (uint)bVar11 * -8 + 4) = afStack_6c[(uint)bVar11 * -2];
        *pfVar7 = afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        pfVar7[(uint)bVar11 * -2 + 1] =
             (afStack_6c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCVar12,pCVar13,local_ec,iVar15,pcVar16);
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      local_38 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(param_1[2].flames[0x1a].which_flame);
      fVar2 = local_38;
      pcVar16 = core_doc_cpp_FUN_00468a20;
      pCVar13 = &local_b0;
      pCVar12 = &param_1->model;
      local_b0.w = afStack_6c[3];
      pfVar7 = (float *)((int)&local_b0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(float *)((int)&local_b0 + (uint)bVar11 * -8 + 4) = afStack_6c[(uint)bVar11 * -2 + 4];
      iVar15 = _DAT_01b68858;
      *pfVar7 = afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
      pfVar7[(uint)bVar11 * -2 + 1] =
           (afStack_6c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,pCVar13,fVar2,iVar15,pcVar16);
      core_doc_cpp_FUN_0046f200(param_1,1);
      iVar15 = _DAT_01b68828;
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b6884c;
      pCVar1 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b6882c;
      puVar9 = (uint *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      puVar6 = (uint *)((int)pCVar1 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar13->w = pCVar1->w;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar6 + (uint)bVar11 * -2 + 1;
      *puVar9 = *puVar6;
      *puVar10 = *puVar5;
      puVar10[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b68848;
      puVar9 = (uint *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      puVar6 = (uint *)((int)param_1 + (uint)bVar11 * -8 + iVar15 * 0x10 + 0x80c);
      pCVar13->w = (param_1->model).bone_transform.pose_data.bone_rotations[iVar15].w;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar6 + (uint)bVar11 * -2 + 1;
      *puVar9 = *puVar6;
      *puVar10 = *puVar5;
      puVar10[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
    }
    iVar15 = param_1->layer_action_index;
    if (((iVar15 == 3) || (iVar15 == 4)) ||
       ((iVar15 == 9 ||
        ((((iVar15 == 6 || (iVar15 == 7)) || (iVar15 == 0x11)) ||
         ((iVar15 == 0x12 || (iVar15 == 8)))))))) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      local_34 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
                (param_1[2].flames[0x1a].globe.intensity_multiplier);
      fVar2 = local_34;
      pcVar16 = core_doc_cpp_FUN_00468a20;
      pCVar13 = &local_90;
      local_90.w = afStack_cc[3];
      pfVar7 = (float *)((int)&local_90 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(float *)((int)&local_90 + (uint)bVar11 * -8 + 4) = afStack_cc[(uint)bVar11 * -2 + 4];
      pCVar12 = &param_1->model;
      iVar15 = _DAT_01b68858;
      *pfVar7 = afStack_cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
      pfVar7[(uint)bVar11 * -2 + 1] =
           (afStack_cc + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
      local_30 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,pCVar13,fVar2,iVar15,pcVar16);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(param_1[2].flames[0x1a].which_flame);
      pCVar12 = local_30;
      fVar2 = local_34;
      pcVar16 = core_doc_cpp_FUN_00468a20;
      pCVar13 = &local_e0;
      local_e0.w = local_a0;
      pfVar7 = (float *)((int)&local_e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(float *)((int)&local_e0 + (uint)bVar11 * -8 + 4) = afStack_9c[(uint)bVar11 * -2];
      iVar15 = _DAT_01b68858;
      *pfVar7 = afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      pfVar7[(uint)bVar11 * -2 + 1] =
           (afStack_9c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,pCVar13,fVar2,iVar15,pcVar16);
      return;
    }
  }
  return;
}
