// Name: core_mimic.cpp_CMimic_getPropertyList_FUN_00520d10
// Address: 00520d10
// Address Range: [[00520d10, 00520d9b]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_getPropertyList_FUN_00520d10 (CMimic *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_mimic_cpp_CMimic_getPropertyList_FUN_00520d10
          (CMimic *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  return;
}
