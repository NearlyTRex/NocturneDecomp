// Name: core_ammo.cpp_CAmmo_archive_FUN_0040e1b0
// Address: 0040e1b0
// Address Range: [[0040e1b0, 0040e20f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e1b0(CAmmo *this_ptr)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e1b0(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x474,"ammoType");
  return;
}
