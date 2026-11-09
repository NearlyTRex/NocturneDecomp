// Name: core_zombprie.cpp_staticInit_FUN_0058d2c0
// Address: 0058d2c0
// Address Range: [[0058d2c0, 0058d2e3]]
// Convention: unknown
// Signature: void core_zombprie_cpp_staticInit_FUN_0058d2c0(void)

#include "nocturne.h"

void core_zombprie_cpp_staticInit_FUN_0058d2c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CZombiePriestClassInfo,"CZombiePriest",
             core_zombprie_cpp_factoryFuncZombiePriest_FUN_0058d4b0,&g_CZombiePriestClassVersion,7,
             &g_CEnemyClassInfo);
  return;
}
