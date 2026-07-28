// Name: core_motion.cpp_CMotionController_dtor_FUN_004e1150
// Address: 004e1150
// Address Range: [[004e1150, 004e1193]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_004e1150(CMotionController *this_ptr,uint flags)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_004e1150(CMotionController *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMotionControllerTypeInfo_005a0d30);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  this_ptr->vtable =
       (CMotionController_vtable *)&PTR_core_motion_cpp_CMotionController_dtor_FUN_004e1150_005a0d24
  ;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_00564494(this_ptr);
  return this_ptr;
}
