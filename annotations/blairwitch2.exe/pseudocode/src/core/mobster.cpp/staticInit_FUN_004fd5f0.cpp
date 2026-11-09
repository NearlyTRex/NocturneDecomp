// Name: core_mobster.cpp_staticInit_FUN_004fd5f0
// Address: 004fd5f0
// Address Range: [[004fd5f0, 004fd613]]
// Convention: unknown
// Signature: void core_mobster_cpp_staticInit_FUN_004fd5f0(void)

#include "nocturne.h"

void core_mobster_cpp_staticInit_FUN_004fd5f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMobsterClassInfo,"CMobster",
             core_mobster_cpp_factoryFuncMobster_FUN_004fd7e0,&g_CMobsterClassVersion,7,
             &g_CEnemyClassInfo);
  return;
}
