// Name: core_actor.cpp_staticInit_FUN_00408320
// Address: 00408320
// Address Range: [[00408320, 0040833d]]
// Convention: __cdecl
// Signature: void core_actor.cpp_staticInit_FUN_00408320(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_staticInit_FUN_00408320(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDemonActorClassInfo,"CDemonActor",(CDemonActor_FactoryFunc *)0x0,
             &g_CDemonActorClassVersion,7,(CDemonActorType *)0x0);
  return;
}
