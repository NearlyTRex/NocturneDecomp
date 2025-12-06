// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
// Address: 0052dcf0
// Address Range: [[0052dcf0, 0052dd14]]
// Convention: __cdecl
// Signature: char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController * this_ptr)

#include "nocturne.h"

char * __cdecl
core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  int *in_stack_00000008;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
  return (char *)(pSVar1->state_index * 0x1e + *in_stack_00000008 + 4);
}
