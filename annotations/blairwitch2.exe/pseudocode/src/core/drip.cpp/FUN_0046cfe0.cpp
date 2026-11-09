// Name: core_drip.cpp_FUN_0046cfe0
// Address: 0046cfe0
// Address Range: [[0046cfe0, 0046d105]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_0046cfe0(CDemonActor *param_1)

#include "nocturne.h"

void core_drip_cpp_FUN_0046cfe0(CDemonActor *param_1)

{
  if (1 < g_CDripClassVersion) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  }
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,&DAT_005d17a0);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x180,"autoDrop");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x1a0,"homePos");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x1ac,&DAT_005d17b6);
  if (2 < g_CDripClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x188,"minAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x18c,"maxAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x190,"dripRadius");
  }
  if (3 < g_CDripClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1b8,"damage");
  }
  if (4 < g_CDripClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1bc,"hitSound");
  }
  if (g_CDripClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1dc,"noRockFlag");
  return;
}
