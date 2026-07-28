// Name: core_weapon.cpp_CWeapon_setup_FUN_00553f10
// Address: 00553f10
// Address Range: [[00553f10, 00553f41]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00553f10(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00553f10(CWeapon *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(this_ptr);
  this_ptr->is_rendered = 0;
  return;
}
