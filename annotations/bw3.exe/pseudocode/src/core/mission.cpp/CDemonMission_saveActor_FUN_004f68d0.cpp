// Name: core_mission.cpp_CDemonMission_saveActor_FUN_004f68d0
// Address: 004f68d0
// Address Range: [[004f68d0, 004f692b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004f68d0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004f68d0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *pcVar1;
  byte *puVar2;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    pcVar1 = "(none)";
    if (actor_ptr != (CDemonActor *)0x0) {
      pcVar1 = (char *)actor_ptr;
    }
    puVar2 = &DAT_005c89a1;
  }
  else {
    puVar2 = &DAT_005c899c;
    pcVar1 = (char *)actor_ptr;
  }
  FUN_005a3140(file,puVar2,pcVar1);
  if (description != (char *)0x0) {
    FUN_005a3140(file,"\t\t// %s\n",description);
    return;
  }
  FUN_005a3140(file,&DAT_005c89af);
  return;
}
