// Name: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
// Address: 004d9180
// Address Range: [[004d9180, 004d9294]]
// Convention: unknown
// Signature: void core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(int *param_1)

#include "nocturne.h"

void core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(int *param_1)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  g_CDemonSet_PTR_005be368->actor_count = 0;
  pCVar1 = (CDemonActor *)param_1[0x145];
  do {
    if (pCVar1 == (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(g_CDemonSet_PTR_005be368);
      core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(g_CDemonSet_PTR_005be368);
      return;
    }
    if (*param_1 == (pCVar1->location).area_id) {
      if (pCVar1->lifecycle_state == ACTOR_NOT_CREATED) {
        if (pCVar1->create_event[0] != '\0') {
          iVar3 = _stricmp(pCVar1->create_event,"none");
          if ((iVar3 != 0) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                (0x01C03A10,pCVar1->create_event), iVar3 == 0)) goto LAB_004d927a;
        }
        iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(pCVar1->create_prob);
        if (iVar3 == 0) {
          pCVar1->lifecycle_state = ACTOR_DESTROYED;
        }
        else {
          pCVar1->lifecycle_state = ACTOR_CREATED;
LAB_004d91fc:
          if (1999 < g_CDemonSet_PTR_005be368->actor_count) {
            g_CHAR_PTR_01cc4800 = "..\\core\\mission.cpp";
            g_INT_01cc4804 = 0x44e;
            core_main_c_FUN_004c8440("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar2 = g_CDemonSet_PTR_005be368;
          g_CDemonSet_PTR_005be368->actors[g_CDemonSet_PTR_005be368->actor_count] = pCVar1;
          pCVar2->actor_count = pCVar2->actor_count + 1;
        }
      }
      else {
LAB_004d927a:
        if (pCVar1->lifecycle_state == ACTOR_CREATED) goto LAB_004d91fc;
      }
    }
    pCVar1 = pCVar1->next_actor;
  } while( true );
}
