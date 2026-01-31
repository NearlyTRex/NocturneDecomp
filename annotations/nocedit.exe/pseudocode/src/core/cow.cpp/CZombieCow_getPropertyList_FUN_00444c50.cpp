// Name: core_cow.cpp_CZombieCow_getPropertyList_FUN_00444c50
// Address: 00444c50
// Address Range: [[00444c50, 00444c8c]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_getPropertyList_FUN_00444c50 (CZombieCow *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_cow_cpp_CZombieCow_getPropertyList_FUN_00444c50
          (CZombieCow *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
