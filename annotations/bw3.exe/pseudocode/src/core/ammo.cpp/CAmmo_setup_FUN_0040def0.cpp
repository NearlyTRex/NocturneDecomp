// Name: core_ammo.cpp_CAmmo_setup_FUN_0040def0
// Address: 0040def0
// Address Range: [[0040def0, 0040df0f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040def0(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040def0(CAmmo *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  return;
}
