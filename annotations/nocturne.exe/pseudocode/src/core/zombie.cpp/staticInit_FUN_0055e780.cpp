// Name: core_zombie.cpp_staticInit_FUN_0055e780
// Address: 0055e780
// Address Range: [[0055e780, 0055e7a3]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_staticInit_FUN_0055e780(void)

#include "nocturne.h"

void __cdecl core_zombie_cpp_staticInit_FUN_0055e780(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CZombieActorType_02de4940,"CZombie",
             core_zombie_cpp_factoryFuncZombie_FUN_0055ea90,&INT_005c166c,0xb,
             &g_CEnemyActorType_01bcdebc);
  return;
}
