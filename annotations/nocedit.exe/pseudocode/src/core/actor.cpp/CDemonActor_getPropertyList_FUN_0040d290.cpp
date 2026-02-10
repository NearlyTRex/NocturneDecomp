// Name: core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
// Address: 0040d290
// Address Range: [[0040d290, 0040d328]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290 (CDemonActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290
          (CDemonActor *this_ptr,CActorPropertyList *property_list)

{
  int iVar1;
  
  property_list->owner = this_ptr;
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Name",this_ptr->actor_name,0x1e,
             core_actor_cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"Pos",&(this_ptr->location).position,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"PHB",&(this_ptr->orient).vec,(CActorPropertyValidatorFunc *)0x0
            );
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Creation event",this_ptr->create_event);
  if (this_ptr->create_event[0] != '\0') {
    iVar1 = stricmp(this_ptr->create_event,"none");
    if (iVar1 != 0) {
      core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
                (property_list,"Probability",&this_ptr->create_prob,0.0,1.0,
                 (CActorPropertyValidatorFunc *)0x0);
      return;
    }
  }
  return;
}
