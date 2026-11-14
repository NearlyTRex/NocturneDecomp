// Name: core_motion.cpp_CMotionController_dtor_FUN_00503050
// Address: 00503050
// Address Range: [[00503050, 00503093]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_00503050(CMotionController *this_ptr,uint flags)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_00503050(CMotionController *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMotionControllerTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_00503050_005fa5e4
  ;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005b7fdc(this_ptr);
  return this_ptr;
}
