// Name: core_lever.cpp_staticInit_FUN_004fefe0
// Address: 004fefe0
// Address Range: [[004fefe0, 004ff003]]
// Convention: unknown
// Signature: void core_lever_cpp_staticInit_FUN_004fefe0(void)

#include "nocturne.h"

void core_lever_cpp_staticInit_FUN_004fefe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CLeverClassInfo,"CLever",core_lever_cpp_factoryFuncLever_FUN_004ff010,
             &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return;
}
