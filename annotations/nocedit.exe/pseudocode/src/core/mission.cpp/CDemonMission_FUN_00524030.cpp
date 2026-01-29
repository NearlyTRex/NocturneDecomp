// Name: core_mission.cpp_CDemonMission_FUN_00524030
// Address: 00524030
// Address Range: [[00524030, 00524065]]
// Convention: __cdecl
// Signature: char * __cdecl core_mission_cpp_CDemonMission_FUN_00524030(CDemonMission *this_ptr)

#include "nocturne.h"

char * __cdecl core_mission_cpp_CDemonMission_FUN_00524030(CDemonMission *this_ptr)

{
  CDemonActor *str1;
  int iVar1;
  char *in_stack_00000008;
  
  str1 = this_ptr->first_actor;
  while( true ) {
    if (str1 == (CDemonActor *)0x0) {
      return (char *)0x0;
    }
    iVar1 = stricmp(str1->actor_name,in_stack_00000008);
    if (iVar1 == 0) break;
    str1 = str1->next_actor;
  }
  return str1->actor_name;
}
