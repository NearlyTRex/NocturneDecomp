// Name: core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990
// Address: 0041d990
// Address Range: [[0041d990, 0041d9fa]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_getPropertyList_FUN_0041d990 (CBoneGuy *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_boneguy_cpp_CBoneGuy_getPropertyList_FUN_0041d990
          (CBoneGuy *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
