// Name: core_larva.cpp_CLarva_getPropertyList_FUN_00503c50
// Address: 00503c50
// Address Range: [[00503c50, 00503c8c]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_getPropertyList_FUN_00503c50 (CLarva *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_larva_cpp_CLarva_getPropertyList_FUN_00503c50
          (CLarva *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}
