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
  float fVar5;
  CDeformableModelInstance *this_ptr_00;
  BADSPACEBASE *in_ESP;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float unaff_retaddr;
  float in_stack_00000004;
  CDeformableModelInstance *pCStack00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float afStackY_1888 [1503];
  CDeformableModelInstance *pCVar13;
  float in_stack_ffffff24;
  float in_stack_ffffff28;
  code *bone_index;
  code *pcVar14;
  float in_stack_ffffff34;
  float in_stack_ffffff38;
  CQuaternion4f *pCVar15;
  float in_stack_ffffff3c;
  float in_stack_ffffff40;
  float in_stack_ffffff44;
  float fStack_b8;
  uint uStack_ac;
  CQuaternion4f aCStack_a8 [2];
  float fStack_88;
  float afStack_84 [9];
  float local_60;
  float fStack_5c;
  byte auStack_58 [12];
  float afStack_4c [5];
  CQuaternion4f local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [3];
  
  bVar11 = 0;
  if ((*(int *)((int)in_stack_00000004 + 0x2a8c) < 0) ||
     (0x10 < *(int *)((int)in_stack_00000004 + 0x2a8c))) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xa85;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::makeDrawDecision - draw motion out of range!");
  }
  this_ptr = (CMotionController *)((int)in_stack_00000004 + 0x158);
  local_28 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x28);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x29);
  local_24 = fVar1 + local_24;
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x24);
  local_20 = fVar1 + local_20;
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x22);
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) != 0xe) goto LAB_005bfd3a;
  unaff_retaddr =
       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                 ((CMotionController *)((int)in_stack_00000004 + 0x158));
  in_stack_ffffff24 = unaff_retaddr;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)((int)in_stack_00000004 + 0x158));
  iVar4 = pSVar2->state_index;
  if ((iVar4 == 0x17) || (iVar4 == 0x18)) {
    in_stack_ffffff28 = in_stack_ffffff28 + (float)-0.75;
LAB_005bfd02:
    unaff_retaddr = in_stack_ffffff28 * (float)4;
  }
  else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
    in_stack_ffffff28 = (float)0.25 - in_stack_ffffff28;
    goto LAB_005bfd02;
  }
  if ((int)unaff_retaddr < 0x3f800001) {
    if (unaff_retaddr < 0.0) {
      unaff_retaddr = 0.0;
    }
  }
  else {
    unaff_retaddr = 1.0;
  }
  in_stack_ffffff24 = in_stack_ffffff24 * unaff_retaddr;
LAB_005bfd3a:
  if (in_stack_ffffff24 <= (float)0.0001) {
    return;
  }
  pCVar13 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar13);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar3->motion_list);
  pCStack00000010 =
       (CDeformableModelInstance *)
       core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                 ((CMotionController *)pCVar13,iVar4,*(float *)((int)in_stack_00000004 + 0x2a90));
  if (((*(int *)((int)in_stack_00000004 + 0x2a8c) == 9) &&
      (1.0 <= *(float *)((int)in_stack_00000004 + 0x2a90))) &&
     (*(int *)((int)in_stack_00000004 + 0x1fc34) != 0)) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar13);
    pCStack00000010 =
         (CDeformableModelInstance *)
         core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar3->motion_list);
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    in_stack_00000014 =
         core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                   ((CMotionController *)pCVar13,(int)pCStack00000010,fVar1);
  }
  pcVar14 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)((int)in_stack_00000004 + 0x158),(int)in_stack_00000018,
             in_stack_00000014,in_stack_ffffff40,(int)DAT_03f6bb10,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) == 0) {
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(DAT_03f6bb04 * 0x10 + (int)in_stack_00000004 + 0x808),
               (CQuaternion4f *)(DAT_03f6bae4 * 0x10 + (int)in_stack_00000004 + 0x808),
               *(CQuaternion4f **)((int)in_stack_00000004 + 0x2a90),in_stack_ffffff34);
    puVar6 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    pfVar8 = (float *)(puVar6 + (uint)bVar11 * -2 + 1);
    *puVar6 = afStack_84[1];
    *pfVar8 = afStack_84[(uint)bVar11 * -2 + 2];
    pfVar8[(uint)bVar11 * -2 + 1] = afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
    (pfVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (afStack_84 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 3)[(uint)bVar11 * -2 + 1];
    pcVar14 = (code *)((pCStack00000010->motion_controller).current_motion_name +
                      DAT_03f6bb00 * 0x10 + -0x30);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)pcVar14,
               (CQuaternion4f *)
               ((pCStack00000010->motion_controller).current_motion_name +
               DAT_03f6bae0 * 0x10 + -0x30),*(CQuaternion4f **)((int)in_stack_00000004 + 0x2a90),
               in_stack_ffffff38);
    puVar6 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb00 * 0x10);
    puVar9 = puVar6 + (uint)bVar11 * -2 + 1;
    *puVar6 = uStack_ac;
    puVar6 = (uint *)((int)aCStack_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4);
    *puVar9 = *(uint *)((int)aCStack_a8 + (uint)bVar11 * -8);
    puVar9[(uint)bVar11 * -2 + 1] = *puVar6;
    (puVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
  }
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) == 1) {
    fStack_b8 = (*(float *)((int)in_stack_00000004 + 0x1fbf0) +
                *(float *)((int)in_stack_00000004 + 0x1fc10)) * (float)0.5;
    in_stack_ffffff44 = 0.0;
    in_stack_00000018 = 0.6;
    if (fStack_b8 < 0.0) {
      in_stack_ffffff44 =
           ((fStack_b8 + 0.3490658f) / (DAT_00663770 + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fStack_b8) {
      in_stack_ffffff44 = ((fStack_b8 - 0.2617994) / (DAT_00663774 - 0.2617994)) * 0.6;
    }
    pCVar15 = (CQuaternion4f *)0x3;
    fVar1 = in_stack_00000004;
    fVar5 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    fVar1 = (1.0 - fVar5) * in_stack_ffffff3c * fVar1;
    if (0.0 < fVar1) {
      bone_index = core_stranger_cpp_FUN_005baee0;
      fVar5 = DAT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(pCVar15,fVar1);
      pCVar15 = &local_38;
      pCVar13 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
      local_38.w = (float)auStack_58._0_4_;
      pfVar8 = (float *)((int)&local_38 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *(uint *)((int)&local_38 + (uint)bVar11 * -8 + 4) =
           *(uint *)(auStack_58 + (uint)bVar11 * -8 + 4);
      *pfVar8 = afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
      pfVar8[(uint)bVar11 * -2 + 1] =
           (afStack_4c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + -1)[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar13,pCVar15,fVar5,(int)bone_index,pcVar14);
    }
    core_stranger_cpp_CStranger_FUN_005c02b0();
    pcVar14 = (code *)0x5c004b;
    core_stranger_cpp_CStranger_FUN_005c02b0();
    puVar6 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    puVar9 = (uint *)(DAT_03f6bae4 * 0x10 + 0x808 + (int)in_stack_00000004);
    puVar10 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar6 = *puVar9;
    *puVar10 = *puVar7;
    puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
    (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    puVar6 = (uint *)(DAT_03f6bb00 * 0x10 + 0x808 + (int)in_stack_00000004);
    puVar9 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bae0 * 0x10);
    puVar10 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar6 = *puVar9;
    *puVar10 = *puVar7;
    puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
    (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
  }
  iVar4 = *(int *)((int)in_stack_00000004 + 0x2a8c);
  if ((((iVar4 == 3) || (iVar4 == 4)) || ((iVar4 == 9 || ((iVar4 == 6 || (iVar4 == 7)))))) ||
     (iVar4 == 8)) {
    fVar5 = in_stack_00000004;
    core_charactr_cpp_CCharacter_FUN_0042e840();
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)((int)in_stack_00000004 + 0x1fbf0),(float)pcVar14);
    pcVar14 = core_stranger_cpp_FUN_005baee0;
    pCVar15 = aCStack_a8;
    aCStack_a8[0].w = afStack_4c[1];
    pfVar8 = (float *)((int)aCStack_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(float *)((int)aCStack_a8 + (uint)bVar11 * -8 + 4) = afStack_4c[(uint)bVar11 * -2 + 2];
    pCVar13 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
    fVar1 = DAT_03f6bb10;
    *pfVar8 = afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
    pfVar8[(uint)bVar11 * -2 + 1] =
         (afStack_4c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 3)[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar13,pCVar15,unaff_retaddr,(int)fVar1,pcVar14);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)((int)in_stack_00000004 + 0x1fbf4),fVar5);
    local_1c[2] = local_20;
    *(float *)(&stack0xfffffff0 + (uint)bVar11 * -8) = local_1c[(uint)bVar11 * -2];
    *(float *)(&stack0xfffffff4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         local_1c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    *(float *)((int)(&stack0xfffffff4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
              ((uint)bVar11 * -2 + 1) * 4) =
         (local_1c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCStack00000010,(CQuaternion4f *)&stack0xfffffff0,
               (float)((int)in_stack_00000004 + 0x158),(int)DAT_03f6bb10,
               core_stranger_cpp_FUN_005baee0);
    if (*(int *)((int)in_stack_00000004 + 0x2a8c) != 0xe) {
      return;
    }
  }
  else if (*(int *)((int)in_stack_00000004 + 0x2a8c) != 0xe) {
    return;
  }
  fVar12 = (float10)fpatan((float10)*(float *)((int)in_stack_00000004 + 0x1fcb0) /
                           (float10)_DAT_00663778,(float10)1);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)(float)fVar12,in_stack_ffffff3c)
  ;
  pcVar14 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar15 = (CQuaternion4f *)auStack_58;
  fVar1 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
  auStack_58._0_4_ = fStack_88;
  *(float *)(auStack_58 + (uint)bVar11 * -8 + 4) = afStack_84[(uint)bVar11 * -2];
  pCVar13 = this_ptr_00;
  iVar4 = DAT_03f6badc;
  afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
       afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  (afStack_4c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + -1)[(uint)bVar11 * -2 + 1] =
       (afStack_84 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar13,pCVar15,fVar1,iVar4,pcVar14);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
            ((CQuaternion4f *)-in_stack_00000018,in_stack_ffffff44);
  pcVar14 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar15 = (CQuaternion4f *)(auStack_58 + 8);
  fVar1 = 1.0;
  auStack_58._8_4_ = local_60;
  afStack_4c[(uint)bVar11 * -2] = (&fStack_5c)[(uint)bVar11 * -2];
  iVar4 = DAT_03f6bad8;
  afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       *(float *)(auStack_58 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  (afStack_4c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
       *(float *)((int)(auStack_58 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
                 ((uint)bVar11 * -2 + 1) * 4);
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,pCVar15,fVar1,iVar4,pcVar14);
  return;
}
