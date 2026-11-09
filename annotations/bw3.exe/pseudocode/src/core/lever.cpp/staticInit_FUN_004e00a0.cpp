// Name: core_lever.cpp_staticInit_FUN_004e00a0
// Address: 004e00a0
// Address Range: [[004e00a0, 004e00c3]]
// Convention: unknown
// Signature: void core_lever_cpp_staticInit_FUN_004e00a0(void)

#include "nocturne.h"

void core_lever_cpp_staticInit_FUN_004e00a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CLeverClassInfo,"CLever",core_lever_cpp_factoryFuncLever_FUN_004e00d0,
             &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return;
}
