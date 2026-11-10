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
                     ((CMotionController *)&this_ptr->field_0x158);
  return (uint)(*(int *)(pSVar1 + 0x24) == 7);
}
