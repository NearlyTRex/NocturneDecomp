// Name: core_bride.cpp_staticInit_FUN_0041fb20
// Address: 0041fb20
// Address Range: [[0041fb20, 0041fb75]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_0041fb20(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_0041fb20(void)

{
  g_BrideOffsetMinusX.x = -0.6;
  g_BrideOffsetMinusX.y = 0.0;
  g_BrideOffsetMinusX.z = 0.0;
  g_BrideOffsetPlusX.x = 0.6;
  g_BrideOffsetPlusX.y = 0.0;
  g_BrideOffsetPlusX.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBrideClassInfo,"CBride",core_bride_cpp_factoryFuncBride_FUN_0041fb80,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}
