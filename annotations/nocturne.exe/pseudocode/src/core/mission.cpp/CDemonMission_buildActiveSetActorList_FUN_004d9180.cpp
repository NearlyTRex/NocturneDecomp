// Name: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
// Address: 004d9180
// Address Range: [[004d9180, 004d9294]]
// Convention: unknown
// Signature: void core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(int *param_1)

#include "nocturne.h"

void core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01E57284 + 0x14cd6c) = 0;
  iVar1 = param_1[0x145];
  do {
    if (iVar1 == 0) {
      core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(0x01E57284);
      core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(0x01E57284);
      return;
    }
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        if (*(char *)(iVar1 + 0x78) != '\0') {
          iVar2 = _stricmp(iVar1 + 0x78,"none");
          if ((iVar2 != 0) &&
             (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                (0x01C03A10,iVar1 + 0x78), iVar2 == 0)) goto LAB_004d927a;
        }
        iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(*(uint *)(iVar1 + 0x74));
        if (iVar2 == 0) {
          *(uint *)(iVar1 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar1 + 0x70) = 1;
LAB_004d91fc:
          if (1999 < *(int *)(0x01E57284 + 0x14cd6c)) {
            PTR_01cc4800 = "..\\core\\mission.cpp";
            INT_01cc4804 = 0x44e;
            core_main_c_FUN_004c8440("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          iVar2 = 0x01E57284;
          *(int *)(0x01E57284 + 0x14cd70 + *(int *)(0x01E57284 + 0x14cd6c) * 4) = iVar1;
          *(int *)(iVar2 + 0x14cd6c) = *(int *)(iVar2 + 0x14cd6c) + 1;
        }
      }
      else {
LAB_004d927a:
        if (*(int *)(iVar1 + 0x70) == 1) goto LAB_004d91fc;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x144);
  } while( true );
}
