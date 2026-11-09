// Name: core_mobster.cpp_staticInit_FUN_0051c5b0
// Address: 0051c5b0
// Address Range: [[0051c5b0, 0051c5d3]]
// Convention: unknown
// Signature: void core_mobster_cpp_staticInit_FUN_0051c5b0(void)

#include "nocturne.h"

void core_mobster_cpp_staticInit_FUN_0051c5b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMobsterClassInfo,"CMobster",
             core_mobster_cpp_factoryFuncMobster_FUN_0051c7a0,&g_CMobsterClassVersion,7,
             &g_CEnemyClassInfo);
  return;
}
