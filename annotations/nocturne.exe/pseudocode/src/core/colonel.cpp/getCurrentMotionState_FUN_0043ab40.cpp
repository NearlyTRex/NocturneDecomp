// Name: core_colonel.cpp_getCurrentMotionState_FUN_0043ab40
// Address: 0043ab40
// Address Range: [[0043ab40, 0043ab50]]
// Convention: unknown
// Signature: int core_colonel_cpp_getCurrentMotionState_FUN_0043ab40(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_colonel_cpp_getCurrentMotionState_FUN_0043ab40(void)

{
  SMotion *pSVar1;
  CMotionController *in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(in_stack_00000004);
  return pSVar1->state_index;
}
