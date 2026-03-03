// Name: core_weapon.cpp_CWeapon_archive_FUN_005ee250
// Address: 005ee250
// Address Range: [[005ee250, 005ee32b]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_archive_FUN_005ee250(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_archive_FUN_005ee250(CWeapon *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  if (2 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (3 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->weapon_state,"weaponState");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->ammo_count,"ammoCount");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->ammo_type,"ammoType");
  }
  if (g_CWeaponClassVersion == 5) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b6e0(local_104,"descriptiveName");
  }
  if (g_CWeaponClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->sim_timer,"simTimer");
  return;
}
