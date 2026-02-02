// Name: core_npc.cpp_CNPC_getPropertyList_FUN_00544e40
// Address: 00544e40
// Address Range: [[00544e40, 00544eaa]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(CNPC *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(CNPC *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Shoot me",&this_ptr->shoot_me);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Hit points",&(this_ptr->base).hit_points,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
