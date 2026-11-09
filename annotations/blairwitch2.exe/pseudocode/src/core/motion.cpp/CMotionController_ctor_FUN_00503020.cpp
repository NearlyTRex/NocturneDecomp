// Name: core_motion.cpp_CMotionController_ctor_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 00503042]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_00503020(CMotionController *this_ptr)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_00503020(CMotionController *this_ptr)

{
  *(byte ***)&this_ptr->field_0x50 =
       &PTR_core_motion_cpp_CMotionController_dtor_FUN_00503050_005fa5e4;
  this_ptr->field_0x30 = 0;
  *(uint *)this_ptr = 0;
  core_motion_cpp_CMotionController_reset_FUN_005035f0(this_ptr);
  return this_ptr;
}
