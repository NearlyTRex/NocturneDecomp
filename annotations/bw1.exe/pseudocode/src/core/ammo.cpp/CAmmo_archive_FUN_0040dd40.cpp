// Name: core_ammo.cpp_CAmmo_archive_FUN_0040dd40
// Address: 0040dd40
// Address Range: [[0040dd40, 0040dd9f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040dd40(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040dd40(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->ammo_type,"ammoType");
  return;
}
