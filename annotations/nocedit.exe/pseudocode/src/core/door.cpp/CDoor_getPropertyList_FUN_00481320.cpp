// Name: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// Address: 00481320
// Address Range: [[00481320, 00481586]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_getPropertyList_FUN_00481320(CDoor * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_door_cpp_CDoor_getPropertyList_FUN_00481320(CDoor *this_ptr,CActorPropertyList *property_list)

{
  char *pcStack00000020;
  char *pcStack0000003c;
  char *pcStack00000048;
  char *pcStack0000004c;
  
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
  pcStack00000020 = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  pcStack00000020 = (char *)&this_ptr->open_speed;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  pcStack00000020 = "Close speed (sec)";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  pcStack00000020 = (char *)0x48149d;
  core_actor_cpp_CActorPropertyList_FUN_0040e300(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  pcStack0000003c = (char *)&this_ptr->one_shot;
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  pcStack0000003c = "Plot as box in shadow";
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  pcStack0000003c = (char *)0x4;
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  pcStack00000048 = (char *)&this_ptr->allow_bullet_holes;
  pcStack0000003c = (char *)0x48153e;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  pcStack0000004c = this_ptr->field9_0x47c + 0x4b0;
  pcStack00000048 = "Locked sound";
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  return;
}
