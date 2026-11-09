// Name: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
// Address: 004f6ed0
// Address Range: [[004f6ed0, 004f6f00]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)

{
  *(uint *)(this_ptr + 0x1444) = *(uint *)teleport_target;
  *(uint *)(this_ptr + 0x1448) = *(uint *)(teleport_target + 4);
  *(uint *)(this_ptr + 0x144c) = *(uint *)(teleport_target + 8);
  *(uint *)(this_ptr + 0x1450) = *(uint *)(teleport_target + 0xc);
  *(uint *)(this_ptr + 0x1014) = 1;
  return;
}
