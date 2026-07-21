// Name: core_weapon.cpp_CWeapon_setup_FUN_00553f10
// Address: 00553f10
// Address Range: [[00553f10, 00553f41]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00553f10(int param_1)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00553f10(int param_1)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(param_1);
  *(uint *)(param_1 + 0x56c) = 0;
  return;
}
