// Name: core_melee.cpp_CMelee_archive_FUN_004cedb0
// Address: 004cedb0
// Address Range: [[004cedb0, 004ceeca]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_archive_FUN_004cedb0(int param_1)

#include "nocturne.h"

void core_melee_cpp_CMelee_archive_FUN_004cedb0(int param_1)

{
  core_weapon_cpp_CWeapon_archive_FUN_00554170(param_1);
  if (1 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x570,"allowedAttackTypes");
  }
  if (2 < INT_005bade4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x574,"strengthLo");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x578,"strengthHi");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2e8,"canAttachLight");
  }
  if (3 < INT_005bade4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x57c,"dismemberProb");
  }
  if (4 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x580,"canGoInInventory");
  }
  if (5 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x594,"ammoType");
  }
  if (INT_005bade4 < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x598,"thrustHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x5fc,"swingHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x660,"hitOtherSound");
  return;
}
