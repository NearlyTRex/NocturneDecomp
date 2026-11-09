// Name: core_tentacle.cpp_FUN_00595bc0
// Address: 00595bc0
// Address Range: [[00595bc0, 00595c3c]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_00595bc0(CEnemy *param_1)

#include "nocturne.h"

void core_tentacle_cpp_FUN_00595bc0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"0@modelName" + 2);
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  core_actor_cpp_FUN_0040b960
            ((CDeformableModelInstance *)&param_1->field_0x158,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[1].field_0x8,"graveActor");
  return;
}
