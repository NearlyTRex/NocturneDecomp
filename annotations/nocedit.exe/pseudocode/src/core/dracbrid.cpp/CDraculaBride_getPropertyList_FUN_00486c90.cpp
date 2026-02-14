// Name: core_dracbrid.cpp_CDraculaBride_getPropertyList_FUN_00486c90
// Address: 00486c90
// Address Range: [[00486c90, 00486cfa]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_getPropertyList_FUN_00486c90(CDraculaBride *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_getPropertyList_FUN_00486c90(CDraculaBride *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Rise event",this_ptr->rise_event);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Which bride voice (1..5)",&this_ptr->freaky_voice_number,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
