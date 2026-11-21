// Name: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_0051b7b0
// Address: 0051b7b0
// Address Range: [[0051b7b0, 0051b8c4]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_0051b7b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_0051b7b0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  g_CDemonSetPtr->actor_count = 0;
  pCVar1 = this_ptr->first_actor;
  do {
    if (pCVar1 == (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005593e0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(g_CDemonSetPtr);
      return;
    }
    if (this_ptr->current_set_index == (pCVar1->location).area_id) {
      if (pCVar1->lifecycle_state == ACTOR_NOT_CREATED) {
        if (pCVar1->create_event[0] != '\0') {
          iVar3 = _stricmp(pCVar1->create_event,"none");
          if ((iVar3 != 0) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                (g_CEventListPtr,pCVar1->create_event), iVar3 == 0))
          goto LAB_0051b8aa;
        }
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(pCVar1->create_prob);
        if (iVar3 == 0) {
          pCVar1->lifecycle_state = ACTOR_DESTROYED;
        }
        else {
          pCVar1->lifecycle_state = ACTOR_CREATED;
LAB_0051b82c:
          if (1999 < g_CDemonSetPtr->actor_count) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 1175;
            core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar2 = g_CDemonSetPtr;
          g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = pCVar1;
          pCVar2->actor_count = pCVar2->actor_count + 1;
        }
      }
      else {
LAB_0051b8aa:
        if (pCVar1->lifecycle_state == ACTOR_CREATED) goto LAB_0051b82c;
      }
    }
    pCVar1 = pCVar1->next_actor;
  } while( true );
}
