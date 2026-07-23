// Name: core_waypoint.cpp_CWaypoint_setup_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 005525cb]]
// Convention: unknown
// Signature: void core_waypoint_cpp_CWaypoint_setup_FUN_00552510(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_waypoint_cpp_CWaypoint_setup_FUN_00552510(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  core_trigger_cpp_CTrigger_setup_FUN_00547a00(param_1);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x368)) {
    iVar5 = param_1;
    do {
      iVar1 = *(int *)(iVar5 + 0x36c);
      fVar2 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
      fVar4 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
      fVar3 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
      iVar6 = iVar6 + 1;
      *(float *)(iVar5 + 0x370) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      iVar5 = iVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x368));
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    iVar6 = _stricmp(param_1 + 0x78,"none");
    if ((iVar6 != 0) &&
       (iVar6 = _stricmp(param_1 + 0x78,"true"), iVar6 != 0)) {
      _DAT_01cc4800 = "..\\core\\waypoint.cpp";
      _DAT_01cc4804 = 0x79;
      FUN_004c8440("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
