// Name: core_hero.cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60
// Address: 004f3f60
// Address Range: [[004f3f60, 004f3f96]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60 (CHeroPlaceholder *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_hero_cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60
          (CHeroPlaceholder *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
            (property_list,"index",&this_ptr->index,0,3,(CActorPropertyValidatorFunc *)0x0)
  ;
  return;
}
