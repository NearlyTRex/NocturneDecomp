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
                     ((CMotionController *)&this_ptr->field_0x158);
  return (uint)(*(int *)(pSVar1 + 0x24) == 0x1b);
}
