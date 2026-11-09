// Name: core_glass.cpp_FUN_004c5a80
// Address: 004c5a80
// Address Range: [[004c5a80, 004c5b7d]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004c5a80(CDemonActor *param_1)

#include "nocturne.h"

void core_glass_cpp_FUN_004c5a80(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(param_1 + 1,"?glassSize" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x14,"glassTexture");
  if (1 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x24,"opacity");
  }
  if (2 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x28,"shattered");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x2c,"breakEvent");
  }
  if (3 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x90,"mirrorFlag");
  }
  if (4 < g_CGlassClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1b4,"breakableCondition")
    ;
  }
  if (g_CGlassClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&param_1[1].field_0x218,"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x224,"brokenTexture");
  return;
}
