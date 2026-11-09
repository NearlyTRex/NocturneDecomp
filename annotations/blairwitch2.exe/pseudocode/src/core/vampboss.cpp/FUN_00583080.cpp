// Name: core_vampboss.cpp_FUN_00583080
// Address: 00583080
// Address Range: [[00583080, 00583153]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_00583080(CEnemy *param_1)

#include "nocturne.h"

void core_vampboss_cpp_FUN_00583080(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  if (1 < g_CVampireBossClassVersion) {
    core_actor_cpp_archiveMotionState_FUN_0040bb60
              (&param_1->field_0x2b4,"@human model motion state" + 1);
    core_actor_cpp_archiveMotionState_FUN_0040bb60(param_1 + 1,"bat model motion state");
  }
  if (2 < g_CVampireBossClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[0xb].field_0xc2e0,"wayPoint0");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[0xb].field_0xc2e4,"wayPoint1");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[0xb].field_0xc2e8,"wayPoint2");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[0xb].field_0xc2ec,"wayPoint3");
  }
  if (g_CVampireBossClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[0xb].field_0xb694,&DAT_005edb24);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[0xb].field_0xc2c4,"morphT");
  return;
}
