// Name: core_smiley.cpp_FUN_0054a710
// Address: 0054a710
// Address Range: [[0054a710, 0054a76b]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_0054a710(CEnemy *param_1)

#include "nocturne.h"

void core_smiley_cpp_FUN_0054a710(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x4,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  return;
}
