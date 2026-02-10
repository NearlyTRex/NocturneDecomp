// Name: core_stranger.cpp_CStranger_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bfb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_FUN_005bfb60(CStranger *this_ptr)

{
  CQuaternion4f *pCVar1;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar12;
  CDeformableModelInstance *pCVar13;
  CQuaternion4f *pCVar14;
  code *pcVar15;
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
  iVar5 = (this_ptr->base).base.layer_action_index;
  if ((iVar5 < 0) || (0x10 < iVar5)) {
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
  pCVar12 = &(this_ptr->base).base.model;
  local_30 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar12->motion_controller,0x28);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar12->motion_controller,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar12->motion_controller,0x24);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar12->motion_controller,0x22);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 0xe) goto LAB_005bfd3a;
  pCVar12 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    (&pCVar12->motion_controller);
  local_1c = 1.0;
  local_18 = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar12->motion_controller);
  iVar5 = pSVar3->state_index;
  if ((iVar5 == 0x17) || (iVar5 == 0x18)) {
    fVar2 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar2 * (float)4;
  }
  else if ((iVar5 == 0x19) || (iVar5 == 0x1a)) {
    fVar2 = (float)0.25 - fVar2;
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
  pCVar12 = &(this_ptr->base).base.model;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar4->motion_list);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar12->motion_controller,local_20,(this_ptr->base).base.layer_action_t);
  local_18 = local_24;
  if ((((this_ptr->base).base.layer_action_index == 9) &&
      (1.0 <= (this_ptr->base).base.layer_action_t)) && (*(int *)(this_ptr->unk6 + 4) != 0)) {
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar4->motion_list);
    local_20 = iVar5;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar12->motion_controller,iVar5,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (&(this_ptr->base).base.model,local_20,local_18,local_f8,INT_03f6bb10,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  if ((this_ptr->base).base.layer_action_index == 0) {
    local_30 = (CDeformableModelInstance *)(this_ptr->base).base.model.bone_transform.bone_rotations
    ;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)((int)local_30 + INT_03f6bb04 * 0x10),
               (CQuaternion4f *)((int)local_30 + INT_03f6bae4 * 0x10),
               (this_ptr->base).base.layer_action_t,&local_c0);
    pCVar14 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04;
    puVar7 = (uint *)((int)pCVar14 + ((uint)bVar10 * -2 + 1) * 4);
    pCVar14->w = local_c0.w;
    puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar6 = (uint *)((int)&local_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *puVar7 = *(uint *)((int)&local_c0 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar6;
    puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + INT_03f6bb00 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + INT_03f6bae0 * 0x10 + -0x30),
               (this_ptr->base).base.layer_action_t,&local_f0);
    pCVar14 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00;
    puVar7 = (uint *)((int)pCVar14 + ((uint)bVar10 * -2 + 1) * 4);
    pCVar14->w = local_f0.w;
    puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar6 = (uint *)((int)&local_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *puVar7 = *(uint *)((int)&local_f0 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar6;
    puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
  }
  if ((this_ptr->base).base.layer_action_index == 1) {
    fVar2 = (*(float *)(this_ptr->unk1 + 0x18) + *(float *)(this_ptr->unk3 + 0xc)) *
            (float)0.5;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar2 < 0.0) {
      local_100 = ((fVar2 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar2) {
      local_100 = ((fVar2 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar15 = core_stranger_cpp_FUN_005baee0;
      iVar5 = INT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar2,&local_90);
      pCVar14 = &local_70;
      pCVar12 = &(this_ptr->base).base.model;
      local_70.w = local_90.w;
      puVar7 = (uint *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar6 = (uint *)((int)&local_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar10 * -8 + 4);
      *puVar7 = *puVar6;
      puVar7[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar12,pCVar14,local_100,iVar5,pcVar15);
    }
    core_stranger_cpp_CStranger_FUN_005c02b0(this_ptr);
    core_stranger_cpp_CStranger_FUN_005c02b0(this_ptr);
    pCVar14 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb04;
    pCVar1 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae4;
    puVar8 = (uint *)((int)pCVar14 + ((uint)bVar10 * -2 + 1) * 4);
    puVar6 = (uint *)((int)pCVar1 + ((uint)bVar10 * -2 + 1) * 4);
    pCVar14->w = pCVar1->w;
    puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
    *puVar8 = *puVar6;
    *puVar9 = *puVar7;
    puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    pCVar14 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bb00;
    pCVar1 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bae0;
    puVar8 = (uint *)((int)pCVar14 + ((uint)bVar10 * -2 + 1) * 4);
    puVar6 = (uint *)((int)pCVar1 + ((uint)bVar10 * -2 + 1) * 4);
    pCVar14->w = pCVar1->w;
    puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
    *puVar8 = *puVar6;
    *puVar9 = *puVar7;
    puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
  }
  iVar5 = (this_ptr->base).base.layer_action_index;
  if ((((iVar5 == 3) || (iVar5 == 4)) || ((iVar5 == 9 || ((iVar5 == 6 || (iVar5 == 7)))))) ||
     (iVar5 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(*(float *)(this_ptr->unk1 + 0x18),&local_80);
    fVar2 = local_38;
    pcVar15 = core_stranger_cpp_FUN_005baee0;
    pCVar14 = &local_e0;
    pCVar12 = &(this_ptr->base).base.model;
    local_e0.w = local_80.w;
    puVar7 = (uint *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar6 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar10 * -8 + 4);
    pCVar13 = pCVar12;
    iVar5 = INT_03f6bb10;
    *puVar7 = *puVar6;
    puVar7[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    local_30 = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar13,pCVar14,fVar2,iVar5,pcVar15);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(*(float *)(this_ptr->unk1 + 0x1c),&local_60);
    local_50.w = local_60.w;
    puVar7 = (uint *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar6 = (uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_30,&local_50,local_38,INT_03f6bb10,core_stranger_cpp_FUN_005baee0);
    if ((this_ptr->base).base.layer_action_index != 0xe) {
      return;
    }
  }
  else if ((this_ptr->base).base.layer_action_index != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)*(float *)(this_ptr->unk9 + 0x6c) / (float10)2.7f,
                           (float10)1);
  local_34 = (float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,&local_d0);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar14 = &local_a0;
  fVar2 = 1.0;
  pCVar13 = &(this_ptr->base).base.model;
  local_a0.w = local_d0.w;
  puVar7 = (uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar6 = (uint *)((int)&local_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar10 * -8 + 4);
  pCVar12 = pCVar13;
  iVar5 = INT_03f6badc;
  *puVar7 = *puVar6;
  puVar7[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar12,pCVar14,fVar2,iVar5,pcVar15);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,&local_b0);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar14 = &local_a0;
  fVar2 = 1.0;
  local_a0.w = local_b0.w;
  puVar7 = (uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar6 = (uint *)((int)&local_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar10 * -8 + 4);
  iVar5 = INT_03f6bad8;
  *puVar7 = *puVar6;
  puVar7[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar13,pCVar14,fVar2,iVar5,pcVar15);
  return;
}
