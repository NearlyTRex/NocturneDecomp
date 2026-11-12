// Name: core_motion.cpp_CMotionController_dtor_FUN_004fbb00
// Address: 004fbb00
// Address Range: [[004fbb00, 004fbb43]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_004fbb00(CMotionController *this_ptr,uint flags)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_004fbb00(CMotionController *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMotionControllerTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_004fbb00_005e2c84
  ;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
