// Name: core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
// Address: 0051b160
// Address Range: [[0051b160, 0051b1c8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (*(char *)actor == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(this_ptr,actor);
    }
    iVar1 = *(int *)(this_ptr + 0x111c);
    if (iVar1 != 0) {
      *(uint *)&actor->field_0x14c = 0;
      *(int *)&actor->field_0x150 = iVar1;
      *(CDemonActor **)(*(int *)(this_ptr + 0x111c) + 0x14c) = actor;
      *(CDemonActor **)(this_ptr + 0x111c) = actor;
      return;
    }
    *(uint *)&actor->field_0x14c = 0;
    *(uint *)&actor->field_0x150 = 0;
    *(CDemonActor **)(this_ptr + 0x1118) = actor;
    *(CDemonActor **)(this_ptr + 0x111c) = actor;
  }
  return;
}
