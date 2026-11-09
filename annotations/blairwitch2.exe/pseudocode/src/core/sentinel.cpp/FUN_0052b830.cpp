// Name: core_sentinel.cpp_FUN_0052b830
// Address: 0052b830
// Address Range: [[0052b830, 0052b888]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_0052b830(CEnemy *param_1)

#include "nocturne.h"

void core_sentinel_cpp_FUN_0052b830(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  return;
}
