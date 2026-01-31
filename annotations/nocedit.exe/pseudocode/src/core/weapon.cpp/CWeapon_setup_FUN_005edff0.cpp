// Name: core_weapon.cpp_CWeapon_setup_FUN_005edff0
// Address: 005edff0
// Address Range: [[005edff0, 005edffa]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005edff0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005edff0(CWeapon *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_weapon_cpp_CWeapon_FUN_005ee740(this_ptr);
  this_ptr->unk4 = 0;
  return;
}
