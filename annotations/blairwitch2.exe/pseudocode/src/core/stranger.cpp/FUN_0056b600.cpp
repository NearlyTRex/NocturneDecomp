// Name: core_stranger.cpp_FUN_0056b600
// Address: 0056b600
// Address Range: [[0056b600, 0056b747]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056b600(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_0056b600(int param_1)

{
  core_hero_cpp_FUN_004ce590(param_1);
  if ((1 < g_CStrangerClassVersion) && (g_CStrangerClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25608,"@objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25604,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25610,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25614,"ladderToClimb");
  }
  if (g_CStrangerClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x2620,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x2698,"rhCarryObject");
  }
  if (3 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25694,"ladderToDescend");
  }
  if (5 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x25640),"gunsDrawn");
  }
  if (6 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25698,"weapon");
  }
  if (7 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x256a4),"actionPending");
  }
  if (g_CStrangerClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x2d04),"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(param_1 + 0x2d08,"layerActionT");
  return;
}
