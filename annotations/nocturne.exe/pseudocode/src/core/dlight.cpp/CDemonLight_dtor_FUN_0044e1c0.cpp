// Name: core_dlight.cpp_CDemonLight_dtor_FUN_0044e1c0
// Address: 0044e1c0
// Address Range: [[0044e1c0, 0044e1dc]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_0044e1c0(CDemonLight *this_ptr,uint flags)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_0044e1c0(CDemonLight *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  
  core_dlight_cpp_CDemonLight_free_FUN_0044e2c0(this_ptr);
  pCVar1 = (CDemonLight *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0043ff30(&this_ptr->base,1);
  return pCVar1;
}
