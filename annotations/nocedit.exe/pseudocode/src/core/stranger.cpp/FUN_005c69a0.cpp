// Name: core_stranger.cpp_FUN_005c69a0
// Address: 005c69a0
// Address Range: [[005c69a0, 005c69b5]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c69a0()

#include "nocturne.h"

int core_stranger_cpp_FUN_005c69a0(void)

{
  SMotion *pSVar1;
  int in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  return pSVar1->state_index;
}
