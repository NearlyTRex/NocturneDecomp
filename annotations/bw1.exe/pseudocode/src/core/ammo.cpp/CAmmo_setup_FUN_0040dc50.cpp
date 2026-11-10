// Name: core_ammo.cpp_CAmmo_setup_FUN_0040dc50
// Address: 0040dc50
// Address Range: [[0040dc50, 0040dc6f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040dc50(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040dc50(CAmmo *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  return;
}
