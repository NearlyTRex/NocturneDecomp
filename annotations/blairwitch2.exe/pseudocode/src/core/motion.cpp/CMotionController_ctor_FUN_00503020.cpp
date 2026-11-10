// Name: core_motion.cpp_CMotionController_ctor_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 00503042]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_00503020(CMotionController *this_ptr)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_00503020(CMotionController *this_ptr)

{
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_00503050_005fa5e4
  ;
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->motion_list_ptr = (CMotionList *)0x0;
  core_motion_cpp_CMotionController_reset_FUN_005035f0(this_ptr);
  return this_ptr;
}
