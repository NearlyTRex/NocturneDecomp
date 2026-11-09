// Name: core_motion.cpp_CMotionController_ctor_FUN_005241d0
// Address: 005241d0
// Address Range: [[005241d0, 005241f2]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_005241d0(CMotionController *this_ptr)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_005241d0(CMotionController *this_ptr)

{
  *(byte ***)&this_ptr->field_0x50 =
       &PTR_core_motion_cpp_CMotionController_dtor_FUN_00524200_006042e4;
  this_ptr->field_0x30 = 0;
  *(uint *)this_ptr = 0;
  core_motion_cpp_CMotionController_reset_FUN_00524790(this_ptr);
  return this_ptr;
}
