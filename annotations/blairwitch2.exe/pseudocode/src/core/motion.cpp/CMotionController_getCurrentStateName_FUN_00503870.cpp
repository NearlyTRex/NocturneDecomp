// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870
// Address: 00503870
// Address Range: [[00503870, 00503894]]
// Convention: __cdecl
// Signature: char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController *this_ptr)

#include "nocturne.h"

char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(this_ptr);
  return this_ptr->motion_list_ptr->state_names[pSVar1->state_index];
}
