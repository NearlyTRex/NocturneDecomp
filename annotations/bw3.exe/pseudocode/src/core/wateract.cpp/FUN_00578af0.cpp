// Name: core_wateract.cpp_FUN_00578af0
// Address: 00578af0
// Address Range: [[00578af0, 00578cfe]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00578af0(CDemonActor *param_1)

#include "nocturne.h"

void core_wateract_cpp_FUN_00578af0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveVector_FUN_0040b400(param_1 + 1,&DAT_005d7293);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0xc,"opacity");
  if (g_CWaterActorClassVersion == 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x10,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x14,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x1c,"moveSound");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x5c,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x124,"param");
  }
  if (2 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x10,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x14,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x18,"timeToMoveDown");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x1c,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x3c,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x5c,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0xc0,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x124,"param");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x128,"state");
  }
  if (3 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x12c,"patchSize");
  }
  if (4 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x130,"roundFlag");
  }
  if (5 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x134,&DAT_005d734d);
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x138,&DAT_005d7352);
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x13c,&DAT_005d7357);
  }
  if (g_CWaterActorClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x140,"is_lava");
  return;
}
