// Name: unkafter_zombiepr.cpp_FUN_0058f510
// Address: 0058f510
// Address Range: [[0058f510, 0058f602]]
// Convention: unknown
// Signature: void unkafter_zombiepr_cpp_FUN_0058f510(int param_1)

#include "nocturne.h"

void unkafter_zombiepr_cpp_FUN_0058f510(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (g_CZombiePriestClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (g_CZombiePriestClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040bf20(param_1 + 0x2f08,"clothList");
  }
  if (4 < g_CZombiePriestClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd064),"postMode");
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd068,"ourPost");
  }
  if (g_CZombiePriestClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd06c),"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0xd070),"holdPosCond");
  return;
}
