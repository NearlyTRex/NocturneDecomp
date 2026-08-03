// Name: core_mission.cpp_CDemonMission_FUN_004d90e0
// Address: 004d90e0
// Address Range: [[004d90e0, 004d910b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_FUN_004d90e0(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_004d90e0(CDemonMission *this_ptr,CLocation *teleport_target)

{
  (this_ptr->pending_teleport).position.x = (teleport_target->position).x;
  (this_ptr->pending_teleport).position.y = (teleport_target->position).y;
  (this_ptr->pending_teleport).position.z = (teleport_target->position).z;
  (this_ptr->pending_teleport).area_id = teleport_target->area_id;
  return;
}
