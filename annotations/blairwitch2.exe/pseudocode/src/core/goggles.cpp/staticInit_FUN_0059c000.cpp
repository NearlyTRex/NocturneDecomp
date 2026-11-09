// Name: core_goggles.cpp_staticInit_FUN_0059c000
// Address: 0059c000
// Address Range: [[0059c000, 0059c023]]
// Convention: unknown
// Signature: void core_goggles_cpp_staticInit_FUN_0059c000(void)

#include "nocturne.h"

void core_goggles_cpp_staticInit_FUN_0059c000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGogglesClassInfo,"CGoggles",
             core_goggles_cpp_factoryFuncGoggles_FUN_0059c030,&g_CGogglesClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
