// Name: core_baron.cpp_FUN_00413a00
// Address: 00413a00
// Address Range: [[00413a00, 00413a68]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00413a00()
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00412fba [UNCONDITIONAL_CALL]
// Function calls:
//   core_baron.cpp_FUN_004136b0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_baron.cpp_FUN_00413a00(undefined4 param_1, undefined4 param_2)
    */

void core_baron_cpp_FUN_00413a00(void)

{
  uint uVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      ((CMotionController *)(in_stack_00000004 + 0x158));
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_FUN_004136b0();
      }
      else if (uVar1 == 0x6e) {
        *(undefined4 *)(in_stack_00000004 + 0x1fccc) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x1fcd0) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x1fcac) = 0;
      }
    }
  } while (0.0 < in_stack_00000008);
  return;
}


// Assembly code:
// 00413a00: PUSH EBX
//   Label: core_baron.cpp_FUN_00413a00
// 00413a01: PUSH ESI
// 00413a02: PUSH EBP
// 00413a03: MOV EBP,ESP
// 00413a05: AND ESP,0xfffffff8
// 00413a08: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00413a0b: LEA ESI,[EBX + 0x158]
// 00413a11: LEA EAX,[EBP + 0x14]
//   Label: LAB_00413a11
//   XREF to: Stack[0x8] (DATA)
// 00413a14: PUSH EAX
// 00413a15: PUSH ESI
// 00413a16: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00413a1b: ADD ESP,0x8
// 00413a1e: CMP EAX,0x64
// 00413a21: JNC 0x00413a60
//   XREF to: 00413a60 (CONDITIONAL_JUMP)
// 00413a23: FLD float ptr [EBP + 0x14]
//   Label: LAB_00413a23
//   XREF to: Stack[0x8] (READ)
// 00413a26: FLDZ
// 00413a28: FCOMPP
// 00413a2a: FNSTSW AX
// 00413a2c: SAHF
// 00413a2d: JC 0x00413a11
//   XREF to: 00413a11 (CONDITIONAL_JUMP)
// 00413a2f: MOV ESP,EBP
// 00413a31: POP EBP
// 00413a32: POP ESI
// 00413a33: POP EBX
// 00413a34: RET
// 00413a35: PUSH EBX
//   Label: LAB_00413a35
// 00413a36: CALL core_baron.cpp_FUN_004136b0
//   XREF to: 004136b0 (UNCONDITIONAL_CALL)
// 00413a3b: ADD ESP,0x4
// 00413a3e: JMP 0x00413a23
//   XREF to: 00413a23 (UNCONDITIONAL_JUMP)
// 00413a40: MOV dword ptr [EBX + 0x1fccc],0x0
//   Label: LAB_00413a40
// 00413a4a: MOV dword ptr [EBX + 0x1fcd0],0x0
// 00413a54: MOV dword ptr [EBX + 0x1fcac],0x0
// 00413a5e: JMP 0x00413a23
//   XREF to: 00413a23 (UNCONDITIONAL_JUMP)
// 00413a60: JBE 0x00413a35
//   Label: LAB_00413a60
//   XREF to: 00413a35 (CONDITIONAL_JUMP)
// 00413a62: CMP EAX,0x6e
// 00413a65: JZ 0x00413a40
//   XREF to: 00413a40 (CONDITIONAL_JUMP)
// 00413a67: JMP 0x00413a23
//   XREF to: 00413a23 (UNCONDITIONAL_JUMP)
