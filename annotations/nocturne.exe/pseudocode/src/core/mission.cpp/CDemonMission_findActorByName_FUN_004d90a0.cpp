// Name: core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
// Address: 004d90a0
// Address Range: [[004d90a0, 004d90d5]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission *this_ptr,char *name)

{
  CDemonActor *str1;
  int iVar1;
  
  str1 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
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
