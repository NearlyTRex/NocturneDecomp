// Name: core_mission.cpp_CDemonMission_setMissionName_FUN_004f7460
// Address: 004f7460
// Address Range: [[004f7460, 004f7487]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_004f7460(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_004f7460(CDemonMission *this_ptr,char *name)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d882a0;
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
