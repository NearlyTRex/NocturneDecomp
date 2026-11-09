// Name: core_dog.cpp_staticInit_FUN_0045e210
// Address: 0045e210
// Address Range: [[0045e210, 0045e233]]
// Convention: unknown
// Signature: void core_dog_cpp_staticInit_FUN_0045e210(void)

#include "nocturne.h"

void core_dog_cpp_staticInit_FUN_0045e210(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CZombieDogClassInfo,"CZombieDog",
             core_dog_cpp_factoryFuncZombieDog_FUN_0045e240,&g_CZombieDogClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}
