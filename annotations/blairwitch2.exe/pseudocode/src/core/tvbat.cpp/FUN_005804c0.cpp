// Name: core_tvbat.cpp_FUN_005804c0
// Address: 005804c0
// Address Range: [[005804c0, 00580608]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_005804c0(CEnemy *param_1)

#include "nocturne.h"

void core_tvbat_cpp_FUN_005804c0(CEnemy *param_1)

{
  if (g_CTVBatClassVersion < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)param_1);
  }
  else {
    core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  }
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x188,"@homePos" + 1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&param_1[1].field_0x4,"modelName");
  if (1 < g_CTVBatClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,"speed");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x194,"maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x198,"maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x19c,"rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1a0,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x1a8,"followOrders");
  }
  if (g_CTVBatClassVersion < 4) {
    *(uint *)&param_1[1].field_0x1bc = 0;
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1bc,"state");
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1c0,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x224,"periodicSoundTimerMin")
  ;
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x228,"periodicSoundTimerMax")
  ;
  return;
}
