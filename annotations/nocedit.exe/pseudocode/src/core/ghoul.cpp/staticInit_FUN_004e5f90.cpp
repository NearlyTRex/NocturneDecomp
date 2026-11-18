// Name: core_ghoul.cpp_staticInit_FUN_004e5f90
// Address: 004e5f90
// Address Range: [[004e5f90, 004e5fe5]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004e5f90(void)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_staticInit_FUN_004e5f90(void)

{
  g_GhoulOffsetMinusX.x = -0.6;
  g_GhoulOffsetMinusX.y = 0.0;
  g_GhoulOffsetMinusX.z = 0.0;
  g_GhoulOffsetPlusX.x = 0.6;
  g_GhoulOffsetPlusX.y = 0.0;
  g_GhoulOffsetPlusX.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGhoulClassInfo,"CGhoul",core_ghoul_cpp_factoryFuncGhoul_FUN_004e5ff0,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}
