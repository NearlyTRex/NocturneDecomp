// Name: core_cow.cpp_staticInit_FUN_00439080
// Address: 00439080
// Address Range: [[00439080, 004390a3]]
// Convention: unknown
// Signature: void core_cow_cpp_staticInit_FUN_00439080(void)

#include "nocturne.h"

void core_cow_cpp_staticInit_FUN_00439080(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CZombieCowClassInfo,"MbP?CZombieCow" + 4,
             core_cow_cpp_factoryFuncZombieCow_FUN_004390b0,&g_CZombieCowClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
