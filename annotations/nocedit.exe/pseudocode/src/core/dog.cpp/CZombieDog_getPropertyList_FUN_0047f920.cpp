// Name: core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920
// Address: 0047f920
// Address Range: [[0047f920, 0047f95c]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920(CZombieDog * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_dog_cpp_CZombieDog_getPropertyList_FUN_0047f920
          (CZombieDog *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
