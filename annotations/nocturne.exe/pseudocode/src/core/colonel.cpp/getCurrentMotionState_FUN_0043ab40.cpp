// Name: core_colonel.cpp_getCurrentMotionState_FUN_0043ab40
// Address: 0043ab40
// Address Range: [[0043ab40, 0043ab50]]
// Convention: __cdecl
// Signature: int __cdecl core_colonel_cpp_getCurrentMotionState_FUN_0043ab40(CMotionController *motion_ptr)

#include "nocturne.h"

int __cdecl core_colonel_cpp_getCurrentMotionState_FUN_0043ab40(CMotionController *motion_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(motion_ptr);
  return pSVar1->state_index;
}
