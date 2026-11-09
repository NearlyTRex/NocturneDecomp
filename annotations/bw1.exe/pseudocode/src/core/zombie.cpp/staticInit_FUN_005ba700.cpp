// Name: core_zombie.cpp_staticInit_FUN_005ba700
// Address: 005ba700
// Address Range: [[005ba700, 005ba723]]
// Convention: unknown
// Signature: void core_zombie_cpp_staticInit_FUN_005ba700(void)

#include "nocturne.h"

void core_zombie_cpp_staticInit_FUN_005ba700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CZombieClassInfo,(char *)0x5fa3c4,core_zombie_cpp_factoryFuncZombie_FUN_005baae0,
             &g_CZombieClassVersion,0xb,&g_CEnemyClassInfo);
  return;
}
