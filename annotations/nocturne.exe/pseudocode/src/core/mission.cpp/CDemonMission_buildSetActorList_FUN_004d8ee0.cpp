// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
// Address: 004d8ee0
// Address Range: [[004d8ee0, 004d8f82]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01E57284 + 0x14cd6c) = 0;
  for (iVar1 = param_1[0x145]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x144)) {
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)(0x01E57284 + 0x14cd6c)) {
        _DAT_01cc4800 = "..\\core\\mission.cpp";
        _DAT_01cc4804 = 0x36d;
        FUN_004c8440("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      iVar2 = 0x01E57284;
      *(int *)(0x01E57284 + 0x14cd70 + *(int *)(0x01E57284 + 0x14cd6c) * 4) = iVar1;
      *(int *)(iVar2 + 0x14cd6c) = *(int *)(iVar2 + 0x14cd6c) + 1;
    }
  }
  core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(0x01E57284);
  core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(0x01E57284);
  return;
}
