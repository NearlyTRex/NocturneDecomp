// Name: core_battery.cpp_CBattery_getPropertyList_FUN_004180b0
// Address: 004180b0
// Address Range: [[004180b0, 0041810b]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_getPropertyList_FUN_004180b0 (CBattery *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_battery_cpp_CBattery_getPropertyList_FUN_004180b0
          (CBattery *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Discharge time (sec)",&this_ptr->discharge_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Charge time (sec)",&this_ptr->recharge_time,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
