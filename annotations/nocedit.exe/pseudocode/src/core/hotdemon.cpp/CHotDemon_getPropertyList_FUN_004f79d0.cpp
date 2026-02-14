// Name: core_hotdemon.cpp_CHotDemon_getPropertyList_FUN_004f79d0
// Address: 004f79d0
// Address Range: [[004f79d0, 004f7a0c]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_getPropertyList_FUN_004f79d0(CHotDemon *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_getPropertyList_FUN_004f79d0(CHotDemon *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  return;
}
