// Name: core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
// Address: 004d9720
// Address Range: [[004d9720, 004d9777]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission *this_ptr,CDemonActor *actor)

{
  char cVar1;
  char *pcVar2;
  char local_2c [32];
  
  actor->actor_name[0] = '\0';
  pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(actor);
  if (*pcVar2 == 'C') {
    pcVar2 = pcVar2 + 1;
  }
  core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(this_ptr,local_2c,pcVar2);
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
