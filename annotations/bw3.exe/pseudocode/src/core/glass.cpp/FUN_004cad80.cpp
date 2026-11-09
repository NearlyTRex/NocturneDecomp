// Name: core_glass.cpp_FUN_004cad80
// Address: 004cad80
// Address Range: [[004cad80, 004cae7d]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004cad80(CDemonActor *param_1)

#include "nocturne.h"

void core_glass_cpp_FUN_004cad80(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveVector_FUN_0040b400(param_1 + 1,"?glassSize" + 1);
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x14,"glassTexture");
  if (1 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x54,"opacity");
  }
  if (2 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0x58,"shattered");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x5c,"breakEvent");
  }
  if (3 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0xc0,"mirrorFlag");
  }
  if (4 < g_CGlassClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0x8c,"breakableCondition");
  }
  if (g_CGlassClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&param_1[2].field_0xf0,"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0xfc,"brokenTexture");
  return;
}
