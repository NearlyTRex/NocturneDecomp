// Name: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
// Address: 00524120
// Address Range: [[00524120, 00524249]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonSet *pCVar1;
  int iVar2;
  
  g_CDemonSetPtr->actor_count = 0;
  this_ptr_00 = this_ptr->first_actor;
  do {
    if (this_ptr_00 == (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_FUN_00570fc0(g_CDemonSetPtr);
      return;
    }
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (this_ptr_00,"..\\core\\mission.cpp",0x423);
    if ((this_ptr_00->location).area_id == this_ptr->current_set_index) {
      if (this_ptr_00->was_created == 0) {
        if (this_ptr_00->create_event[0] != '\0') {
          iVar2 = stricmp(this_ptr_00->create_event,"none");
          if ((iVar2 != 0) &&
             (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                (g_CEventListPtr,this_ptr_00->create_event), iVar2 == 0))
          goto LAB_0052422f;
        }
        iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(this_ptr_00->create_prob);
        if (iVar2 == 0) {
          this_ptr_00->was_created = 2;
        }
        else {
          this_ptr_00->was_created = 1;
LAB_005241b1:
          if (1999 < g_CDemonSetPtr->actor_count) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x44e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar1 = g_CDemonSetPtr;
          g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = this_ptr_00;
          pCVar1->actor_count = pCVar1->actor_count + 1;
        }
      }
      else {
LAB_0052422f:
        if (this_ptr_00->was_created == 1) goto LAB_005241b1;
      }
    }
    this_ptr_00 = this_ptr_00->next_actor;
  } while( true );
}
