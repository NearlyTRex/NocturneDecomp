// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_00524a10
// Address: 00524a10
// Address Range: [[00524a10, 00524a34]]
// Convention: __cdecl
// Signature: char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(CMotionController *this_ptr)

#include "nocturne.h"

char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
  return (char *)(*(int *)(pSVar1 + 0x24) * 0x1e + *(int *)this_ptr + 4);
}
