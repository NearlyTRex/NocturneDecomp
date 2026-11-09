// Name: core_motion.cpp_CMotionController_reset_FUN_00524790
// Address: 00524790
// Address Range: [[00524790, 005247b9]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reset_FUN_00524790(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reset_FUN_00524790(CMotionController *this_ptr)

{
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  *(uint *)&this_ptr->field_0x2c = 0;
  *(uint *)&this_ptr->field_0x28 = 0xffffffff;
  core_motion_cpp_CMotionController_clearTweenState_FUN_00524b70(this_ptr);
  return;
}
