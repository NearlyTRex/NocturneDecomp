// Name: core_ammo.cpp_CAmmo_archive_FUN_0040dd40
// Address: 0040dd40
// Address Range: [[0040dd40, 0040dd9f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040dd40(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040dd40(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x2d4,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x314,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x318,"ammoType");
  return;
}
