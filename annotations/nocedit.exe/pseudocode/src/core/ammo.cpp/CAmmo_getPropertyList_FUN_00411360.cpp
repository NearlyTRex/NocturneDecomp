// Name: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
// Address: 00411360
// Address Range: [[00411360, 004113d5]]
// Convention: __cdecl
// Signature: void core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
  return;
}
