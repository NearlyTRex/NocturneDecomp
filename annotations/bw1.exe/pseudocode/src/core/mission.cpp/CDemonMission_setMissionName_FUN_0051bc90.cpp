// Name: core_mission.cpp_CDemonMission_setMissionName_FUN_0051bc90
// Address: 0051bc90
// Address Range: [[0051bc90, 0051bcb7]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_0051bc90(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_0051bc90(CDemonMission *this_ptr,char *name)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d33b20;
  do {
    cVar1 = *name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = name[1];
    name = name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
