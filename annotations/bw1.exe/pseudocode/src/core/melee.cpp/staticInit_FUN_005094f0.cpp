// Name: core_melee.cpp_staticInit_FUN_005094f0
// Address: 005094f0
// Address Range: [[005094f0, 00509513]]
// Convention: unknown
// Signature: void core_melee_cpp_staticInit_FUN_005094f0(void)

#include "nocturne.h"

void core_melee_cpp_staticInit_FUN_005094f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMeleeClassInfo,"CMelee",core_melee_cpp_factoryFuncMelee_FUN_00509520,
             &g_CMeleeClassVersion,7,&g_CWeaponClassInfo);
  return;
}
