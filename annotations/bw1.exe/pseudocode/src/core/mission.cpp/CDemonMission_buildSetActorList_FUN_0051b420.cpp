// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420
// Address: 0051b420
// Address Range: [[0051b420, 0051b4c2]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  *(uint *)&g_CDemonSetPtr->field_0x14d164 = 0;
  for (iVar1 = *(int *)(this_ptr + 0x1118); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (*(int *)this_ptr == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
        _DAT_01d1d400 = "..\\core\\mission.cpp";
        _DAT_01d1d404 = 0x394;
        core_main_c_FUN_005030e0("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar2 = g_CDemonSetPtr;
      *(int *)(&g_CDemonSetPtr->field_0x14d168 + *(int *)&g_CDemonSetPtr->field_0x14d164 * 4) =
           iVar1;
      *(int *)&pCVar2->field_0x14d164 = *(int *)&pCVar2->field_0x14d164 + 1;
    }
  }
  core_setcolid_cpp_FUN_005593e0(g_CDemonSetPtr);
  core_set_cpp_FUN_00555ad0(g_CDemonSetPtr);
  return;
}
