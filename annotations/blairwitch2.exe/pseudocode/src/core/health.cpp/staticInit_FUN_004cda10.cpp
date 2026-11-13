// Name: core_health.cpp_staticInit_FUN_004cda10
// Address: 004cda10
// Address Range: [[004cda10, 004cda33]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_staticInit_FUN_004cda10(void)

#include "nocturne.h"

void __cdecl core_health_cpp_staticInit_FUN_004cda10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHealthItemClassInfo,"CHealthItem",
             core_health_cpp_factoryFuncHealthItem_FUN_004cda40,&g_CHealthItemClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
