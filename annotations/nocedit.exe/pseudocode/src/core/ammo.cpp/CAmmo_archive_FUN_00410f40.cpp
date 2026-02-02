// Name: core_ammo.cpp_CAmmo_archive_FUN_00410f40
// Address: 00410f40
// Address Range: [[00410f40, 00410f9f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_00410f40(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_00410f40(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->ammo_type,"ammoType");
  return;
}
