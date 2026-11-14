// Name: core_sentinel.cpp_staticInit_FUN_0054b9b0
// Address: 0054b9b0
// Address Range: [[0054b9b0, 0054b9d3]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_staticInit_FUN_0054b9b0(void)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_staticInit_FUN_0054b9b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CSentinelClassInfo,"CSentinel",
             core_sentinel_cpp_factoryFuncSentinel_FUN_0054b9e0,&g_CSentinelClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
