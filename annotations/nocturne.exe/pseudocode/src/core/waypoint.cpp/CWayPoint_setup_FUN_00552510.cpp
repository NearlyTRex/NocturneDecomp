// Name: core_waypoint.cpp_CWayPoint_setup_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 005525cb]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00552510(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00552510(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CWayPoint *pCVar5;
  int iVar6;
  char *str1;
  
  core_trigger_cpp_CTrigger_setup_FUN_00547a00(&this_ptr->base);
  iVar6 = 0;
  if (0 < this_ptr->num_adjacent_waypoints) {
    pCVar5 = this_ptr;
    do {
      pCVar1 = pCVar5->adjacency[0].waypoint;
      fVar2 = (this_ptr->base).base.location.position.x - (pCVar1->base).base.location.position.x;
      fVar4 = (this_ptr->base).base.location.position.y - (pCVar1->base).base.location.position.y;
      fVar3 = (this_ptr->base).base.location.position.z - (pCVar1->base).base.location.position.z;
      iVar6 = iVar6 + 1;
      pCVar5->adjacency[0].distance = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      pCVar5 = (CWayPoint *)((pCVar5->base).base.actor_name + 8);
    } while (iVar6 < this_ptr->num_adjacent_waypoints);
  }
  if ((this_ptr->base).base.create_event[0] != '\0') {
    str1 = (this_ptr->base).base.create_event;
    iVar6 = _stricmp(str1,"none");
    if ((iVar6 != 0) &&
       (iVar6 = _stricmp(str1,"true"), iVar6 != 0)) {
      g_CurrentFilename = "..\\core\\waypoint.cpp";
      g_CurrentLineNumber = 121;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
