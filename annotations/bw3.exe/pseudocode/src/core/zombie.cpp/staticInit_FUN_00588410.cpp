// Name: core_zombie.cpp_staticInit_FUN_00588410
// Address: 00588410
// Address Range: [[00588410, 005884e2]]
// Convention: unknown
// Signature: void core_zombie_cpp_staticInit_FUN_00588410(void)

#include "nocturne.h"

void core_zombie_cpp_staticInit_FUN_00588410(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CZombieClassInfo,(char *)0x5d833f,core_zombie_cpp_factoryFuncZombie_FUN_005888a0,
             &g_CZombieClassVersion,0xc,&g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d24844,"CZombie_Cemetery",core_zombie_cpp_FUN_0058cc90,
             (int *)0x6072a8,1,&g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d24880,"CZombie_Forest",core_zombie_cpp_FUN_0058cd20,
             (int *)0x6072ac,1,&g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d248bc,"CZombie_Spirit",core_zombie_cpp_FUN_0058cdb0,
             (int *)0x6072b0,1,&g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d248f8,"CZombie_Indian",core_zombie_cpp_FUN_0058ce40,
             (int *)0x6072b4,1,&g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d24934,"CZombie_Demon",core_zombie_cpp_FUN_0058ced0,
             (int *)0x6072b8,1,&g_CZombieClassInfo);
  return;
}
