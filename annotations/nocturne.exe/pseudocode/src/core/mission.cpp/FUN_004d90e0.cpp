// Name: core_mission.cpp_FUN_004d90e0
// Address: 004d90e0
// Address Range: [[004d90e0, 004d910b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004d90e0(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_004d90e0(CDemonMission *this_ptr,CLocation *teleport_target)

{
  *(float *)(this_ptr->set_names[3] + 0xd4) = (teleport_target->position).x;
  *(float *)(this_ptr->set_names[3] + 0xd8) = (teleport_target->position).y;
  *(float *)(this_ptr->set_names[3] + 0xdc) = (teleport_target->position).z;
  *(int *)(this_ptr->set_names[3] + 0xe0) = teleport_target->area_id;
  return;
}
