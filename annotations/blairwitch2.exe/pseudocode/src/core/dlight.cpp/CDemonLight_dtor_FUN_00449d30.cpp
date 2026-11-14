// Name: core_dlight.cpp_CDemonLight_dtor_FUN_00449d30
// Address: 00449d30
// Address Range: [[00449d30, 00449d8d]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00449d30(CDemonLight *this_ptr,uint flags)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00449d30(CDemonLight *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonLightTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.vtable =
       (CCameraView_vtable *)&PTR_core_dlight_cpp_CDemonLight_dtor_FUN_00449d30_005f5074;
  core_dlight_cpp_CDemonLight_free_FUN_00449e70(this_ptr);
  pCVar1 = (CDemonLight *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
