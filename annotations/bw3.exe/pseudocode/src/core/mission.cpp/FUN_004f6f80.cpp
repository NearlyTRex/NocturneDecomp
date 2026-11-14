// Name: core_mission.cpp_FUN_004f6f80
// Address: 004f6f80
// Address Range: [[004f6f80, 004f7094]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f6f80(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004f6f80(int *param_1)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  g_CDemonSetPtr->actor_count = 0;
  pCVar1 = (CDemonActor *)param_1[0x50f];
  do {
    if (pCVar1 == (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0(g_CDemonSetPtr);
      core_set_cpp_FUN_0053b460(g_CDemonSetPtr);
      return;
    }
    if (*param_1 == (pCVar1->location).area_id) {
      if (pCVar1->lifecycle_state == ACTOR_NOT_CREATED) {
        if (pCVar1->create_event[0] != '\0') {
          iVar3 = _stricmp(pCVar1->create_event,&DAT_005c8b57);
          if ((iVar3 != 0) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                (0x01C6E360,pCVar1->create_event), iVar3 == 0)) goto LAB_004f707a;
        }
        iVar3 = core_actor_cpp_randomChance_FUN_0040cf40(pCVar1->create_prob);
        if (iVar3 == 0) {
          pCVar1->lifecycle_state = ACTOR_DESTROYED;
        }
        else {
          pCVar1->lifecycle_state = ACTOR_CREATED;
LAB_004f6ffc:
          if (1999 < g_CDemonSetPtr->actor_count) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x497;
            core_main_c_FUN_004e4330("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar2 = g_CDemonSetPtr;
          g_CDemonSetPtr->actors[g_CDemonSetPtr->actor_count] = pCVar1;
          pCVar2->actor_count = pCVar2->actor_count + 1;
        }
      }
      else {
LAB_004f707a:
        if (pCVar1->lifecycle_state == ACTOR_CREATED) goto LAB_004f6ffc;
      }
    }
    pCVar1 = pCVar1->next_actor;
  } while( true );
}
