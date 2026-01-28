// Name: core_colonel.cpp_FUN_00440650
// Address: 00440650
// Address Range: [[00440650, 00440660]]
// Convention: unknown
// Signature: int core_colonel_cpp_FUN_00440650(void)

#include "nocturne.h"

int core_colonel_cpp_FUN_00440650(void)

{
  SMotion *pSVar1;
  CMotionController *in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(in_stack_00000004);
  return pSVar1->state_index;
}
