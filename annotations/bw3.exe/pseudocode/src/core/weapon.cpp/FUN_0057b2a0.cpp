// Name: core_weapon.cpp_FUN_0057b2a0
// Address: 0057b2a0
// Address Range: [[0057b2a0, 0057b424]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_0057b2a0(CDemonActor *param_1)

#include "nocturne.h"

void core_weapon_cpp_FUN_0057b2a0(CDemonActor *param_1)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(param_1 + 1,"modelName");
  if (2 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&param_1[2].field_0x54,"carriedByActor");
  }
  if (3 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x24,"weaponState")
    ;
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[4].field_0x8,"ammoCount");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[4].field_0xc,"ammoType");
  }
  if (g_CWeaponClassVersion == 5) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b7a0(local_10c,"descriptiveName");
  }
  if (6 < g_CWeaponClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[4].field_0x20,"simTimer");
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
