// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
// Address: 00511800
// Address Range: [[00511800, 00511839]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(int param_1,int param_2)

{
  *(int *)(param_1 + 0x15f298) = param_2;
  if (param_2 != 3) {
    return;
  }
  PTR_01cc4800 = "..\\core\\setcolid.cpp";
  INT_01cc4804 = 0x49a;
  core_main_c_FUN_004c8440("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
