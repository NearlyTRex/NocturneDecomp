// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
// Address: 00523e60
// Address Range: [[00523e60, 00523f17]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonSet *pCVar1;
  
  g_CDemonSetPtr->actor_count = 0;
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (this_ptr_00,"..\\core\\mission.cpp",869);
    if ((this_ptr_00->location).area_id == this_ptr->current_set_index) {
      if (1999 < g_CDemonSetPtr->actor_count) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 877;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar1 = g_CDemonSetPtr;
      g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = this_ptr_00;
      pCVar1->actor_count = pCVar1->actor_count + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(g_CDemonSetPtr);
  core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0(g_CDemonSetPtr);
  return;
}
