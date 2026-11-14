// Name: core_mission.cpp_FUN_004fc820
// Address: 004fc820
// Address Range: [[004fc820, 004fc934]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fc820(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004fc820(int *param_1)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  g_CDemonSetPtr->actor_count = 0;
  pCVar1 = (CDemonActor *)param_1[0x445];
  do {
    if (pCVar1 == (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_00537fc0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00534820(g_CDemonSetPtr);
      return;
    }
    if (*param_1 == (pCVar1->location).area_id) {
      if (pCVar1->lifecycle_state == ACTOR_NOT_CREATED) {
        if (pCVar1->create_event[0] != '\0') {
          iVar3 = _stricmp(pCVar1->create_event,&DAT_005de812);
          if ((iVar3 != 0) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                (0x01C38BC0,pCVar1->create_event), iVar3 == 0)) goto LAB_004fc91a;
        }
        iVar3 = core_actor_cpp_randomChance_FUN_0040d060(pCVar1->create_prob);
        if (iVar3 == 0) {
          pCVar1->lifecycle_state = ACTOR_DESTROYED;
        }
        else {
          pCVar1->lifecycle_state = ACTOR_CREATED;
LAB_004fc89c:
          if (1999 < g_CDemonSetPtr->actor_count) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x48a;
            core_main_c_FUN_004e4500("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar2 = g_CDemonSetPtr;
          g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = pCVar1;
          pCVar2->actor_count = pCVar2->actor_count + 1;
        }
      }
      else {
LAB_004fc91a:
        if (pCVar1->lifecycle_state == ACTOR_CREATED) goto LAB_004fc89c;
      }
    }
    pCVar1 = pCVar1->next_actor;
  } while( true );
}
