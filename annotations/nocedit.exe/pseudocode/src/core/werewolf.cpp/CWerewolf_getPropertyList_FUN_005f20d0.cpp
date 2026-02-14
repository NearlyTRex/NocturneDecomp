// Name: core_werewolf.cpp_CWerewolf_getPropertyList_FUN_005f20d0
// Address: 005f20d0
// Address Range: [[005f20d0, 005f21da]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_getPropertyList_FUN_005f20d0(CWerewolf *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_getPropertyList_FUN_005f20d0(CWerewolf *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Type",
             core_werewolf_cpp_CWerewolf_propertyDisplayCallback_FUN_005f2010,
             core_werewolf_cpp_CWerewolf_propertyActionCallback_FUN_005f2070);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Light up eyes",&this_ptr->light_up_eyes);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"chainAnchor",&this_ptr->chain_anchor,1,"CDemonActor",
             (CActorPropertyValidatorFunc *)0x0);
  if (this_ptr->chain_anchor == (CDemonActor *)0x0) {
    if (this_ptr->type != WEREWOLF_TYPE_FOREST) {
      return;
    }
  }
  else {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (property_list,"chainLength",&this_ptr->chain_length,1.0,1000.0,
               (CActorPropertyValidatorFunc *)0x0);
    if (this_ptr->type != WEREWOLF_TYPE_FOREST) {
      return;
    }
  }
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Way Point 1",&this_ptr->alpha1,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Way Point 2",&this_ptr->alpha2,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
