// Name: core_water.cpp_CWater_ctor_FUN_00577230
// Address: 00577230
// Address Range: [[00577230, 00577248]]
// Convention: __cdecl
// Signature: CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00577230(CWater *this_ptr)

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00577230(CWater *this_ptr)

{
  *(uint *)&this_ptr->field_0x8 = 0x42000000;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  return this_ptr;
}
