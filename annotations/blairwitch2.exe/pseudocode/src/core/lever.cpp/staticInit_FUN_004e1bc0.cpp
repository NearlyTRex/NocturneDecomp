// Name: core_lever.cpp_staticInit_FUN_004e1bc0
// Address: 004e1bc0
// Address Range: [[004e1bc0, 004e1be3]]
// Convention: unknown
// Signature: void core_lever_cpp_staticInit_FUN_004e1bc0(void)

#include "nocturne.h"

void core_lever_cpp_staticInit_FUN_004e1bc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLeverClassInfo,"CLever",core_lever_cpp_factoryFuncLever_FUN_004e1bf0,
             &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return;
}
