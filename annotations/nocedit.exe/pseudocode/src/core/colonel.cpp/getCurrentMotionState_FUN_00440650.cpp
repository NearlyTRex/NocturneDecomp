// Name: core_colonel.cpp_getCurrentMotionState_FUN_00440650
// Address: 00440650
// Address Range: [[00440650, 00440660]]
// Convention: __cdecl
// Signature: int __cdecl core_colonel_cpp_getCurrentMotionState_FUN_00440650(CMotionController *motion_ptr)

#include "nocturne.h"

int __cdecl core_colonel_cpp_getCurrentMotionState_FUN_00440650(CMotionController *motion_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(motion_ptr);
  return pSVar1->state_index;
}
