// Name: core_actor.cpp_staticInit_FUN_004080a0
// Address: 004080a0
// Address Range: [[004080a0, 004080bd]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_staticInit_FUN_004080a0(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_staticInit_FUN_004080a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDemonActorClassInfo,"CDemonActor",(CDemonActor_FactoryFunc *)0x0,
             &g_CDemonActorClassVersion,7,(CDemonActorType *)0x0);
  return;
}
