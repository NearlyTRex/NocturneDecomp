// Name: core_flamecan.cpp_CFlameCan_getPropertyList_FUN_004cb6e0
// Address: 004cb6e0
// Address Range: [[004cb6e0, 004cb74e]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_getPropertyList_FUN_004cb6e0 (CFlameCan *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_flamecan_cpp_CFlameCan_getPropertyList_FUN_004cb6e0
          (CFlameCan *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Time to explode",&this_ptr->time_to_explode,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"On fire",&this_ptr->on_fire);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Event to catch on fire",this_ptr->on_fire_condition);
  return;
}
