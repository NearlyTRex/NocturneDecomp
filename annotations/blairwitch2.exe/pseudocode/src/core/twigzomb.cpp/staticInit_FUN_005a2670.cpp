// Name: core_twigzomb.cpp_staticInit_FUN_005a2670
// Address: 005a2670
// Address Range: [[005a2670, 005a2693]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_staticInit_FUN_005a2670(void)

#include "nocturne.h"

void core_twigzomb_cpp_staticInit_FUN_005a2670(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTwigZombieClassInfo,"?CTwigZombie" + 1,
             core_twigzomb_cpp_factoryFuncTwigZombie_FUN_005a26a0,&g_CTwigZombieClassVersion,1,
             &g_CBasicEnemyClassInfo);
  return;
}
