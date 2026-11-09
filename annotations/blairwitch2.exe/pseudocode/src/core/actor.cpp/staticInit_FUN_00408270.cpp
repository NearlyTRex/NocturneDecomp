// Name: core_actor.cpp_staticInit_FUN_00408270
// Address: 00408270
// Address Range: [[00408270, 0040828d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_staticInit_FUN_00408270(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_staticInit_FUN_00408270(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDemonActorClassInfo,"CDemonActor",(CDemonActor_FactoryFunc *)0x0,
             &g_CDemonActorClassVersion,7,(CDemonActorType *)0x0);
  return;
}
