// Name: core_werewolf.cpp_FUN_0057f5b0
// Address: 0057f5b0
// Address Range: [[0057f5b0, 0057f6eb]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0057f5b0(int param_1)

#include "nocturne.h"

void core_werewolf_cpp_FUN_0057f5b0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (g_CWerewolfClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (1 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd06c),"lightUpEyes");
  }
  if (3 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd080,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd084,"chainLength");
  }
  if (4 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd054),&DAT_005d7baa);
  }
  if (g_CWerewolfClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd090),"phase");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd094,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd088,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd08c,"alpha2");
  return;
}
