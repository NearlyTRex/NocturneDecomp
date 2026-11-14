// Name: core_water.cpp_staticInit_FUN_005771c0
// Address: 005771c0
// Address Range: [[005771c0, 005771da]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_staticInit_FUN_005771c0(void)

#include "nocturne.h"

void __cdecl core_water_cpp_staticInit_FUN_005771c0(void)

{
  core_water_cpp_CWater_ctor_FUN_00577230(&g_CWaterInstance);
  _atexit(&g_CWaterDestructorNode);
  return;
}
