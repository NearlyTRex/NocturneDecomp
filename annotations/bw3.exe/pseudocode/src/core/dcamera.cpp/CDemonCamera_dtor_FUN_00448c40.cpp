// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40
// Address: 00448c40
// Address Range: [[00448c40, 00448c9d]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_00448c40(CDemonCamera *this_ptr,uint flags)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_00448c40(CDemonCamera *this_ptr,uint flags)

{
  CDemonCamera *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonCameraTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CCameraView_vtable *)&g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(this_ptr);
  ptr = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_004254d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
