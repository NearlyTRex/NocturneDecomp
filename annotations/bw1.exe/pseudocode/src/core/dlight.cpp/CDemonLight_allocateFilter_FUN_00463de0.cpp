// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00463de0
// Address: 00463de0
// Address Range: [[00463de0, 00463e21]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00463de0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00463de0(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = FUN_005c08d0(0x10000);
  *(void **)&this_ptr->field_0x1c6c = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dlight.cpp";
  _DAT_01d1d404 = 0x544;
  core_main_c_FUN_005030e0("CDemonLight::allocateFilter - Out of memory");
  return;
}
