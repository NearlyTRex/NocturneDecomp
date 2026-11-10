// Name: core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
// Address: 004fc200
// Address Range: [[004fc200, 004fc268]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (actor->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(this_ptr,actor);
    }
    iVar1 = *(int *)(this_ptr + 0x1118);
    if (iVar1 != 0) {
      *(uint *)&actor->field_0x14c = 0;
      *(int *)&actor->field_0x150 = iVar1;
      *(CDemonActor **)(*(int *)(this_ptr + 0x1118) + 0x14c) = actor;
      *(CDemonActor **)(this_ptr + 0x1118) = actor;
      return;
    }
    *(uint *)&actor->field_0x14c = 0;
    *(uint *)&actor->field_0x150 = 0;
    *(CDemonActor **)(this_ptr + 0x1114) = actor;
    *(CDemonActor **)(this_ptr + 0x1118) = actor;
  }
  return;
}
