// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)

{
  CQuaternion4f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  CSkeleton *this_ptr_00;
  uint *puVar9;
  uint *puVar5;
  uint *puVar6;
  uint *puVar10;
  uint *puVar7;
  uint *puVar11;
  uint *puVar8;
  uint *puVar12;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar14;
  CDeformableModelInstance *this_ptr_01;
  CQuaternion4f *pCVar15;
  char *motion_name;
  int iVar16;
  code *pcVar20;
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
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  CDeformableModelInstance *pCVar11;
  byte *pcVar19;
  char *pcVar14;
  int iVar15;
  CQuaternion4f *pCVar1;
  CDeformableModel_MotionBlendWeightFunc *pcVar16;
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  CDeformableModel_MotionBlendWeightFunc *pcVar17;
  CDeformableModel_MotionBlendWeightFunc *pcVar18;
  
  bVar9 = 0;
  iVar16 = (this_ptr->base).base.layer_action_index;
  if ((iVar16 < 0) || (0x10 < iVar16)) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xa85;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::makeDrawDecision - draw motion out of range!");
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
  pCVar14 = &(this_ptr->base).base.model;
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar14->motion_controller,0x28);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar14->motion_controller,0x29);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar14->motion_controller,0x24);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar14->motion_controller,0x22);
  local_f8 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_005bfd3a;
  pCVar14 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    (&pCVar14->motion_controller);
  local_1c = 1.0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar14->motion_controller);
  iVar16 = pSVar3->state_index;
  if ((iVar16 == 0x17) || (iVar16 == 0x18)) {
    fVar3 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar3 * (float)4;
  }
  else if ((iVar16 == 0x19) || (iVar16 == 0x1a)) {
    fVar3 = (float)0.25 - fVar2;
    goto LAB_005bfd02;
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
LAB_005bfd3a:
  if (local_f8 <= (float)0.0001) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar15 = 1;
  pcVar14 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_name;
  pCVar14 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar14);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                       (&pCVar4->motion_list,pcVar14,iVar15);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar14->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (this_ptr->can_grab_weapon != 0)) {
    iVar16 = 1;
    motion_name = (this_ptr->base).base.layer_actions[10].motion_name;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar14);
    local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                         (&this_ptr_00->motion_list,motion_name,iVar16);
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar14->motion_controller,local_20,fVar3);
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (&(this_ptr->base).base.model,local_20,local_24,local_f8,INT_03f6bb10,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  if ((this_ptr->base).base.layer_action_index == 0) {
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04,
               (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae4,
               (this_ptr->base).base.layer_action_t,&local_c0);
    pCVar15 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04;
    puVar10 = (uint *)((int)pCVar15 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar15->w = local_c0.w;
    puVar7 = puVar10 + (uint)bVar9 * -2 + 1;
    puVar9 = (uint *)((int)&local_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *puVar10 = *(uint *)((int)&local_c0 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar9;
    puVar7[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00,
               (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae0,
               (this_ptr->base).base.layer_action_t,&local_f0);
    pCVar15 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00;
    puVar10 = (uint *)((int)pCVar15 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar15->w = local_f0.w;
    puVar11 = puVar10 + (uint)bVar9 * -2 + 1;
    puVar9 = (uint *)((int)&local_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *puVar10 = *(uint *)((int)&local_f0 + (uint)bVar9 * -8 + 4);
    *puVar11 = *puVar9;
    puVar11[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar3 = ((this_ptr->right_arm_aim).target_pitch + (this_ptr->left_arm_aim).target_pitch) *
            (float)0.5;
    local_100 = 0.0;
    if (fVar3 < 0.0) {
      local_100 = ((fVar3 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar3) {
      local_100 = ((fVar3 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar4 = (1.0 - fVar4) * local_f8 * local_100;
    if (0.0 < fVar4) {
      pcVar16 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
      iVar16 = INT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar3,&local_90);
      pCVar13 = &local_70;
      pCVar11 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar10 = (uint *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar9 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4);
      *puVar10 = *puVar9;
      puVar10[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar11,pCVar13,fVar4,iVar16,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_005c02b0(this_ptr,1);
    pCVar15 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04;
    pCVar1 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae4;
    puVar9 = (uint *)((int)pCVar15 + ((uint)bVar9 * -2 + 1) * 4);
    puVar5 = (uint *)((int)pCVar1 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar15->w = pCVar1->w;
    puVar8 = puVar9 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar9 = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    pCVar15 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00;
    pCVar2 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae0;
    puVar11 = (uint *)((int)pCVar15 + ((uint)bVar9 * -2 + 1) * 4);
    puVar9 = (uint *)((int)pCVar2 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar15->w = pCVar2->w;
    puVar12 = puVar11 + (uint)bVar9 * -2 + 1;
    puVar10 = puVar9 + (uint)bVar9 * -2 + 1;
    *puVar11 = *puVar9;
    *puVar12 = *puVar10;
    puVar12[(uint)bVar9 * -2 + 1] = puVar10[(uint)bVar9 * -2 + 1];
  }
  iVar16 = (this_ptr->base).base.layer_action_index;
  if ((((iVar16 == 3) || (iVar16 == 4)) || ((iVar16 == 9 || ((iVar16 == 6 || (iVar16 == 7)))))) ||
     (iVar16 == 8)) {
    fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,3);
    fVar3 = (1.0 - fVar3) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((this_ptr->right_arm_aim).target_pitch,&local_80);
    pcVar17 = core_stranger_cpp_blendWeightCallback_FUN_005baee0;
    pCVar15 = &local_e0;
    pCVar14 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar10 = (uint *)((int)&local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar9 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4);
    pCVar12 = pCVar14;
    fVar4 = fVar3;
    iVar16 = INT_03f6bb10;
    *puVar10 = *puVar9;
    puVar10[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar12,pCVar15,fVar4,iVar16,pcVar17);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((this_ptr->right_arm_aim).target_yaw,&local_60)
    ;
    local_50.w = local_60.w;
    puVar10 = (uint *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar9 = (uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar14,&local_50,fVar3,INT_03f6bb10,
               core_stranger_cpp_blendWeightCallback_FUN_005baee0);
    if ((this_ptr->base).base.layer_action_index != 0xe) {
      return;
    }
  }
  else if ((this_ptr->base).base.layer_action_index != 0xe) {
    return;
  }
  fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)2.7f,
                           (float10)1);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)fVar10,&local_d0);
  pcVar19 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  pCVar15 = &local_a0;
  fVar3 = 1.0;
  this_ptr_01 = &(this_ptr->base).base.model;
  local_a0.w = local_d0.w;
  puVar10 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar9 = (uint *)((int)&local_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar9 * -8 + 4);
  pCVar14 = this_ptr_01;
  iVar16 = INT_03f6badc;
  *puVar10 = *puVar9;
  puVar10[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar14,pCVar15,fVar3,iVar16,(CDeformableModel_MotionBlendWeightFunc *)pcVar19);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar10,&local_b0);
  pcVar20 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  pCVar15 = &local_a0;
  fVar3 = 1.0;
  local_a0.w = local_b0.w;
  puVar10 = (uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar9 = (uint *)((int)&local_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar9 * -8 + 4);
  iVar16 = INT_03f6bad8;
  *puVar10 = *puVar9;
  pcVar18 = pcVar20;
  puVar10[(uint)bVar9 * -2 + 1] = puVar9[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_01,pCVar15,fVar3,iVar16,pcVar18);
  return;
}
