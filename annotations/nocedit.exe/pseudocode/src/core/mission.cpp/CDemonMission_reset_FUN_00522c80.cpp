// Name: core_mission.cpp_CDemonMission_reset_FUN_00522c80
// Address: 00522c80
// Address Range: [[00522c80, 00522d11]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_reset_FUN_00522c80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_reset_FUN_00522c80(CDemonMission *this_ptr)

{
  this_ptr->is_in_editor = 0;
  this_ptr->first_actor = (CDemonActor *)0x0;
  this_ptr->last_actor = (CDemonActor *)0x0;
  (this_ptr->pending_teleport).area_id = -1;
  (this_ptr->pending_teleport).position.z = 0.0;
  (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
  (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
  this_ptr->mission_name[0] = '\0';
  this_ptr->delete_queue_count = 0;
  this_ptr->skip_gore_load_flag = 0;
  this_ptr->show_waypoint_coverage = 0;
  this_ptr->actors_prepared = 0;
  this_ptr->has_inventory_actors = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  this_ptr->actor_lookup_count = 0;
  this_ptr->mission_version_num = -1;
  g_PendingMissionName[0] = '\0';
  return;
}
