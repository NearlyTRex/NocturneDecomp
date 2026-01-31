// Name: core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
// Address: 004f3f20
// Address Range: [[004f3f20, 004f3f50]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_getPropertyList_FUN_004f3f20(CHero *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_hero_cpp_CHero_getPropertyList_FUN_004f3f20(CHero *this_ptr,CActorPropertyList *property_list)

{
  core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
