// Name: core_mission.cpp_CDemonMission_saveActor_FUN_0051b100
// Address: 0051b100
// Address Range: [[0051b100, 0051b15b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_0051b100(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_0051b100(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *pcVar1;
  byte *puVar2;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    pcVar1 = "(none)";
    if (actor_ptr != (CDemonActor *)0x0) {
      pcVar1 = actor_ptr->actor_name;
    }
    puVar2 = &DAT_005e969f;
  }
  else {
    puVar2 = &DAT_005e969a;
    pcVar1 = actor_ptr->actor_name;
  }
  FUN_005c03c0(file,puVar2,pcVar1);
  if (description != (char *)0x0) {
    FUN_005c03c0(file,"\t\t// %s\n",description);
    return;
  }
  FUN_005c03c0(file,&DAT_005e96ad);
  return;
}
