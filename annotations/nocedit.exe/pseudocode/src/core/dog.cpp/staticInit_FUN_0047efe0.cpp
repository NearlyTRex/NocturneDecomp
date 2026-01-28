// Name: core_dog.cpp_staticInit_FUN_0047efe0
// Address: 0047efe0
// Address Range: [[0047efe0, 0047f003]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_staticInit_FUN_0047efe0(void)

#include "nocturne.h"

void __cdecl core_dog_cpp_staticInit_FUN_0047efe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CZombieDogClassInfo,"CZombieDog",core_dog_cpp_factoryFunc_FUN_0047f010,
             &g_CZombieDogClassVersion,2,&g_CEnemyClassInfo);
  return;
}
