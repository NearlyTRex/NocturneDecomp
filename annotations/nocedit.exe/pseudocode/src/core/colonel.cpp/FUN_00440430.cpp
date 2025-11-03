// Name: core_colonel.cpp_FUN_00440430
// Address: 00440430
// Address Range: [[00440430, 0044048d]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_00440430()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fa64 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_motion.cpp_CMotionController_advance_FUN_0052d610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_00440430(undefined4 param_1, undefined4
   param_2) */

ushort core_colonel_cpp_FUN_00440430(void)

{
  uint uVar1;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    if (uVar1 < 100) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
    else if ((100 < uVar1) && (uVar1 != 0x65)) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  } while (0.0 < in_stack_00000008);
  return (ushort)(0.0 < in_stack_00000008) << 8 | (ushort)NAN(in_stack_00000008) << 10 |
         (ushort)(in_stack_00000008 == 0.0) << 0xe;
}


// Assembly code:
// 00440430: PUSH EBX
//   Label: core_colonel.cpp_FUN_00440430
// 00440431: PUSH ESI
// 00440432: PUSH EBP
// 00440433: MOV EBP,ESP
// 00440435: AND ESP,0xfffffff8
// 00440438: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0044043b: LEA EBX,[ESI + 0x158]
// 00440441: LEA EAX,[EBP + 0x14]
//   Label: LAB_00440441
//   XREF to: Stack[0x8] (DATA)
// 00440444: PUSH EAX
// 00440445: PUSH EBX
// 00440446: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0044044b: ADD ESP,0x8
// 0044044e: MOV EDX,EAX
// 00440450: CMP EAX,0x64
// 00440453: JC 0x00440471
//   XREF to: 00440471 (CONDITIONAL_JUMP)
// 00440455: JA 0x0044047d
//   XREF to: 0044047d (CONDITIONAL_JUMP)
// 00440457: FLD float ptr [EBP + 0x14]
//   Label: LAB_00440457
//   XREF to: Stack[0x8] (READ)
// 0044045a: FLDZ
// 0044045c: FCOMPP
// 0044045e: FNSTSW AX
// 00440460: SAHF
// 00440461: JC 0x00440441
//   XREF to: 00440441 (CONDITIONAL_JUMP)
// 00440463: MOV ESP,EBP
// 00440465: POP EBP
// 00440466: POP ESI
// 00440467: POP EBX
// 00440468: LEA EAX,[EAX]
// 0044046e: MOV EDX,EDX
// 00440470: RET
// 00440471: PUSH EDX
//   Label: LAB_00440471
// 00440472: PUSH ESI
// 00440473: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00440478: ADD ESP,0x8
// 0044047b: JMP 0x00440457
//   XREF to: 00440457 (UNCONDITIONAL_JUMP)
// 0044047d: CMP EAX,0x65
//   Label: LAB_0044047d
// 00440480: JZ 0x00440457
//   XREF to: 00440457 (CONDITIONAL_JUMP)
// 00440482: PUSH EDX
// 00440483: PUSH ESI
// 00440484: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00440489: ADD ESP,0x8
// 0044048c: JMP 0x00440457
//   XREF to: 00440457 (UNCONDITIONAL_JUMP)
