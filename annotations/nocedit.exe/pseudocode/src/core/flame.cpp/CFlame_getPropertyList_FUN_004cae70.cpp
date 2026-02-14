// Name: core_flame.cpp_CFlame_getPropertyList_FUN_004cae70
// Address: 004cae70
// Address Range: [[004cae70, 004caf50]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_getPropertyList_FUN_004cae70(CFlame *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_getPropertyList_FUN_004cae70(CFlame *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Flame type",4,g_FlameTypePairs,&this_ptr->which_flame);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Globe scalar",&this_ptr->globe_scalar,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"On event",this_ptr->on_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Off event",this_ptr->off_event);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Flame state",&this_ptr->flame_state);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Intensity",&this_ptr->intensity,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Randomness",&this_ptr->randomness,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Catch hero on fire",&this_ptr->burn_hero);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Catch enemies on fire",&this_ptr->burn_enemy);
  return;
}
