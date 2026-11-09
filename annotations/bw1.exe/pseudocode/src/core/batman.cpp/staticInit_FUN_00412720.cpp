// Name: core_batman.cpp_staticInit_FUN_00412720
// Address: 00412720
// Address Range: [[00412720, 00412743]]
// Convention: unknown
// Signature: void core_batman_cpp_staticInit_FUN_00412720(void)

#include "nocturne.h"

void core_batman_cpp_staticInit_FUN_00412720(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBatmanClassInfo,"@CBatman" + 1,
             core_batman_cpp_factoryFuncBatman_FUN_00412750,&g_CBatmanClassVersion,3,
             &g_CEnemyClassInfo);
  return;
}
