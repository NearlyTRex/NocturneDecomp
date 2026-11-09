// Name: core_gabriela.cpp_FUN_004b0fb0
// Address: 004b0fb0
// Address Range: [[004b0fb0, 004b1052]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004b0fb0(int param_1)

#include "nocturne.h"

void core_gabriela_cpp_FUN_004b0fb0(int param_1)

{
  core_hero_cpp_FUN_004ce590(param_1);
  if ((1 < g_CGabriellaClassVersion) && (g_CGabriellaClassVersion < 4)) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25608,"?objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25604,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25610,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x25614,"ladderToClimb");
  }
  if (g_CGabriellaClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x2620,"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040b9e0(param_1 + 0x2698,"rhCarryObject");
  return;
}
