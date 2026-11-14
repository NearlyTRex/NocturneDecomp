// Name: core_weapon.cpp_CWeapon_archive_FUN_0057b2a0
// Address: 0057b2a0
// Address Range: [[0057b2a0, 0057b424]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_archive_FUN_0057b2a0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_archive_FUN_0057b2a0(CWeapon *this_ptr)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  if (2 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (3 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->weapon_state,"weaponState");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->ammo_count,"ammoCount");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->ammo_type,"ammoType");
  }
  if (g_CWeaponClassVersion == 5) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b7a0(local_10c,"descriptiveName");
  }
  if (6 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->sim_timer,"simTimer");
  }
  if ((7 < g_CWeaponClassVersion) && (g_CWeaponClassVersion < 0xc)) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"infinite_ammo");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"ammo_per_shot");
  }
  if ((8 < g_CWeaponClassVersion) && (g_CWeaponClassVersion < 0xc)) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"weapon_class");
  }
  if ((9 < g_CWeaponClassVersion) && (g_CWeaponClassVersion < 0xc)) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"draw_crosshair");
  }
  if (g_CWeaponClassVersion != 0xb) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"number_of_hands_needed");
  return;
}
