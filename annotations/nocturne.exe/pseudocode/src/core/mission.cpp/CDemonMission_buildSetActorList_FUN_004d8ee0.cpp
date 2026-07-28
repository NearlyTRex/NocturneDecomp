// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
// Address: 004d8ee0
// Address Range: [[004d8ee0, 004d8f82]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission *this_ptr)

{
  char (*pacVar1) [40];
  int iVar2;
  C3DSLight *pCVar3;
  CDemonSet *pCVar4;
  
  pCVar3 = 0x01E57284->lights + 199;
  *(char *)((int)(pCVar3->filter_names + 0x14) + 0) = '\0';
  *(char *)((int)(pCVar3->filter_names + 0x14) + 1) = '\0';
  *(char *)((int)(pCVar3->filter_names + 0x14) + 2) = '\0';
  *(char *)((int)(pCVar3->filter_names + 0x14) + 3) = '\0';
  for (iVar2 = *(int *)(this_ptr->set_names[3] + 0xcc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x144))
  {
    if (this_ptr->current_set_index == *(int *)(iVar2 + 0x2c)) {
      if (1999 < *(int *)0x01E57284->lights[199].filter_names[0x14]) {
        PTR_01cc4800 = "..\\core\\mission.cpp";
        INT_01cc4804 = 0x36d;
        core_main_c_FUN_004c8440("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar4 = 0x01E57284;
      *(int *)(0x01E57284->lights[199].filter_names[0x14] +
              *(int *)0x01E57284->lights[199].filter_names[0x14] * 4 + 4) = iVar2;
      pacVar1 = pCVar4->lights[199].filter_names + 0x14;
      *(int *)*pacVar1 = *(int *)*pacVar1 + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(0x01E57284);
  core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(0x01E57284);
  return;
}
