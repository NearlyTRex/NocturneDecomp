// Name: core_prye.cpp_FUN_00521f40
// Address: 00521f40
// Address Range: [[00521f40, 00522087]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00521f40(CHero *param_1)

#include "nocturne.h"

void core_prye_cpp_FUN_00521f40(CHero *param_1)

{
  core_hero_cpp_FUN_004d27b0(param_1);
  if ((1 < g_CPryeClassVersion) && (g_CPryeClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x20b98,"@objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x20b94,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x20ba0,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x20ba4,"ladderToClimb");
  }
  if (g_CPryeClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x25b0,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x2628,"rhCarryObject");
  }
  if (3 < g_CPryeClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x20c20,"ladderToDescend");
  }
  if (5 < g_CPryeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x20bcc),"gunsDrawn");
  }
  if (6 < g_CPryeClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x20c24,"weapon");
  }
  if (7 < g_CPryeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x20b64),"actionPending");
  }
  if (g_CPryeClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x2f00),"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x2f04,"layerActionT");
  return;
}
