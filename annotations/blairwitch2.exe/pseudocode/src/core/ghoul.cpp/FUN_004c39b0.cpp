// Name: core_ghoul.cpp_FUN_004c39b0
// Address: 004c39b0
// Address Range: [[004c39b0, 004c3ab4]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c39b0(CEnemy *param_1)

#include "nocturne.h"

void core_ghoul_cpp_FUN_004c39b0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  if (g_CGhoulClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if ((1 < g_CGhoulClassVersion) && (g_CGhoulClassVersion < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  if (2 < g_CGhoulClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1c,"livesLeft");
  }
  if (4 < g_CGhoulClassVersion) {
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  }
  if (g_CGhoulClassVersion < 6) {
    return;
  }
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&param_1->field_0x2b4,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x20,"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1c,"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xc,"ariseTimer");
  return;
}
