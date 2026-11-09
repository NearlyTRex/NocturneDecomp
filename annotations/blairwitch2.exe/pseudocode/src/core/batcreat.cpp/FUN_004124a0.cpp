// Name: core_batcreat.cpp_FUN_004124a0
// Address: 004124a0
// Address Range: [[004124a0, 004124e7]]
// Convention: unknown
// Signature: void core_batcreat_cpp_FUN_004124a0(CEnemy *param_1)

#include "nocturne.h"

void core_batcreat_cpp_FUN_004124a0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  return;
}
