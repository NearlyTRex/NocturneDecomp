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
  CDeformableModelInstance *pCVar4;
  BADSPACEBASE *in_ESP;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float in_stack_00000004;
  float afStackY_18b4 [1512];
  CDeformableModelInstance *pCVar12;
  code *bone_index;
  float bone_index_00;
  float in_stack_ffffff08;
  float fVar13;
  CQuaternion4f *pCVar14;
  int iVar15;
  float in_stack_ffffff10;
  code *pcVar16;
  float in_stack_ffffff14;
  float in_stack_ffffff18;
  float fStack_e4;
  uint uStack_d8;
  CQuaternion4f aCStack_d4 [2];
  float fStack_b4;
  float local_b0 [9];
  float fStack_8c;
  float fStack_88;
  byte auStack_84 [12];
  float afStack_78 [5];
  CQuaternion4f CStack_64;
  uint uStack_4c;
  uint auStack_48 [3];
  CQuaternion4f CStack_3c;
  float local_2c;
  float local_28;
  CDeformableModelInstance *local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  float fStack_14;
  
  bVar10 = 0;
  if ((*(int *)((int)in_stack_00000004 + 0x2a8c) < 0) ||
     (0x10 < *(int *)((int)in_stack_00000004 + 0x2a8c))) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xa85;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::makeDrawDecision - draw motion out of range!");
  }
  fVar13 = 1.0;
  if (*(int *)((int)in_stack_00000004 + 0x262c + *(int *)((int)in_stack_00000004 + 0x2a8c) * 0x38)
      == 0) {
    fVar13 = *(float *)((int)in_stack_00000004 + 0x2a90);
  }
  if (*(int *)((int)in_stack_00000004 + 0x2630 + *(int *)((int)in_stack_00000004 + 0x2a8c) * 0x38)
      == 0) {
    fVar13 = (1.0 - *(float *)((int)in_stack_00000004 + 0x2a90)) * fVar13;
  }
  this_ptr = (CMotionController *)((int)in_stack_00000004 + 0x158);
  local_28 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x28);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x29);
  local_2c = fVar1 + local_2c;
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x24);
  local_2c = fVar1 + local_2c;
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0x22);
  fVar13 = (1.0 - (fVar1 + local_2c)) * fVar13;
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
  }
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) != 0xe) goto LAB_005bfd3a;
  in_stack_ffffff10 =
       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                 ((CMotionController *)((int)in_stack_00000004 + 0x158));
  local_18 = 1.0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)((int)in_stack_00000004 + 0x158));
  iVar15 = pSVar2->state_index;
  if ((iVar15 == 0x17) || (iVar15 == 0x18)) {
    local_18 = in_stack_ffffff10 + (float)-0.75;
LAB_005bfd02:
    local_18 = local_18 * (float)4;
  }
  else if ((iVar15 == 0x19) || (iVar15 == 0x1a)) {
    local_18 = (float)0.25 - in_stack_ffffff10;
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
  fVar13 = fVar13 * local_18;
LAB_005bfd3a:
  if (fVar13 <= (float)0.0001) {
    return;
  }
  if (1.0 < fVar13) {
    fVar13 = 1.0;
  }
  pCVar12 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
  local_1c = (CDeformableModelInstance *)
             core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar3->motion_list);
  local_20 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar12,(int)local_1c,
                        *(float *)((int)in_stack_00000004 + 0x2a90));
  if (((*(int *)((int)in_stack_00000004 + 0x2a8c) == 9) &&
      (1.0 <= *(float *)((int)in_stack_00000004 + 0x2a90))) &&
     (*(int *)((int)in_stack_00000004 + 0x1fc34) != 0)) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar12);
    pCVar4 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&pCVar3->motion_list);
    local_1c = pCVar4;
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         ((CMotionController *)pCVar12,(int)pCVar4,fVar1);
  }
  pcVar16 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)((int)in_stack_00000004 + 0x158),(int)fStack_14,local_18,
             in_stack_ffffff14,(int)DAT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) == 0) {
    local_20 = (float)((int)in_stack_00000004 + 0x808);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(DAT_03f6bb04 * 0x10 + (int)local_20),
               (CQuaternion4f *)(DAT_03f6bae4 * 0x10 + (int)local_20),
               *(CQuaternion4f **)((int)in_stack_00000004 + 0x2a90),in_stack_ffffff08);
    puVar5 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    pfVar7 = (float *)(puVar5 + (uint)bVar10 * -2 + 1);
    *puVar5 = local_b0[1];
    *pfVar7 = local_b0[(uint)bVar10 * -2 + 2];
    pfVar7[(uint)bVar10 * -2 + 1] = local_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (local_b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 3)[(uint)bVar10 * -2 + 1];
    pcVar16 = (code *)((local_1c->motion_controller).current_motion_name +
                      DAT_03f6bb00 * 0x10 + -0x30);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)pcVar16,
               (CQuaternion4f *)
               ((local_1c->motion_controller).current_motion_name + DAT_03f6bae0 * 0x10 + -0x30),
               *(CQuaternion4f **)((int)in_stack_00000004 + 0x2a90),fVar13);
    puVar5 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb00 * 0x10);
    puVar8 = puVar5 + (uint)bVar10 * -2 + 1;
    *puVar5 = uStack_d8;
    puVar5 = (uint *)((int)aCStack_d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4);
    *puVar8 = *(uint *)((int)aCStack_d4 + (uint)bVar10 * -8);
    puVar8[(uint)bVar10 * -2 + 1] = *puVar5;
    (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
  }
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) == 1) {
    fStack_e4 = (*(float *)((int)in_stack_00000004 + 0x1fbf0) +
                *(float *)((int)in_stack_00000004 + 0x1fc10)) * (float)0.5;
    in_stack_ffffff18 = 0.0;
    fStack_14 = 0.6;
    if (fStack_e4 < 0.0) {
      in_stack_ffffff18 =
           ((fStack_e4 + 0.3490658f) / (DAT_00663770 + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fStack_e4) {
      in_stack_ffffff18 = ((fStack_e4 - 0.2617994) / (DAT_00663774 - 0.2617994)) * 0.6;
    }
    pCVar14 = (CQuaternion4f *)0x3;
    fVar13 = in_stack_00000004;
    fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    fVar13 = (1.0 - fVar1) * in_stack_ffffff10 * fVar13;
    if (0.0 < fVar13) {
      bone_index = core_stranger_cpp_FUN_005baee0;
      fVar1 = DAT_03f6bb10;
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(pCVar14,fVar13);
      pCVar14 = &CStack_64;
      pCVar12 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
      CStack_64.w = (float)auStack_84._0_4_;
      pfVar7 = (float *)((int)&CStack_64 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&CStack_64 + (uint)bVar10 * -8 + 4) =
           *(uint *)(auStack_84 + (uint)bVar10 * -8 + 4);
      *pfVar7 = afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_78 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar12,pCVar14,fVar1,(int)bone_index,pcVar16);
    }
    core_stranger_cpp_CStranger_FUN_005c02b0();
    pcVar16 = (code *)0x5c004b;
    core_stranger_cpp_CStranger_FUN_005c02b0();
    puVar5 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    puVar8 = (uint *)(DAT_03f6bae4 * 0x10 + 0x808 + (int)in_stack_00000004);
    puVar9 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar5 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar5 = (uint *)(DAT_03f6bb00 * 0x10 + 0x808 + (int)in_stack_00000004);
    puVar8 = (uint *)((int)in_stack_00000004 + 0x808 + DAT_03f6bae0 * 0x10);
    puVar9 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar5 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  }
  iVar15 = *(int *)((int)in_stack_00000004 + 0x2a8c);
  if ((((iVar15 == 3) || (iVar15 == 4)) || ((iVar15 == 9 || ((iVar15 == 6 || (iVar15 == 7)))))) ||
     (iVar15 == 8)) {
    fVar1 = in_stack_00000004;
    fVar13 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    CStack_3c.z = (1.0 - fVar13) * in_stack_ffffff10;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)((int)in_stack_00000004 + 0x1fbf0),(float)pcVar16);
    fVar13 = local_2c;
    pcVar16 = core_stranger_cpp_FUN_005baee0;
    pCVar14 = aCStack_d4;
    aCStack_d4[0].w = afStack_78[1];
    pfVar7 = (float *)((int)aCStack_d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)aCStack_d4 + (uint)bVar10 * -8 + 4) = afStack_78[(uint)bVar10 * -2 + 2];
    pCVar12 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
    bone_index_00 = DAT_03f6bb10;
    *pfVar7 = afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_78 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 3)[(uint)bVar10 * -2 + 1];
    local_24 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar12,pCVar14,fVar13,(int)bone_index_00,pcVar16);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)((int)in_stack_00000004 + 0x1fbf4),fVar1);
    auStack_48[2] = uStack_4c;
    puVar5 = (uint *)((int)&CStack_3c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4);
    *(uint *)((int)&CStack_3c + (uint)bVar10 * -8) = auStack_48[(uint)bVar10 * -2];
    *puVar5 = auStack_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar5[(uint)bVar10 * -2 + 1] =
         (auStack_48 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_1c,&CStack_3c,(float)local_24,(int)DAT_03f6bb10,core_stranger_cpp_FUN_005baee0)
    ;
    if (*(int *)((int)in_stack_00000004 + 0x2a8c) != 0xe) {
      return;
    }
  }
  else if (*(int *)((int)in_stack_00000004 + 0x2a8c) != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)*(float *)((int)in_stack_00000004 + 0x1fcb0) /
                           (float10)_DAT_00663778,(float10)1);
  local_1c = (CDeformableModelInstance *)(float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_1c,in_stack_ffffff10);
  pcVar16 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar14 = (CQuaternion4f *)auStack_84;
  fVar13 = 1.0;
  pCVar4 = (CDeformableModelInstance *)((int)in_stack_00000004 + 0x158);
  auStack_84._0_4_ = fStack_b4;
  *(float *)(auStack_84 + (uint)bVar10 * -8 + 4) = local_b0[(uint)bVar10 * -2];
  iVar15 = DAT_03f6badc;
  pCVar12 = pCVar4;
  afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1] =
       local_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  (afStack_78 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -1)[(uint)bVar10 * -2 + 1] =
       (local_b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar12,pCVar14,fVar13,iVar15,pcVar16);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-fStack_14,in_stack_ffffff18);
  pcVar16 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  pCVar14 = (CQuaternion4f *)(auStack_84 + 8);
  fVar13 = 1.0;
  auStack_84._8_4_ = fStack_8c;
  afStack_78[(uint)bVar10 * -2] = (&fStack_88)[(uint)bVar10 * -2];
  iVar15 = DAT_03f6bad8;
  afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       *(float *)(auStack_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  (afStack_78 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
       *(float *)((int)(auStack_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                 ((uint)bVar10 * -2 + 1) * 4);
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCVar4,pCVar14,fVar13,iVar15,pcVar16);
  return;
}
