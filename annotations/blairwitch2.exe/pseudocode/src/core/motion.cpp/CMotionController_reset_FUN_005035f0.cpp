// Name: core_motion.cpp_CMotionController_reset_FUN_005035f0
// Address: 005035f0
// Address Range: [[005035f0, 00503619]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reset_FUN_005035f0(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reset_FUN_005035f0(CMotionController *this_ptr)

{
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  *(uint *)&this_ptr->field_0x2c = 0;
  *(uint *)&this_ptr->field_0x28 = 0xffffffff;
  core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(this_ptr);
  return;
}
