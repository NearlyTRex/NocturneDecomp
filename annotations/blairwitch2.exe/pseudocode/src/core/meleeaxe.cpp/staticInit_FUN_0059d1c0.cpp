// Name: core_meleeaxe.cpp_staticInit_FUN_0059d1c0
// Address: 0059d1c0
// Address Range: [[0059d1c0, 0059d1e3]]
// Convention: unknown
// Signature: void core_meleeaxe_cpp_staticInit_FUN_0059d1c0(void)

#include "nocturne.h"

void core_meleeaxe_cpp_staticInit_FUN_0059d1c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMeleeAxeClassInfo,"CMeleeAxe",
             core_meleeaxe_cpp_factoryFuncMeleeAxe_FUN_0059d1f0,&g_CMeleeAxeClassVersion,1,
             &g_CMeleeClassInfo);
  return;
}
