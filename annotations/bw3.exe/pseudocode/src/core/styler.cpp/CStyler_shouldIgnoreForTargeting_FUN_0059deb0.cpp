// Name: core_styler.cpp_CStyler_shouldIgnoreForTargeting_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059ded2]]
// Convention: __cdecl
// Signature: int __cdecl core_styler_cpp_CStyler_shouldIgnoreForTargeting_FUN_0059deb0(CStyler *this_ptr)

#include "nocturne.h"

int __cdecl core_styler_cpp_CStyler_shouldIgnoreForTargeting_FUN_0059deb0(CStyler *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  return (uint)(*(int *)(pSVar1 + 0x24) == 0x9a);
}
