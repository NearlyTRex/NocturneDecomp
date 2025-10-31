// Name: core_motion.cpp_CMotionController_FUN_0052dcf0
// Address: 0052dcf0
// Address Range: [[0052dcf0, 0052dd14]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052dcf0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c580 (0042c580) at 0042c5c1 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_FUN_0052e700 (0052e700) at 0052e824 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00536f16 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052dcf0(undefined4
   pMotionController) */

int core_motion_cpp_CMotionController_FUN_0052dcf0(void)

{
  int iVar1;
  int *in_stack_00000008;
  
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
  return *(int *)(iVar1 + 0x24) * 0x1e + *in_stack_00000008 + 4;
}


// Assembly code:
// 0052dcf0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_motion.cpp_CMotionController_FUN_0052dcf0
//   XREF to: Stack[0x4] (READ)
// 0052dcf4: PUSH EDX
// 0052dcf5: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052dcfa: MOV EAX,dword ptr [EAX + 0x24]
// 0052dcfd: ADD EAX,EAX
// 0052dcff: MOV EDX,EAX
// 0052dd01: SHL EAX,0x4
// 0052dd04: ADD ESP,0x4
// 0052dd07: SUB EAX,EDX
// 0052dd09: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0052dd0d: MOV EDX,dword ptr [EDX]
// 0052dd0f: ADD EDX,0x4
// 0052dd12: ADD EAX,EDX
// 0052dd14: RET
