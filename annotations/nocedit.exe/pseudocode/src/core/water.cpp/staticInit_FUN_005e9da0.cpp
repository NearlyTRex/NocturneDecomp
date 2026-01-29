// Name: core_water.cpp_staticInit_FUN_005e9da0
// Address: 005e9da0
// Address Range: [[005e9da0, 005e9dba]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_staticInit_FUN_005e9da0(void)

#include "nocturne.h"

void __cdecl core_water_cpp_staticInit_FUN_005e9da0(void)

{
  core_water_cpp_CWater_ctor_FUN_005e9e10(&g_CWaterInstance);
  _atexit(&g_CWaterDestructorNode);
  return;
}
