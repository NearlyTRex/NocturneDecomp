// Name: core_vampboss.cpp_CVampireBoss_getPropertyList_FUN_005e7650
// Address: 005e7650
// Address Range: [[005e7650, 005e76f3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_getPropertyList_FUN_005e7650(CVampireBoss *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_getPropertyList_FUN_005e7650(CVampireBoss *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0
            (property_list,"Model state",&(this_ptr->base).base.model);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Waypoint 0",&this_ptr->way_point_0,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Waypoint 1",&this_ptr->way_point_1,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Waypoint 2",&this_ptr->way_point_2,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Waypoint 3",&this_ptr->way_point_3,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
