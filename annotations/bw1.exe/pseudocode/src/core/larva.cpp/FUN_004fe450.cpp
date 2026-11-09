// Name: core_larva.cpp_FUN_004fe450
// Address: 004fe450
// Address Range: [[004fe450, 004fe4bc]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004fe450(CEnemy *param_1)

#include "nocturne.h"

void core_larva_cpp_FUN_004fe450(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if (g_CLarvaClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  return;
}
