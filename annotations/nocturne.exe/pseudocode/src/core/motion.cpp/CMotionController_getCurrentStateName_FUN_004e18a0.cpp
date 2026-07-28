// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0
// Address: 004e18a0
// Address Range: [[004e18a0, 004e18c4]]
// Convention: __cdecl
// Signature: char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController *this_ptr)

#include "nocturne.h"

char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
  return this_ptr->motion_list_ptr->state_names[pSVar1->state_index];
}
