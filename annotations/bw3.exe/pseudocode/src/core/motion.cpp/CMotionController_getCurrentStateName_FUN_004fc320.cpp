// Name: core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320
// Address: 004fc320
// Address Range: [[004fc320, 004fc344]]
// Convention: __cdecl
// Signature: char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController *this_ptr)

#include "nocturne.h"

char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
  return (char *)(this_ptr->motion_list_ptr + *(int *)(pSVar1 + 0x24) * 0x1e + 4);
}
