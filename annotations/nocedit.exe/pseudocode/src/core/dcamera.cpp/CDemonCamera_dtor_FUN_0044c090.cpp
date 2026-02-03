// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
// Address: 0044c090
// Address Range: [[0044c090, 0044c0ed]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera *this_ptr,uint flags)

#include "nocturne.h"

CDemonCamera * __cdecl
core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera *this_ptr,uint flags)

{
  CDemonCamera *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonCamera);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(this_ptr);
  ptr = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_00427d00(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
