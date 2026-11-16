// Name: core_spawner.cpp_CSpawner_archive_FUN_00563e50
// Address: 00563e50
// Address Range: [[00563e50, 00563f68]]
// Convention: __cdecl
// Signature: void __cdecl core_spawner_cpp_CSpawner_archive_FUN_00563e50(CSpawner *this_ptr)

#include "nocturne.h"

void __cdecl core_spawner_cpp_CSpawner_archive_FUN_00563e50(CSpawner *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->spawn_name,"@@spawn_name" + 2);
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->actor_class_name,"actor_class_name");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->spawn_timer,"spawn_timer");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->spawn_time,"spawn_time");
  if (1 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->number_of_spawns,"number_of_spawns");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->max_number_of_spawns,"max_number_of_spawns");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->starting_state,"starting_state");
  }
  if (2 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
              (&this_ptr->spawn_model,"spawnmodelName");
  }
  if (3 < g_CSpawnerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->reset_timer,"reset_timer");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->dont_spawn_when_in_view,"dont_spawn_when_in_view");
  }
  if (g_CSpawnerClassVersion < 5) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->start_guard_dist,"startGuardDist");
  return;
}
