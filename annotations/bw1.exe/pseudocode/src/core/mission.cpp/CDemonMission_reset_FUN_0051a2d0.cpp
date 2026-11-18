// Name: core_mission.cpp_CDemonMission_reset_FUN_0051a2d0
// Address: 0051a2d0
// Address Range: [[0051a2d0, 0051a391]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_reset_FUN_0051a2d0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_reset_FUN_0051a2d0(CDemonMission *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr->is_in_editor = 0;
  this_ptr->first_actor = (CDemonActor *)0x0;
  this_ptr->last_actor = (CDemonActor *)0x0;
  (this_ptr->pending_teleport).area_id = -1;
  pcVar2 = "fangs";
  (this_ptr->pending_teleport).position.z = 0.0;
  pcVar3 = &g_CHAR_01d33b88;
  (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
  (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
  this_ptr->mission_name[0] = '\0';
  this_ptr->delete_queue_count = 0;
  g_CHAR_01d33b20 = '\0';
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  this_ptr->prepared_set_index = -1;
  this_ptr->has_inventory_actors = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  this_ptr->actor_lookup_count = 0;
  this_ptr->mission_version_num = -1;
  this_ptr->teleport_requested = 0;
  return;
}
