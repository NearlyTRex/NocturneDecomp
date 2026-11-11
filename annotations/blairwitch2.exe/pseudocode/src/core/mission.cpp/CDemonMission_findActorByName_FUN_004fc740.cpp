// Name: core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740
// Address: 004fc740
// Address Range: [[004fc740, 004fc775]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(CDemonMission *this_ptr,char *name)

{
  CDemonActor *str1;
  int iVar1;
  
  str1 = this_ptr->first_actor;
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
