// Name: core_partibox.cpp_staticInit_FUN_005ac740
// Address: 005ac740
// Address Range: [[005ac740, 005ac763]]
// Convention: unknown
// Signature: void core_partibox_cpp_staticInit_FUN_005ac740(void)

#include "nocturne.h"

void core_partibox_cpp_staticInit_FUN_005ac740(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CParticleBoxClassInfo,"CParticleBox",
             core_partibox_cpp_factoryFuncParticleBox_FUN_005ac770,&g_CParticleBoxClassVersion,1,
             &g_CBoxActorClassInfo);
  return;
}
