// Name: core_cow.cpp_staticInit_FUN_00444f00
// Address: 00444f00
// Address Range: [[00444f00, 00444f23]]
// Convention: unknown
// Signature: void core_cow_cpp_staticInit_FUN_00444f00(void)

#include "nocturne.h"

void core_cow_cpp_staticInit_FUN_00444f00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CZombieCowClassInfo,"MbP?CZombieCow" + 4,
             core_cow_cpp_factoryFuncZombieCow_FUN_00444f30,&g_CZombieCowClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
