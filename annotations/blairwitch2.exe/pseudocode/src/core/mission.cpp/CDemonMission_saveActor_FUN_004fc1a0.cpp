// Name: core_mission.cpp_CDemonMission_saveActor_FUN_004fc1a0
// Address: 004fc1a0
// Address Range: [[004fc1a0, 004fc1fb]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004fc1a0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004fc1a0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *pcVar1;
  byte *puVar2;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    pcVar1 = "(none)";
    if (actor_ptr != (CDemonActor *)0x0) {
      pcVar1 = (char *)actor_ptr;
    }
    puVar2 = &DAT_005de65c;
  }
  else {
    puVar2 = &DAT_005de657;
    pcVar1 = (char *)actor_ptr;
  }
  FUN_005b8010(file,puVar2,pcVar1);
  if (description != (char *)0x0) {
    FUN_005b8010(file,"\t\t// %s\n",description);
    return;
  }
  FUN_005b8010(file,&DAT_005de66a);
  return;
}
