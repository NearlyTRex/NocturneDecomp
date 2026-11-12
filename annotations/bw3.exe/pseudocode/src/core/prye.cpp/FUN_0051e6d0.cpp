// Name: core_prye.cpp_FUN_0051e6d0
// Address: 0051e6d0
// Address Range: [[0051e6d0, 0051ee0d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051e6d0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051e6d0(CCharacter *param_1)

{
  CQuaternion4f *pCVar1;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *pCVar12;
  char *pcVar13;
  int iVar14;
  code *pcVar15;
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
  CQuaternion4f *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar10 = 0;
  if ((param_1->layer_action_index < 0) || (0x20 < param_1->layer_action_index)) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0xe24;
    core_main_c_FUN_004e4330("CPrye::makeDrawDecision - draw motion out of range!");
  }
  local_e8 = 1.0;
  if (param_1->layer_actions[param_1->layer_action_index].from_bone_index == 0) {
    local_e8 = param_1->layer_action_t;
  }
  if (param_1->layer_actions[param_1->layer_action_index].to_bone_index == 0) {
    local_e8 = (1.0 - param_1->layer_action_t) * local_e8;
  }
  pCVar11 = &param_1->model;
  local_34 = (CQuaternion4f *)core_motion_cpp_FUN_004fc350(pCVar11,0x35);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar11,0x36);
  local_34 = (CQuaternion4f *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar11,0x31);
  local_34 = (CQuaternion4f *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar11,0x2f);
  local_e8 = (1.0 - ((float)local_18 + (float)local_34)) * local_e8;
  if (local_e8 < 0.0) {
    local_e8 = 0.0;
  }
  if (param_1->layer_action_index != 0x11) goto LAB_0051e8aa;
  fVar2 = core_motion_cpp_FUN_004fc930(&(param_1->model).base);
  local_1c = 1.0;
  local_18 = (CDeformableModelInstance *)fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(param_1->model).base);
  iVar14 = pSVar3->state_index;
  if ((iVar14 == 0x22) || (iVar14 == 0x23)) {
    fVar2 = fVar2 + (float)_DAT_005cd44f;
LAB_0051e872:
    local_1c = fVar2 * (float)_DAT_005cd447;
  }
  else if ((iVar14 == 0x24) || (iVar14 == 0x25)) {
    fVar2 = (float)_DAT_005cd43f - fVar2;
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
    iVar14 = 1;
    pcVar13 = param_1->layer_actions[param_1->layer_action_index].motion_name;
    pCVar11 = &param_1->model;
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar11);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         (&pCVar4->motion_list,pcVar13,iVar14);
    local_24 = (float)core_motion_cpp_FUN_004fca20(pCVar11,local_20,param_1->layer_action_t);
    local_18 = (CDeformableModelInstance *)local_24;
    if (((param_1->layer_action_index == 9) && (1.0 <= param_1->layer_action_t)) &&
       (*(int *)(param_1[2].flames[0x15].base.create_event + 0x4c) != 0)) {
      iVar14 = 1;
      pcVar13 = param_1->layer_actions[10].motion_name;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar11);
      iVar14 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         (&pCVar4->motion_list,pcVar13,iVar14);
      local_20 = iVar14;
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar11,iVar14,local_18);
    }
    local_24 = (float)local_18;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (&param_1->model,local_20,(float)local_18,local_e8,_DAT_01ed3720,
               core_skeleton_cpp_FUN_0054bef0);
    if (param_1->layer_action_index == 0) {
      local_34 = (param_1->model).bone_transform.pose_data.bone_rotations;
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + _DAT_01ed3714,local_34 + _DAT_01ed36f4,param_1->layer_action_t);
      pCVar12 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3714;
      puVar5 = (uint *)((int)pCVar12 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar12->w = afStack_6c[3];
      puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
      *puVar5 = afStack_6c[(uint)bVar10 * -2 + 4];
      *puVar6 = afStack_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
      puVar6[(uint)bVar10 * -2 + 1] =
           (afStack_6c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + _DAT_01ed3710,local_34 + _DAT_01ed36f0,param_1->layer_action_t);
      pCVar12 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3710;
      puVar5 = (uint *)((int)pCVar12 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar12->w = local_50;
      puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
      *puVar5 = afStack_6c[(uint)bVar10 * -2 + 8];
      *puVar6 = afStack_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
      puVar6[(uint)bVar10 * -2 + 1] =
           (afStack_6c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
    }
    iVar14 = param_1->layer_action_index;
    if (((iVar14 == 1) || (iVar14 == 0x16)) || ((iVar14 == 0x19 || (iVar14 == 0x1a)))) {
      fVar2 = *(float *)(param_1[2].flames[0x15].base.create_event + 8);
      local_f0 = 0.0;
      local_2c = 0x3f19999a;
      local_28 = 0x3e860a92;
      if (fVar2 < 0.0) {
        local_f0 = ((fVar2 + _DAT_005cd45f) / (0xBF490FDB + _DAT_005cd45f)) * _DAT_005cd463;
      }
      if (0.0 < fVar2) {
        local_f0 = ((fVar2 - 0.2617994) / (0x3F490FDB - 0.2617994)) * 0.6;
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_f0 = (1.0 - (float)local_18) * local_e8 * local_f0;
      if (0.0 < local_f0) {
        pcVar15 = core_prye_cpp_FUN_00517ce0;
        iVar14 = _DAT_01ed3720;
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fVar2);
        pCVar12 = &local_e0;
        pCVar11 = &param_1->model;
        local_e0.w = afStack_ac[3];
        pfVar7 = (float *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&local_e0 + (uint)bVar10 * -8 + 4) = afStack_ac[(uint)bVar10 * -2 + 4];
        *pfVar7 = afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        pfVar7[(uint)bVar10 * -2 + 1] =
             (afStack_ac + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCVar11,pCVar12,local_f0,iVar14,pcVar15);
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_38 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 0xc));
      local_80.w = local_70;
      puVar5 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar10 * -8 + 4) = afStack_6c[(uint)bVar10 * -2];
      *puVar5 = afStack_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      puVar5[(uint)bVar10 * -2 + 1] =
           (afStack_6c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (&param_1->model,&local_80,local_38,_DAT_01ed3720,core_prye_cpp_FUN_00517ce0);
      iVar14 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (param_1->carry_hands[0].carry_actor,DAT_007e1a50);
      if ((iVar14 != 0) && (*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) != 0)) {
        core_prye_cpp_FUN_0051ee10(param_1,0);
      }
      core_prye_cpp_FUN_0051ee10(param_1,1);
      iVar14 = _DAT_01ed36f0;
      pCVar12 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3714;
      pCVar1 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed36f4;
      puVar8 = (uint *)((int)pCVar12 + ((uint)bVar10 * -2 + 1) * 4);
      puVar5 = (uint *)((int)pCVar1 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar12->w = pCVar1->w;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
      *puVar8 = *puVar5;
      *puVar9 = *puVar6;
      puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
      pCVar12 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3710;
      puVar8 = (uint *)((int)pCVar12 + ((uint)bVar10 * -2 + 1) * 4);
      puVar5 = (uint *)((int)param_1 + (uint)bVar10 * -8 + iVar14 * 0x10 + 0x80c);
      pCVar12->w = (param_1->model).bone_transform.pose_data.bone_rotations[iVar14].w;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
      *puVar8 = *puVar5;
      *puVar9 = *puVar6;
      puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    }
    iVar14 = param_1->layer_action_index;
    if (((((iVar14 == 3) || (iVar14 == 4)) || (iVar14 == 9)) || ((iVar14 == 6 || (iVar14 == 7)))) ||
       ((iVar14 == 0x14 || ((iVar14 == 0x15 || (iVar14 == 8)))))) {
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_30 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 8));
      fVar2 = local_30;
      pcVar15 = core_prye_cpp_FUN_00517ce0;
      pCVar12 = &local_c0;
      local_c0.w = local_b0;
      pfVar7 = (float *)((int)&local_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_c0 + (uint)bVar10 * -8 + 4) = afStack_ac[(uint)bVar10 * -2];
      pCVar11 = &param_1->model;
      iVar14 = _DAT_01ed3720;
      *pfVar7 = afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_ac + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      local_18 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar11,pCVar12,fVar2,iVar14,pcVar15);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 0xc));
      pCVar11 = local_18;
      fVar2 = local_30;
      pcVar15 = core_prye_cpp_FUN_00517ce0;
      pCVar12 = &local_d0;
      local_d0.w = local_90;
      pfVar7 = (float *)((int)&local_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_d0 + (uint)bVar10 * -8 + 4) = afStack_ac[(uint)bVar10 * -2 + 8];
      iVar14 = _DAT_01ed3720;
      *pfVar7 = afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_ac + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar11,pCVar12,fVar2,iVar14,pcVar15);
      return;
    }
  }
  return;
}
