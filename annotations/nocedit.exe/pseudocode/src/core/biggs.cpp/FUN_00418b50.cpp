// Name: core_biggs.cpp_FUN_00418b50
// Address: 00418b50
// Address Range: [[00418b50, 00418c03]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_00418b50()
// Function calls:
//   core_actor.cpp_FUN_0040cc70
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_FUN_00418b50(undefined4 param_1, undefined4 param_2)
    */

void core_biggs_cpp_FUN_00418b50(void)

{
  float fVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  }
  else {
    iVar2 = core_actor_cpp_FUN_0040cc70();
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00418b50: PUSH EBX
//   Label: core_biggs.cpp_FUN_00418b50
// 00418b51: PUSH ESI
// 00418b52: PUSH EDI
// 00418b53: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00418b57: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418b5b: FLD float ptr [EAX + 0x4]
// 00418b5e: FSUBR float ptr [EBX + 0x243c]
// 00418b64: LEA EDI,[EBX + 0x158]
// 00418b6a: FST float ptr [EBX + 0x243c]
// 00418b70: FLDZ
// 00418b72: FCOMPP
// 00418b74: FNSTSW AX
// 00418b76: SAHF
// 00418b77: JNC 0x00418bc6
//   XREF to: 00418bc6 (CONDITIONAL_JUMP)
// 00418b79: PUSH 0x2
// 00418b7b: PUSH 0x0
// 00418b7d: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00418b82: ADD ESP,0x8
// 00418b85: MOV ESI,EAX
// 00418b87: TEST EAX,EAX
// 00418b89: JNZ 0x00418b98
//   XREF to: 00418b98 (CONDITIONAL_JUMP)
// 00418b8b: PUSH 0x1
// 00418b8d: PUSH 0x4
// 00418b8f: PUSH EDI
// 00418b90: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00418b95: ADD ESP,0xc
// 00418b98: CMP ESI,0x1
//   Label: LAB_00418b98
// 00418b9b: JNZ 0x00418baf
//   XREF to: 00418baf (CONDITIONAL_JUMP)
// 00418b9d: PUSH ESI
// 00418b9e: PUSH 0x5
// 00418ba0: LEA EAX,[EBX + 0x158]
// 00418ba6: PUSH EAX
// 00418ba7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00418bac: ADD ESP,0xc
// 00418baf: CMP ESI,0x2
//   Label: LAB_00418baf
// 00418bb2: JZ 0x00418bdf
//   XREF to: 00418bdf (CONDITIONAL_JUMP)
// 00418bb4: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00418bb4
//   XREF to: Stack[0x8] (READ)
// 00418bb8: PUSH EDX
// 00418bb9: PUSH EBX
// 00418bba: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00418bbf: ADD ESP,0x8
// 00418bc2: POP EDI
// 00418bc3: POP ESI
// 00418bc4: POP EBX
// 00418bc5: RET
// 00418bc6: PUSH 0x1
//   Label: LAB_00418bc6
// 00418bc8: PUSH 0x7
// 00418bca: PUSH EDI
// 00418bcb: MOV dword ptr [EBX + 0x243c],0x0
// 00418bd5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00418bda: ADD ESP,0xc
// 00418bdd: JMP 0x00418bb4
//   XREF to: 00418bb4 (UNCONDITIONAL_JUMP)
// 00418bdf: PUSH 0x1
//   Label: LAB_00418bdf
// 00418be1: PUSH 0x6
// 00418be3: LEA EAX,[EBX + 0x158]
// 00418be9: PUSH EAX
// 00418bea: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00418bef: ADD ESP,0xc
// 00418bf2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418bf6: PUSH EDX
// 00418bf7: PUSH EBX
// 00418bf8: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00418bfd: ADD ESP,0x8
// 00418c00: POP EDI
// 00418c01: POP ESI
// 00418c02: POP EBX
// 00418c03: RET
