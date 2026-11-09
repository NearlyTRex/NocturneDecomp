// Name: core_wateract.cpp_FUN_005876d0
// Address: 005876d0
// Address Range: [[005876d0, 005878c1]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_005876d0(CDemonActor *param_1)

#include "nocturne.h"

void core_wateract_cpp_FUN_005876d0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(param_1 + 1,&DAT_005edfc6);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xc,"opacity");
  if (g_CWaterActorClassVersion == 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x10,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x14,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1c,"moveSound");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x5c,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x124,"param");
  }
  if (2 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x10,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x14,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x18,"timeToMoveDown");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1c,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x3c,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x5c,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xc0,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x124,"param");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x128,"state");
  }
  if (3 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x12c,"patchSize");
  }
  if (4 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x130,"roundFlag");
  }
  if (g_CWaterActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x134,&DAT_005ee080);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x138,&DAT_005ee085);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x13c,&DAT_005ee08a);
  return;
}
