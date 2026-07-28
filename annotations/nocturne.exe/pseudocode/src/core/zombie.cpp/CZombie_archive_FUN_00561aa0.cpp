// Name: core_zombie.cpp_CZombie_archive_FUN_00561aa0
// Address: 00561aa0
// Address Range: [[00561aa0, 00561be8]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_archive_FUN_00561aa0(CEnemy *param_1)

#include "nocturne.h"

void core_zombie_cpp_CZombie_archive_FUN_00561aa0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if (1 < INT_005c166c) {
    if (INT_005c166c < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(param_1->base).model.motion_controller,"motion state");
  }
  if (2 < INT_005c166c) {
    core_actor_cpp_archivePartStatus_FUN_0040cbf0(&(param_1->base).model,"partStatus");
    if (INT_005c166c < 7) {
      core_actor_cpp_archiveActor_FUN_0040c980
                (&(param_1->base).carry_hands[1].carry_actor,"carriedActor");
    }
  }
  if (3 < INT_005c166c) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].base.base.location,"riseFromGraveCondition");
  }
  if (4 < INT_005c166c) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1[1].base.base.actor_name + 0x18),"graveActor");
  }
  if ((5 < INT_005c166c) && (INT_005c166c < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040cf70(&(param_1->base).cloth_list,"clothList");
  }
  if (7 < INT_005c166c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.create_event + 0xc),"isMinerZombie");
  }
  if (INT_005c166c < 10) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].base.base.create_event + 0x10),"alwaysChaseFast");
  return;
}
