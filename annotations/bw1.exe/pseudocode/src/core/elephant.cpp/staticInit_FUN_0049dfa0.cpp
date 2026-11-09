// Name: core_elephant.cpp_staticInit_FUN_0049dfa0
// Address: 0049dfa0
// Address Range: [[0049dfa0, 0049dfc3]]
// Convention: unknown
// Signature: void core_elephant_cpp_staticInit_FUN_0049dfa0(void)

#include "nocturne.h"

void core_elephant_cpp_staticInit_FUN_0049dfa0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CElephantGunClassInfo,"CElephantGun",
             core_elephant_cpp_factoryFuncElephantGun_FUN_0049dfd0,&g_CElephantGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
