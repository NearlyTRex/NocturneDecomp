// Name: core_doc.cpp_FUN_00471970
// Address: 00471970
// Address Range: [[00471970, 00471ab7]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00471970(CHero *param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_00471970(CHero *param_1)

{
  core_hero_cpp_FUN_004eab00(param_1);
  if ((1 < g_CDocClassVersion) && (g_CDocClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x1ff78,"@objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x1ff74,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x1ff80,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x1ff84,"ladderToClimb");
  }
  if (g_CDocClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x25b0,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x2628,"rhCarryObject");
  }
  if (3 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x20000,"ladderToDescend");
  }
  if (5 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 0x1ffac),"gunsDrawn");
  }
  if (6 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(param_1 + 0x20004,"weapon");
  }
  if (7 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 0x1ff5c),"actionPending");
  }
  if (g_CDocClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 0x2c98),"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(param_1 + 0x2c9c,"layerActionT");
  return;
}
