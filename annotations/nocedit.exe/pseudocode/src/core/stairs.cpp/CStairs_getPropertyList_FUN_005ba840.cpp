// Name: core_stairs.cpp_CStairs_getPropertyList_FUN_005ba840
// Address: 005ba840
// Address Range: [[005ba840, 005ba8f5]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_getPropertyList_FUN_005ba840(CStairs *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_getPropertyList_FUN_005ba840(CStairs *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"stair count",&this_ptr->stair_count,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"rise",&this_ptr->rise,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"run",&this_ptr->run,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"width",&this_ptr->width,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"bevelY",&this_ptr->bevel_y,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"bevelZ",&this_ptr->bevel_z,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (property_list,"ground type",&this_ptr->ground_type);
  return;
}
