// Name: core_beast.cpp_FUN_00414b10
// Address: 00414b10
// Address Range: [[00414b10, 00414b57]]
// Convention: unknown
// Signature: void core_beast_cpp_FUN_00414b10(CEnemy *param_1)

#include "nocturne.h"

void core_beast_cpp_FUN_00414b10(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  return;
}
