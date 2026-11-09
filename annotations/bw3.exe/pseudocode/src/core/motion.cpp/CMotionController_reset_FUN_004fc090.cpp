// Name: core_motion.cpp_CMotionController_reset_FUN_004fc090
// Address: 004fc090
// Address Range: [[004fc090, 004fc0b9]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reset_FUN_004fc090(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reset_FUN_004fc090(CMotionController *this_ptr)

{
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  *(uint *)&this_ptr->field_0x2c = 0;
  *(uint *)&this_ptr->field_0x28 = 0xffffffff;
  core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(this_ptr);
  return;
}
