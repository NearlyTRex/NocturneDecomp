// Name: core_bride.cpp_staticInit_FUN_00423830
// Address: 00423830
// Address Range: [[00423830, 00423885]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_00423830(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_00423830(void)

{
  g_BrideOffsetMinusX.x = -0.6;
  g_BrideOffsetMinusX.y = 0.0;
  g_BrideOffsetMinusX.z = 0.0;
  g_BrideOffsetPlusX.x = 0.6;
  g_BrideOffsetPlusX.y = 0.0;
  g_BrideOffsetPlusX.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBrideClassInfo,"CBride",core_bride_cpp_factoryFuncBride_FUN_00423890,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}
