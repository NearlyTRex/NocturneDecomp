// Name: core_ghoul.cpp_FUN_004e0130
// Address: 004e0130
// Address Range: [[004e0130, 004e0234]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004e0130(CEnemy *param_1)

#include "nocturne.h"

void core_ghoul_cpp_FUN_004e0130(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  if (g_CGhoulClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"?speed" + 1);
  }
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if ((1 < g_CGhoulClassVersion) && (g_CGhoulClassVersion < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  if (2 < g_CGhoulClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x1c,"livesLeft");
  }
  if (4 < g_CGhoulClassVersion) {
    core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  }
  if (g_CGhoulClassVersion < 6) {
    return;
  }
  core_actor_cpp_FUN_0040b960
            ((CDeformableModelInstance *)&param_1->field_0x158,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x20,"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x1c,"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0xc,"ariseTimer");
  return;
}
