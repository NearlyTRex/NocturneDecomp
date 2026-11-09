// Name: core_water.cpp_CWater_ctor_FUN_00585db0
// Address: 00585db0
// Address Range: [[00585db0, 00585dc8]]
// Convention: __cdecl
// Signature: CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00585db0(CWater *this_ptr)

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00585db0(CWater *this_ptr)

{
  *(uint *)&this_ptr->field_0x8 = 0x42000000;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  return this_ptr;
}
