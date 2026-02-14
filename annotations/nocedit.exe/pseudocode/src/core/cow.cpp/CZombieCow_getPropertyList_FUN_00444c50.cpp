// Name: core_cow.cpp_CZombieCow_getPropertyList_FUN_00444c50
// Address: 00444c50
// Address Range: [[00444c50, 00444c8c]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_getPropertyList_FUN_00444c50(CZombieCow *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_getPropertyList_FUN_00444c50(CZombieCow *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  return;
}
