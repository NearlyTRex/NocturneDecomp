// Name: core_spawner.cpp_FUN_00563e50
// Address: 00563e50
// Address Range: [[00563e50, 00563f68]]
// Convention: unknown
// Signature: void core_spawner_cpp_FUN_00563e50(CDemonActor *param_1)

#include "nocturne.h"

void core_spawner_cpp_FUN_00563e50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveString_FUN_0040b680(param_1[1].actor_name,"@@spawn_name" + 2);
  core_actor_cpp_archiveString_FUN_0040b680
            (param_1[1].actor_name + 0x1e,"actor_class_name");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].orient_matrix.m[2].z,"spawn_timer");
  core_actor_cpp_archiveFloat_FUN_0040b830((float *)&param_1[1].health,"spawn_time");
  if (1 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[1].validation_magic,"number_of_spawns");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&param_1[1].direction_hint,"max_number_of_spawns");
    core_actor_cpp_archiveString_FUN_0040b680
              ((char *)&param_1[1].orient_matrix,"starting_state");
  }
  if (2 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
              ((CDeformableModelInstance *)param_1[1].create_event,"spawnmodelName");
  }
  if (3 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              ((float *)&param_1[1].runtime_state,"reset_timer");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[1].lifecycle_state,"dont_spawn_when_in_view");
  }
  if (g_CSpawnerClassVersion < 5) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].create_prob,"startGuardDist");
  return;
}
