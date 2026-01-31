// Name: core_tentacle.cpp_CTentacle_getPropertyList_FUN_005dbc60
// Address: 005dbc60
// Address Range: [[005dbc60, 005dbcbc]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_getPropertyList_FUN_005dbc60 (CTentacle *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_tentacle_cpp_CTentacle_getPropertyList_FUN_005dbc60
          (CTentacle *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(property_list);
  return;
}
