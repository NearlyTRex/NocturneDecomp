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
  uint *puVar1;
  float fVar2;
  SMotion *pSVar3;
  CSkeleton *pCVar4;
  int iVar5;
  CDeformableModelInstance *this_ptr_00;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  int in_stack_00000004;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  float fVar14;
  code *pcVar15;
  double dVar16;
  float local_100;
  float local_f8;
  uint local_f0;
  CQuaternion4f local_e0;
  float local_d0;
  float afStack_cc [7];
  float local_b0;
  CQuaternion4f local_a0;
  float local_90;
  float afStack_8c [7];
  CQuaternion4f local_70;
  float local_60;
  float afStack_5c [3];
  CQuaternion4f local_50;
  float local_38;
  CQuaternion4f *local_34;
  CDeformableModelInstance *local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar10 = 0;
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
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    ((CMotionController *)(in_stack_00000004 + 0x158));
  local_1c = 1.0;
  local_18 = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
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
  dVar16 = (double)local_f8;
  if (local_f8 <= (float)0.0001) {
    return;
  }
  if (1.0 < dVar16) {
    local_f8 = 1.0;
  }
  pCVar12 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
  fVar2 = SUB84 /* extract 2-byte value */(dVar16,0);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar4->motion_list);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar12,local_20,*(float *)(in_stack_00000004 + 0x2a90)
                       );
  local_18 = local_24;
  if (((*(int *)(in_stack_00000004 + 0x2a8c) == 9) &&
      (1.0 <= *(float *)(in_stack_00000004 + 0x2a90))) &&
     (*(int *)(in_stack_00000004 + 0x1fc34) != 0)) {
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar4->motion_list);
    local_20 = iVar5;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         ((CMotionController *)pCVar12,iVar5,local_18);
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
               *(CQuaternion4f **)(in_stack_00000004 + 0x2a90),fVar2);
    puVar1 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    pfVar7 = (float *)(puVar1 + (uint)bVar10 * -2 + 1);
    *puVar1 = afStack_cc[3];
    *pfVar7 = afStack_cc[(uint)bVar10 * -2 + 4];
    pfVar7[(uint)bVar10 * -2 + 1] = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + DAT_03f6bb00 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_30->motion_controller).current_motion_name + DAT_03f6bae0 * 0x10 + -0x30),
               *(CQuaternion4f **)(in_stack_00000004 + 0x2a90),fVar2);
    puVar1 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bb00 * 0x10);
    puVar8 = puVar1 + (uint)bVar10 * -2 + 1;
    *puVar1 = local_f0;
    *puVar8 = *(uint *)(&stack0xffffff14 + (uint)bVar10 * -8);
    puVar8[(uint)bVar10 * -2 + 1] = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -7];
    (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -7)[(uint)bVar10 * -2 + 1];
  }
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
    pCVar13 = (CQuaternion4f *)
              ((*(float *)(in_stack_00000004 + 0x1fbf0) + *(float *)(in_stack_00000004 + 0x1fc10)) *
              (float)0.5);
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if ((float)pCVar13 < 0.0) {
      local_100 = (((float)pCVar13 + 0.3490658f) / (0xBF860A92 + 0.3490658f)) *
                  0.6f;
    }
    if (0.0 < (float)pCVar13) {
      local_100 = (((float)pCVar13 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    fVar14 = (1.0 - local_18) * local_f8 * local_100;
    local_100 = fVar14;
    if (0.0 < fVar14) {
      pcVar15 = core_stranger_cpp_FUN_005baee0;
      iVar5 = DAT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(pCVar13,fVar14);
      pCVar13 = &local_70;
      pCVar12 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
      local_70.w = local_90;
      pfVar7 = (float *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_70 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2];
      *pfVar7 = afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_8c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar12,pCVar13,fVar14,iVar5,pcVar15);
    }
    core_stranger_cpp_CStranger_FUN_005c02b0();
    core_stranger_cpp_CStranger_FUN_005c02b0();
    puVar1 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    puVar8 = (uint *)(DAT_03f6bae4 * 0x10 + 0x808 + in_stack_00000004);
    puVar9 = puVar1 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar1 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar1 = (uint *)(DAT_03f6bb00 * 0x10 + 0x808 + in_stack_00000004);
    puVar8 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bae0 * 0x10);
    puVar9 = puVar1 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar1 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  }
  iVar5 = *(int *)(in_stack_00000004 + 0x2a8c);
  if ((((iVar5 == 3) || (iVar5 == 4)) || ((iVar5 == 9 || ((iVar5 == 6 || (iVar5 == 7)))))) ||
     (iVar5 == 8)) {
    local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbf0),fVar2);
    fVar14 = local_38;
    pcVar15 = core_stranger_cpp_FUN_005baee0;
    pCVar13 = &local_e0;
    local_e0.w = afStack_8c[3];
    pfVar7 = (float *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_e0 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2 + 4];
    pCVar12 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    iVar5 = DAT_03f6bb10;
    *pfVar7 = afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_8c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    local_30 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar12,pCVar13,fVar14,iVar5,pcVar15);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbf4),fVar2);
    local_50.w = local_60;
    pfVar7 = (float *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_50 + (uint)bVar10 * -8 + 4) = afStack_5c[(uint)bVar10 * -2];
    *pfVar7 = afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_5c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_30,&local_50,local_38,DAT_03f6bb10,core_stranger_cpp_FUN_005baee0);
    if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) {
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)*(float *)(in_stack_00000004 + 0x1fcb0) / (float10)_DAT_00663778
                           ,(float10)1);
  local_34 = (CQuaternion4f *)(float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,fVar2);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar13 = &local_a0;
  fVar14 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  local_a0.w = local_d0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar10 * -8 + 4) = afStack_cc[(uint)bVar10 * -2];
  pCVar12 = this_ptr_00;
  iVar5 = DAT_03f6badc;
  *pfVar7 = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar12,pCVar13,fVar14,iVar5,pcVar15);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-(float)local_34,fVar2);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar13 = &local_a0;
  fVar2 = 1.0;
  local_a0.w = local_b0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar10 * -8 + 4) = afStack_cc[(uint)bVar10 * -2 + 8];
  iVar5 = DAT_03f6bad8;
  *pfVar7 = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,pCVar13,fVar2,iVar5,pcVar15);
  return;
}
