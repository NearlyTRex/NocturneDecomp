// Name: core_batman.cpp_FUN_00413e60
// Address: 00413e60
// Address Range: [[00413e60, 00413f1a]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00413e60(CEnemy *param_1)

#include "nocturne.h"

void core_batman_cpp_FUN_00413e60(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  if (g_CBatmanClassVersion < 2) {
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"fallEvent");
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x9c,"mistState");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0xa0,"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0xa4,"newPos");
  return;
}
