// Name: core_stranger.cpp_getCurrentMotionStateIndex_FUN_00540a70
// Address: 00540a70
// Address Range: [[00540a70, 00540a85]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_getCurrentMotionStateIndex_FUN_00540a70(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_getCurrentMotionStateIndex_FUN_00540a70(CCharacter *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->model).motion_controller);
  return pSVar1->state_index;
}
