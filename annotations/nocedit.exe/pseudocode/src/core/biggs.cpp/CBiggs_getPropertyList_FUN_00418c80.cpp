// Name: core_biggs.cpp_CBiggs_getPropertyList_FUN_00418c80
// Address: 00418c80
// Address Range: [[00418c80, 00418cd3]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_getPropertyList_FUN_00418c80 (CBiggs *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_biggs_cpp_CBiggs_getPropertyList_FUN_00418c80
          (CBiggs *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
