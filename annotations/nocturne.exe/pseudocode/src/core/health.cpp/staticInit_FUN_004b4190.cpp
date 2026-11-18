// Name: core_health.cpp_staticInit_FUN_004b4190
// Address: 004b4190
// Address Range: [[004b4190, 004b41b3]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_staticInit_FUN_004b4190(void)

#include "nocturne.h"

void __cdecl core_health_cpp_staticInit_FUN_004b4190(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHealthItemClassInfo,"CHealthItem",
             core_health_cpp_factoryFuncHealthItem_FUN_004b41c0,&g_CHealthItemClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
