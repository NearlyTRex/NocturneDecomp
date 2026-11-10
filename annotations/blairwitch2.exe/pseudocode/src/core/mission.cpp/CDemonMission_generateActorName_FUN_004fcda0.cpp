// Name: core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
// Address: 004fcda0
// Address Range: [[004fcda0, 004fcdf7]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission *this_ptr,CDemonActor *actor)

{
  char cVar1;
  char *pcVar2;
  char local_2c [32];
  
  actor->actor_name[0] = '\0';
  pcVar2 = (char *)core_actor_cpp_FUN_00408a50(actor);
  if (*pcVar2 == 'C') {
    pcVar2 = pcVar2 + 1;
  }
  core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004fcd00(this_ptr,local_2c,pcVar2);
  pcVar2 = local_2c;
  do {
    cVar1 = *pcVar2;
    actor->actor_name[0] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    actor->actor_name[1] = cVar1;
    actor = (CDemonActor *)(actor->actor_name + 2);
  } while (cVar1 != '\0');
  return;
}
