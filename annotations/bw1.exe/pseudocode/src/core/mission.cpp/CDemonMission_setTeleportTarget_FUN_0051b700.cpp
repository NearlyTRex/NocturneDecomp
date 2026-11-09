// Name: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_0051b700
// Address: 0051b700
// Address Range: [[0051b700, 0051b730]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700(CDemonMission *this_ptr,CLocation *teleport_target)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700(CDemonMission *this_ptr,CLocation *teleport_target)

{
  *(uint *)(this_ptr + 0x1120) = *(uint *)teleport_target;
  *(uint *)(this_ptr + 0x1124) = *(uint *)(teleport_target + 4);
  *(uint *)(this_ptr + 0x1128) = *(uint *)(teleport_target + 8);
  *(uint *)(this_ptr + 0x112c) = *(uint *)(teleport_target + 0xc);
  *(uint *)(this_ptr + 0x1014) = 1;
  return;
}
