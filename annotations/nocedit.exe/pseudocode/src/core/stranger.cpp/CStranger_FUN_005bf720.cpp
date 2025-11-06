// Name: core_stranger.cpp_CStranger_FUN_005bf720
// Address: 005bf720
// Address Range: [[005bf720, 005bf7fe]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bf720()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be5ce [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00653894 = 40
//   undefined4 DAT_03f6bacc
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
//   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005bf720(CStranger* param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005bf720(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  int in_stack_00000004;
  SBoneTransformData *in_stack_0000001c;
  float blend_weight;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffe534;
  undefined1 auStack_1ac0 [6808];
  float afStack_28 [7];
  
  bVar2 = 0;
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            (this_ptr,(SBoneTransformData *)&stack0xffffe528);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,*(int *)(in_stack_00000004 + 0x1fc84),
             *(float *)(in_stack_00000004 + 0x1fc54) * (float)DOUBLE_00653894,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                     ((CVector3f *)(afStack_28 + 5),
                      (CQuaternion4f *)(DAT_03f6bacc * 0x10 + in_stack_00000004 + 0x808));
  bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  blend_weight = -NAN;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-pCVar1->y,1.0);
  auStack_1ac0._6804_4_ = afStack_28[3];
  afStack_28[(uint)bVar2 * -2] = afStack_28[(uint)bVar2 * -2 + 4];
  afStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
  (afStack_28 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (afStack_28 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr,(CQuaternion4f *)(auStack_1ac0 + 0x1a94),blend_weight,(int)bone_index,
             in_stack_ffffe534);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            (this_ptr,in_stack_0000001c);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
            (this_ptr,(SBoneTransformData *)auStack_1ac0);
  return;
}


// Assembly code:
// 005bf720: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bf720
// 005bf721: PUSH ESI
// 005bf722: PUSH EDI
// 005bf723: SUB ESP,0x1acc
// 005bf729: MOV ESI,dword ptr [ESP + 0x1adc]
//   XREF to: Stack[0x4] (READ)
// 005bf730: MOV EAX,ESP
// 005bf732: PUSH EAX
// 005bf733: LEA EBX,[ESI + 0x158]
// 005bf739: PUSH EBX
// 005bf73a: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 005bf73f: ADD ESP,0x8
// 005bf742: FLD float ptr [ESI + 0x1fc54]
// 005bf748: PUSH -0x1
// 005bf74a: FMUL double ptr [0x00653894]
//   XREF to: 00653894 (READ)
// 005bf750: SUB ESP,0x4
// 005bf753: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1ae0] (DATA)
// 005bf756: MOV EDX,dword ptr [ESI + 0x1fc84]
// 005bf75c: PUSH EDX
// 005bf75d: PUSH EBX
// 005bf75e: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)
// 005bf763: MOV EAX,[0x03f6bacc]
//   XREF to: 03f6bacc (READ)
// 005bf768: ADD ESI,0x808
// 005bf76e: SHL EAX,0x4
// 005bf771: ADD ESP,0x10
// 005bf774: ADD EAX,ESI
// 005bf776: PUSH EAX
// 005bf777: LEA EAX,[ESP + 0x1ac0]
//   XREF to: Stack[-0x1c] (DATA)
// 005bf77e: PUSH EAX
// 005bf77f: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 005bf784: ADD ESP,0x8
// 005bf787: LEA ESI,[ESP + 0x1aac]
//   XREF to: Stack[-0x2c] (DATA)
// 005bf78e: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf793: FLD float ptr [EAX + 0x4]
// 005bf796: PUSH -0x1
// 005bf798: FCHS
// 005bf79a: PUSH 0x3f800000
// 005bf79f: FSTP float ptr [ESP + 0x1ad4]
//   XREF to: Stack[-0x10] (WRITE)
// 005bf7a6: PUSH dword ptr [ESP + 0x1ad4]
//   XREF to: Stack[-0x10] (READ)
// 005bf7ad: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf7b2: ADD ESP,0x4
// 005bf7b5: LEA EAX,[ESP + 0x1aa8]
//   XREF to: Stack[-0x3c] (DATA)
// 005bf7bc: PUSH EAX
// 005bf7bd: LEA EDI,[ESP + 0x1aac]
//   XREF to: Stack[-0x3c] (DATA)
// 005bf7c4: LEA ESI,[ESP + 0x1abc]
//   XREF to: Stack[-0x2c] (DATA)
// 005bf7cb: PUSH EBX
// 005bf7cc: MOVSD ES:EDI,ESI
// 005bf7cd: MOVSD ES:EDI,ESI
// 005bf7ce: MOVSD ES:EDI,ESI
// 005bf7cf: MOVSD ES:EDI,ESI
// 005bf7d0: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf7d5: ADD ESP,0x14
// 005bf7d8: MOV ECX,dword ptr [ESP + 0x1ae0]
//   XREF to: Stack[0x8] (READ)
// 005bf7df: PUSH ECX
// 005bf7e0: PUSH EBX
// 005bf7e1: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 005bf7e6: ADD ESP,0x8
// 005bf7e9: MOV EAX,ESP
// 005bf7eb: PUSH EAX
// 005bf7ec: PUSH EBX
// 005bf7ed: CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
//   XREF to: 005a15e0 (UNCONDITIONAL_CALL)
// 005bf7f2: ADD ESP,0x8
// 005bf7f5: ADD ESP,0x1acc
// 005bf7fb: POP EDI
// 005bf7fc: POP ESI
// 005bf7fd: POP EBX
// 005bf7fe: RET
