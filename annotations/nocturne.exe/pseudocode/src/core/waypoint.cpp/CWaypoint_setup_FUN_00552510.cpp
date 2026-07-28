// Name: core_waypoint.cpp_CWaypoint_setup_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 005525cb]]
// Convention: unknown
// Signature: void core_waypoint_cpp_CWaypoint_setup_FUN_00552510(CTrigger *param_1)

#include "nocturne.h"

void core_waypoint_cpp_CWaypoint_setup_FUN_00552510(CTrigger *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CTrigger *pCVar5;
  int iVar6;
  char *str1;
  
  core_trigger_cpp_CTrigger_setup_FUN_00547a00(param_1);
  iVar6 = 0;
  if (0 < *(int *)param_1[1].base.actor_name) {
    pCVar5 = param_1;
    do {
      iVar1 = *(int *)(pCVar5[1].base.actor_name + 4);
      fVar2 = (param_1->base).location.position.x - *(float *)(iVar1 + 0x20);
      fVar4 = (param_1->base).location.position.y - *(float *)(iVar1 + 0x24);
      fVar3 = (param_1->base).location.position.z - *(float *)(iVar1 + 0x28);
      iVar6 = iVar6 + 1;
      *(float *)(pCVar5[1].base.actor_name + 8) =
           SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      pCVar5 = (CTrigger *)((pCVar5->base).actor_name + 8);
    } while (iVar6 < *(int *)param_1[1].base.actor_name);
  }
  if ((param_1->base).create_event[0] != '\0') {
    str1 = (param_1->base).create_event;
    iVar6 = _stricmp(str1,"none");
    if ((iVar6 != 0) &&
       (iVar6 = _stricmp(str1,"true"), iVar6 != 0)) {
      PTR_01cc4800 = "..\\core\\waypoint.cpp";
      INT_01cc4804 = 0x79;
      core_main_c_FUN_004c8440("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
