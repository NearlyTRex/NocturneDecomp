// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0
// Address: 004f6bf0
// Address Range: [[004f6bf0, 004f6c92]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  *(uint *)&g_CDemonSetPtr->field_0x14d164 = 0;
  for (iVar1 = *(int *)(this_ptr + 0x143c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (*(int *)this_ptr == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
        _DAT_01d71de0 = "..\\core\\mission.cpp";
        _DAT_01d71de4 = 0x394;
        core_main_c_FUN_004e4330("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSetPtr;
      *(int *)(&g_CDemonSetPtr->field_0x14d168 + *(int *)&g_CDemonSetPtr->field_0x14d164 * 4) =
           iVar1;
      *(int *)&pCVar2->field_0x14d164 = *(int *)&pCVar2->field_0x14d164 + 1;
    }
  }
  core_setcolid_cpp_FUN_0053eda0(g_CDemonSetPtr);
  core_set_cpp_FUN_0053b460(g_CDemonSetPtr);
  return;
}
