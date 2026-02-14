// Name: core_vessel.cpp_CCryptVessel_getPropertyList_FUN_005e9c00
// Address: 005e9c00
// Address Range: [[005e9c00, 005e9d02]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_getPropertyList_FUN_005e9c00(CCryptVessel *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_getPropertyList_FUN_005e9c00(CCryptVessel *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Prey",&this_ptr->prey,1,"CCryptVessel",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Neutral",&this_ptr->neutral,1,"CCryptVessel",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Destroyed event (momentary)",this_ptr->destroyed_event);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Start loc",&this_ptr->start_loc,1,"CActorDestination",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"End loc",&this_ptr->end_loc,1,"CActorDestination",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Win event (persistant)",this_ptr->win_event);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Eat distance",&this_ptr->eat_distance,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Visual type",3,g_CryptVesselVisualTypePairs,
             &this_ptr->visual_type);
  return;
}
