// Name: core_stranger.cpp_CStranger_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bfb60()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bfb60(CStranger* param_1) */

void core_stranger_cpp_CStranger_FUN_005bfb60(void)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  int iVar4;
  CDeformableModelInstance *this_ptr_00;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  int in_stack_00000004;
  float afStackY_18cc [1515];
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
  
  bVar11 = 0;
  if ((*(int *)(in_stack_00000004 + 0x2a8c) < 0) || (0x10 < *(int *)(in_stack_00000004 + 0x2a8c))) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xa85;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f8 = 1.0;
  if (*(int *)(in_stack_00000004 + 0x262c + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38) == 0) {
    local_f8 = *(float *)(in_stack_00000004 + 0x2a90);
  }
  if (*(int *)(in_stack_00000004 + 0x2630 + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38) == 0) {
    local_f8 = (1.0 - *(float *)(in_stack_00000004 + 0x2a90)) * local_f8;
  }
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  local_30 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x28);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x24);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x22);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) goto LAB_005bfd3a;
  fVar1 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    ((CMotionController *)(in_stack_00000004 + 0x158));
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  iVar4 = pSVar2->state_index;
  if ((iVar4 == 0x17) || (iVar4 == 0x18)) {
    fVar1 = fVar1 + (float)-0.75;
LAB_005bfd02:
    local_1c = fVar1 * (float)4;
  }
  else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
    fVar1 = (float)0.25 - fVar1;
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
  pCVar13 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar13);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar3->motion_list);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar13,local_20,*(float *)(in_stack_00000004 + 0x2a90)
                       );
  local_18 = local_24;
  if (((*(int *)(in_stack_00000004 + 0x2a8c) == 9) &&
      (1.0 <= *(float *)(in_stack_00000004 + 0x2a90))) &&
     (*(int *)(in_stack_00000004 + 0x1fc34) != 0)) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar13);
    iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar3->motion_list);
    local_20 = iVar4;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         ((CMotionController *)pCVar13,iVar4,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),local_20,local_18,local_f8,
             DAT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 0) {
    local_30 = (CDeformableModelInstance *)(in_stack_00000004 + 0x808);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + DAT_03f6bb04 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + DAT_03f6bae4 * 0x10 + -0x30),
               *(float *)(in_stack_00000004 + 0x2a90),&local_c0);
    pfVar5 = (float *)(in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    pfVar8 = pfVar5 + (uint)bVar11 * -2 + 1;
    *pfVar5 = local_c0.w;
    pfVar5 = (float *)((int)&local_c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *pfVar8 = *(float *)((int)&local_c0 + (uint)bVar11 * -8 + 4);
    pfVar8[(uint)bVar11 * -2 + 1] = *pfVar5;
    (pfVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = pfVar5[(uint)bVar11 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + DAT_03f6bb00 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + DAT_03f6bae0 * 0x10 + -0x30),
               *(float *)(in_stack_00000004 + 0x2a90),&local_f0);
    pfVar5 = (float *)(in_stack_00000004 + 0x808 + DAT_03f6bb00 * 0x10);
    pfVar8 = pfVar5 + (uint)bVar11 * -2 + 1;
    *pfVar5 = local_f0.w;
    pfVar5 = (float *)((int)&local_f0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *pfVar8 = *(float *)((int)&local_f0 + (uint)bVar11 * -8 + 4);
    pfVar8[(uint)bVar11 * -2 + 1] = *pfVar5;
    (pfVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = pfVar5[(uint)bVar11 * -2 + 1];
  }
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
    fVar1 = (*(float *)(in_stack_00000004 + 0x1fbf0) + *(float *)(in_stack_00000004 + 0x1fc10)) *
            (float)0.5;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar1 < 0.0) {
      local_100 = ((fVar1 + 0.3490658f) / (0xBF860A92 + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar1) {
      local_100 = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar15 = core_stranger_cpp_FUN_005baee0;
      iVar4 = DAT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(fVar1,&local_90);
      pCVar14 = &local_70;
      pCVar13 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
      local_70.w = local_90.w;
      puVar9 = (uint *)((int)&local_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      puVar6 = (uint *)((int)&local_90 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(uint *)((int)&local_70 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar11 * -8 + 4);
      *puVar9 = *puVar6;
      puVar9[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar13,pCVar14,local_100,iVar4,pcVar15);
    }
    core_stranger_cpp_CStranger_FUN_005c02b0();
    core_stranger_cpp_CStranger_FUN_005c02b0();
    puVar6 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    puVar9 = (uint *)(DAT_03f6bae4 * 0x10 + 0x808 + in_stack_00000004);
    puVar10 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar6 = *puVar9;
    *puVar10 = *puVar7;
    puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
    (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    puVar6 = (uint *)(DAT_03f6bb00 * 0x10 + 0x808 + in_stack_00000004);
    puVar9 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bae0 * 0x10);
    puVar10 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar6 = *puVar9;
    *puVar10 = *puVar7;
    puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
    (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
  }
  iVar4 = *(int *)(in_stack_00000004 + 0x2a8c);
  if ((((iVar4 == 3) || (iVar4 == 4)) || ((iVar4 == 9 || ((iVar4 == 6 || (iVar4 == 7)))))) ||
     (iVar4 == 8)) {
    local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(float *)(in_stack_00000004 + 0x1fbf0),&local_80);
    fVar1 = local_38;
    pcVar15 = core_stranger_cpp_FUN_005baee0;
    pCVar14 = &local_e0;
    local_e0.w = local_80.w;
    puVar9 = (uint *)((int)&local_e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    puVar6 = (uint *)((int)&local_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&local_e0 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&local_80 + (uint)bVar11 * -8 + 4);
    pCVar13 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    iVar4 = DAT_03f6bb10;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
    local_30 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar13,pCVar14,fVar1,iVar4,pcVar15);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(float *)(in_stack_00000004 + 0x1fbf4),&local_60);
    local_50.w = local_60.w;
    puVar9 = (uint *)((int)&local_50 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    puVar6 = (uint *)((int)&local_60 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar11 * -8 + 4);
    *puVar9 = *puVar6;
    puVar9[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_30,&local_50,local_38,DAT_03f6bb10,core_stranger_cpp_FUN_005baee0);
    if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) {
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) {
    return;
  }
  fVar12 = (float10)fpatan((float10)*(float *)(in_stack_00000004 + 0x1fcb0) / (float10)_DAT_00663778
                           ,(float10)1);
  local_34 = (float)fVar12;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,&local_d0);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar14 = &local_a0;
  fVar1 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  local_a0.w = local_d0.w;
  puVar9 = (uint *)((int)&local_a0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  puVar6 = (uint *)((int)&local_d0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&local_d0 + (uint)bVar11 * -8 + 4);
  pCVar13 = this_ptr_00;
  iVar4 = DAT_03f6badc;
  *puVar9 = *puVar6;
  puVar9[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar13,pCVar14,fVar1,iVar4,pcVar15);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,&local_b0);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar14 = &local_a0;
  fVar1 = 1.0;
  local_a0.w = local_b0.w;
  puVar9 = (uint *)((int)&local_a0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  puVar6 = (uint *)((int)&local_b0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  *(uint *)((int)&local_a0 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&local_b0 + (uint)bVar11 * -8 + 4);
  iVar4 = DAT_03f6bad8;
  *puVar9 = *puVar6;
  puVar9[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,pCVar14,fVar1,iVar4,pcVar15);
  return;
}
