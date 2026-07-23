// Name: core_stranger.cpp_CStranger_archive_FUN_0053cf90
// Address: 0053cf90
// Address Range: [[0053cf90, 0053d0d7]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_archive_FUN_0053cf90(int param_1)

#include "nocturne.h"

void core_stranger_cpp_CStranger_archive_FUN_0053cf90(int param_1)

{
  FUN_004b49a0(param_1);
  if ((1 < 0x00000009) && (0x00000009 < 5)) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa08,"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa04,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa10,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa14,"ladderToClimb");
  }
  if (0x00000009 == 2) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x24ac,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x24f0,"rhCarryObject");
  }
  if (3 < 0x00000009) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa90,"ladderToDescend");
  }
  if (5 < 0x00000009) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1fa3c,"gunsDrawn");
  }
  if (6 < 0x00000009) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa94,"weapon");
  }
  if (7 < 0x00000009) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1faa0,"actionPending");
  }
  if (0x00000009 < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2a84,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2a88,"layerActionT");
  return;
}
