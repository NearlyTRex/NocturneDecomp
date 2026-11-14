// Name: core_weapon.cpp_CWeapon_setup_FUN_005ad640
// Address: 005ad640
// Address Range: [[005ad640, 005ad671]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005ad640(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005ad640(CWeapon *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_weapon_cpp_FUN_005ade40(this_ptr);
  this_ptr->is_rendered = 0;
  return;
}
