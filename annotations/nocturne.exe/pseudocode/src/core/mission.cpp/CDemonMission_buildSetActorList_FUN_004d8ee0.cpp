// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
// Address: 004d8ee0
// Address Range: [[004d8ee0, 004d8f82]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  
  g_CDemonSet_PTR_005be368->actor_count = 0;
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    if (this_ptr->current_set_index == (pCVar1->location).area_id) {
      if (1999 < g_CDemonSet_PTR_005be368->actor_count) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 877;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSet_PTR_005be368;
      g_CDemonSet_PTR_005be368->actors[g_CDemonSet_PTR_005be368->actor_count] = pCVar1;
      pCVar2->actor_count = pCVar2->actor_count + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(g_CDemonSet_PTR_005be368);
  core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(g_CDemonSet_PTR_005be368);
  return;
}
