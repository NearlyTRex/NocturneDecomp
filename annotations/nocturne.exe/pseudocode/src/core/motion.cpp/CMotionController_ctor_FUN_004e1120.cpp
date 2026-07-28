// Name: core_motion.cpp_CMotionController_ctor_FUN_004e1120
// Address: 004e1120
// Address Range: [[004e1120, 004e1142]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004e1120(CMotionController *this_ptr)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004e1120(CMotionController *this_ptr)

{
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_004e1150_005a0d24
  ;
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->motion_list_ptr = (CMotionList *)0x0;
  core_motion_cpp_CMotionController_reset_FUN_004e1680(this_ptr);
  return this_ptr;
}
