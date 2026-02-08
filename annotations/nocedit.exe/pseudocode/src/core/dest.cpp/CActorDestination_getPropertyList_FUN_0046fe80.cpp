// Name: core_dest.cpp_CActorDestination_getPropertyList_FUN_0046fe80
// Address: 0046fe80
// Address Range: [[0046fe80, 0046fef7]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_getPropertyList_FUN_0046fe80 (CActorDestination *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_dest_cpp_CActorDestination_getPropertyList_FUN_0046fe80
          (CActorDestination *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Actor who goes here",&this_ptr->dest_actor,1,
             "CDemonActor",(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"Event to raise when in place",this_ptr->what_event);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Actor class to go here",this_ptr->dest_class,0x27,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Persistant event flag",&this_ptr->persistent_event_flag);
  return;
}
