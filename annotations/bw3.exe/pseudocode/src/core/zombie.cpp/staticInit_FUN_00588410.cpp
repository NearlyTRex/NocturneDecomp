// Name: core_zombie.cpp_staticInit_FUN_00588410
// Address: 00588410
// Address Range: [[00588410, 005884e2]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_staticInit_FUN_00588410(void)

#include "nocturne.h"

void __cdecl core_zombie_cpp_staticInit_FUN_00588410(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CZombieClassInfo,"CZombie",core_zombie_cpp_factoryFuncZombie_FUN_005888a0,
             &g_CZombieClassVersion,0xc,&g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_02d24844,"CZombie_Cemetery",
             core_zombie_cpp_factoryFuncZombieCemetery_FUN_0058cc90,&g_INT_006072a8,1,
             &g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_02d24880,"CZombie_Forest",
             core_zombie_cpp_factoryFuncZombieForest_FUN_0058cd20,&g_INT_006072ac,1,
             &g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_02d248bc,"CZombie_Spirit",
             core_zombie_cpp_factoryFuncZombieSpirit_FUN_0058cdb0,&g_INT_006072b0,1,
             &g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_02d248f8,"CZombie_Indian",
             core_zombie_cpp_factoryFuncZombieIndian_FUN_0058ce40,&g_INT_006072b4,1,
             &g_CZombieClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_02d24934,"CZombie_Demon",
             core_zombie_cpp_factoryFuncZombieDemon_FUN_0058ced0,&g_INT_006072b8,1,
             &g_CZombieClassInfo);
  return;
}
