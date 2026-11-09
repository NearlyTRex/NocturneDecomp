// Name: core_keyactor.cpp_staticInit_FUN_004fc4b0
// Address: 004fc4b0
// Address Range: [[004fc4b0, 004fc4d3]]
// Convention: unknown
// Signature: void core_keyactor_cpp_staticInit_FUN_004fc4b0(void)

#include "nocturne.h"

void core_keyactor_cpp_staticInit_FUN_004fc4b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CKeyActorClassInfo,"CKeyActor",
             core_keyactor_cpp_factoryFuncKeyActor_FUN_004fc4e0,&g_CKeyActorClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
