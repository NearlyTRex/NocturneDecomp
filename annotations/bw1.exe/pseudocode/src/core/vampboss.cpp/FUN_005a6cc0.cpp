// Name: core_vampboss.cpp_FUN_005a6cc0
// Address: 005a6cc0
// Address Range: [[005a6cc0, 005a6d93]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_005a6cc0(CEnemy *param_1)

#include "nocturne.h"

void core_vampboss_cpp_FUN_005a6cc0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  if (1 < g_CVampireBossClassVersion) {
    core_actor_cpp_FUN_0040b870
              ((CMotionController *)&param_1->field_0x158,"@human model motion state" + 1);
    core_actor_cpp_FUN_0040b870
              ((CMotionController *)(param_1 + 1),"bat model motion state");
  }
  if (2 < g_CVampireBossClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0xf].field_0x8fd0,"wayPoint0");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0xf].field_0x8fd4,"wayPoint1");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0xf].field_0x8fd8,"wayPoint2");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0xf].field_0x8fdc,"wayPoint3");
  }
  if (g_CVampireBossClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[0xf].field_0x8384,&DAT_005f8e80);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0xf].field_0x8fb4,"morphT");
  return;
}
