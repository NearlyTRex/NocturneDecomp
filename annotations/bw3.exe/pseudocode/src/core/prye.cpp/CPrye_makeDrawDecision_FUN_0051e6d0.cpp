// Name: core_prye.cpp_CPrye_makeDrawDecision_FUN_0051e6d0
// Address: 0051e6d0
// Address Range: [[0051e6d0, 0051ee0d]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_makeDrawDecision_FUN_0051e6d0(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_prye_cpp_CPrye_makeDrawDecision_FUN_0051e6d0(CPrye *this_ptr)

{
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  CDemonActor *pCVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar12;
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *pCVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  float local_f0;
  float local_e8;
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
  CQuaternion4f *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar11 = 0;
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((iVar15 < 0) || (0x20 < iVar15)) {
    g_CurrentFilename = "..\\core\\prye.cpp";
    g_CurrentLineNumber = 3620;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPrye::makeDrawDecision - draw motion out of range!");
  }
  local_e8 = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].from_bone_index
      == 0) {
    local_e8 = (this_ptr->base).base.layer_action_t;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].to_bone_index ==
      0) {
    local_e8 = (1.0 - (this_ptr->base).base.layer_action_t) * local_e8;
  }
  pCVar12 = &(this_ptr->base).base.model;
  local_34 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar12->base,0x35)
  ;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar12->base,0x36)
  ;
  local_34 = (CQuaternion4f *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar12->base,0x31)
  ;
  local_34 = (CQuaternion4f *)((float)local_18 + (float)local_34);
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar12->base,0x2f)
  ;
  local_e8 = (1.0 - ((float)local_18 + (float)local_34)) * local_e8;
  if (local_e8 < 0.0) {
    local_e8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0x11) goto LAB_0051e8aa;
  pCVar12 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930(&pCVar12->base);
  local_1c = 1.0;
  local_18 = (CDeformableModelInstance *)fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar12->base);
  iVar15 = pSVar2->state_index;
  if ((iVar15 == 0x22) || (iVar15 == 0x23)) {
    fVar1 = fVar1 + (float)-0.75;
LAB_0051e872:
    local_1c = fVar1 * (float)4;
  }
  else if ((iVar15 == 0x24) || (iVar15 == 0x25)) {
    fVar1 = (float)0.25 - fVar1;
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
  if ((float)0.0001 < local_e8) {
    if (1.0 < local_e8) {
      local_e8 = 1.0;
    }
    iVar15 = 1;
    pcVar14 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
              motion_name;
    pCVar12 = &(this_ptr->base).base.model;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar12);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         (&pCVar3->motion_list,pcVar14,iVar15);
    local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20
                         (&pCVar12->base,local_20,(this_ptr->base).base.layer_action_t);
    local_18 = (CDeformableModelInstance *)local_24;
    if ((((this_ptr->base).base.layer_action_index == 9) &&
        (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
      iVar15 = 1;
      pcVar14 = (this_ptr->base).base.layer_actions[10].motion_name;
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar12);
      iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                         (&pCVar3->motion_list,pcVar14,iVar15);
      local_20 = iVar15;
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      local_18 = (CDeformableModelInstance *)
                 core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20
                           (&pCVar12->base,iVar15,(float)local_18);
    }
    local_24 = (float)local_18;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (&(this_ptr->base).base.model,local_20,(float)local_18,local_e8,g_StrangerIndices[0xd]
               ,core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    if ((this_ptr->base).base.layer_action_index == 0) {
      local_34 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + g_StrangerIndices[10],local_34 + g_StrangerIndices[2],
                 (this_ptr->base).base.layer_action_t,&local_60);
      pfVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_StrangerIndices[10]].w;
      pfVar9 = pfVar5 + (uint)bVar11 * -2 + 1;
      *pfVar5 = local_60.w;
      pfVar5 = (float *)((int)&local_60 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *pfVar9 = *(float *)((int)&local_60 + (uint)bVar11 * -8 + 4);
      pfVar9[(uint)bVar11 * -2 + 1] = *pfVar5;
      (pfVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = pfVar5[(uint)bVar11 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (local_34 + g_StrangerIndices[9],local_34 + g_StrangerIndices[1],
                 (this_ptr->base).base.layer_action_t,&local_50);
      pfVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_StrangerIndices[9]].w;
      pfVar9 = pfVar5 + (uint)bVar11 * -2 + 1;
      *pfVar5 = local_50.w;
      pfVar5 = (float *)((int)&local_50 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *pfVar9 = *(float *)((int)&local_50 + (uint)bVar11 * -8 + 4);
      pfVar9[(uint)bVar11 * -2 + 1] = *pfVar5;
      (pfVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = pfVar5[(uint)bVar11 * -2 + 1];
    }
    iVar15 = (this_ptr->base).base.layer_action_index;
    if (((iVar15 == 1) || (iVar15 == 0x16)) || ((iVar15 == 0x19 || (iVar15 == 0x1a)))) {
      fVar1 = (this_ptr->right_arm_aim).target_pitch;
      local_f0 = 0.0;
      local_2c = 0x3f19999a;
      local_28 = 0x3e860a92;
      if (fVar1 < 0.0) {
        local_f0 = ((fVar1 + 0.3490658f) / (-0.7853982f + 0.3490658f)) *
                   0.6f;
      }
      if (0.0 < fVar1) {
        local_f0 = ((fVar1 - 0.2617994) / (0.7853982f - 0.2617994)) * 0.6;
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                           ((CCharacter *)this_ptr,3);
      local_f0 = (1.0 - (float)local_18) * local_e8 * local_f0;
      if (0.0 < local_f0) {
        pcVar16 = core_prye_cpp_armBlendWeightCallback_FUN_00517ce0;
        iVar15 = g_StrangerIndices[0xd];
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fVar1,&local_a0);
        pCVar13 = &local_e0;
        pCVar12 = &(this_ptr->base).base.model;
        local_e0.w = local_a0.w;
        puVar7 = (uint *)((int)&local_e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        puVar8 = (uint *)((int)&local_a0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *(uint *)((int)&local_e0 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&local_a0 + (uint)bVar11 * -8 + 4);
        *puVar7 = *puVar8;
        puVar7[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCVar12,pCVar13,local_f0,iVar15,pcVar16);
      }
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                           ((CCharacter *)this_ptr,3);
      local_38 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                ((this_ptr->right_arm_aim).target_yaw,&local_70);
      local_80.w = local_70.w;
      puVar7 = (uint *)((int)&local_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      puVar8 = (uint *)((int)&local_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar11 * -8 + 4);
      *puVar7 = *puVar8;
      puVar7[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (&(this_ptr->base).base.model,&local_80,local_38,g_StrangerIndices[0xd],
                 core_prye_cpp_armBlendWeightCallback_FUN_00517ce0);
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((this_ptr->base).base.carry_hands[0].carry_actor,
                          g_CDemonActorType_007e1a18.name_hash);
      if ((pCVar4 != (CDemonActor *)0x0) && (this_ptr->weapon != (CWeapon *)0x0)) {
        core_prye_cpp_CPrye_applyArmAimRotation_FUN_0051ee10(this_ptr,0);
      }
      core_prye_cpp_CPrye_applyArmAimRotation_FUN_0051ee10(this_ptr,1);
      iVar15 = g_StrangerIndices[1];
      puVar8 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_StrangerIndices[10]].w;
      puVar7 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_StrangerIndices[2]].w;
      puVar10 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar6 = puVar7 + (uint)bVar11 * -2 + 1;
      *puVar8 = *puVar7;
      *puVar10 = *puVar6;
      puVar10[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
      (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
           (puVar6 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      puVar8 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_StrangerIndices[9]].w;
      puVar6 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar7 = (uint *)((int)this_ptr + (uint)bVar11 * -8 + iVar15 * 0x10 + 0x80c);
      *puVar8 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar15].w;
      puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
      *puVar6 = *puVar7;
      puVar6[(uint)bVar11 * -2 + 1] = *puVar8;
      (puVar6 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
    }
    iVar15 = (this_ptr->base).base.layer_action_index;
    if (((((iVar15 == 3) || (iVar15 == 4)) || (iVar15 == 9)) || ((iVar15 == 6 || (iVar15 == 7)))) ||
       ((iVar15 == 0x14 || ((iVar15 == 0x15 || (iVar15 == 8)))))) {
      local_18 = (CDeformableModelInstance *)
                 core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                           ((CCharacter *)this_ptr,3);
      local_30 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0
                ((this_ptr->right_arm_aim).target_pitch,&local_b0);
      fVar1 = local_30;
      pcVar16 = core_prye_cpp_armBlendWeightCallback_FUN_00517ce0;
      pCVar13 = &local_c0;
      pCVar12 = &(this_ptr->base).base.model;
      local_c0.w = local_b0.w;
      puVar7 = (uint *)((int)&local_c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      puVar8 = (uint *)((int)&local_b0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(uint *)((int)&local_c0 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&local_b0 + (uint)bVar11 * -8 + 4);
      this_ptr_00 = pCVar12;
      iVar15 = g_StrangerIndices[0xd];
      *puVar7 = *puVar8;
      puVar7[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
      local_18 = pCVar12;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (this_ptr_00,pCVar13,fVar1,iVar15,pcVar16);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                ((this_ptr->right_arm_aim).target_yaw,&local_90);
      pCVar12 = local_18;
      fVar1 = local_30;
      pcVar16 = core_prye_cpp_armBlendWeightCallback_FUN_00517ce0;
      pCVar13 = &local_d0;
      local_d0.w = local_90.w;
      puVar7 = (uint *)((int)&local_d0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      puVar8 = (uint *)((int)&local_90 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(uint *)((int)&local_d0 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar11 * -8 + 4);
      iVar15 = g_StrangerIndices[0xd];
      *puVar7 = *puVar8;
      puVar7[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar12,pCVar13,fVar1,iVar15,pcVar16);
      return;
    }
  }
  return;
}
