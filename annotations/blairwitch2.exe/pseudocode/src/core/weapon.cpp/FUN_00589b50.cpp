// Name: core_weapon.cpp_FUN_00589b50
// Address: 00589b50
// Address Range: [[00589b50, 00589b81]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_FUN_00589b50(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_FUN_00589b50(CWeapon *this_ptr)

{
  core_actor_cpp_FUN_00408a80((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
  core_weapon_cpp_FUN_0058a2f0(this_ptr);
  *(uint *)&this_ptr->field_0x6d0 = 0;
  return;
}
