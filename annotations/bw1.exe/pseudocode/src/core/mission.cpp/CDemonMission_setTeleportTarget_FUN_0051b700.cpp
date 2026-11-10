// Name: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_0051b700
// Address: 0051b700
// Address Range: [[0051b700, 0051b730]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700(CDemonMission *this_ptr,CLocation *teleport_target)

{
  *(float *)(this_ptr + 0x1120) = (teleport_target->position).x;
  *(float *)(this_ptr + 0x1124) = (teleport_target->position).y;
  *(float *)(this_ptr + 0x1128) = (teleport_target->position).z;
  *(int *)(this_ptr + 0x112c) = teleport_target->area_id;
  *(uint *)(this_ptr + 0x1014) = 1;
  return;
}
