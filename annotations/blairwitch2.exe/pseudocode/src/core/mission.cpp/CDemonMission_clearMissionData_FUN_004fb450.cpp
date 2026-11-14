// Name: core_mission.cpp_CDemonMission_clearMissionData_FUN_004fb450
// Address: 004fb450
// Address Range: [[004fb450, 004fb48b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_clearMissionData_FUN_004fb450(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_clearMissionData_FUN_004fb450(CDemonMission *this_ptr)

{
  core_mission_cpp_CDemonMission_removeAllActors_FUN_004fc640(this_ptr);
  this_ptr->num_sets = 0;
  this_ptr->mission_name[0] = '\0';
  this_ptr->has_inventory_actors = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  this_ptr->actor_lookup_count = 0;
  return;
}
