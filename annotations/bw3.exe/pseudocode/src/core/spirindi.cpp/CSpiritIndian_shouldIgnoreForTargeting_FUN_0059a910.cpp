// Name: core_spirindi.cpp_CSpiritIndian_shouldIgnoreForTargeting_FUN_0059a910
// Address: 0059a910
// Address Range: [[0059a910, 0059a932]]
// Convention: __cdecl
// Signature: int __cdecl core_spirindi_cpp_CSpiritIndian_shouldIgnoreForTargeting_FUN_0059a910(CSpiritIndian *this_ptr)

#include "nocturne.h"

int __cdecl core_spirindi_cpp_CSpiritIndian_shouldIgnoreForTargeting_FUN_0059a910(CSpiritIndian *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  return (uint)(pSVar1->state_index == 0x92);
}
