// Name: core_mission.cpp_CDemonMission_setMissionName_FUN_00524630
// Address: 00524630
// MANUAL RECONSTRUCTION
// Address Range: [[00524630, 00524657]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_00524630(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_00524630(CDemonMission *this_ptr,char *name)

{
  strcpy(g_PendingMissionName, name);
  return;
}
