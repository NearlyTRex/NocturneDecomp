// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_0045daf0
// Address: 0045daf0
// Address Range: [[0045daf0, 0045db31]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0045daf0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0045daf0(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = FUN_005a3650(0x10000);
  *(void **)&this_ptr->field_0x1c6c = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dlight.cpp";
  _DAT_01d71de4 = 0x547;
  core_main_c_FUN_004e4330("CDemonLight::allocateFilter - Out of memory");
  return;
}
