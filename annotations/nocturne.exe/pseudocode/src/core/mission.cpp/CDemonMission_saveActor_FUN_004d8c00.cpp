// Name: core_mission.cpp_CDemonMission_saveActor_FUN_004d8c00
// Address: 004d8c00
// Address Range: [[004d8c00, 004d8c5b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *pcVar1;
  char *format;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    pcVar1 = "(none)";
    if (actor_ptr != (CDemonActor *)0x0) {
      pcVar1 = actor_ptr->actor_name;
    }
    format = "\"%s\"";
  }
  else {
    format = "%08x";
    pcVar1 = actor_ptr->actor_name;
  }
  _fprintf(file,format,pcVar1);
  if (description != (char *)0x0) {
    _fprintf(file,"\t\t// %s\n",description);
    return;
  }
  _fprintf(file,"\n");
  return;
}
