// Name: core_mission.cpp_FUN_004fc740
// Address: 004fc740
// Address Range: [[004fc740, 004fc775]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_FUN_004fc740(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_FUN_004fc740(CDemonMission *this_ptr,char *name)

{
  CDemonActor *str1;
  int iVar1;
  
  str1 = *(CDemonActor **)(this_ptr + 0x1114);
  while( true ) {
    if (str1 == (CDemonActor *)0x0) {
      return (CDemonActor *)0x0;
    }
    iVar1 = _stricmp((char *)str1,name);
    if (iVar1 == 0) break;
    str1 = *(CDemonActor **)&str1->field_0x14c;
  }
  return str1;
}
