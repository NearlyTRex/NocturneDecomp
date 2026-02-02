// Name: core_hostage.cpp_CHostage_getPropertyList_FUN_004f69c0
// Address: 004f69c0
// Address Range: [[004f69c0, 004f6b2d]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_getPropertyList_FUN_004f69c0 (CHostage *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_hostage_cpp_CHostage_getPropertyList_FUN_004f69c0
          (CHostage *this_ptr,CActorPropertyList *property_list)

{
  core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"goalWayPoint",this_ptr->unk3,1,"CWayPoint",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"sitDownWayPoint",this_ptr->unk3 + 4,1,"CDemonActor",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"rescueDistance",&this_ptr->rescue_distance,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"rescueCondition",this_ptr->unk1);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"heroFoundMeEvent",this_ptr->unk1 + 0x84);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"heroLeftMeEvent",this_ptr->unk1 + 0xe8);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"heroCameBackEvent",this_ptr->unk1 + 0x14c);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"getEatenEvent",this_ptr->unk1 + 0x1b0);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"goingToSitDownEvent",this_ptr->unk1 + 0x214);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"sitDownEvent",this_ptr->unk1 + 0x278);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"rescueEventName (persistent)",this_ptr->unk1 + 100,0x20,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"noShadowsWhenSaved",&this_ptr->no_shadows_when_saved);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"descriptiveName",(this_ptr->base).base.descriptive_name,100,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Damage sound",this_ptr->unk1 + 0x2dc);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Die sound",this_ptr->unk1 + 0x340);
  return;
}
