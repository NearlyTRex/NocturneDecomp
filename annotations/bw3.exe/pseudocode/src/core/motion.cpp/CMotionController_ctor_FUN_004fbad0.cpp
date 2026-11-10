// Name: core_motion.cpp_CMotionController_ctor_FUN_004fbad0
// Address: 004fbad0
// Address Range: [[004fbad0, 004fbaf2]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004fbad0(CMotionController *this_ptr)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004fbad0(CMotionController *this_ptr)

{
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_004fbb00_005e2c84
  ;
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->motion_list_ptr = (CMotionList *)0x0;
  core_motion_cpp_CMotionController_reset_FUN_004fc090(this_ptr);
  return this_ptr;
}
