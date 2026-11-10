// Name: core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0
// Address: 0051b6c0
// Address Range: [[0051b6c0, 0051b6f5]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission *this_ptr,char *name)

{
  CDemonActor *str1;
  int iVar1;
  
  str1 = *(CDemonActor **)(this_ptr + 0x1118);
  while( true ) {
    if (str1 == (CDemonActor *)0x0) {
      return (CDemonActor *)0x0;
    }
    iVar1 = _stricmp(str1->actor_name,name);
    if (iVar1 == 0) break;
    str1 = str1->next_actor;
  }
  return str1;
}
