// Name: core_water.cpp_CWater_ctor_FUN_005a99e0
// Address: 005a99e0
// Address Range: [[005a99e0, 005a99f8]]
// Convention: __cdecl
// Signature: CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005a99e0(CWater *this_ptr)

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005a99e0(CWater *this_ptr)

{
  *(uint *)&this_ptr->field_0x8 = 0x42000000;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  return this_ptr;
}
