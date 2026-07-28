// Name: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
// Address: 004d9180
// Address Range: [[004d9180, 004d9294]]
// Convention: unknown
// Signature: void core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(int *param_1)

#include "nocturne.h"

void core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(int *param_1)

{
  char (*pacVar1) [40];
  int iVar2;
  C3DSLight *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  
  pCVar3 = 0x01E57284->lights + 199;
  *(char *)((int)(pCVar3->filter_names + 0x14) + 0) = '\0';
  *(char *)((int)(pCVar3->filter_names + 0x14) + 1) = '\0';
  *(char *)((int)(pCVar3->filter_names + 0x14) + 2) = '\0';
  *(char *)((int)(pCVar3->filter_names + 0x14) + 3) = '\0';
  iVar2 = param_1[0x145];
  do {
    if (iVar2 == 0) {
      core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(0x01E57284);
      core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(0x01E57284);
      return;
    }
    if (*param_1 == *(int *)(iVar2 + 0x2c)) {
      if (*(int *)(iVar2 + 0x70) == 0) {
        if (*(char *)(iVar2 + 0x78) != '\0') {
          iVar5 = _stricmp((char *)(iVar2 + 0x78),"none");
          if ((iVar5 != 0) &&
             (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                (0x01C03A10,(char *)(iVar2 + 0x78)), iVar5 == 0))
          goto LAB_004d927a;
        }
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(*(float *)(iVar2 + 0x74));
        if (iVar5 == 0) {
          *(uint *)(iVar2 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar2 + 0x70) = 1;
LAB_004d91fc:
          if (1999 < *(int *)0x01E57284->lights[199].filter_names[0x14]) {
            PTR_01cc4800 = "..\\core\\mission.cpp";
            INT_01cc4804 = 0x44e;
            core_main_c_FUN_004c8440("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar4 = 0x01E57284;
          *(int *)(0x01E57284->lights[199].filter_names[0x14] +
                  *(int *)0x01E57284->lights[199].filter_names[0x14] * 4 + 4) = iVar2;
          pacVar1 = pCVar4->lights[199].filter_names + 0x14;
          *(int *)*pacVar1 = *(int *)*pacVar1 + 1;
        }
      }
      else {
LAB_004d927a:
        if (*(int *)(iVar2 + 0x70) == 1) goto LAB_004d91fc;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x144);
  } while( true );
}
