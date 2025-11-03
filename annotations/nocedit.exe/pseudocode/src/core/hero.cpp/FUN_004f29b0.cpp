// Name: core_hero.cpp_FUN_004f29b0
// Address: 004f29b0
// Address Range: [[004f29b0, 004f2a2d]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f29b0()
// Globals:
//   TerminatedCString s_GETGRABBED_0062ebc8
//   TerminatedCString s_STAND_0062ebd3
//   undefined4 DAT_0078a123
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bf40
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   core_motion.cpp_FUN_0052db90

#include "nocturne.h"

/* Signature: void actors_hero_hero.cpp_FUN_004f29b0(int param_1, int param_2) */

void core_hero_cpp_FUN_004f29b0(void)

{
  CMotionList *this_ptr;
  int iVar1;
  float fVar2;
  CCharacter *in_stack_00000004;
  
  if (((undefined *)(in_stack_00000004->base_actor).field6_0x68 == &DAT_0078a123) &&
     ((in_stack_00000004->model).model_ptr != (CDeformableModel *)0x0)) {
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         (&(in_stack_00000004->model).motion_controller);
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr);
    if (-1 < iVar1) {
      fVar2 = core_motion_cpp_CMotionController_FUN_0052dd20
                        (&(in_stack_00000004->model).motion_controller);
      if (0.0 < fVar2) {
        core_motion_cpp_FUN_0052db90();
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042bf40(in_stack_00000004);
  return;
}


// Assembly code:
// 004f29b0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f29b0
// 004f29b1: PUSH ESI
// 004f29b2: SUB ESP,0x4
// 004f29b5: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f29b9: CMP dword ptr [ESI + 0x68],0x78a123
//   XREF to: 0078a123 (DATA)
// 004f29c0: JNZ 0x004f2a1f
//   XREF to: 004f2a1f (CONDITIONAL_JUMP)
// 004f29c2: LEA EAX,[ESI + 0x158]
// 004f29c8: CMP dword ptr [EAX + 0x22b0],0x0
// 004f29cf: JZ 0x004f2a1f
//   XREF to: 004f2a1f (CONDITIONAL_JUMP)
// 004f29d1: PUSH 0x0
// 004f29d3: PUSH 0x62ebc8
//   XREF to: 0062ebc8 (DATA)
// 004f29d8: LEA EBX,[ESI + 0x158]
// 004f29de: PUSH EBX
// 004f29df: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004f29e4: ADD ESP,0x4
// 004f29e7: PUSH EAX
// 004f29e8: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 004f29ed: ADD ESP,0xc
// 004f29f0: TEST EAX,EAX
// 004f29f2: JL 0x004f2a1f
//   XREF to: 004f2a1f (CONDITIONAL_JUMP)
// 004f29f4: PUSH EAX
// 004f29f5: PUSH EBX
// 004f29f6: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f29fb: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004f29ff: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004f2a03: FLDZ
// 004f2a05: ADD ESP,0x8
// 004f2a08: FCOMPP
// 004f2a0a: FNSTSW AX
// 004f2a0c: SAHF
// 004f2a0d: JNC 0x004f2a1f
//   XREF to: 004f2a1f (CONDITIONAL_JUMP)
// 004f2a0f: PUSH 0x1
// 004f2a11: PUSH 0x62ebd3
//   XREF to: 0062ebd3 (DATA)
// 004f2a16: PUSH EBX
// 004f2a17: CALL core_motion.cpp_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 004f2a1c: ADD ESP,0xc
// 004f2a1f: PUSH ESI
//   Label: LAB_004f2a1f
// 004f2a20: CALL core_charactr.cpp_CCharacter_FUN_0042bf40
//   XREF to: 0042bf40 (UNCONDITIONAL_CALL)
// 004f2a25: ADD ESP,0x4
// 004f2a28: ADD ESP,0x4
// 004f2a2b: POP ESI
// 004f2a2c: POP EBX
// 004f2a2d: RET
