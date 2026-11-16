// Name: core_mission.cpp_CDemonMission_saveActor_FUN_004fc1a0
// Address: 004fc1a0
// Address Range: [[004fc1a0, 004fc1fb]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004fc1a0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004fc1a0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *format;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    format = &DAT_005de65c;
  }
  else {
    format = &DAT_005de657;
  }
  _fprintf(file,format);
  if (description != (char *)0x0) {
    _fprintf(file,"\t\t// %s\n");
    return;
  }
  _fprintf(file,&DAT_005de66a);
  return;
}
