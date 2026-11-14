// Name: core_weapon.cpp_CWeapon_setup_FUN_0057af40
// Address: 0057af40
// Address Range: [[0057af40, 0057af71]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_0057af40(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_0057af40(CWeapon *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_weapon_cpp_FUN_0057ba10(this_ptr);
  this_ptr->is_rendered = 0;
  return;
}
