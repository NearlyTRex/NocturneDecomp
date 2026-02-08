// Name: core_trigger.cpp_CTrigger_getPropertyList_FUN_005e0f70
// Address: 005e0f70
// Address Range: [[005e0f70, 005e1172]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_getPropertyList_FUN_005e0f70 (CTrigger *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_trigger_cpp_CTrigger_getPropertyList_FUN_005e0f70
          (CTrigger *this_ptr,CActorPropertyList *property_list)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"On event",this_ptr->on_event);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"Off event",this_ptr->off_event);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Event type",4,g_TriggerEventTypePairs,&this_ptr->event_type);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"What triggers me",10,g_TriggerCauseTypePairs,
             &this_ptr->hero_triggers_me);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Shape",2,g_TriggerShapeTypePairs,&this_ptr->shape);
  if (this_ptr->hero_triggers_me == 1) {
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (property_list,"Actor name",this_ptr->actor_name,0x50,
               (CActorPropertyValidatorFunc *)0x0);
  }
  if (this_ptr->hero_triggers_me == 9) {
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (property_list,"Actor type(s)",this_ptr->actor_type,0x50,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (property_list,"Actor name wildcard",this_ptr->actor_name,0x50,
               (CActorPropertyValidatorFunc *)0x0);
  }
  if (this_ptr->hero_triggers_me == 2) {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (property_list,"Light min",&this_ptr->light_min,0.0,1.0,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (property_list,"Light max",&this_ptr->light_max,0.0,1.0,
               (CActorPropertyValidatorFunc *)0x0);
  }
  if (this_ptr->hero_triggers_me == 5) {
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (property_list,"Laser type",&this_ptr->laser_type,
               (CActorPropertyValidatorFunc *)0x0);
  }
  if (this_ptr->hero_triggers_me == 7) {
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (property_list,"Hitpoints",&this_ptr->hit_points,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (property_list,"Damage actor name wildcard",
               this_ptr->damage_actor_name_wildcard_name,100,(CActorPropertyValidatorFunc *)0x0);
  }
  iVar1 = this_ptr->hero_triggers_me;
  if (((iVar1 == 1) || (iVar1 == 0)) || (iVar1 == 9)) {
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (property_list,"pressurePlate",&this_ptr->pressure_plate);
  }
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Test radius",&this_ptr->test_radius,
             (CActorPropertyValidatorFunc *)0x0);
  if (this_ptr->hero_triggers_me == 4) {
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (property_list,"Auto aim at me",&this_ptr->auto_aim_at_me);
    return;
  }
  return;
}
