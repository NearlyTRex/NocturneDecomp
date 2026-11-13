// Name: core_dog.cpp_staticInit_FUN_00476750
// Address: 00476750
// Address Range: [[00476750, 00476773]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_staticInit_FUN_00476750(void)

#include "nocturne.h"

void __cdecl core_dog_cpp_staticInit_FUN_00476750(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CZombieDogClassInfo,"CZombieDog",
             core_dog_cpp_factoryFuncZombieDog_FUN_00476780,&g_CZombieDogClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
