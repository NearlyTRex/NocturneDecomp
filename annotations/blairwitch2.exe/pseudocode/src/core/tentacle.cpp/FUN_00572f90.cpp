// Name: core_tentacle.cpp_FUN_00572f90
// Address: 00572f90
// Address Range: [[00572f90, 0057300c]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_00572f90(CEnemy *param_1)

#include "nocturne.h"

void core_tentacle_cpp_FUN_00572f90(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"0@modelName" + 2);
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&param_1->field_0x2b4,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x8,"graveActor");
  return;
}
