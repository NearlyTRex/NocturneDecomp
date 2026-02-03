// Name: core_vessel.cpp_CCryptVessel_FUN_005e9c00
// Address: 005e9c00
// Address Range: [[005e9c00, 005e9d02]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9c00(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9c00(CCryptVessel *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (in_stack_00000008,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Prey",&this_ptr->prey,1,"CCryptVessel",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Neutral",&this_ptr->neutral,1,"CCryptVessel",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Destroyed event (momentary)",this_ptr->destroyed_event);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Start loc",this_ptr->start_loc,1,
             "CActorDestination",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"End loc",this_ptr->end_loc,1,"CActorDestination",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Win event (persistant)",this_ptr->win_event);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Eat distance",&this_ptr->eat_distance,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Visual type",3,(int *)&PTR_s_Air_006844b0);
  return;
}
