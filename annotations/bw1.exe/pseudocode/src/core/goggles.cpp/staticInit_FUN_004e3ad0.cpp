// Name: core_goggles.cpp_staticInit_FUN_004e3ad0
// Address: 004e3ad0
// Address Range: [[004e3ad0, 004e3af3]]
// Convention: unknown
// Signature: void core_goggles_cpp_staticInit_FUN_004e3ad0(void)

#include "nocturne.h"

void core_goggles_cpp_staticInit_FUN_004e3ad0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGogglesClassInfo,"?CGoggles" + 1,
             core_goggles_cpp_factoryFuncGoggles_FUN_004e3b00,&g_CGogglesClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
