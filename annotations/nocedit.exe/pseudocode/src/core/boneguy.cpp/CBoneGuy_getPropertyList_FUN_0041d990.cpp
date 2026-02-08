// Name: core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990
// Address: 0041d990
// Address Range: [[0041d990, 0041d9fa]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_getPropertyList_FUN_0041d990 (CBoneGuy *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_boneguy_cpp_CBoneGuy_getPropertyList_FUN_0041d990
          (CBoneGuy *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Recombine time",&this_ptr->recombine_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Death condition",this_ptr->death_event);
  return;
}
