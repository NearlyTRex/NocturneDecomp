// Name: core_bride.cpp_FUN_00424840
// Address: 00424840
// Address Range: [[00424840, 004248c7]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_00424840(CEnemy *param_1)

#include "nocturne.h"

void core_bride_cpp_FUN_00424840(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"@speed" + 1);
  }
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"state");
  return;
}
