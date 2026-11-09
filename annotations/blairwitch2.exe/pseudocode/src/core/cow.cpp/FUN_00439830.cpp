// Name: core_cow.cpp_FUN_00439830
// Address: 00439830
// Address Range: [[00439830, 0043989c]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_00439830(CEnemy *param_1)

#include "nocturne.h"

void core_cow_cpp_FUN_00439830(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  return;
}
