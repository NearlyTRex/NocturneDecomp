// Name: core_motion.cpp_CallToFindMotionInSomethign2_FUN_0052dcb0
// Address: 0052dcb0
// Address Range: [[0052dcb0, 0052dcdc]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CallToFindMotionInSomethign2_FUN_0052dcb0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480 (005a0480) at 005a04a8 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460

#include "nocturne.h"

/* Signature: undefined1 core_motion.cpp_CallToFindMotionInSomethign2(undefined4 param_1, undefined4
   param_2) */

void core_motion_cpp_CallToFindMotionInSomethign2_FUN_0052dcb0(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *in_stack_00000004 = in_stack_00000008;
  if (*(char *)(in_stack_00000004 + 0xc) == '\0') {
    return;
  }
  uVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  *(undefined1 *)(in_stack_00000004 + 0xc) = 0;
  in_stack_00000004[1] = uVar1;
  return;
}


// Assembly code:
// 0052dcb0: PUSH EBX
//   Label: core_motion.cpp_CallToFindMotionInSomethign2_FUN_0052dcb0
// 0052dcb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052dcb5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052dcb9: MOV dword ptr [EBX],EAX
// 0052dcbb: CMP byte ptr [EBX + 0x30],0x0
// 0052dcbf: JNZ 0x0052dcc3
//   XREF to: 0052dcc3 (CONDITIONAL_JUMP)
// 0052dcc1: POP EBX
// 0052dcc2: RET
// 0052dcc3: PUSH 0x1
//   Label: LAB_0052dcc3
// 0052dcc5: LEA EAX,[EBX + 0x30]
// 0052dcc8: PUSH EAX
// 0052dcc9: MOV EDX,dword ptr [EBX]
// 0052dccb: PUSH EDX
// 0052dccc: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 0052dcd1: MOV byte ptr [EBX + 0x30],0x0
// 0052dcd5: ADD ESP,0xc
// 0052dcd8: MOV dword ptr [EBX + 0x4],EAX
// 0052dcdb: POP EBX
// 0052dcdc: RET
