// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420
// Address: 0051b420
// Address Range: [[0051b420, 0051b4c2]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  
  g_CDemonSetPtr->actor_count = 0;
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    if (this_ptr->current_set_index == (pCVar1->location).area_id) {
      if (1999 < g_CDemonSetPtr->actor_count) {
        _DAT_01d1d400 = "..\\core\\mission.cpp";
        _DAT_01d1d404 = 0x394;
        core_main_c_FUN_005030e0("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSetPtr;
      g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = pCVar1;
      pCVar2->actor_count = pCVar2->actor_count + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005593e0(g_CDemonSetPtr);
  core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(g_CDemonSetPtr);
  return;
}
