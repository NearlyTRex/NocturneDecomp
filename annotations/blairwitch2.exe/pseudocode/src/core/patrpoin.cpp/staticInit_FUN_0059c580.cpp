// Name: core_patrpoin.cpp_staticInit_FUN_0059c580
// Address: 0059c580
// Address Range: [[0059c580, 0059c5a3]]
// Convention: unknown
// Signature: void core_patrpoin_cpp_staticInit_FUN_0059c580(void)

#include "nocturne.h"

void core_patrpoin_cpp_staticInit_FUN_0059c580(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CPatrolPointClassInfo,"CPatrolPoint",
             core_patrpoin_cpp_factoryFuncPatrolPoint_FUN_0059c5b0,&g_CPatrolPointClassVersion,1,
             &g_CWayPointClassInfo);
  return;
}
