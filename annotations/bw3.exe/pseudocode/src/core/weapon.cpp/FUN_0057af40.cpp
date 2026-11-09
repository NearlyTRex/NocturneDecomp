// Name: core_weapon.cpp_FUN_0057af40
// Address: 0057af40
// Address Range: [[0057af40, 0057af71]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_FUN_0057af40(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_FUN_0057af40(CWeapon *this_ptr)

{
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_weapon_cpp_FUN_0057ba10(this_ptr);
  *(uint *)&this_ptr->field_0x584 = 0;
  return;
}
