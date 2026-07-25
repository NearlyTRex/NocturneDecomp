// Name: core_weapon.cpp_CWeapon_archive_FUN_00554170
// Address: 00554170
// Address Range: [[00554170, 0055424b]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00554170(int param_1)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00554170(int param_1)

{
  byte local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  if (2 < INT_005c1590) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x2fc,"carriedByActor");
  }
  if (3 < INT_005c1590) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"weaponState");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x560,"ammoCount");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x564,"ammoType");
  }
  if (INT_005c1590 == 5) {
    core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  }
  if (INT_005c1590 < 7) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x568,"simTimer");
  return;
}
