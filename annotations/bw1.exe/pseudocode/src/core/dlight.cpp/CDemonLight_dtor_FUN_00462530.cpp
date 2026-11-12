// Name: core_dlight.cpp_CDemonLight_dtor_FUN_00462530
// Address: 00462530
// Address Range: [[00462530, 0046258d]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00462530(CDemonLight *this_ptr,uint flags)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00462530(CDemonLight *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonLightTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.vtable =
       (CCameraView_vtable *)&PTR_core_dlight_cpp_CDemonLight_dtor_FUN_00462530_005febf4;
  core_dlight_cpp_CDemonLight_free_FUN_00462670(this_ptr);
  pCVar1 = (CDemonLight *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
