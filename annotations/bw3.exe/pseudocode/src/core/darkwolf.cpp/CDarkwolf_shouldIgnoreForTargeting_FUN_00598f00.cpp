// Name: core_darkwolf.cpp_CDarkwolf_shouldIgnoreForTargeting_FUN_00598f00
// Address: 00598f00
// Address Range: [[00598f00, 00598f20]]
// Convention: __cdecl
// Signature: int __cdecl core_darkwolf_cpp_CDarkwolf_shouldIgnoreForTargeting_FUN_00598f00(CDarkwolf *this_ptr)

#include "nocturne.h"

int __cdecl core_darkwolf_cpp_CDarkwolf_shouldIgnoreForTargeting_FUN_00598f00(CDarkwolf *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  return (uint)(pSVar1->state_index == 7);
}
