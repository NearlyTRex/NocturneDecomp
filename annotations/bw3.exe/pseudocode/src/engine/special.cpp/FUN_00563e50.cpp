// Name: engine_special.cpp_FUN_00563e50
// Address: 00563e50
// Address Range: [[00563e50, 00563f68]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_00563e50(CDemonActor *param_1)

#include "nocturne.h"

void engine_special_cpp_FUN_00563e50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 1),"@@spawn_name" + 2);
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x1e,"actor_class_name");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x5c,"spawn_timer");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x64,"spawn_time");
  if (1 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[1].field_0x68,"number_of_spawns");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[1].field_0x6c,"max_number_of_spawns");
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x3c,"starting_state");
  }
  if (2 < g_CSpawnerClassVersion) {
    core_actor_cpp_FUN_0040ba30
              ((CDeformableModelInstance *)&param_1[1].field_0x78,"spawnmodelName");
  }
  if (3 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x60,"reset_timer");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[1].field_0x70,"dont_spawn_when_in_view");
  }
  if (g_CSpawnerClassVersion < 5) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x74,"startGuardDist");
  return;
}
