// Name: core_dog.cpp_staticInit_FUN_00462650
// Address: 00462650
// Address Range: [[00462650, 004626dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_staticInit_FUN_00462650(void)

#include "nocturne.h"

void __cdecl core_dog_cpp_staticInit_FUN_00462650(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CZombieDogClassInfo,"CZombieDog",
             core_dog_cpp_factoryFuncZombieDog_FUN_004626e0,&g_CZombieDogClassVersion,2,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1b85088,"CDog_Forest",core_dog_cpp_FUN_00463650,
             (int *)0x5f2a60,1,&g_CZombieDogClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1b850c4,"CDemonDog",core_dog_cpp_FUN_004636e0,
             (int *)0x5f2a64,1,&g_CZombieDogClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1b85100,"CEtherealDog",core_dog_cpp_FUN_00463780,
             (int *)0x5f2a68,1,&g_CZombieDogClassInfo);
  return;
}
