// Name: core_gargoyle.cpp_FUN_004dd2d0
// Address: 004dd2d0
// Address Range: [[004dd2d0, 004dd375]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004dd2d0(CEnemy *param_1)

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004dd2d0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"?speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x30,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x34,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x38,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[1].field_0x3c,"homeBase");
  return;
}
