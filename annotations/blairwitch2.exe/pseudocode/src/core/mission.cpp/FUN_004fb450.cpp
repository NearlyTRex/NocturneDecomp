// Name: core_mission.cpp_FUN_004fb450
// Address: 004fb450
// Address Range: [[004fb450, 004fb48b]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fb450(CDemonMission *param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_004fb450(CDemonMission *param_1)

{
  core_mission_cpp_CDemonMission_removeAllActors_FUN_004fc640(param_1);
  param_1->num_sets = 0;
  param_1->mission_name[0] = '\0';
  param_1->has_inventory_actors = 0;
  param_1->next_inventory_actor = (CDemonActor *)0x0;
  param_1->actor_lookup_count = 0;
  return;
}
