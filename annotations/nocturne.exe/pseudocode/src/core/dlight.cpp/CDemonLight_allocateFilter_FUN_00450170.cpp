// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170
// Address: 00450170
// Address Range: [[00450170, 004501b1]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(CDemonLight *this_ptr)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)malloc(0x10000);
  this_ptr->filter_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dlight.cpp";
  INT_01cc4804 = 0x541;
  core_main_c_FUN_004c8440("CDemonLight::allocateFilter - Out of memory");
  return;
}
