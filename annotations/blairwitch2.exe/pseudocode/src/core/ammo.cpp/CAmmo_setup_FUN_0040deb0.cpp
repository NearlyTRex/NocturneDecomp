// Name: core_ammo.cpp_CAmmo_setup_FUN_0040deb0
// Address: 0040deb0
// Address Range: [[0040deb0, 0040decf]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040deb0(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040deb0(CAmmo *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  return;
}
