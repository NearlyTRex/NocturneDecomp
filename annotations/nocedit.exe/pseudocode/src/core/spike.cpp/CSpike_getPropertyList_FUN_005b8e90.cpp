// Name: core_spike.cpp_CSpike_getPropertyList_FUN_005b8e90
// Address: 005b8e90
// Address Range: [[005b8e90, 005b901f]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_getPropertyList_FUN_005b8e90(CSpike *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_getPropertyList_FUN_005b8e90(CSpike *this_ptr,CActorPropertyList *property_list)

{
  char *property_name;
  char *data_ptr;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Type",3,g_SpikeTypeTypePairs,&this_ptr->spike_type);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"State",4,g_SpikeStateTypePairs,&this_ptr->spike_state);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Are we active",&this_ptr->are_we_active,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Extend distance",&this_ptr->extend_distance,
             (CActorPropertyValidatorFunc *)0x0);
  if (this_ptr->spike_type == 2) {
    core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
              (property_list,"Extend cond",this_ptr->extend_event);
    data_ptr = this_ptr->retract_event;
    property_name = "Retract cond";
  }
  else {
    core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
              (property_list,"Start cond",this_ptr->start_event);
    data_ptr = this_ptr->stop_event;
    property_name = "Stop cond";
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460(property_list,property_name,data_ptr);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Extend time",&this_ptr->extend_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Retract time",&this_ptr->retract_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Extend sound",this_ptr->extend_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Retract sound",this_ptr->retract_sound);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Period",&this_ptr->period,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Param",&this_ptr->param,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"DamageStrength",&this_ptr->damage_strength,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
