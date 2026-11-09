// Name: core_health.cpp_staticInit_FUN_004d1d00
// Address: 004d1d00
// Address Range: [[004d1d00, 004d1d46]]
// Convention: unknown
// Signature: void core_health_cpp_staticInit_FUN_004d1d00(void)

#include "nocturne.h"

void core_health_cpp_staticInit_FUN_004d1d00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHealthItemClassInfo,"CHealthItem",
             core_health_cpp_factoryFuncHealthItem_FUN_004d1d50,&g_CHealthItemClassVersion,4,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1d5b9b8,"CHealthItemSmall",core_health_cpp_FUN_004d2150,
             (int *)0x5fff88,1,&g_CHealthItemClassInfo);
  return;
}
