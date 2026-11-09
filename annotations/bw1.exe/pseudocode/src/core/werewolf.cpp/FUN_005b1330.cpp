// Name: core_werewolf.cpp_FUN_005b1330
// Address: 005b1330
// Address Range: [[005b1330, 005b146b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_005b1330(CEnemy *param_1)

#include "nocturne.h"

void core_werewolf_cpp_FUN_005b1330(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"?speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if (g_CWerewolfClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  if (1 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x18,"lightUpEyes")
    ;
  }
  if (3 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[1].field_0x2c,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x30,"chainLength");
  }
  if (4 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 1),&DAT_005f9b89);
  }
  if (g_CWerewolfClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x3c,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x40,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[1].field_0x34,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[1].field_0x38,"alpha2");
  return;
}
