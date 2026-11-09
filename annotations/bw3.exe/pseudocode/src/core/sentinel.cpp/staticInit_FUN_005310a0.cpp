// Name: core_sentinel.cpp_staticInit_FUN_005310a0
// Address: 005310a0
// Address Range: [[005310a0, 005310c3]]
// Convention: unknown
// Signature: void core_sentinel_cpp_staticInit_FUN_005310a0(void)

#include "nocturne.h"

void core_sentinel_cpp_staticInit_FUN_005310a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSentinelClassInfo,"CSentinel",
             core_sentinel_cpp_factoryFuncSentinel_FUN_005310d0,&g_CSentinelClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
