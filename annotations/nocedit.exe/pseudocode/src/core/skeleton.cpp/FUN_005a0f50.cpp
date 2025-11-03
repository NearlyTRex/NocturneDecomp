// Name: core_skeleton.cpp_FUN_005a0f50
// Address: 005a0f50
// Address Range: [[005a0f50, 005a0fda]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a0f50()
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0d10

#include "nocturne.h"

CDeformableModelInstance * core_skeleton_cpp_FUN_005a0f50(void)

{
  CMotionController *in_stack_00000004;
  CDeformableModelInstance *in_stack_00000008;
  
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0d10(in_stack_00000008);
  return in_stack_00000008;
}


// Assembly code:
// 005a0f50: PUSH EBX
//   Label: core_skeleton.cpp_FUN_005a0f50
// 005a0f51: PUSH EDI
// 005a0f52: SUB ESP,0x8
// 005a0f55: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a0f59: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a0f5d: PUSH EDX
// 005a0f5e: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005a0f63: ADD ESP,0x4
// 005a0f66: IMUL EDX,dword ptr [ESP + 0x1c],0x54c
//   XREF to: Stack[0xc] (READ)
// 005a0f6e: ADD EAX,0x968
// 005a0f73: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a0f77: FLDZ
// 005a0f79: ADD EDX,EAX
// 005a0f7b: FCOMPP
// 005a0f7d: FNSTSW AX
// 005a0f7f: SAHF
// 005a0f80: JA 0x005a0fd1
//   XREF to: 005a0fd1 (CONDITIONAL_JUMP)
// 005a0f82: FLD float ptr [ESP + 0x24]
//   Label: LAB_005a0f82
//   XREF to: Stack[0x14] (READ)
// 005a0f86: FILD dword ptr [EDX + 0x64]
// 005a0f89: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 005a0f8d: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005a0f91: FNSTSW AX
// 005a0f93: SAHF
// 005a0f94: JBE 0x005a0f9e
//   XREF to: 005a0f9e (CONDITIONAL_JUMP)
// 005a0f96: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005a0f9a: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[0x14] (WRITE)
// 005a0f9e: FILD dword ptr [EDX + 0x60]
//   Label: LAB_005a0f9e
// 005a0fa1: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a0fa5: FADD ST0,ST1
// 005a0fa7: SUB ESP,0x4
// 005a0faa: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005a0fae: FXCH
// 005a0fb0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005a0fb3: FADDP
// 005a0fb5: SUB ESP,0x4
// 005a0fb8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a0fbb: PUSH EBX
// 005a0fbc: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005a0fc0: PUSH EDI
// 005a0fc1: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0d10
//   XREF to: 005a0d10 (UNCONDITIONAL_CALL)
// 005a0fc6: ADD ESP,0x10
// 005a0fc9: MOV EAX,EBX
// 005a0fcb: ADD ESP,0x8
// 005a0fce: POP EDI
// 005a0fcf: POP EBX
// 005a0fd0: RET
// 005a0fd1: PUSH ESI
//   Label: LAB_005a0fd1
// 005a0fd2: XOR ESI,ESI
// 005a0fd4: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[0x10] (WRITE)
// 005a0fd8: POP ESI
// 005a0fd9: JMP 0x005a0f82
//   XREF to: 005a0f82 (UNCONDITIONAL_JUMP)
