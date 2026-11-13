// Name: core_water.cpp_staticInit_FUN_00585d40
// Address: 00585d40
// Address Range: [[00585d40, 00585d5a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_staticInit_FUN_00585d40(void)

#include "nocturne.h"

void __cdecl core_water_cpp_staticInit_FUN_00585d40(void)

{
  core_water_cpp_CWater_ctor_FUN_00585db0(&g_CWaterInstance);
  _atexit(&g_CWaterDestructorNode);
  return;
}
