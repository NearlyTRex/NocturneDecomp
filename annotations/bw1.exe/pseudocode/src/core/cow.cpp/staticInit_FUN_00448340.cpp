// Name: core_cow.cpp_staticInit_FUN_00448340
// Address: 00448340
// Address Range: [[00448340, 00448363]]
// Convention: unknown
// Signature: void core_cow_cpp_staticInit_FUN_00448340(void)

#include "nocturne.h"

void core_cow_cpp_staticInit_FUN_00448340(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CZombieCowClassInfo,"MbP?CZombieCow" + 4,
             core_cow_cpp_factoryFuncZombieCow_FUN_00448370,&g_CZombieCowClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
