// Name: core_turret.cpp_CTurret_archive_FUN_0054a000
// Address: 0054a000
// Address Range: [[0054a000, 0054a10c]]
// Convention: unknown
// Signature: void core_turret_cpp_CTurret_archive_FUN_0054a000(int param_1)

#include "nocturne.h"

void core_turret_cpp_CTurret_archive_FUN_0054a000(int param_1)

{
  core_weapon_cpp_CWeapon_archive_FUN_00554170(param_1);
  core_actor_cpp_archiveOrientation_FUN_0040c4f0(param_1 + 0x570,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x6f8,"state");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x6fc,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x760,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x764,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x768,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x76c,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x774,"timer");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x778,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x77c,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x770,"rotateDegPerSec");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x850,"canManualAim");
  return;
}
