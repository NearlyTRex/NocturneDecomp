// Name: core_imp.cpp_CImp_getPropertyList_FUN_004fb110
// Address: 004fb110
// Address Range: [[004fb110, 004fb14c]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_getPropertyList_FUN_004fb110(CImp *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_imp_cpp_CImp_getPropertyList_FUN_004fb110(CImp *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
