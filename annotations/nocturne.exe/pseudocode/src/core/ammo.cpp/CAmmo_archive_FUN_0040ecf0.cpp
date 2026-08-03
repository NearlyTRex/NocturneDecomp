// Name: core_ammo.cpp_CAmmo_archive_FUN_0040ecf0
// Address: 0040ecf0
// Address Range: [[0040ecf0, 0040ed4f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040ecf0(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040ecf0(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ammo_type,"ammoType");
  return;
}
