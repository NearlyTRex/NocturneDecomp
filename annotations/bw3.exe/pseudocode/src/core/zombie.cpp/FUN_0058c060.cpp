// Name: core_zombie.cpp_FUN_0058c060
// Address: 0058c060
// Address Range: [[0058c060, 0058c1d9]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058c060(int param_1)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058c060(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"speed");
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (1 < g_CZombieClassVersion) {
    if (g_CZombieClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
    }
    core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  }
  if (2 < g_CZombieClassVersion) {
    core_actor_cpp_FUN_0040bba0((CDeformableModelInstance *)(param_1 + 0x158),"partStatus")
    ;
    if (g_CZombieClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x2628,"carriedActor");
    }
  }
  if (3 < g_CZombieClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680
              ((char *)(param_1 + 0xd074),"riseFromGraveCondition");
  }
  if (4 < g_CZombieClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd06c,"graveActor");
  }
  if ((5 < g_CZombieClassVersion) && (g_CZombieClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bf20(param_1 + 0x2f08,"clothList");
  }
  if (7 < g_CZombieClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd0d8),"isMinerZombie");
  }
  if (9 < g_CZombieClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd0dc),"alwaysChaseFast")
    ;
  }
  if (g_CZombieClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd0e4,"startGuardDist");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  return;
}
