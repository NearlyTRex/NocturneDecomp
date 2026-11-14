// Name: core_mission.cpp_CDemonMission_setVersionControlDirectory_FUN_0051c420
// Address: 0051c420
// Address Range: [[0051c420, 0051c447]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_0051c420(CDemonMission *this_ptr,char *directory)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_0051c420(CDemonMission *this_ptr,char *directory)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d33b88;
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
