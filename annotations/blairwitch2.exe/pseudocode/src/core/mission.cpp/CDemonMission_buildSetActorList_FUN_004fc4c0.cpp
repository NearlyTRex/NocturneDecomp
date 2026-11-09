// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0
// Address: 004fc4c0
// Address Range: [[004fc4c0, 004fc562]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  *(uint *)&g_CDemonSetPtr->field_0x14d164 = 0;
  for (iVar1 = *(int *)(this_ptr + 0x1114); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (*(int *)this_ptr == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
        _DAT_01d046a0 = "..\\core\\mission.cpp";
        _DAT_01d046a4 = 0x391;
        core_main_c_FUN_004e4500("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSetPtr;
      *(int *)(&g_CDemonSetPtr->field_0x14d168 + *(int *)&g_CDemonSetPtr->field_0x14d164 * 4) =
           iVar1;
      *(int *)&pCVar2->field_0x14d164 = *(int *)&pCVar2->field_0x14d164 + 1;
    }
  }
  core_setcolid_cpp_FUN_00537fc0(g_CDemonSetPtr);
  core_set_cpp_FUN_00534820(g_CDemonSetPtr);
  return;
}
