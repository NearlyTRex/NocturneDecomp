// Name: core_stranger.cpp_FUN_005c69a0
// Address: 005c69a0
// Address Range: [[005c69a0, 005c69b5]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c69a0()
// Function calls:
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0

#include "nocturne.h"

int core_stranger_cpp_FUN_005c69a0(void)

{
  SMotion *pSVar1;
  int in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  return pSVar1->state_index;
}


// Assembly code:
// 005c69a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_stranger.cpp_FUN_005c69a0
//   XREF to: Stack[0x4] (READ)
// 005c69a4: ADD EAX,0x158
// 005c69a9: PUSH EAX
// 005c69aa: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005c69af: ADD ESP,0x4
// 005c69b2: MOV EAX,dword ptr [EAX + 0x24]
// 005c69b5: RET
