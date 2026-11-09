// Name: core_exorcism.cpp_staticInit_FUN_0048a2b0
// Address: 0048a2b0
// Address Range: [[0048a2b0, 0048a2d3]]
// Convention: unknown
// Signature: void core_exorcism_cpp_staticInit_FUN_0048a2b0(void)

#include "nocturne.h"

void core_exorcism_cpp_staticInit_FUN_0048a2b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CExorcismClassInfo,"CExorcism",
             core_exorcism_cpp_factoryFuncExorcism_FUN_0048a2e0,&g_CExorcismClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
