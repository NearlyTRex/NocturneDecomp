// Name: core_colonel.cpp_FUN_00440650
// Address: 00440650
// Address Range: [[00440650, 00440660]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_00440650()
// Function calls:
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0

#include "nocturne.h"

int core_colonel_cpp_FUN_00440650(void)

{
  SMotion *pSVar1;
  CMotionController *in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(in_stack_00000004);
  return pSVar1->state_index;
}


// Assembly code:
// 00440650: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_colonel.cpp_FUN_00440650
//   XREF to: Stack[0x4] (READ)
// 00440654: PUSH EDX
// 00440655: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0044065a: ADD ESP,0x4
// 0044065d: MOV EAX,dword ptr [EAX + 0x24]
// 00440660: RET
