// Name: core_mission.cpp_CDemonMission_saveActor_FUN_0051b100
// Address: 0051b100
// Address Range: [[0051b100, 0051b15b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_0051b100(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_0051b100(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *format;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    format = "\"%s\"";
  }
  else {
    format = "%08x";
  }
  _fprintf(file,format);
  if (description != (char *)0x0) {
    _fprintf(file,"\t\t// %s\n");
    return;
  }
  _fprintf(file,"\n");
  return;
}
