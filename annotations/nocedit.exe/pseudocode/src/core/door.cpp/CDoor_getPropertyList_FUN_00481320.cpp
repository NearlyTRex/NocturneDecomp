// Name: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// Address: 00481320
// Address Range: [[00481320, 00481586]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_getPropertyList_FUN_00481320(CDoor * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_door_cpp_CDoor_getPropertyList_FUN_00481320(CDoor *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  if (this_ptr->door_type == 2) {
    core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
  if (this_ptr->door_type == 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e5a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  return;
}
