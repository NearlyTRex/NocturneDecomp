// Name: core_mission.cpp_CDemonMission_setMissionName_FUN_004d9650
// Address: 004d9650
// Address Range: [[004d9650, 004d9677]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_004d9650(undefined4 param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_004d9650(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01ccbbf0;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
