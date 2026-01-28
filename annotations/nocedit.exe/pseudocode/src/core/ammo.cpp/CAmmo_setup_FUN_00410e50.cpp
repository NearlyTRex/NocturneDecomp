// Name: core_ammo.cpp_CAmmo_setup_FUN_00410e50
// Address: 00410e50
// Address Range: [[00410e50, 00410e6b]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setup_FUN_00410e50(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setup_FUN_00410e50(CAmmo *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  return;
}
