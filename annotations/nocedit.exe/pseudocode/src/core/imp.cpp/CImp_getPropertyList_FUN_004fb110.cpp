// Name: core_imp.cpp_CImp_getPropertyList_FUN_004fb110
// Address: 004fb110
// Address Range: [[004fb110, 004fb14c]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_getPropertyList_FUN_004fb110(CImp *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_imp_cpp_CImp_getPropertyList_FUN_004fb110(CImp *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  return;
}
