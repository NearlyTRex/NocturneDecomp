// Name: core_prye.cpp_FUN_0051e6d0
// Address: 0051e6d0
// Address Range: [[0051e6d0, 0051ee0d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051e6d0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051e6d0(CCharacter *param_1)

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
  float local_e8;
  CQuaternion4f local_e0;
  CQuaternion4f local_d0;
  CQuaternion4f local_c0;
  float local_b0;
  float afStack_ac [7];
  float local_90;
  CQuaternion4f local_80;
  float local_70;
  float afStack_6c [7];
  float local_50;
  float local_38;
  byte *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar8 = 0;
  if ((param_1->layer_action_index < 0) || (0x20 < param_1->layer_action_index)) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0xe24;
    core_main_c_FUN_004e4330("CPrye::makeDrawDecision - draw motion out of range!");
  }
  local_e8 = 1.0;
  if (*(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38) == 0) {
    local_e8 = param_1->layer_action_t;
  }
  if (*(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38 + 4) == 0) {
    local_e8 = (1.0 - param_1->layer_action_t) * local_e8;
  }
  pCVar9 = &param_1->model;
  local_34 = (byte *)core_motion_cpp_FUN_004fc350(pCVar9,0x35);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar9,0x36);
  local_34 = (byte *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar9,0x31);
  local_34 = (byte *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar9,0x2f);
  local_e8 = (1.0 - ((float)local_18 + (float)local_34)) * local_e8;
  if (local_e8 < 0.0) {
    local_e8 = 0.0;
  }
  if (param_1->layer_action_index != 0x11) goto LAB_0051e8aa;
  fVar1 = core_motion_cpp_FUN_004fc930(&(param_1->model).base);
  local_1c = 1.0;
  local_18 = (CDeformableModelInstance *)fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(param_1->model).base);
  iVar11 = *(int *)(pSVar2 + 0x24);
  if ((iVar11 == 0x22) || (iVar11 == 0x23)) {
    fVar1 = fVar1 + (float)_DAT_005cd44f;
LAB_0051e872:
    local_1c = fVar1 * (float)_DAT_005cd447;
  }
  else if ((iVar11 == 0x24) || (iVar11 == 0x25)) {
    fVar1 = (float)_DAT_005cd43f - fVar1;
    goto LAB_0051e872;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_e8 = local_e8 * local_1c;
LAB_0051e8aa:
  if ((float)_DAT_005cd457 < local_e8) {
    if (1.0 < local_e8) {
      local_e8 = 1.0;
    }
    iVar11 = 1;
    motion_name = param_1->layer_actions + param_1->layer_action_index * 0x38 + 8;
    pCVar9 = &param_1->model;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar9);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         ((CMotionList *)pCVar3,(char *)motion_name,iVar11);
    local_24 = (float)core_motion_cpp_FUN_004fca20(pCVar9,local_20,param_1->layer_action_t);
    local_18 = (CDeformableModelInstance *)local_24;
    if (((param_1->layer_action_index == 9) && (1.0 <= param_1->layer_action_t)) &&
       (*(int *)(param_1[2].flames[0x15].base.create_event + 0x4c) != 0)) {
      iVar11 = 1;
      motion_name_00 = &param_1->field_0x2a00;
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar9);
      iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         ((CMotionList *)pCVar3,motion_name_00,iVar11);
      local_20 = iVar11;
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar9,iVar11,local_18);
    }
    local_24 = (float)local_18;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (&param_1->model,local_20,(float)local_18,local_e8,_DAT_01ed3720,
               core_skeleton_cpp_FUN_0054bef0);
    if (param_1->layer_action_index == 0) {
      local_34 = &(param_1->model).field_0x6b0;
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + _DAT_01ed3714 * 0x10,local_34 + _DAT_01ed36f4 * 0x10,
                 param_1->layer_action_t);
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01ed3714 * 4 + 0x67;
      pfVar5 = pfVar6 + (uint)bVar8 * -2 + 1;
      *pfVar6 = afStack_6c[3];
      *pfVar5 = afStack_6c[(uint)bVar8 * -2 + 4];
      pfVar5[(uint)bVar8 * -2 + 1] = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      (pfVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + _DAT_01ed3710 * 0x10,local_34 + _DAT_01ed36f0 * 0x10,
                 param_1->layer_action_t);
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01ed3710 * 4 + 0x67;
      pfVar5 = pfVar6 + (uint)bVar8 * -2 + 1;
      *pfVar6 = local_50;
      *pfVar5 = afStack_6c[(uint)bVar8 * -2 + 8];
      pfVar5[(uint)bVar8 * -2 + 1] = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
      (pfVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
    }
    iVar11 = param_1->layer_action_index;
    if (((iVar11 == 1) || (iVar11 == 0x16)) || ((iVar11 == 0x19 || (iVar11 == 0x1a)))) {
      fVar1 = *(float *)(param_1[2].flames[0x15].base.create_event + 8);
      local_f0 = 0.0;
      local_2c = 0x3f19999a;
      local_28 = 0x3e860a92;
      if (fVar1 < 0.0) {
        local_f0 = ((fVar1 + _DAT_005cd45f) / (0xBF490FDB + _DAT_005cd45f)) * _DAT_005cd463;
      }
      if (0.0 < fVar1) {
        local_f0 = ((fVar1 - 0.2617994) / (0x3F490FDB - 0.2617994)) * 0.6;
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_f0 = (1.0 - (float)local_18) * local_e8 * local_f0;
      if (0.0 < local_f0) {
        pcVar12 = unkafter_prye_cpp_FUN_00517ce0;
        iVar11 = _DAT_01ed3720;
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fVar1);
        pCVar10 = &local_e0;
        pCVar9 = &param_1->model;
        local_e0.w = afStack_ac[3];
        pfVar6 = (float *)((int)&local_e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        *(float *)((int)&local_e0 + (uint)bVar8 * -8 + 4) = afStack_ac[(uint)bVar8 * -2 + 4];
        *pfVar6 = afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_ac + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCVar9,pCVar10,local_f0,iVar11,pcVar12);
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_38 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 0xc));
      local_80.w = local_70;
      pfVar6 = (float *)((int)&local_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar8 * -8 + 4) = afStack_6c[(uint)bVar8 * -2];
      *pfVar6 = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (&param_1->model,&local_80,local_38,_DAT_01ed3720,unkafter_prye_cpp_FUN_00517ce0);
      iVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
      if ((iVar11 != 0) && (*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) != 0)) {
        core_prye_cpp_FUN_0051ee10(param_1,0);
      }
      core_prye_cpp_FUN_0051ee10(param_1,1);
      iVar11 = _DAT_01ed36f0;
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01ed3714 * 4 + 0x67;
      pfVar5 = (param_1->model).rest_bone_scales + _DAT_01ed36f4 * 4 + 0x67;
      pfVar7 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar4 = pfVar5 + (uint)bVar8 * -2 + 1;
      *pfVar6 = *pfVar5;
      *pfVar7 = *pfVar4;
      pfVar7[(uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
      (pfVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (pfVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      pfVar6 = (param_1->model).rest_bone_scales + _DAT_01ed3710 * 4 + 0x67;
      pfVar4 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar5 = (float *)((int)param_1 + (uint)bVar8 * -8 + iVar11 * 0x10 + 0x80c);
      *pfVar6 = (param_1->model).rest_bone_scales[iVar11 * 4 + 0x67];
      pfVar6 = pfVar5 + (uint)bVar8 * -2 + 1;
      *pfVar4 = *pfVar5;
      pfVar4[(uint)bVar8 * -2 + 1] = *pfVar6;
      (pfVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
    }
    iVar11 = param_1->layer_action_index;
    if (((((iVar11 == 3) || (iVar11 == 4)) || (iVar11 == 9)) || ((iVar11 == 6 || (iVar11 == 7)))) ||
       ((iVar11 == 0x14 || ((iVar11 == 0x15 || (iVar11 == 8)))))) {
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_30 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 8));
      fVar1 = local_30;
      pcVar12 = unkafter_prye_cpp_FUN_00517ce0;
      pCVar10 = &local_c0;
      local_c0.w = local_b0;
      pfVar6 = (float *)((int)&local_c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_c0 + (uint)bVar8 * -8 + 4) = afStack_ac[(uint)bVar8 * -2];
      pCVar9 = &param_1->model;
      iVar11 = _DAT_01ed3720;
      *pfVar6 = afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_ac + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      local_18 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar9,pCVar10,fVar1,iVar11,pcVar12);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 0xc));
      pCVar9 = local_18;
      fVar1 = local_30;
      pcVar12 = unkafter_prye_cpp_FUN_00517ce0;
      pCVar10 = &local_d0;
      local_d0.w = local_90;
      pfVar6 = (float *)((int)&local_d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_d0 + (uint)bVar8 * -8 + 4) = afStack_ac[(uint)bVar8 * -2 + 8];
      iVar11 = _DAT_01ed3720;
      *pfVar6 = afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_ac + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar9,pCVar10,fVar1,iVar11,pcVar12);
      return;
    }
  }
  return;
}
