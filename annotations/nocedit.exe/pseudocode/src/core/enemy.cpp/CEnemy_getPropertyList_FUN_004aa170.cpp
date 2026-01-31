// Name: core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
// Address: 004aa170
// Address Range: [[004aa170, 004aa24f]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170 (CEnemy *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

int __cdecl
core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170
          (CEnemy *this_ptr,CActorPropertyList *property_list)

{
  int extraout_EAX;
  int extraout_EAX_00;
  
  core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  *(uint *)(extraout_EAX + 0x58) = 1;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  return extraout_EAX_00;
}
