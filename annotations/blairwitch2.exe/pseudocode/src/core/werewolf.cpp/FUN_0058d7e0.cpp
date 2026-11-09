// Name: core_werewolf.cpp_FUN_0058d7e0
// Address: 0058d7e0
// Address Range: [[0058d7e0, 0058d91b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0058d7e0(CEnemy *param_1)

#include "nocturne.h"

void core_werewolf_cpp_FUN_0058d7e0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (g_CWerewolfClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  if (1 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x18,"lightUpEyes")
    ;
  }
  if (3 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x2c,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x30,"chainLength");
  }
  if (4 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),&DAT_005ee7b1);
  }
  if (g_CWerewolfClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x3c,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x40,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x34,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x38,"alpha2");
  return;
}
