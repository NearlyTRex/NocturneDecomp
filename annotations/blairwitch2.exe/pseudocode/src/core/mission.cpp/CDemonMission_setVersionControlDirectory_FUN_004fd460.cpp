// Name: core_mission.cpp_CDemonMission_setVersionControlDirectory_FUN_004fd460
// Address: 004fd460
// Address Range: [[004fd460, 004fd487]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_004fd460(CDemonMission *this_ptr,char *directory)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_004fd460(CDemonMission *this_ptr,char *directory)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d1c698;
  do {
    cVar1 = *directory;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = directory[1];
    directory = directory + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
