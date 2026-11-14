// Name: core_spirbear.cpp_CSpiritBear_shouldIgnoreForTargeting_FUN_0059b470
// Address: 0059b470
// Address Range: [[0059b470, 0059b492]]
// Convention: __cdecl
// Signature: int __cdecl core_spirbear_cpp_CSpiritBear_shouldIgnoreForTargeting_FUN_0059b470(CSpiritBear *this_ptr)

#include "nocturne.h"

int __cdecl core_spirbear_cpp_CSpiritBear_shouldIgnoreForTargeting_FUN_0059b470(CSpiritBear *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  return (uint)(pSVar1->state_index == 0x92);
}
