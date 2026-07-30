// Name: core_water.cpp_staticInit_FUN_00550730
// Address: 00550730
// Address Range: [[00550730, 0055074a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_staticInit_FUN_00550730(void)

#include "nocturne.h"

void __cdecl core_water_cpp_staticInit_FUN_00550730(void)

{
  core_water_cpp_CWater_ctor_FUN_005507a0((CWater *)&DAT_02dd1210);
  _atexit(&g_WatcomStaticDestructorNode_005c11dc);
  return;
}
