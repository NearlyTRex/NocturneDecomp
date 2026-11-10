// Name: core_doc.cpp_FUN_0046ea80
// Address: 0046ea80
// Address Range: [[0046ea80, 0046f1f0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046ea80(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046ea80(CCharacter *param_1)

{
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar9;
  CQuaternion4f *pCVar10;
  SLayerAction *motion_name;
  char *motion_name_00;
  int iVar11;
  code *pcVar12;
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
  
  bVar8 = 0;
  if ((param_1->layer_action_index < 0) || (0x15 < param_1->layer_action_index)) {
    _DAT_01d1d400 = "..\\core\\doc.cpp";
    _DAT_01d1d404 = 0xc50;
    core_main_c_FUN_005030e0("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_f0 = 1.0;
  if (*(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38) == 0) {
    local_f0 = param_1->layer_action_t;
  }
  if (*(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38 + 4) == 0) {
    local_f0 = (1.0 - param_1->layer_action_t) * local_f0;
  }
  pCVar9 = &param_1->model;
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(pCVar9,0x2d);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar9,0x2e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar9,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar9,0x7e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar9,0x80);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar9,0x6f);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar9,0x27);
  local_f0 = (1.0 - (local_18 + (float)local_30)) * local_f0;
  if (local_f0 < 0.0) {
    local_f0 = 0.0;
  }
  if (param_1->layer_action_index != 0xe) goto LAB_0046ecd2;
  fVar1 = core_motion_cpp_FUN_00525020(&(param_1->model).base);
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&(param_1->model).base);
  iVar11 = *(int *)(pSVar2 + 0x24);
  if ((iVar11 == 0x1a) || (iVar11 == 0x1b)) {
    fVar1 = fVar1 + (float)_DAT_005da07c;
LAB_0046ec9a:
    local_1c = fVar1 * (float)_DAT_005da074;
  }
  else if ((iVar11 == 0x1c) || (iVar11 == 0x1d)) {
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
    iVar11 = 1;
    motion_name = param_1->layer_actions + param_1->layer_action_index * 0x38 + 8;
    pCVar9 = &param_1->model;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar9);
    local_24 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         ((CMotionList *)pCVar3,(char *)motion_name,iVar11);
    local_28 = (float)core_motion_cpp_FUN_00525110(pCVar9,local_24,param_1->layer_action_t);
    local_18 = local_28;
    if (((param_1->layer_action_index == 9) && (1.0 <= param_1->layer_action_t)) &&
       (*(int *)(param_1[2].flames[0x1a].on_event + 0x30) != 0)) {
      iVar11 = 1;
      motion_name_00 = &param_1->field_0x2a00;
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar9);
      iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                         ((CMotionList *)pCVar3,motion_name_00,iVar11);
      local_24 = iVar11;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      local_18 = (float)core_motion_cpp_FUN_00525110(pCVar9,iVar11,local_18);
    }
    local_28 = local_18;
    core_skeleton_cpp_FUN_00568100
              (&param_1->model,local_24,local_18,local_f0,_DAT_01b68858,
               core_skeleton_cpp_FUN_00567360);
    if (param_1->layer_action_index == 0) {
      local_30 = (CDeformableModelInstance *)&(param_1->model).field_0x6b0;
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((byte *)((int)local_30 + _DAT_01b6884c * 0x10),
                 (byte *)((int)local_30 + _DAT_01b6882c * 0x10),param_1->layer_action_t);
      iVar11 = _DAT_01b68828;
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01b6884c * 4 + 0x67;
      pfVar5 = pfVar6 + (uint)bVar8 * -2 + 1;
      *pfVar6 = local_50;
      *pfVar5 = afStack_6c[(uint)bVar8 * -2 + 8];
      pfVar5[(uint)bVar8 * -2 + 1] = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
      (pfVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((byte *)((int)local_30 + _DAT_01b68848 * 0x10),
                 (byte *)((int)local_30 + iVar11 * 0x10),param_1->layer_action_t);
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01b68848 * 4 + 0x67;
      pfVar5 = pfVar6 + (uint)bVar8 * -2 + 1;
      *pfVar6 = local_d0;
      *pfVar5 = afStack_cc[(uint)bVar8 * -2];
      pfVar5[(uint)bVar8 * -2 + 1] = afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      (pfVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (afStack_cc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    if ((param_1->layer_action_index == 1) || (param_1->layer_action_index == 0x13)) {
      fVar1 = (float)param_1[2].flames[0x1a].globe.intensity_multiplier;
      local_ec = 0.0;
      local_20 = 0x3e860a92;
      local_2c = 0x3f19999a;
      if (fVar1 < 0.0) {
        local_ec = ((fVar1 + _DAT_005da08c) / (0xBF860A92 + _DAT_005da08c)) * _DAT_005da090;
      }
      if (0.0 < fVar1) {
        local_ec = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      local_ec = (1.0 - local_18) * local_f0 * local_ec;
      if (0.0 < local_ec) {
        pcVar12 = core_doc_cpp_FUN_00468a20;
        iVar11 = _DAT_01b68858;
        core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar1);
        pCVar10 = &local_80;
        pCVar9 = &param_1->model;
        local_80.w = local_70;
        pfVar6 = (float *)((int)&local_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        *(float *)((int)&local_80 + (uint)bVar8 * -8 + 4) = afStack_6c[(uint)bVar8 * -2];
        *pfVar6 = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCVar9,pCVar10,local_ec,iVar11,pcVar12);
      }
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      local_38 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(param_1[2].flames[0x1a].which_flame);
      fVar1 = local_38;
      pcVar12 = core_doc_cpp_FUN_00468a20;
      pCVar10 = &local_b0;
      pCVar9 = &param_1->model;
      local_b0.w = afStack_6c[3];
      pfVar6 = (float *)((int)&local_b0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_b0 + (uint)bVar8 * -8 + 4) = afStack_6c[(uint)bVar8 * -2 + 4];
      iVar11 = _DAT_01b68858;
      *pfVar6 = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar9,pCVar10,fVar1,iVar11,pcVar12);
      core_doc_cpp_FUN_0046f200(param_1,1);
      iVar11 = _DAT_01b68828;
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01b6884c * 4 + 0x67;
      pfVar5 = (param_1->model).rest_bone_scales + _DAT_01b6882c * 4 + 0x67;
      pfVar7 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar4 = pfVar5 + (uint)bVar8 * -2 + 1;
      *pfVar6 = *pfVar5;
      *pfVar7 = *pfVar4;
      pfVar7[(uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
      (pfVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (pfVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01b68848 * 4 + 0x67;
      pfVar4 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar5 = (float *)((int)param_1 + (uint)bVar8 * -8 + iVar11 * 0x10 + 0x80c);
      *pfVar6 = (param_1->model).rest_bone_scales[iVar11 * 4 + 0x67];
      pfVar6 = pfVar5 + (uint)bVar8 * -2 + 1;
      *pfVar4 = *pfVar5;
      pfVar4[(uint)bVar8 * -2 + 1] = *pfVar6;
      (pfVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
    }
    iVar11 = param_1->layer_action_index;
    if (((iVar11 == 3) || (iVar11 == 4)) ||
       ((iVar11 == 9 ||
        ((((iVar11 == 6 || (iVar11 == 7)) || (iVar11 == 0x11)) ||
         ((iVar11 == 0x12 || (iVar11 == 8)))))))) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      local_34 = (1.0 - local_18) * local_f0;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
                (param_1[2].flames[0x1a].globe.intensity_multiplier);
      fVar1 = local_34;
      pcVar12 = core_doc_cpp_FUN_00468a20;
      pCVar10 = &local_90;
      local_90.w = afStack_cc[3];
      pfVar6 = (float *)((int)&local_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_90 + (uint)bVar8 * -8 + 4) = afStack_cc[(uint)bVar8 * -2 + 4];
      pCVar9 = &param_1->model;
      iVar11 = _DAT_01b68858;
      *pfVar6 = afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_cc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
      local_30 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar9,pCVar10,fVar1,iVar11,pcVar12);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(param_1[2].flames[0x1a].which_flame);
      pCVar9 = local_30;
      fVar1 = local_34;
      pcVar12 = core_doc_cpp_FUN_00468a20;
      pCVar10 = &local_e0;
      local_e0.w = local_a0;
      pfVar6 = (float *)((int)&local_e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_e0 + (uint)bVar8 * -8 + 4) = afStack_9c[(uint)bVar8 * -2];
      iVar11 = _DAT_01b68858;
      *pfVar6 = afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_9c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar9,pCVar10,fVar1,iVar11,pcVar12);
      return;
    }
  }
  return;
}
