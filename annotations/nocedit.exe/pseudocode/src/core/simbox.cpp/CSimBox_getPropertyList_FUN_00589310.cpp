// Name: core_simbox.cpp_CSimBox_getPropertyList_FUN_00589310
// Address: 00589310
// Address Range: [[00589310, 005893bd]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_getPropertyList_FUN_00589310 (CSimBox *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_simbox_cpp_CSimBox_getPropertyList_FUN_00589310
          (CSimBox *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Weight (lbs)",&this_ptr->weight,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Type",
             core_simbox_cpp_CSimBox_propertyDisplayCallback_FUN_00589270,
             core_simbox_cpp_CSimBox_propertyActionCallback_FUN_005892d0);
  if (this_ptr->type != 1) {
    return;
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Event condition : ",this_ptr->trigger_event);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"Initial velocity",&this_ptr->initial_velocity,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"Initial rotation velocity",&this_ptr->init_rot_vel,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
