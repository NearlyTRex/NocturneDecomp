// Name: core_dlight.cpp_CDemonLight_dtor_FUN_00449d30
// Address: 00449d30
// Address Range: [[00449d30, 00449d8d]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00449d30(CDemonLight *this_ptr,uint flags)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00449d30(CDemonLight *this_ptr,uint flags)

{
  CDemonLight *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonLightTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.vtable =
       (CCameraView_vtable *)&PTR_core_dlight_cpp_CDemonLight_dtor_FUN_00449d30_005f5074;
  core_dlight_cpp_CDemonLight_free_FUN_00449e70(this_ptr);
  ptr = (CDemonLight *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
