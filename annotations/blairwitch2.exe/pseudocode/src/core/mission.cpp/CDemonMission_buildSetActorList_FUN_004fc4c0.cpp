// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0
// Address: 004fc4c0
// Address Range: [[004fc4c0, 004fc562]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  
  g_CDemonSetPtr->actor_count = 0;
  for (pCVar1 = *(CDemonActor **)(this_ptr + 0x1114); pCVar1 != (CDemonActor *)0x0;
      pCVar1 = *(CDemonActor **)&pCVar1->field_0x14c) {
    if (*(int *)this_ptr == *(int *)&pCVar1->field_0x2c) {
      if (1999 < g_CDemonSetPtr->actor_count) {
        _DAT_01d046a0 = "..\\core\\mission.cpp";
        _DAT_01d046a4 = 0x391;
        core_main_c_FUN_004e4500("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSetPtr;
      g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = pCVar1;
      pCVar2->actor_count = pCVar2->actor_count + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_00537fc0(g_CDemonSetPtr);
  core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00534820(g_CDemonSetPtr);
  return;
}
