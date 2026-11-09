// Name: core_sentinel.cpp_staticInit_FUN_0052a6c0
// Address: 0052a6c0
// Address Range: [[0052a6c0, 0052a6e3]]
// Convention: unknown
// Signature: void core_sentinel_cpp_staticInit_FUN_0052a6c0(void)

#include "nocturne.h"

void core_sentinel_cpp_staticInit_FUN_0052a6c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSentinelClassInfo,"CSentinel",
             core_sentinel_cpp_factoryFuncSentinel_FUN_0052a6f0,&g_CSentinelClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
