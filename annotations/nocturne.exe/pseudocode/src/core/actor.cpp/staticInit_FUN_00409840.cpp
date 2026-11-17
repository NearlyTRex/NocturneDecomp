// Name: core_actor.cpp_staticInit_FUN_00409840
// Address: 00409840
// Address Range: [[00409840, 0040985d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_staticInit_FUN_00409840(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_staticInit_FUN_00409840(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDemonActorClassInfo,"CDemonActor",(CDemonActor_FactoryFunc *)0x0,
             &g_CDemonActorClassVersion,7,(CDemonActorType *)0x0);
  return;
}
