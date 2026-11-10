// Name: core_motion.cpp_CMotionController_dtor_FUN_00524200
// Address: 00524200
// Address Range: [[00524200, 00524243]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_00524200(CMotionController *this_ptr,uint flags)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_00524200(CMotionController *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMotionControllerTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_00524200_006042e4
  ;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
