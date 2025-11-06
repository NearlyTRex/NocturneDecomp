// Name: core_stranger.cpp_CStranger_FUN_005bfb60
// Address: 005bfb60
// Address Range: [[005bfb60, 005bfe1c] [005bfe53, 005c02ae]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bfb60()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be603 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_stranger_cpp_006538c4
//   TerminatedCString s_CStranger_makeDrawDecisi_006538d9
//   double DOUBLE_00653914 = 0.25
//   double DOUBLE_0065391c = 4
//   double DOUBLE_00653924 = -0.75
//   double DOUBLE_0065392c = 0.000100000000000000
//   double DOUBLE_00653934 = 0.5
//   float FLOAT_0065393c = 0.3490658
//   float FLOAT_00653940 = 0.6000000
//   undefined4 DAT_00663770
//   undefined4 DAT_00663774
//   undefined4 DAT_00663778
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6bad8
//   undefined4 DAT_03f6badc
//   undefined4 DAT_03f6bae0
//   undefined4 DAT_03f6bae4
//   undefined4 DAT_03f6bb00
//   undefined4 DAT_03f6bb04
//   undefined4 DAT_03f6bb10
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_stranger.cpp_CStranger_FUN_005c02b0
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005bfb60(CStranger* param_1) */

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
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
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
  undefined4 uStack_ac;
  CQuaternion4f aCStack_a8 [2];
  float fStack_88;
  float afStack_84 [9];
  float local_60;
  float fStack_5c;
  undefined1 auStack_58 [12];
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
    in_stack_ffffff28 = in_stack_ffffff28 + (float)DOUBLE_00653924;
LAB_005bfd02:
    unaff_retaddr = in_stack_ffffff28 * (float)DOUBLE_0065391c;
  }
  else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
    in_stack_ffffff28 = (float)DOUBLE_00653914 - in_stack_ffffff28;
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
  if (in_stack_ffffff24 <= (float)DOUBLE_0065392c) {
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
    puVar6 = (undefined4 *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
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
    puVar6 = (undefined4 *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb00 * 0x10);
    puVar9 = puVar6 + (uint)bVar11 * -2 + 1;
    *puVar6 = uStack_ac;
    puVar6 = (undefined4 *)((int)aCStack_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4);
    *puVar9 = *(undefined4 *)((int)aCStack_a8 + (uint)bVar11 * -8);
    puVar9[(uint)bVar11 * -2 + 1] = *puVar6;
    (puVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
  }
  if (*(int *)((int)in_stack_00000004 + 0x2a8c) == 1) {
    fStack_b8 = (*(float *)((int)in_stack_00000004 + 0x1fbf0) +
                *(float *)((int)in_stack_00000004 + 0x1fc10)) * (float)DOUBLE_00653934;
    in_stack_ffffff44 = 0.0;
    in_stack_00000018 = 0.6;
    if (fStack_b8 < 0.0) {
      in_stack_ffffff44 =
           ((fStack_b8 + FLOAT_0065393c) / (DAT_00663770 + FLOAT_0065393c)) * FLOAT_00653940;
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
      *(undefined4 *)((int)&local_38 + (uint)bVar11 * -8 + 4) =
           *(undefined4 *)(auStack_58 + (uint)bVar11 * -8 + 4);
      *pfVar8 = afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
      pfVar8[(uint)bVar11 * -2 + 1] =
           (afStack_4c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + -1)[(uint)bVar11 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCVar13,pCVar15,fVar5,(int)bone_index,pcVar14);
    }
    core_stranger_cpp_CStranger_FUN_005c02b0();
    pcVar14 = (code *)0x5c004b;
    core_stranger_cpp_CStranger_FUN_005c02b0();
    puVar6 = (undefined4 *)((int)in_stack_00000004 + 0x808 + DAT_03f6bb04 * 0x10);
    puVar9 = (undefined4 *)(DAT_03f6bae4 * 0x10 + 0x808 + (int)in_stack_00000004);
    puVar10 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar6 = *puVar9;
    *puVar10 = *puVar7;
    puVar10[(uint)bVar11 * -2 + 1] = puVar7[(uint)bVar11 * -2 + 1];
    (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    puVar6 = (undefined4 *)(DAT_03f6bb00 * 0x10 + 0x808 + (int)in_stack_00000004);
    puVar9 = (undefined4 *)((int)in_stack_00000004 + 0x808 + DAT_03f6bae0 * 0x10);
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


// Assembly code:
// 005bfb60: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bfb60
// 005bfb61: PUSH ESI
// 005bfb62: PUSH EDI
// 005bfb63: PUSH EBP
// 005bfb64: MOV EBP,ESP
// 005bfb66: SUB ESP,0xf4
// 005bfb6c: AND ESP,0xfffffff8
// 005bfb6f: MOV EBX,dword ptr [EBP + 0x14]
// 005bfb72: MOV EDX,dword ptr [EBX + 0x2a8c]
// 005bfb78: TEST EDX,EDX
// 005bfb7a: JL 0x005bfb81
//   XREF to: 005bfb81 (CONDITIONAL_JUMP)
// 005bfb7c: CMP EDX,0x11
// 005bfb7f: JL 0x005bfba4
//   XREF to: 005bfba4 (CONDITIONAL_JUMP)
// 005bfb81: MOV ESI,0x6538c4
//   Label: LAB_005bfb81
//   XREF to: 006538c4 (DATA)
// 005bfb86: MOV EDI,0xa85
// 005bfb8b: PUSH 0x6538d9
//   XREF to: 006538d9 (DATA)
// 005bfb90: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005bfb96: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005bfb9c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005bfba1: ADD ESP,0x4
// 005bfba4: MOV dword ptr [ESP + 0x10],0x3f800000
//   Label: LAB_005bfba4
// 005bfbac: MOV EAX,dword ptr [EBX + 0x2a8c]
// 005bfbb2: SHL EAX,0x3
// 005bfbb5: MOV ESI,EAX
// 005bfbb7: SHL EAX,0x3
// 005bfbba: SUB EAX,ESI
// 005bfbbc: CMP dword ptr [EBX + EAX*0x1 + 0x262c],0x0
// 005bfbc4: JNZ 0x005bfbd0
//   XREF to: 005bfbd0 (CONDITIONAL_JUMP)
// 005bfbc6: MOV EAX,dword ptr [EBX + 0x2a90]
// 005bfbcc: MOV dword ptr [ESP + 0x10],EAX
// 005bfbd0: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_005bfbd0
// 005bfbd6: SHL EAX,0x3
// 005bfbd9: MOV ESI,EAX
// 005bfbdb: SHL EAX,0x3
// 005bfbde: SUB EAX,ESI
// 005bfbe0: CMP dword ptr [EBX + EAX*0x1 + 0x2630],0x0
// 005bfbe8: JNZ 0x005bfbfc
//   XREF to: 005bfbfc (CONDITIONAL_JUMP)
// 005bfbea: FLD float ptr [EBX + 0x2a90]
// 005bfbf0: FLD1
// 005bfbf2: FSUBRP
// 005bfbf4: FMUL float ptr [ESP + 0x10]
// 005bfbf8: FSTP float ptr [ESP + 0x10]
// 005bfbfc: PUSH 0x28
//   Label: LAB_005bfbfc
// 005bfbfe: LEA ESI,[EBX + 0x158]
// 005bfc04: PUSH ESI
// 005bfc05: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bfc0a: MOV dword ptr [ESP + 0xe0],EAX
// 005bfc11: ADD ESP,0x8
// 005bfc14: PUSH 0x29
// 005bfc16: PUSH ESI
// 005bfc17: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bfc1c: MOV dword ptr [ESP + 0xf8],EAX
// 005bfc23: FLD float ptr [ESP + 0xf8]
// 005bfc2a: ADD ESP,0x8
// 005bfc2d: PUSH 0x24
// 005bfc2f: FADD float ptr [ESP + 0xdc]
// 005bfc36: PUSH ESI
// 005bfc37: FSTP float ptr [ESP + 0xe0]
// 005bfc3e: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bfc43: MOV dword ptr [ESP + 0xf8],EAX
// 005bfc4a: FLD float ptr [ESP + 0xf8]
// 005bfc51: ADD ESP,0x8
// 005bfc54: PUSH 0x22
// 005bfc56: FADD float ptr [ESP + 0xdc]
// 005bfc5d: PUSH ESI
// 005bfc5e: FSTP float ptr [ESP + 0xe0]
// 005bfc65: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bfc6a: MOV dword ptr [ESP + 0xf8],EAX
// 005bfc71: FLD float ptr [ESP + 0xf8]
// 005bfc78: ADD ESP,0x8
// 005bfc7b: FADD float ptr [ESP + 0xd8]
// 005bfc82: FLD1
// 005bfc84: FSUBRP
// 005bfc86: FLD float ptr [ESP + 0x10]
// 005bfc8a: FXCH
// 005bfc8c: FMUL ST1
// 005bfc8e: FLDZ
// 005bfc90: FXCH
// 005bfc92: FSTP ST2
// 005bfc94: FXCH
// 005bfc96: FSTP float ptr [ESP + 0x10]
// 005bfc9a: FCOMP float ptr [ESP + 0x10]
// 005bfc9e: FNSTSW AX
// 005bfca0: SAHF
// 005bfca1: JBE 0x005bfca9
//   XREF to: 005bfca9 (CONDITIONAL_JUMP)
// 005bfca3: XOR ESI,ESI
// 005bfca5: MOV dword ptr [ESP + 0x10],ESI
// 005bfca9: CMP dword ptr [EBX + 0x2a8c],0xe
//   Label: LAB_005bfca9
// 005bfcb0: JNZ 0x005bfd3a
//   XREF to: 005bfd3a (CONDITIONAL_JUMP)
// 005bfcb6: LEA ESI,[EBX + 0x158]
// 005bfcbc: PUSH ESI
// 005bfcbd: CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 005bfcc2: MOV dword ptr [ESP + 0xf4],EAX
// 005bfcc9: FLD float ptr [ESP + 0xf4]
// 005bfcd0: ADD ESP,0x4
// 005bfcd3: MOV EAX,0x3f800000
// 005bfcd8: PUSH ESI
// 005bfcd9: FSTP float ptr [ESP + 0x18]
// 005bfcdd: MOV dword ptr [ESP + 0xf0],EAX
// 005bfce4: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bfce9: MOV EAX,dword ptr [EAX + 0x24]
// 005bfcec: ADD ESP,0x4
// 005bfcef: CMP EAX,0x17
// 005bfcf2: JNZ 0x005c0183
//   XREF to: 005c0183 (CONDITIONAL_JUMP)
// 005bfcf8: FLD float ptr [ESP + 0x14]
//   Label: LAB_005bfcf8
// 005bfcfc: FADD double ptr [0x00653924]
//   XREF to: 00653924 (READ)
// 005bfd02: FMUL double ptr [0x0065391c]
//   Label: LAB_005bfd02
//   XREF to: 0065391c (READ)
// 005bfd08: FSTP float ptr [ESP + 0xec]
// 005bfd0f: CMP dword ptr [ESP + 0xec],0x3f800000
//   Label: LAB_005bfd0f
// 005bfd1a: JLE 0x005c01aa
//   XREF to: 005c01aa (CONDITIONAL_JUMP)
// 005bfd20: MOV dword ptr [ESP + 0xec],0x3f800000
// 005bfd2b: FLD float ptr [ESP + 0x10]
//   Label: LAB_005bfd2b
// 005bfd2f: FMUL float ptr [ESP + 0xec]
// 005bfd36: FSTP float ptr [ESP + 0x10]
// 005bfd3a: FLD float ptr [ESP + 0x10]
//   Label: LAB_005bfd3a
// 005bfd3e: FST double ptr [ESP]
// 005bfd41: FCOMP double ptr [0x0065392c]
//   XREF to: 0065392c (READ)
// 005bfd47: FNSTSW AX
// 005bfd49: SAHF
// 005bfd4a: JBE 0x005c017c
//   XREF to: 005c017c (CONDITIONAL_JUMP)
// 005bfd50: FLD1
// 005bfd52: FCOMP double ptr [ESP]
// 005bfd55: FNSTSW AX
// 005bfd57: SAHF
// 005bfd58: JNC 0x005bfd62
//   XREF to: 005bfd62 (CONDITIONAL_JUMP)
// 005bfd5a: MOV dword ptr [ESP + 0x10],0x3f800000
// 005bfd62: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_005bfd62
// 005bfd68: SHL EAX,0x3
// 005bfd6b: MOV ESI,EAX
// 005bfd6d: SHL EAX,0x3
// 005bfd70: SUB EAX,ESI
// 005bfd72: MOV ESI,EAX
// 005bfd74: LEA EAX,[EBX + 0x262c]
// 005bfd7a: ADD EAX,ESI
// 005bfd7c: PUSH 0x1
// 005bfd7e: ADD EAX,0x8
// 005bfd81: PUSH EAX
// 005bfd82: LEA ESI,[EBX + 0x158]
// 005bfd88: PUSH ESI
// 005bfd89: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005bfd8e: ADD ESP,0x4
// 005bfd91: PUSH EAX
// 005bfd92: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005bfd97: ADD ESP,0xc
// 005bfd9a: PUSH dword ptr [EBX + 0x2a90]
// 005bfda0: PUSH EAX
// 005bfda1: PUSH ESI
// 005bfda2: MOV dword ptr [ESP + 0xf4],EAX
// 005bfda9: CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 005bfdae: MOV dword ptr [ESP + 0xfc],EAX
// 005bfdb5: FLD float ptr [ESP + 0xfc]
// 005bfdbc: ADD ESP,0xc
// 005bfdbf: MOV EAX,dword ptr [EBX + 0x2a8c]
// 005bfdc5: FSTP float ptr [ESP + 0xe4]
// 005bfdcc: CMP EAX,0x9
// 005bfdcf: JNZ 0x005bfe53
//   XREF to: 005bfe53 (CONDITIONAL_JUMP)
// 005bfdd5: FLD float ptr [EBX + 0x2a90]
// 005bfddb: FLD1
// 005bfddd: FCOMPP
// 005bfddf: FNSTSW AX
// 005bfde1: SAHF
// 005bfde2: JA 0x005bfe53
//   XREF to: 005bfe53 (CONDITIONAL_JUMP)
// 005bfde4: CMP dword ptr [EBX + 0x1fc34],0x0
// 005bfdeb: JZ 0x005bfe53
//   XREF to: 005bfe53 (CONDITIONAL_JUMP)
// 005bfded: PUSH 0x1
// 005bfdef: LEA EAX,[EBX + 0x2864]
// 005bfdf5: PUSH EAX
// 005bfdf6: PUSH ESI
// 005bfdf7: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005bfdfc: ADD ESP,0x4
// 005bfdff: PUSH EAX
// 005bfe00: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005bfe05: ADD ESP,0xc
// 005bfe08: PUSH 0x3f800000
// 005bfe0d: MOV EDI,EAX
// 005bfe0f: PUSH 0x0
// 005bfe11: MOV dword ptr [ESP + 0xf0],EAX
// 005bfe18: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005bfe53: PUSH 0x59ddb0
//   Label: LAB_005bfe53
//   XREF to: 0059ddb0 (DATA)
// 005bfe58: MOV ECX,dword ptr [0x03f6bb10]
//   XREF to: 03f6bb10 (READ)
// 005bfe5e: PUSH ECX
// 005bfe5f: PUSH dword ptr [ESP + 0x18]
// 005bfe63: MOV ESI,dword ptr [ESP + 0xf4]
// 005bfe6a: PUSH dword ptr [ESP + 0xf0]
// 005bfe71: PUSH ESI
// 005bfe72: LEA EAX,[EBX + 0x158]
// 005bfe78: PUSH EAX
// 005bfe79: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 005bfe7e: MOV EDI,dword ptr [EBX + 0x2a8c]
// 005bfe84: ADD ESP,0x18
// 005bfe87: TEST EDI,EDI
// 005bfe89: JNZ 0x005bff21
//   XREF to: 005bff21 (CONDITIONAL_JUMP)
// 005bfe8f: MOV EAX,[0x03f6bae4]
//   XREF to: 03f6bae4 (READ)
// 005bfe94: LEA ESI,[EBX + 0x808]
// 005bfe9a: SHL EAX,0x4
// 005bfe9d: ADD EAX,ESI
// 005bfe9f: PUSH dword ptr [EBX + 0x2a90]
// 005bfea5: PUSH EAX
// 005bfea6: MOV EAX,[0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005bfeab: SHL EAX,0x4
// 005bfeae: ADD EAX,ESI
// 005bfeb0: PUSH EAX
// 005bfeb1: MOV dword ptr [ESP + 0xe4],ESI
// 005bfeb8: LEA ESI,[ESP + 0x54]
// 005bfebc: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005bfec1: MOV EAX,[0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005bfec6: SHL EAX,0x4
// 005bfec9: LEA ESI,[ESP + 0x54]
// 005bfecd: LEA EDI,[EBX + EAX*0x1 + 0x808]
// 005bfed4: ADD ESP,0xc
// 005bfed7: MOVSD ES:EDI,ESI
// 005bfed8: MOVSD ES:EDI,ESI
// 005bfed9: MOVSD ES:EDI,ESI
// 005bfeda: MOVSD ES:EDI,ESI
// 005bfedb: MOV EAX,[0x03f6bae0]
//   XREF to: 03f6bae0 (READ)
// 005bfee0: MOV ESI,dword ptr [ESP + 0xd8]
// 005bfee7: SHL EAX,0x4
// 005bfeea: ADD EAX,ESI
// 005bfeec: PUSH dword ptr [EBX + 0x2a90]
// 005bfef2: PUSH EAX
// 005bfef3: MOV EAX,[0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005bfef8: SHL EAX,0x4
// 005bfefb: ADD EAX,ESI
// 005bfefd: PUSH EAX
// 005bfefe: LEA ESI,[ESP + 0x24]
// 005bff02: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005bff07: MOV EAX,[0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005bff0c: SHL EAX,0x4
// 005bff0f: LEA ESI,[ESP + 0x24]
// 005bff13: LEA EDI,[EBX + EAX*0x1 + 0x808]
// 005bff1a: ADD ESP,0xc
// 005bff1d: MOVSD ES:EDI,ESI
// 005bff1e: MOVSD ES:EDI,ESI
// 005bff1f: MOVSD ES:EDI,ESI
// 005bff20: MOVSD ES:EDI,ESI
// 005bff21: CMP dword ptr [EBX + 0x2a8c],0x1
//   Label: LAB_005bff21
// 005bff28: JNZ 0x005c0094
//   XREF to: 005c0094 (CONDITIONAL_JUMP)
// 005bff2e: FLD float ptr [EBX + 0x1fbf0]
// 005bff34: FADD float ptr [EBX + 0x1fc10]
// 005bff3a: FMUL double ptr [0x00653934]
//   XREF to: 00653934 (READ)
// 005bff40: MOV ECX,0x3e860a92
// 005bff45: XOR EDX,EDX
// 005bff47: MOV ESI,0x3f19999a
// 005bff4c: MOV dword ptr [ESP + 0x8],EDX
// 005bff50: MOV dword ptr [ESP + 0xe0],ECX
// 005bff57: MOV dword ptr [ESP + 0xdc],ESI
// 005bff5e: FST float ptr [ESP + 0xc]
// 005bff62: FLDZ
// 005bff64: FCOMPP
// 005bff66: FNSTSW AX
// 005bff68: SAHF
// 005bff69: JBE 0x005bff8b
//   XREF to: 005bff8b (CONDITIONAL_JUMP)
// 005bff6b: FLD float ptr [0x0065393c]
//   XREF to: 0065393c (READ)
// 005bff71: FLD float ptr [ESP + 0xc]
// 005bff75: FADD ST0,ST1
// 005bff77: FLD float ptr [0x00663770]
//   XREF to: 00663770 (READ)
// 005bff7d: FADDP ST2,ST0
// 005bff7f: FDIVRP
// 005bff81: FMUL float ptr [0x00653940]
//   XREF to: 00653940 (READ)
// 005bff87: FSTP float ptr [ESP + 0x8]
// 005bff8b: FLD float ptr [ESP + 0xc]
//   Label: LAB_005bff8b
// 005bff8f: FLDZ
// 005bff91: FCOMPP
// 005bff93: FNSTSW AX
// 005bff95: SAHF
// 005bff96: JNC 0x005bffba
//   XREF to: 005bffba (CONDITIONAL_JUMP)
// 005bff98: FLD float ptr [ESP + 0xe0]
// 005bff9f: FLD float ptr [ESP + 0xc]
// 005bffa3: FSUB ST0,ST1
// 005bffa5: FLD float ptr [0x00663774]
//   XREF to: 00663774 (READ)
// 005bffab: FSUBRP ST2,ST0
// 005bffad: FDIVRP
// 005bffaf: FMUL float ptr [ESP + 0xdc]
// 005bffb6: FSTP float ptr [ESP + 0x8]
// 005bffba: PUSH 0x3
//   Label: LAB_005bffba
// 005bffbc: PUSH EBX
// 005bffbd: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005bffc2: MOV dword ptr [ESP + 0xf8],EAX
// 005bffc9: FLD float ptr [ESP + 0xf8]
// 005bffd0: FLD1
// 005bffd2: FSUBRP
// 005bffd4: ADD ESP,0x8
// 005bffd7: FMUL float ptr [ESP + 0x10]
// 005bffdb: FMUL float ptr [ESP + 0x8]
// 005bffdf: FST float ptr [ESP + 0x8]
// 005bffe3: FLDZ
// 005bffe5: FCOMPP
// 005bffe7: FNSTSW AX
// 005bffe9: SAHF
// 005bffea: JNC 0x005c0038
//   XREF to: 005c0038 (CONDITIONAL_JUMP)
// 005bffec: PUSH 0x5baee0
//   XREF to: 005baee0 (DATA)
// 005bfff1: MOV EDI,dword ptr [0x03f6bb10]
//   XREF to: 03f6bb10 (READ)
// 005bfff7: PUSH EDI
// 005bfff8: PUSH dword ptr [ESP + 0x10]
// 005bfffc: LEA ESI,[ESP + 0x84]
// 005c0003: PUSH dword ptr [ESP + 0x18]
// 005c0007: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005c000c: ADD ESP,0x4
// 005c000f: LEA EAX,[ESP + 0xa4]
// 005c0016: LEA EDI,[ESP + 0xa4]
// 005c001d: PUSH EAX
// 005c001e: LEA EAX,[EBX + 0x158]
// 005c0024: LEA ESI,[ESP + 0x88]
// 005c002b: PUSH EAX
// 005c002c: MOVSD ES:EDI,ESI
// 005c002d: MOVSD ES:EDI,ESI
// 005c002e: MOVSD ES:EDI,ESI
// 005c002f: MOVSD ES:EDI,ESI
// 005c0030: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005c0035: ADD ESP,0x14
// 005c0038: PUSH 0x0
//   Label: LAB_005c0038
// 005c003a: PUSH EBX
// 005c003b: CALL core_stranger.cpp_CStranger_FUN_005c02b0
//   XREF to: 005c02b0 (UNCONDITIONAL_CALL)
// 005c0040: ADD ESP,0x8
// 005c0043: PUSH 0x1
// 005c0045: PUSH EBX
// 005c0046: CALL core_stranger.cpp_CStranger_FUN_005c02b0
//   XREF to: 005c02b0 (UNCONDITIONAL_CALL)
// 005c004b: MOV EAX,[0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005c0050: MOV ESI,dword ptr [0x03f6bae4]
//   XREF to: 03f6bae4 (READ)
// 005c0056: SHL EAX,0x4
// 005c0059: SHL ESI,0x4
// 005c005c: LEA EDI,[EBX + EAX*0x1 + 0x808]
// 005c0063: LEA ESI,[ESI + EBX*0x1 + 0x808]
// 005c006a: MOVSD ES:EDI,ESI
// 005c006b: MOVSD ES:EDI,ESI
// 005c006c: MOVSD ES:EDI,ESI
// 005c006d: MOVSD ES:EDI,ESI
// 005c006e: MOV ESI,dword ptr [0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005c0074: MOV EAX,[0x03f6bae0]
//   XREF to: 03f6bae0 (READ)
// 005c0079: SHL ESI,0x4
// 005c007c: SHL EAX,0x4
// 005c007f: LEA EDI,[ESI + EBX*0x1 + 0x808]
// 005c0086: LEA ESI,[EBX + EAX*0x1 + 0x808]
// 005c008d: ADD ESP,0x8
// 005c0090: MOVSD ES:EDI,ESI
// 005c0091: MOVSD ES:EDI,ESI
// 005c0092: MOVSD ES:EDI,ESI
// 005c0093: MOVSD ES:EDI,ESI
// 005c0094: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_005c0094
// 005c009a: CMP EAX,0x3
// 005c009d: JNZ 0x005c01ca
//   XREF to: 005c01ca (CONDITIONAL_JUMP)
// 005c00a3: PUSH 0x3
//   Label: LAB_005c00a3
// 005c00a5: PUSH EBX
// 005c00a6: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c00ab: MOV dword ptr [ESP + 0xf8],EAX
// 005c00b2: FLD float ptr [ESP + 0xf8]
// 005c00b9: FLD1
// 005c00bb: FSUBRP
// 005c00bd: ADD ESP,0x8
// 005c00c0: FMUL float ptr [ESP + 0x10]
// 005c00c4: LEA ESI,[ESP + 0x88]
// 005c00cb: PUSH dword ptr [EBX + 0x1fbf0]
// 005c00d1: FSTP float ptr [ESP + 0xd4]
// 005c00d8: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005c00dd: ADD ESP,0x4
// 005c00e0: PUSH 0x5baee0
//   XREF to: 005baee0 (DATA)
// 005c00e5: MOV EDX,dword ptr [0x03f6bb10]
//   XREF to: 03f6bb10 (READ)
// 005c00eb: PUSH EDX
// 005c00ec: LEA EAX,[ESP + 0x30]
// 005c00f0: PUSH dword ptr [ESP + 0xd8]
// 005c00f7: LEA EDI,[ESP + 0x34]
// 005c00fb: PUSH EAX
// 005c00fc: LEA EAX,[EBX + 0x158]
// 005c0102: LEA ESI,[ESP + 0x98]
// 005c0109: PUSH EAX
// 005c010a: MOVSD ES:EDI,ESI
// 005c010b: MOVSD ES:EDI,ESI
// 005c010c: MOVSD ES:EDI,ESI
// 005c010d: MOVSD ES:EDI,ESI
// 005c010e: MOV dword ptr [ESP + 0xec],EAX
// 005c0115: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005c011a: ADD ESP,0x14
// 005c011d: LEA ESI,[ESP + 0xa8]
// 005c0124: PUSH dword ptr [EBX + 0x1fbf4]
// 005c012a: LEA EDI,[ESP + 0xbc]
// 005c0131: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005c0136: LEA ESI,[ESP + 0xac]
// 005c013d: ADD ESP,0x4
// 005c0140: MOVSD ES:EDI,ESI
// 005c0141: MOVSD ES:EDI,ESI
// 005c0142: MOVSD ES:EDI,ESI
// 005c0143: MOVSD ES:EDI,ESI
// 005c0144: PUSH 0x5baee0
//   XREF to: 005baee0 (DATA)
// 005c0149: MOV ESI,dword ptr [0x03f6bb10]
//   XREF to: 03f6bb10 (READ)
// 005c014f: PUSH ESI
// 005c0150: LEA EAX,[ESP + 0xc0]
// 005c0157: PUSH dword ptr [ESP + 0xd8]
// 005c015e: PUSH EAX
// 005c015f: MOV EDI,dword ptr [ESP + 0xe8]
// 005c0166: PUSH EDI
// 005c0167: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005c016c: ADD ESP,0x14
// 005c016f: CMP dword ptr [EBX + 0x2a8c],0xe
// 005c0176: JZ 0x005c0207
//   XREF to: 005c0207 (CONDITIONAL_JUMP)
// 005c017c: MOV ESP,EBP
//   Label: LAB_005c017c
// 005c017e: POP EBP
// 005c017f: POP EDI
// 005c0180: POP ESI
// 005c0181: POP EBX
// 005c0182: RET
// 005c0183: CMP EAX,0x18
//   Label: LAB_005c0183
// 005c0186: JZ 0x005bfcf8
//   XREF to: 005bfcf8 (CONDITIONAL_JUMP)
// 005c018c: CMP EAX,0x19
// 005c018f: JNZ 0x005c01a0
//   XREF to: 005c01a0 (CONDITIONAL_JUMP)
// 005c0191: FLD float ptr [ESP + 0x14]
//   Label: LAB_005c0191
// 005c0195: FSUBR double ptr [0x00653914]
//   XREF to: 00653914 (READ)
// 005c019b: JMP 0x005bfd02
//   XREF to: 005bfd02 (UNCONDITIONAL_JUMP)
// 005c01a0: CMP EAX,0x1a
//   Label: LAB_005c01a0
// 005c01a3: JZ 0x005c0191
//   XREF to: 005c0191 (CONDITIONAL_JUMP)
// 005c01a5: JMP 0x005bfd0f
//   XREF to: 005bfd0f (UNCONDITIONAL_JUMP)
// 005c01aa: FLDZ
//   Label: LAB_005c01aa
// 005c01ac: FCOMP float ptr [ESP + 0xec]
// 005c01b3: FNSTSW AX
// 005c01b5: SAHF
// 005c01b6: JBE 0x005bfd2b
//   XREF to: 005bfd2b (CONDITIONAL_JUMP)
// 005c01bc: XOR ECX,ECX
// 005c01be: MOV dword ptr [ESP + 0xec],ECX
// 005c01c5: JMP 0x005bfd2b
//   XREF to: 005bfd2b (UNCONDITIONAL_JUMP)
// 005c01ca: CMP EAX,0x4
//   Label: LAB_005c01ca
// 005c01cd: JZ 0x005c00a3
//   XREF to: 005c00a3 (CONDITIONAL_JUMP)
// 005c01d3: CMP EAX,0x9
// 005c01d6: JZ 0x005c00a3
//   XREF to: 005c00a3 (CONDITIONAL_JUMP)
// 005c01dc: CMP EAX,0x6
// 005c01df: JZ 0x005c00a3
//   XREF to: 005c00a3 (CONDITIONAL_JUMP)
// 005c01e5: CMP EAX,0x7
// 005c01e8: JZ 0x005c00a3
//   XREF to: 005c00a3 (CONDITIONAL_JUMP)
// 005c01ee: CMP EAX,0x8
// 005c01f1: JZ 0x005c00a3
//   XREF to: 005c00a3 (CONDITIONAL_JUMP)
// 005c01f7: CMP dword ptr [EBX + 0x2a8c],0xe
// 005c01fe: JZ 0x005c0207
//   XREF to: 005c0207 (CONDITIONAL_JUMP)
// 005c0200: MOV ESP,EBP
// 005c0202: POP EBP
// 005c0203: POP EDI
// 005c0204: POP ESI
// 005c0205: POP EBX
// 005c0206: RET
// 005c0207: FLD float ptr [EBX + 0x1fcb0]
//   Label: LAB_005c0207
// 005c020d: FDIV float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005c0213: FLD1
// 005c0215: FPATAN
// 005c0217: LEA ESI,[ESP + 0x38]
// 005c021b: FSTP float ptr [ESP + 0xd4]
// 005c0222: PUSH dword ptr [ESP + 0xd4]
// 005c0229: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005c022e: ADD ESP,0x4
// 005c0231: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005c0236: MOV EDX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005c023c: PUSH EDX
// 005c023d: LEA EAX,[ESP + 0x70]
// 005c0241: PUSH 0x3f800000
// 005c0246: LEA EDI,[ESP + 0x74]
// 005c024a: PUSH EAX
// 005c024b: ADD EBX,0x158
// 005c0251: LEA ESI,[ESP + 0x48]
// 005c0255: PUSH EBX
// 005c0256: MOVSD ES:EDI,ESI
// 005c0257: MOVSD ES:EDI,ESI
// 005c0258: MOVSD ES:EDI,ESI
// 005c0259: MOVSD ES:EDI,ESI
// 005c025a: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005c025f: ADD ESP,0x14
// 005c0262: LEA ESI,[ESP + 0x58]
// 005c0266: FLD float ptr [ESP + 0xd4]
// 005c026d: SUB ESP,0x4
// 005c0270: FCHS
// 005c0272: FSTP float ptr [ESP]
// 005c0275: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005c027a: ADD ESP,0x4
// 005c027d: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005c0282: MOV ECX,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005c0288: PUSH ECX
// 005c0289: LEA EAX,[ESP + 0x70]
// 005c028d: PUSH 0x3f800000
// 005c0292: PUSH EAX
// 005c0293: LEA EDI,[ESP + 0x78]
// 005c0297: LEA ESI,[ESP + 0x68]
// 005c029b: PUSH EBX
// 005c029c: MOVSD ES:EDI,ESI
// 005c029d: MOVSD ES:EDI,ESI
// 005c029e: MOVSD ES:EDI,ESI
// 005c029f: MOVSD ES:EDI,ESI
// 005c02a0: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005c02a5: ADD ESP,0x14
// 005c02a8: MOV ESP,EBP
// 005c02aa: POP EBP
// 005c02ab: POP EDI
// 005c02ac: POP ESI
// 005c02ad: POP EBX
// 005c02ae: RET
