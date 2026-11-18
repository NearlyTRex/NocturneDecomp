// Name: core_mobster.cpp_staticInit_FUN_004d9fd0
// Address: 004d9fd0
// Address Range: [[004d9fd0, 004d9ff3]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_staticInit_FUN_004d9fd0(void)

#include "nocturne.h"

void __cdecl core_mobster_cpp_staticInit_FUN_004d9fd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMobsterClassInfo,"CMobster",
             core_mobster_cpp_factoryFuncMobster_FUN_004da120,&g_CMobsterClassVersion,7,
             &g_CEnemyClassInfo);
  return;
}
