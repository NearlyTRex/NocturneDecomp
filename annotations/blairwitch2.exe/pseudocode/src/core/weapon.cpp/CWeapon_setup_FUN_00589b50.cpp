// Name: core_weapon.cpp_CWeapon_setup_FUN_00589b50
// Address: 00589b50
// Address Range: [[00589b50, 00589b81]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00589b50(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00589b50(CWeapon *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_weapon_cpp_FUN_0058a2f0(this_ptr);
  this_ptr->is_rendered = 0;
  return;
}
