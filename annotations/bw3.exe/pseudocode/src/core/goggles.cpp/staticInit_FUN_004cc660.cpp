// Name: core_goggles.cpp_staticInit_FUN_004cc660
// Address: 004cc660
// Address Range: [[004cc660, 004cc683]]
// Convention: unknown
// Signature: void core_goggles_cpp_staticInit_FUN_004cc660(void)

#include "nocturne.h"

void core_goggles_cpp_staticInit_FUN_004cc660(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGogglesClassInfo,"?CGoggles" + 1,
             core_goggles_cpp_factoryFuncGoggles_FUN_004cc690,&g_CGogglesClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
