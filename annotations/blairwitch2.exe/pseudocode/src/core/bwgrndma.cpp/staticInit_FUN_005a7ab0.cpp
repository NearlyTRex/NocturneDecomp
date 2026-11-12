// Name: core_bwgrndma.cpp_staticInit_FUN_005a7ab0
// Address: 005a7ab0
// Address Range: [[005a7ab0, 005a7ad3]]
// Convention: unknown
// Signature: void core_bwgrndma_cpp_staticInit_FUN_005a7ab0(void)

#include "nocturne.h"

void core_bwgrndma_cpp_staticInit_FUN_005a7ab0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGrandmaClassInfo,"CGrandma",
             core_bwgrndma_cpp_factoryFuncGrandma_FUN_005a7ae0,&g_CGrandmaClassVersion,1,
             &g_CBasicNPCClassInfo);
  return;
}
