// Name: core_waypoint.cpp_CWayPoint_setup_FUN_005792b0
// Address: 005792b0
// Address Range: [[005792b0, 0057937b]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005792b0(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005792b0(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CWayPoint *pCVar7;
  char *str1;
  
  core_trigger_cpp_CTrigger_setup_FUN_0056e0f0(&this_ptr->base);
  iVar5 = this_ptr->num_adjacent_waypoints;
  iVar6 = 0;
  (this_ptr->base).base.is_renderable = *(int *)(0x01D81080 + 0x1008);
  if (0 < iVar5) {
    pCVar7 = this_ptr;
    do {
      pCVar1 = pCVar7->adjacency[0].waypoint;
      fVar2 = (this_ptr->base).base.location.position.x - (pCVar1->base).base.location.position.x;
      fVar4 = (this_ptr->base).base.location.position.y - (pCVar1->base).base.location.position.y;
      fVar3 = (this_ptr->base).base.location.position.z - (pCVar1->base).base.location.position.z;
      iVar6 = iVar6 + 1;
      pCVar7->adjacency[0].distance = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      pCVar7 = (CWayPoint *)((pCVar7->base).base.actor_name + 8);
    } while (iVar6 < this_ptr->num_adjacent_waypoints);
  }
  if ((this_ptr->base).base.create_event[0] != '\0') {
    str1 = (this_ptr->base).base.create_event;
    iVar5 = _stricmp(str1,(char *)0x5d7394);
    if ((iVar5 != 0) &&
       (iVar5 = _stricmp(str1,(char *)0x5d7399), iVar5 != 0)) {
      _DAT_01d71de0 = "..\\core\\waypoint.cpp";
      _DAT_01d71de4 = 0x81;
      core_main_c_FUN_004e4330("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
