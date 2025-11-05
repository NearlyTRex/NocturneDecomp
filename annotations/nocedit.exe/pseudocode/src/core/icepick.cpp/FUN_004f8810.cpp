// Name: core_icepick.cpp_FUN_004f8810
// Address: 004f8810
// Address Range: [[004f8810, 004f8967]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8810()
// Cross-references:
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f83b7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shoot_0062f72b
//   double DOUBLE_0062f733 = 2
//   double DOUBLE_0062f73b = 3.14159265350000
//   double DOUBLE_0062f743 = 0.785398163375000
//   double DOUBLE_0062f74b = -0.785398163375000
//   undefined4 DAT_02db89b0
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f8810(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f8810(void)

{
  float fVar1;
  CMotionList *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000014;
  float afStackY_17fc [1517];
  float in_stack_ffffffd4;
  code *blend_callback;
  float local_20;
  float fStack_10;
  
  bVar3 = 0;
  if (*(int *)(in_stack_00000004 + 0x1fbf4) != 0) {
    if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
      fVar1 = *(float *)(in_stack_00000004 + 0x1fbfc) - in_stack_00000008 * (float)DOUBLE_0062f733;
      *(float *)(in_stack_00000004 + 0x1fbfc) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(in_stack_00000004 + 0x1fbfc) = 0;
      }
    }
    else {
      fVar1 = in_stack_00000008 * (float)DOUBLE_0062f733 + *(float *)(in_stack_00000004 + 0x1fbfc);
      *(float *)(in_stack_00000004 + 0x1fbfc) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(in_stack_00000004 + 0x1fbfc) = 0x3f800000;
      }
    }
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         ((CMotionController *)(in_stack_00000004 + 0x158));
    iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),iVar2,0.0,
               *(float *)(in_stack_00000004 + 0x1fbfc),DAT_02db89b0,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar1 = *(float *)(in_stack_00000004 + 0xbe54) * (float)DOUBLE_0062f73b * (float)DOUBLE_0062f733
            * in_stack_00000014 + *(float *)(in_stack_00000004 + 0x1fc00);
    *(float *)(in_stack_00000004 + 0x1fc00) = fVar1;
    if ((float)DOUBLE_0062f743 < fVar1) {
      *(undefined4 *)(in_stack_00000004 + 0x1fc00) = 0x3f490fdb;
    }
    if (*(float *)(in_stack_00000004 + 0x1fc00) < (float)DOUBLE_0062f74b) {
      *(undefined4 *)(in_stack_00000004 + 0x1fc00) = 0xbf490fdb;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fc00),in_stack_ffffffd4);
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fStack_10 = local_20;
    *(undefined4 *)(&stack0xfffffff4 + (uint)bVar3 * -8) =
         *(undefined4 *)(&stack0xffffffe4 + (uint)bVar3 * -8);
    iVar2 = DAT_02db89b0;
    *(undefined4 *)(&stack0xfffffff8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(undefined4 *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(undefined4 *)
     ((int)(&stack0xfffffff8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(undefined4 *)
          ((int)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
               (CQuaternion4f *)&stack0xfffffff0,*(float *)(in_stack_00000004 + 0x1fbfc),iVar2,
               blend_callback);
  }
  return;
}


// Assembly code:
// 004f8810: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f8810
// 004f8811: PUSH EBP
// 004f8812: SUB ESP,0x28
// 004f8815: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 004f8819: CMP dword ptr [EBX + 0x1fbf4],0x0
// 004f8820: JZ 0x004f8930
//   XREF to: 004f8930 (CONDITIONAL_JUMP)
// 004f8826: MOV ECX,dword ptr [EBX + 0x1fbd4]
// 004f882c: TEST ECX,ECX
// 004f882e: JNZ 0x004f8936
//   XREF to: 004f8936 (CONDITIONAL_JUMP)
// 004f8834: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 004f8838: FMUL double ptr [0x0062f733]
//   XREF to: 0062f733 (READ)
// 004f883e: FSUBR float ptr [EBX + 0x1fbfc]
// 004f8844: FST float ptr [EBX + 0x1fbfc]
// 004f884a: FLDZ
// 004f884c: FCOMPP
// 004f884e: FNSTSW AX
// 004f8850: SAHF
// 004f8851: JBE 0x004f8859
//   XREF to: 004f8859 (CONDITIONAL_JUMP)
// 004f8853: MOV dword ptr [EBX + 0x1fbfc],ECX
// 004f8859: PUSH EDI
//   Label: LAB_004f8859
// 004f885a: PUSH ESI
// 004f885b: PUSH 0x1
// 004f885d: PUSH 0x62f72b
//   XREF to: 0062f72b (DATA)
// 004f8862: LEA ESI,[EBX + 0x158]
// 004f8868: PUSH ESI
// 004f8869: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004f886e: ADD ESP,0x4
// 004f8871: PUSH EAX
// 004f8872: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 004f8877: ADD ESP,0xc
// 004f887a: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004f887f: MOV EDI,dword ptr [0x02db89b0]
//   XREF to: 02db89b0 (READ)
// 004f8885: PUSH EDI
// 004f8886: PUSH dword ptr [EBX + 0x1fbfc]
// 004f888c: PUSH 0x0
// 004f888e: PUSH EAX
// 004f888f: PUSH ESI
// 004f8890: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004f8895: FLD float ptr [EBX + 0xbe54]
// 004f889b: FMUL double ptr [0x0062f73b]
//   XREF to: 0062f73b (READ)
// 004f88a1: FMUL double ptr [0x0062f733]
//   XREF to: 0062f733 (READ)
// 004f88a7: ADD ESP,0x18
// 004f88aa: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 004f88ae: FADD float ptr [EBX + 0x1fc00]
// 004f88b4: FST float ptr [EBX + 0x1fc00]
// 004f88ba: FCOMP double ptr [0x0062f743]
//   XREF to: 0062f743 (READ)
// 004f88c0: FNSTSW AX
// 004f88c2: SAHF
// 004f88c3: JBE 0x004f88cf
//   XREF to: 004f88cf (CONDITIONAL_JUMP)
// 004f88c5: MOV dword ptr [EBX + 0x1fc00],0x3f490fdb
// 004f88cf: FLD float ptr [EBX + 0x1fc00]
//   Label: LAB_004f88cf
// 004f88d5: FCOMP double ptr [0x0062f74b]
//   XREF to: 0062f74b (READ)
// 004f88db: FNSTSW AX
// 004f88dd: SAHF
// 004f88de: JNC 0x004f88ea
//   XREF to: 004f88ea (CONDITIONAL_JUMP)
// 004f88e0: MOV dword ptr [EBX + 0x1fc00],0xbf490fdb
// 004f88ea: LEA ESI,[ESP + 0x8]
//   Label: LAB_004f88ea
//   XREF to: Stack[-0x30] (DATA)
// 004f88ee: PUSH dword ptr [EBX + 0x1fc00]
// 004f88f4: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 004f88f9: ADD ESP,0x4
// 004f88fc: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 004f8900: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004f8905: MOV EBP,dword ptr [0x02db89b0]
//   XREF to: 02db89b0 (READ)
// 004f890b: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x30] (DATA)
// 004f890f: PUSH EBP
// 004f8910: MOVSD ES:EDI,ESI
// 004f8911: MOVSD ES:EDI,ESI
// 004f8912: MOVSD ES:EDI,ESI
// 004f8913: MOVSD ES:EDI,ESI
// 004f8914: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x20] (DATA)
// 004f8918: PUSH dword ptr [EBX + 0x1fbfc]
// 004f891e: PUSH EAX
// 004f891f: ADD EBX,0x158
// 004f8925: PUSH EBX
// 004f8926: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 004f892b: ADD ESP,0x14
// 004f892e: POP ESI
// 004f892f: POP EDI
// 004f8930: ADD ESP,0x28
//   Label: LAB_004f8930
// 004f8933: POP EBP
// 004f8934: POP EBX
// 004f8935: RET
// 004f8936: FLD float ptr [ESP + 0x38]
//   Label: LAB_004f8936
//   XREF to: Stack[0x8] (READ)
// 004f893a: FMUL double ptr [0x0062f733]
//   XREF to: 0062f733 (READ)
// 004f8940: FADD float ptr [EBX + 0x1fbfc]
// 004f8946: FST float ptr [EBX + 0x1fbfc]
// 004f894c: FLD1
// 004f894e: FCOMPP
// 004f8950: FNSTSW AX
// 004f8952: SAHF
// 004f8953: JNC 0x004f8859
//   XREF to: 004f8859 (CONDITIONAL_JUMP)
// 004f8959: MOV dword ptr [EBX + 0x1fbfc],0x3f800000
// 004f8963: JMP 0x004f8859
//   XREF to: 004f8859 (UNCONDITIONAL_JUMP)
