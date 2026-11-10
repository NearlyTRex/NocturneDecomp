// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_0044b5b0
// Address: 0044b5b0
// Address Range: [[0044b5b0, 0044b5f1]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0044b5b0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0044b5b0(CDemonLight *this_ptr)

{
  uchar *puVar1;
  
  puVar1 = FUN_005b8580(0x10000);
  this_ptr->filter_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dlight.cpp";
  _DAT_01d046a4 = 0x547;
  core_main_c_FUN_004e4500("CDemonLight::allocateFilter - Out of memory");
  return;
}
