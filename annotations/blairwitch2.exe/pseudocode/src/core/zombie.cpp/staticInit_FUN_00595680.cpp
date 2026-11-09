// Name: core_zombie.cpp_staticInit_FUN_00595680
// Address: 00595680
// Address Range: [[00595680, 005956a3]]
// Convention: unknown
// Signature: void core_zombie_cpp_staticInit_FUN_00595680(void)

#include "nocturne.h"

void core_zombie_cpp_staticInit_FUN_00595680(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CZombieClassInfo,(char *)0x5eedf2,core_zombie_cpp_factoryFuncZombie_FUN_00595a60,
             &g_CZombieClassVersion,0xb,&g_CEnemyClassInfo);
  return;
}
