// Name: unkafter_demnfolk.cpp_FUN_004583c0
// Address: 004583c0
// Address Range: [[004583c0, 00458525]]
// Convention: unknown
// Signature: void unkafter_demnfolk_cpp_FUN_004583c0(int param_1)

#include "nocturne.h"

void unkafter_demnfolk_cpp_FUN_004583c0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"speed");
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (1 < g_CDemnfolkClassVersion) {
    if (g_CDemnfolkClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
    }
    core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  }
  if (2 < g_CDemnfolkClassVersion) {
    core_actor_cpp_FUN_0040bba0((CDeformableModelInstance *)(param_1 + 0x158),"partStatus")
    ;
    if (g_CDemnfolkClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0x2628,"carriedActor");
    }
  }
  if (3 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680
              ((char *)(param_1 + 0xd074),"riseFromGraveCondition");
  }
  if (4 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd06c,"graveActor");
  }
  if ((5 < g_CDemnfolkClassVersion) && (g_CDemnfolkClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bf20(param_1 + 0x2f08,"clothList");
  }
  if (7 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd0d8),"isMinerZombie");
  }
  if (9 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd0e0),"alwaysChaseFast")
    ;
  }
  if (g_CDemnfolkClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd0dc),"isIndoorDemon");
  return;
}
