// Name: core_stranger.cpp_CCharacter_getCurrentMotionStateIndex_FUN_005c69a0
// Address: 005c69a0
// Address Range: [[005c69a0, 005c69b5]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CCharacter_getCurrentMotionStateIndex_FUN_005c69a0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CCharacter_getCurrentMotionStateIndex_FUN_005c69a0(CCharacter *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
  return pSVar1->state_index;
}
