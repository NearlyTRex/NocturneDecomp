// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0
// Address: 004f6bf0
// Address Range: [[004f6bf0, 004f6c92]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  
  g_CDemonSetPtr->actor_count = 0;
  for (pCVar1 = *(CDemonActor **)(this_ptr + 0x143c); pCVar1 != (CDemonActor *)0x0;
      pCVar1 = pCVar1->next_actor) {
    if (*(int *)this_ptr == (pCVar1->location).area_id) {
      if (1999 < g_CDemonSetPtr->actor_count) {
        _DAT_01d71de0 = "..\\core\\mission.cpp";
        _DAT_01d71de4 = 0x394;
        core_main_c_FUN_004e4330("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSetPtr;
      g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = pCVar1;
      pCVar2->actor_count = pCVar2->actor_count + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0(g_CDemonSetPtr);
  core_set_cpp_FUN_0053b460(g_CDemonSetPtr);
  return;
}
