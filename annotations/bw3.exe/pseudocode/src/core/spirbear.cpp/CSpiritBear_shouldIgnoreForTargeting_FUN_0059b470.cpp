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
                     ((CMotionController *)&this_ptr->field_0x158);
  return (uint)(*(int *)(pSVar1 + 0x24) == 0x92);
}
