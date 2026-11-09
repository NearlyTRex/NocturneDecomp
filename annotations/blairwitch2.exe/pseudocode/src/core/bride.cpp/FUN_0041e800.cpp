// Name: core_bride.cpp_FUN_0041e800
// Address: 0041e800
// Address Range: [[0041e800, 0041e887]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_0041e800(CEnemy *param_1)

#include "nocturne.h"

void core_bride_cpp_FUN_0041e800(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"@speed" + 1);
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"state");
  return;
}
