// Name: core_motion.cpp_CMotionController_dtor_FUN_0052d5a0
// Address: 0052d5a0
// Address Range: [[0052d5a0, 0052d5e3]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController *this_ptr,uint flags)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMotionControllerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CMotionControllerVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
