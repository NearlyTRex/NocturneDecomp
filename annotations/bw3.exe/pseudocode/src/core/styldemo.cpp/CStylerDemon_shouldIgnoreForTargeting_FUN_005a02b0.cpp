// Name: core_styldemo.cpp_CStylerDemon_shouldIgnoreForTargeting_FUN_005a02b0
// Address: 005a02b0
// Address Range: [[005a02b0, 005a02d0]]
// Convention: __cdecl
// Signature: int __cdecl core_styldemo_cpp_CStylerDemon_shouldIgnoreForTargeting_FUN_005a02b0(CStylerDemon *this_ptr)

#include "nocturne.h"

int __cdecl core_styldemo_cpp_CStylerDemon_shouldIgnoreForTargeting_FUN_005a02b0(CStylerDemon *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  return (uint)(pSVar1->state_index == 0x1b);
}
