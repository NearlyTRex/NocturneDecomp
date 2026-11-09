// Name: core_ammo.cpp_CAmmo_archive_FUN_0040e000
// Address: 0040e000
// Address Range: [[0040e000, 0040e05f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e000(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e000(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2d4,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x314,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x318,"ammoType");
  return;
}
