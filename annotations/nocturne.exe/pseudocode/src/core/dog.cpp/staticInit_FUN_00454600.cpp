// Name: core_dog.cpp_staticInit_FUN_00454600
// Address: 00454600
// Address Range: [[00454600, 00454623]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_staticInit_FUN_00454600(void)

#include "nocturne.h"

void __cdecl core_dog_cpp_staticInit_FUN_00454600(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CZombieDogClassInfo,"CZombieDog",
             core_dog_cpp_factoryFuncZombieDog_FUN_00454630,&g_CZombieDogClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
