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
  CDemonActor *pCVar5;
  uint *puVar6;
  uint *puVar7;
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
  
  bVar11 = 0;
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
  pCVar12 = &param_1->model;
  local_34 = (CQuaternion4f *)core_motion_cpp_FUN_004fc350(pCVar12,0x35);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar12,0x36);
  local_34 = (CQuaternion4f *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar12,0x31);
  local_34 = (CQuaternion4f *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar12,0x2f);
  local_e8 = (1.0 - ((float)local_18 + (float)local_34)) * local_e8;
  if (local_e8 < 0.0) {
    local_e8 = 0.0;
  }
  if (param_1->layer_action_index != 0x11) goto LAB_0051e8aa;
  fVar2 = core_motion_cpp_FUN_004fc930(&(param_1->model).base);
  local_1c = 1.0;
  local_18 = (CDeformableModelInstance *)fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(param_1->model).base);
  iVar15 = pSVar3->state_index;
  if ((iVar15 == 0x22) || (iVar15 == 0x23)) {
    fVar2 = fVar2 + (float)_DAT_005cd44f;
LAB_0051e872:
    local_1c = fVar2 * (float)_DAT_005cd447;
  }
  else if ((iVar15 == 0x24) || (iVar15 == 0x25)) {
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
    iVar15 = 1;
    pcVar14 = param_1->layer_actions[param_1->layer_action_index].motion_name;
    pCVar12 = &param_1->model;
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar12);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         (&pCVar4->motion_list,pcVar14,iVar15);
    local_24 = (float)core_motion_cpp_FUN_004fca20(pCVar12,local_20,param_1->layer_action_t);
    local_18 = (CDeformableModelInstance *)local_24;
    if (((param_1->layer_action_index == 9) && (1.0 <= param_1->layer_action_t)) &&
       (*(int *)(param_1[2].flames[0x15].base.create_event + 0x4c) != 0)) {
      iVar15 = 1;
      pcVar14 = param_1->layer_actions[10].motion_name;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar12);
      iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         (&pCVar4->motion_list,pcVar14,iVar15);
      local_20 = iVar15;
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar12,iVar15,local_18);
    }
    local_24 = (float)local_18;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (&param_1->model,local_20,(float)local_18,local_e8,_DAT_01ed3720,
               core_skeleton_cpp_FUN_0054bef0);
    if (param_1->layer_action_index == 0) {
      local_34 = (param_1->model).bone_transform.pose_data.bone_rotations;
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + _DAT_01ed3714,local_34 + _DAT_01ed36f4,param_1->layer_action_t);
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3714;
      puVar6 = (uint *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar13->w = afStack_6c[3];
      puVar7 = puVar6 + (uint)bVar11 * -2 + 1;
      *puVar6 = afStack_6c[(uint)bVar11 * -2 + 4];
      *puVar7 = afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
      puVar7[(uint)bVar11 * -2 + 1] =
           (afStack_6c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + _DAT_01ed3710,local_34 + _DAT_01ed36f0,param_1->layer_action_t);
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3710;
      puVar6 = (uint *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar13->w = local_50;
      puVar7 = puVar6 + (uint)bVar11 * -2 + 1;
      *puVar6 = afStack_6c[(uint)bVar11 * -2 + 8];
      *puVar7 = afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
      puVar7[(uint)bVar11 * -2 + 1] =
           (afStack_6c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1];
    }
    iVar15 = param_1->layer_action_index;
    if (((iVar15 == 1) || (iVar15 == 0x16)) || ((iVar15 == 0x19 || (iVar15 == 0x1a)))) {
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
        pcVar16 = core_prye_cpp_FUN_00517ce0;
        iVar15 = _DAT_01ed3720;
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fVar2);
        pCVar13 = &local_e0;
        pCVar12 = &param_1->model;
        local_e0.w = afStack_ac[3];
        pfVar8 = (float *)((int)&local_e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *(float *)((int)&local_e0 + (uint)bVar11 * -8 + 4) = afStack_ac[(uint)bVar11 * -2 + 4];
        *pfVar8 = afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
        pfVar8[(uint)bVar11 * -2 + 1] =
             (afStack_ac + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCVar12,pCVar13,local_f0,iVar15,pcVar16);
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_38 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 0xc));
      local_80.w = local_70;
      puVar6 = (uint *)((int)&local_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar11 * -8 + 4) = afStack_6c[(uint)bVar11 * -2];
      *puVar6 = afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      puVar6[(uint)bVar11 * -2 + 1] =
           (afStack_6c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (&param_1->model,&local_80,local_38,_DAT_01ed3720,core_prye_cpp_FUN_00517ce0);
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (param_1->carry_hands[0].carry_actor,DAT_007e1a50);
      if ((pCVar5 != (CDemonActor *)0x0) &&
         (*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) != 0)) {
        core_prye_cpp_FUN_0051ee10(param_1,0);
      }
      core_prye_cpp_FUN_0051ee10(param_1,1);
      iVar15 = _DAT_01ed36f0;
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3714;
      pCVar1 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed36f4;
      puVar9 = (uint *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      puVar6 = (uint *)((int)pCVar1 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar13->w = pCVar1->w;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar7 = puVar6 + (uint)bVar11 * -2 + 1;
      *puVar9 = *puVar6;
      *puVar10 = *puVar7;
      puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01ed3710;
      puVar9 = (uint *)((int)pCVar13 + ((uint)bVar11 * -2 + 1) * 4);
      puVar6 = (uint *)((int)param_1 + (uint)bVar11 * -8 + iVar15 * 0x10 + 0x80c);
      pCVar13->w = (param_1->model).bone_transform.pose_data.bone_rotations[iVar15].w;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar7 = puVar6 + (uint)bVar11 * -2 + 1;
      *puVar9 = *puVar6;
      *puVar10 = *puVar7;
      puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
    }
    iVar15 = param_1->layer_action_index;
    if (((((iVar15 == 3) || (iVar15 == 4)) || (iVar15 == 9)) || ((iVar15 == 6 || (iVar15 == 7)))) ||
       ((iVar15 == 0x14 || ((iVar15 == 0x15 || (iVar15 == 8)))))) {
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      local_30 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 8));
      fVar2 = local_30;
      pcVar16 = core_prye_cpp_FUN_00517ce0;
      pCVar13 = &local_c0;
      local_c0.w = local_b0;
      pfVar8 = (float *)((int)&local_c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(float *)((int)&local_c0 + (uint)bVar11 * -8 + 4) = afStack_ac[(uint)bVar11 * -2];
      pCVar12 = &param_1->model;
      iVar15 = _DAT_01ed3720;
      *pfVar8 = afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      pfVar8[(uint)bVar11 * -2 + 1] =
           (afStack_ac + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      local_18 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar12,pCVar13,fVar2,iVar15,pcVar16);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (*(uint *)(param_1[2].flames[0x15].base.create_event + 0xc));
      pCVar12 = local_18;
      fVar2 = local_30;
      pcVar16 = core_prye_cpp_FUN_00517ce0;
      pCVar13 = &local_d0;
      local_d0.w = local_90;
      pfVar8 = (float *)((int)&local_d0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(float *)((int)&local_d0 + (uint)bVar11 * -8 + 4) = afStack_ac[(uint)bVar11 * -2 + 8];
      iVar15 = _DAT_01ed3720;
      *pfVar8 = afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
      pfVar8[(uint)bVar11 * -2 + 1] =
           (afStack_ac + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar12,pCVar13,fVar2,iVar15,pcVar16);
      return;
    }
  }
  return;
}
