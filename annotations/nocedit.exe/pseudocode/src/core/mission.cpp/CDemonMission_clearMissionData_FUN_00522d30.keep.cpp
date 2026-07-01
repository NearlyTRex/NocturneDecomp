// Name: core_mission.cpp_CDemonMission_clearMissionData_FUN_00522d30
// Address: 00522d30
// MANUAL RECONSTRUCTION
// Address Range: [[00522d30, 00522d8c]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_clearMissionData_FUN_00522d30(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_clearMissionData_FUN_00522d30(CDemonMission *this_ptr)

{
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",132);
  core_mission_cpp_CDemonMission_removeAllActors_FUN_00523f50(this_ptr);
  g_VisibleCoronaGlobeCount = 0;
  this_ptr->num_sets = 0;
  this_ptr->mission_name[0] = '\0';
  this_ptr->has_inventory_actors = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  this_ptr->actor_lookup_count = 0;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",143);
  return;
}
