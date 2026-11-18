// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00
// Address: 0044cb00
// Address Range: [[0044cb00, 0044cb5d]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00(CDemonCamera *this_ptr,uint flags)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00(CDemonCamera *this_ptr,uint flags)

{
  CDemonCamera *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonCameraTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(this_ptr);
  ptr = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_00428240(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
