// Name: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
// Address: 004f6ed0
// Address Range: [[004f6ed0, 004f6f00]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)

{
  *(float *)(this_ptr + 0x1444) = (teleport_target->position).x;
  *(float *)(this_ptr + 0x1448) = (teleport_target->position).y;
  *(float *)(this_ptr + 0x144c) = (teleport_target->position).z;
  *(int *)(this_ptr + 0x1450) = teleport_target->area_id;
  *(uint *)(this_ptr + 0x1014) = 1;
  return;
}
