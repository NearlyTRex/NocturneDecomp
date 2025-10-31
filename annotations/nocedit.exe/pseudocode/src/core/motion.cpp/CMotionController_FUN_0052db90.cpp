// Name: core_motion.cpp_CMotionController_FUN_0052db90
// Address: 0052db90
// Address Range: [[0052db90, 0052dbbd]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052db90()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c920 (0042c920) at 0042c9b9 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f28d0 (004f28d0) at 004f2984 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f29b0 (004f29b0) at 004f2a17 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544b07 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052db90(undefined4
   pMotionController, undefined4 sMotionState, undefined4 param_3) */

void core_motion_cpp_CMotionController_FUN_0052db90(void)

{
  core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0();
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return;
}


// Assembly code:
// 0052db90: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052db90
// 0052db91: PUSH ESI
// 0052db92: PUSH 0x1
// 0052db94: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052db98: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052db9c: PUSH EDX
// 0052db9d: MOV ECX,dword ptr [EAX]
// 0052db9f: PUSH ECX
// 0052dba0: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 0052dba5: ADD ESP,0xc
// 0052dba8: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052dbac: PUSH EBX
// 0052dbad: PUSH EAX
// 0052dbae: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052dbb2: PUSH ESI
// 0052dbb3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052dbb8: ADD ESP,0xc
// 0052dbbb: POP ESI
// 0052dbbc: POP EBX
// 0052dbbd: RET
