// Name: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
// Address: 004f6ed0
// Address Range: [[004f6ed0, 004f6f00]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)

{
  (this_ptr->pending_teleport).position.x = (teleport_target->position).x;
  (this_ptr->pending_teleport).position.y = (teleport_target->position).y;
  (this_ptr->pending_teleport).position.z = (teleport_target->position).z;
  (this_ptr->pending_teleport).area_id = teleport_target->area_id;
  this_ptr->teleport_requested = 1;
  return;
}
