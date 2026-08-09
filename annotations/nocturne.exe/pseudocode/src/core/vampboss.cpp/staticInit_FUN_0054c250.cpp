// Name: core_vampboss.cpp_staticInit_FUN_0054c250
// Address: 0054c250
// Address Range: [[0054c250, 0054c273]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_staticInit_FUN_0054c250(void)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_staticInit_FUN_0054c250(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CVampireBossActorType_02dd1148,"CVampireBoss",
             core_vampboss_cpp_factoryFuncVampireBoss_FUN_0054c280,&INT_005c1188,4,
             &g_CEnemyActorType_01bcdebc);
  return;
}
