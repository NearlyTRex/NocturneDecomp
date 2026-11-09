// Name: core_weapon.cpp_CWeapon_setup_FUN_005ad640
// Address: 005ad640
// Address Range: [[005ad640, 005ad671]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005ad640(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005ad640(CWeapon *this_ptr)

{
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_weapon_cpp_FUN_005ade40(this_ptr);
  *(uint *)&this_ptr->field_0x574 = 0;
  return;
}
