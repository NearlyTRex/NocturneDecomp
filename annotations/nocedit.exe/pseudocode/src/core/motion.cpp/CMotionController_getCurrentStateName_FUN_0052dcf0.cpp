// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
// Address: 0052dcf0
// Address Range: [[0052dcf0, 0052dd14]]
// Convention: __cdecl
// Signature: char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController *this_ptr)

#include "nocturne.h"

char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
  return this_ptr->motion_list_ptr->state_names[pSVar1->state_index];
}
