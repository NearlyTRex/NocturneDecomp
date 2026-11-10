// Name: core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
// Address: 004f6e90
// Address Range: [[004f6e90, 004f6ec5]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission *this_ptr,char *name)

{
  CDemonActor *str1;
  int iVar1;
  
  str1 = *(CDemonActor **)(this_ptr + 0x143c);
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
