// Name: core_grave.cpp_staticInit_FUN_004e68d0
// Address: 004e68d0
// Address Range: [[004e68d0, 004e68f3]]
// Convention: unknown
// Signature: void core_grave_cpp_staticInit_FUN_004e68d0(void)

#include "nocturne.h"

void core_grave_cpp_staticInit_FUN_004e68d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGraveClassInfo,"CGrave",core_grave_cpp_factoryFuncGrave_FUN_004e6900,
             &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
