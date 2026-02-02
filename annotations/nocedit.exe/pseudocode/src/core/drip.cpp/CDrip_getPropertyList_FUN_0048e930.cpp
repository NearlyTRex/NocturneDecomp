// Name: core_drip.cpp_CDrip_getPropertyList_FUN_0048e930
// Address: 0048e930
// Address Range: [[0048e930, 0048ea24]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_getPropertyList_FUN_0048e930(CDrip *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_drip_cpp_CDrip_getPropertyList_FUN_0048e930(CDrip *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Type",core_drip_cpp_CDrip_propertyDisplayCallback_FUN_0048e830,
             core_drip_cpp_CDrip_propertyActionCallback_FUN_0048e8d0);
  if (this_ptr->type == DRIP_TYPE_STALAG) {
    core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
              (property_list,"Model file (.kfm)",&this_ptr->model,0);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Auto drop",&this_ptr->auto_drop);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Auto drop min time",&this_ptr->min_auto_drip_time,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Auto drop max time",&this_ptr->max_auto_drip_time,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Drip radius",&this_ptr->drip_radius,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Damage",&this_ptr->damage,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Hit sound",this_ptr->hit_sound);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"No rocks on hitting ground",&this_ptr->no_rock_flag);
  return;
}
