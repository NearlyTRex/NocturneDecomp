// Name: core_turret.cpp_CTurret_archive_FUN_0054a000
// Address: 0054a000
// Address Range: [[0054a000, 0054a10c]]
// Convention: unknown
// Signature: void core_turret_cpp_CTurret_archive_FUN_0054a000(CWeapon *param_1)

#include "nocturne.h"

void core_turret_cpp_CTurret_archive_FUN_0054a000(CWeapon *param_1)

{
  core_weapon_cpp_CWeapon_archive_FUN_00554170(param_1);
  core_actor_cpp_archiveOrientation_FUN_0040c4f0
            ((COrientation *)(param_1 + 1),"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040c900
            (param_1[1].model.part_visibility_flags + 0xe,"state");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[1].model.part_visibility_flags + 0xf),"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].model.model_name + 0x28),"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].model.model_name + 0x2c),"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].model.model_name + 0x30),"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].model.model_name + 0x34),"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].model.model_name + 0x3c),"timer");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[1].model.model_name + 0x40),"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040c6d0
            (param_1[1].model.model_name + 0x44,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].model.model_name + 0x38),"rotateDegPerSec");
  if (INT_005c1160 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].bolt_velocity,"canManualAim");
  return;
}
