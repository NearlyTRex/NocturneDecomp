// Name: core_keyactor.cpp_staticInit_FUN_004de7d0
// Address: 004de7d0
// Address Range: [[004de7d0, 004de7f3]]
// Convention: unknown
// Signature: void core_keyactor_cpp_staticInit_FUN_004de7d0(void)

#include "nocturne.h"

void core_keyactor_cpp_staticInit_FUN_004de7d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CKeyActorClassInfo,"CKeyActor",
             core_keyactor_cpp_factoryFuncKeyActor_FUN_004de800,&g_CKeyActorClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
