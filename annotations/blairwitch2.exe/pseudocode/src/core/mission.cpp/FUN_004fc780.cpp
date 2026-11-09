// Name: core_mission.cpp_FUN_004fc780
// Address: 004fc780
// Address Range: [[004fc780, 004fc7ab]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004fc780(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_004fc780(CDemonMission *this_ptr,CLocation *teleport_target)

{
  *(uint *)(this_ptr + 0x111c) = *(uint *)teleport_target;
  *(uint *)(this_ptr + 0x1120) = *(uint *)(teleport_target + 4);
  *(uint *)(this_ptr + 0x1124) = *(uint *)(teleport_target + 8);
  *(uint *)(this_ptr + 0x1128) = *(uint *)(teleport_target + 0xc);
  return;
}
