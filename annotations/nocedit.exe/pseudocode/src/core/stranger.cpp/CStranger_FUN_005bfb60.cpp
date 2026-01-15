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
  float afStackY_18c8 [1515];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  float fVar14;
  code *pcVar15;
  double dVar16;
  float local_fc;
  float local_f4;
  uint uStack_ec;
  CQuaternion4f CStack_dc;
  float fStack_cc;
  float afStack_c8 [7];
  float fStack_ac;
  CQuaternion4f CStack_9c;
  float fStack_8c;
  float afStack_88 [7];
  CQuaternion4f CStack_6c;
  float fStack_5c;
  float afStack_58 [3];
  CQuaternion4f CStack_4c;
  float local_34;
  CQuaternion4f *local_30;
  CDeformableModelInstance *local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  
  bVar10 = 0;
  if ((*(int *)(in_stack_00000004 + 0x2a8c) < 0) || (0x10 < *(int *)(in_stack_00000004 + 0x2a8c))) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xa85;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f4 = 1.0;
  if (*(int *)(in_stack_00000004 + 0x262c + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38) == 0) {
    local_f4 = *(float *)(in_stack_00000004 + 0x2a90);
  }
  if (*(int *)(in_stack_00000004 + 0x2630 + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38) == 0) {
    local_f4 = (1.0 - *(float *)(in_stack_00000004 + 0x2a90)) * local_f4;
  }
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  local_2c = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x28);
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x29);
  local_2c = (CDeformableModelInstance *)(fStack_14 + (float)local_2c);
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x24);
  local_2c = (CDeformableModelInstance *)(fStack_14 + (float)local_2c);
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x22);
  local_f4 = (1.0 - (fStack_14 + (float)local_2c)) * local_f4;
  if (local_f4 < 0.0) {
    local_f4 = 0.0;
  }
  if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) goto LAB_005bfd3a;
  fVar2 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                    ((CMotionController *)(in_stack_00000004 + 0x158));
  local_18 = 1.0;
  fStack_14 = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  iVar5 = pSVar3->state_index;
  if ((iVar5 == 0x17) || (iVar5 == 0x18)) {
    fVar2 = fVar2 + (float)-0.75;
LAB_005bfd02:
    local_18 = fVar2 * (float)4;
  }
  else if ((iVar5 == 0x19) || (iVar5 == 0x1a)) {
    fVar2 = (float)0.25 - fVar2;
    goto LAB_005bfd02;
  }
  if ((int)local_18 < 0x3f800001) {
    if (local_18 < 0.0) {
      local_18 = 0.0;
    }
  }
  else {
    local_18 = 1.0;
  }
  local_f4 = local_f4 * local_18;
LAB_005bfd3a:
  dVar16 = (double)local_f4;
  if (local_f4 <= (float)0.0001) {
    return;
  }
  if (1.0 < dVar16) {
    local_f4 = 1.0;
  }
  pCVar12 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
  fVar2 = SUB84 /* extract 2-byte value */(dVar16,0);
  local_1c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar4->motion_list);
  local_20 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar12,local_1c,*(float *)(in_stack_00000004 + 0x2a90)
                       );
  fStack_14 = local_20;
  if (((*(int *)(in_stack_00000004 + 0x2a8c) == 9) &&
      (1.0 <= *(float *)(in_stack_00000004 + 0x2a90))) &&
     (*(int *)(in_stack_00000004 + 0x1fc34) != 0)) {
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar4->motion_list);
    local_1c = iVar5;
    fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    fStack_14 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                          ((CMotionController *)pCVar12,iVar5,fStack_14);
  }
  local_20 = fStack_14;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),local_1c,fStack_14,local_f4,
             DAT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 0) {
    local_2c = (CDeformableModelInstance *)(in_stack_00000004 + 0x808);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_2c->motion_controller).current_motion_name + DAT_03f6bb04 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_2c->motion_controller).current_motion_name + DAT_03f6bae4 * 0x10 + -0x30),
               *(CQuaternion4f **)(in_stack_00000004 + 0x2a90),fVar2);
    puVar1 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    pfVar7 = (float *)(puVar1 + (uint)bVar10 * -2 + 1);
    *puVar1 = afStack_c8[3];
    *pfVar7 = afStack_c8[(uint)bVar10 * -2 + 4];
    pfVar7[(uint)bVar10 * -2 + 1] = afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_c8 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)
               ((local_2c->motion_controller).current_motion_name + DAT_03f6bb00 * 0x10 + -0x30),
               (CQuaternion4f *)
               ((local_2c->motion_controller).current_motion_name + DAT_03f6bae0 * 0x10 + -0x30),
               *(CQuaternion4f **)(in_stack_00000004 + 0x2a90),fVar2);
    puVar1 = (uint *)(in_stack_00000004 + 0x808 + DAT_03f6bb00 * 0x10);
    puVar8 = puVar1 + (uint)bVar10 * -2 + 1;
    *puVar1 = uStack_ec;
    *puVar8 = *(uint *)(&stack0xffffff18 + (uint)bVar10 * -8);
    puVar8[(uint)bVar10 * -2 + 1] = afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -7];
    (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_c8 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -7)[(uint)bVar10 * -2 + 1];
  }
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
    pCVar13 = (CQuaternion4f *)
              ((*(float *)(in_stack_00000004 + 0x1fbf0) + *(float *)(in_stack_00000004 + 0x1fc10)) *
              (float)0.5);
    local_fc = 0.0;
    local_24 = 0x3e860a92;
    local_28 = 0x3f19999a;
    if ((float)pCVar13 < 0.0) {
      local_fc = (((float)pCVar13 + 0.3490658f) / (DAT_00663770 + 0.3490658f)) *
                 0.6f;
    }
    if (0.0 < (float)pCVar13) {
      local_fc = (((float)pCVar13 - 0.2617994) / (DAT_00663774 - 0.2617994)) * 0.6;
    }
    fStack_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    fVar14 = (1.0 - fStack_14) * local_f4 * local_fc;
    local_fc = fVar14;
    if (0.0 < fVar14) {
      pcVar15 = core_stranger_cpp_FUN_005baee0;
      iVar5 = DAT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(pCVar13,fVar14);
      pCVar13 = &CStack_6c;
      pCVar12 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
      CStack_6c.w = fStack_8c;
      pfVar7 = (float *)((int)&CStack_6c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&CStack_6c + (uint)bVar10 * -8 + 4) = afStack_88[(uint)bVar10 * -2];
      *pfVar7 = afStack_88[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_88 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
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
    fStack_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    local_34 = (1.0 - fStack_14) * local_f4;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbf0),fVar2);
    fVar14 = local_34;
    pcVar15 = core_stranger_cpp_FUN_005baee0;
    pCVar13 = &CStack_dc;
    CStack_dc.w = afStack_88[3];
    pfVar7 = (float *)((int)&CStack_dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_dc + (uint)bVar10 * -8 + 4) = afStack_88[(uint)bVar10 * -2 + 4];
    pCVar12 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    iVar5 = DAT_03f6bb10;
    *pfVar7 = afStack_88[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_88 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    local_2c = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar12,pCVar13,fVar14,iVar5,pcVar15);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbf4),fVar2);
    CStack_4c.w = fStack_5c;
    pfVar7 = (float *)((int)&CStack_4c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_4c + (uint)bVar10 * -8 + 4) = afStack_58[(uint)bVar10 * -2];
    *pfVar7 = afStack_58[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_58 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_2c,&CStack_4c,local_34,DAT_03f6bb10,core_stranger_cpp_FUN_005baee0);
    if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) {
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x2a8c) != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)*(float *)(in_stack_00000004 + 0x1fcb0) / (float10)_DAT_00663778
                           ,(float10)1);
  local_30 = (CQuaternion4f *)(float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,fVar2);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar13 = &CStack_9c;
  fVar14 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  CStack_9c.w = fStack_cc;
  pfVar7 = (float *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) = afStack_c8[(uint)bVar10 * -2];
  pCVar12 = this_ptr_00;
  iVar5 = DAT_03f6badc;
  *pfVar7 = afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_c8 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar12,pCVar13,fVar14,iVar5,pcVar15);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-(float)local_30,fVar2);
  pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar13 = &CStack_9c;
  fVar2 = 1.0;
  CStack_9c.w = fStack_ac;
  pfVar7 = (float *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) = afStack_c8[(uint)bVar10 * -2 + 8];
  iVar5 = DAT_03f6bad8;
  *pfVar7 = afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_c8 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,pCVar13,fVar2,iVar5,pcVar15);
  return;
}
