// Name: core_melee.cpp_CMelee_archive_FUN_004cedb0
// Address: 004cedb0
// Address Range: [[004cedb0, 004ceeca]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_archive_FUN_004cedb0(CWeapon *param_1)

#include "nocturne.h"

void core_melee_cpp_CMelee_archive_FUN_004cedb0(CWeapon *param_1)

{
  core_weapon_cpp_CWeapon_archive_FUN_00554170(param_1);
  if (1 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"allowedAttackTypes");
  }
  if (2 < INT_005bade4) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.actor_name + 4),"strengthLo");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.actor_name + 8),"strengthHi");
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->can_attach_light,"canAttachLight")
    ;
  }
  if (3 < INT_005bade4) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.actor_name + 0xc),"dismemberProb");
  }
  if (4 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.actor_name + 0x10),"canGoInInventory");
  }
  if (5 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].base.location.position.y,"ammoType");
  }
  if (INT_005bade4 < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.location.position.z,"thrustHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040c6d0
            (param_1[1].base.create_event + 0x14,"swingHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.platform_orientation_delta.y,"hitOtherSound");
  return;
}
