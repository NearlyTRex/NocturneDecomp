// Name: core_ammo.cpp_CAmmo_archive_FUN_0040e000
// Address: 0040e000
// Address Range: [[0040e000, 0040e05f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e000(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e000(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->ammo_type,"ammoType");
  return;
}
