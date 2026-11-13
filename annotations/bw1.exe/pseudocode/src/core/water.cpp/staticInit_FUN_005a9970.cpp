// Name: core_water.cpp_staticInit_FUN_005a9970
// Address: 005a9970
// Address Range: [[005a9970, 005a998a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_staticInit_FUN_005a9970(void)

#include "nocturne.h"

void __cdecl core_water_cpp_staticInit_FUN_005a9970(void)

{
  core_water_cpp_CWater_ctor_FUN_005a99e0(&g_CWaterInstance);
  _atexit(&g_CWaterDestructorNode);
  return;
}
