// Name: core_dog.cpp_FUN_0045eab0
// Address: 0045eab0
// Address Range: [[0045eab0, 0045eb1c]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_0045eab0(CEnemy *param_1)

#include "nocturne.h"

void core_dog_cpp_FUN_0045eab0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  return;
}
