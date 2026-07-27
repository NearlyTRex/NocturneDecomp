// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170
// Address: 00450170
// Address Range: [[00450170, 004501b1]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(int param_1)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(int param_1)

{
  int iVar1;
  
  iVar1 = malloc(0x10000);
  *(int *)(param_1 + 0x1c6c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dlight.cpp";
  INT_01cc4804 = 0x541;
  core_main_c_FUN_004c8440("CDemonLight::allocateFilter - Out of memory");
  return;
}
