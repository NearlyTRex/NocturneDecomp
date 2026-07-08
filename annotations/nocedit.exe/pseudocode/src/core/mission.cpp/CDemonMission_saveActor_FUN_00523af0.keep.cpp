// Name: core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
// Address: 00523af0
// MANUAL RECONSTRUCTION
// Address Range: [[00523af0, 00523b61]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_00523af0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_00523af0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)

{
  char *pcVar1;

  if ((uintptr_t)actor_ptr < 0xff000000 || 0xffffffff < (uintptr_t)actor_ptr) {
    pcVar1 = g_DefaultMissionIdentifier;
    if (actor_ptr != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (actor_ptr,"..\\core\\mission.cpp",627);
      pcVar1 = actor_ptr->actor_name;
    }
    _fprintf(file,"\"%s\"",pcVar1);
  }
  else {
    _fprintf(file,"%08x",(uint)(uintptr_t)actor_ptr);
  }
  if (description != (char *)0x0) {
    _fprintf(file,"\t\t// %s\n",description);
    return;
  }
  _fprintf(file,"\n");
  return;
}
