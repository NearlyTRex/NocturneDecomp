// Name: core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
// Address: 0051bd60
// Address Range: [[0051bd60, 0051bdb7]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission *this_ptr,CDemonActor *actor)

{
  char cVar1;
  char *pcVar2;
  char local_2c [32];
  
  *(byte *)actor = 0;
  pcVar2 = core_actor_cpp_FUN_00408830(actor);
  if (*pcVar2 == 'C') {
    pcVar2 = pcVar2 + 1;
  }
  core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_0051bcc0(this_ptr,local_2c,pcVar2);
  pcVar2 = local_2c;
  do {
    cVar1 = *pcVar2;
    *(char *)actor = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    actor->field_0x1 = cVar1;
    actor = (CDemonActor *)&actor->field_0x2;
  } while (cVar1 != '\0');
  return;
}
