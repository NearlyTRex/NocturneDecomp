// Name: core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480
// Address: 004fc480
// Address Range: [[004fc480, 004fc492]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(CMotionController *this_ptr)

{
  *(uint *)&this_ptr->field_0x14 = 0xbf800000;
  *(uint *)&this_ptr->field_0xc = 0;
  return;
}
