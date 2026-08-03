// Name: core_ammo.cpp_CAmmo_setup_FUN_0040ec00
// Address: 0040ec00
// Address Range: [[0040ec00, 0040ec1f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040ec00(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040ec00(CAmmo *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  return;
}
