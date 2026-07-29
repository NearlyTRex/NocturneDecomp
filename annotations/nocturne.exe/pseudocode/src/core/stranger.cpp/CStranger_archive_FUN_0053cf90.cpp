// Name: core_stranger.cpp_CStranger_archive_FUN_0053cf90
// Address: 0053cf90
// Address Range: [[0053cf90, 0053d0d7]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_archive_FUN_0053cf90(CHero *param_1)

#include "nocturne.h"

void core_stranger_cpp_CStranger_archive_FUN_0053cf90(CHero *param_1)

{
  core_hero_cpp_FUN_004b49a0(param_1);
  if ((1 < INT_005c0ff0) && (INT_005c0ff0 < 5)) {
    core_actor_cpp_archiveActor_FUN_0040c980(&param_1->object_to_pick_up,"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1->door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1->lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1->ladder_to_climb,"ladderToClimb");
  }
  if (INT_005c0ff0 == 2) {
    core_actor_cpp_archiveActor_FUN_0040c980
              (&(param_1->base).carry_hands[0].carry_actor,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040c980
              (&(param_1->base).carry_hands[1].carry_actor,"rhCarryObject");
  }
  if (3 < INT_005c0ff0) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1[1].base.base.orient_matrix.m + 2),"ladderToDescend"
              );
  }
  if (5 < INT_005c0ff0) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"gunsDrawn");
  }
  if (6 < INT_005c0ff0) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1[1].base.base.orient_matrix.m[2].y,"weapon");
  }
  if (7 < INT_005c0ff0) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&param_1[1].base.base.health,"actionPending");
  }
  if (INT_005c0ff0 < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&(param_1->base).layer_action_index,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040c880(&(param_1->base).layer_action_t,"layerActionT");
  return;
}
