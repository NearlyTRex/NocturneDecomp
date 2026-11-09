// Name: core_mission.cpp_FUN_004f6930
// Address: 004f6930
// Address Range: [[004f6930, 004f6998]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004f6930(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_004f6930(CDemonMission *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (*(char *)actor == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(this_ptr,actor);
    }
    iVar1 = *(int *)(this_ptr + 0x1440);
    if (iVar1 != 0) {
      *(uint *)&actor->field_0x14c = 0;
      *(int *)&actor->field_0x150 = iVar1;
      *(CDemonActor **)(*(int *)(this_ptr + 0x1440) + 0x14c) = actor;
      *(CDemonActor **)(this_ptr + 0x1440) = actor;
      return;
    }
    *(uint *)&actor->field_0x14c = 0;
    *(uint *)&actor->field_0x150 = 0;
    *(CDemonActor **)(this_ptr + 0x143c) = actor;
    *(CDemonActor **)(this_ptr + 0x1440) = actor;
  }
  return;
}
