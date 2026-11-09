// Name: core_tvbat.cpp_FUN_00575230
// Address: 00575230
// Address Range: [[00575230, 00575378]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_00575230(CDemonActor *param_1)

#include "nocturne.h"

void core_tvbat_cpp_FUN_00575230(CDemonActor *param_1)

{
  if (g_CTVBatClassVersion < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  }
  else {
    core_enemy_cpp_FUN_00489120(param_1);
  }
  core_actor_cpp_archiveVector_FUN_0040b400(&param_1[0x9c].field_0x3c,"@homePos" + 1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&param_1[0x9b].field_0x10,"modelName");
  if (1 < g_CTVBatClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x9c].field_0x34,"speed");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x9c].field_0x48,"maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x9c].field_0x4c,"maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x9c].field_0x50,"rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x9c].field_0x54,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x9c].field_0x5c,"followOrders");
  }
  if (g_CTVBatClassVersion < 4) {
    *(uint *)&param_1[0x9c].field_0x70 = 0;
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x9c].field_0x70,"state");
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[0x9c].field_0x74,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&param_1[0x9c].field_0xd8,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&param_1[0x9c].field_0xdc,"periodicSoundTimerMax");
  return;
}
