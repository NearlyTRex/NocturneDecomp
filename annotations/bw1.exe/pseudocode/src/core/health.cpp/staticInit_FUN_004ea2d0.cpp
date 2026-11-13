// Name: core_health.cpp_staticInit_FUN_004ea2d0
// Address: 004ea2d0
// Address Range: [[004ea2d0, 004ea2f3]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_staticInit_FUN_004ea2d0(void)

#include "nocturne.h"

void __cdecl core_health_cpp_staticInit_FUN_004ea2d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHealthItemClassInfo,"CHealthItem",
             core_health_cpp_factoryFuncHealthItem_FUN_004ea300,&g_CHealthItemClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
