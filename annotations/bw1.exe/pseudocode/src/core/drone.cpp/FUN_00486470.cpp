// Name: core_drone.cpp_FUN_00486470
// Address: 00486470
// Address Range: [[00486470, 004864dc]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_00486470(CEnemy *param_1)

#include "nocturne.h"

void core_drone_cpp_FUN_00486470(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"@speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if (g_CDroneClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  return;
}
