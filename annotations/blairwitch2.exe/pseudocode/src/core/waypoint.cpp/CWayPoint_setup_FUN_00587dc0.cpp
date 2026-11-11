// Name: core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0
// Address: 00587dc0
// Address Range: [[00587dc0, 00587e85]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00587dc0(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00587dc0(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CWayPoint *pCVar6;
  int iVar7;
  char *str1;
  
  core_trigger_cpp_CTrigger_setup_FUN_005778a0(&this_ptr->base);
  iVar7 = 0;
  iVar5 = this_ptr->num_adjacent_waypoints;
  (this_ptr->base).base.is_renderable = 1;
  if (0 < iVar5) {
    pCVar6 = this_ptr;
    do {
      pCVar1 = pCVar6->adjacency[0].waypoint;
      fVar2 = (this_ptr->base).base.location.position.x - (pCVar1->base).base.location.position.x;
      fVar4 = (this_ptr->base).base.location.position.y - (pCVar1->base).base.location.position.y;
      fVar3 = (this_ptr->base).base.location.position.z - (pCVar1->base).base.location.position.z;
      iVar7 = iVar7 + 1;
      pCVar6->adjacency[0].distance = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      pCVar6 = (CWayPoint *)((pCVar6->base).base.actor_name + 8);
    } while (iVar7 < this_ptr->num_adjacent_waypoints);
  }
  if ((this_ptr->base).base.create_event[0] != '\0') {
    str1 = (this_ptr->base).base.create_event;
    iVar5 = _stricmp(str1,(char *)0x5ee0bf);
    if ((iVar5 != 0) &&
       (iVar5 = _stricmp(str1,(char *)0x5ee0c4), iVar5 != 0)) {
      _DAT_01d046a0 = "..\\core\\waypoint.cpp";
      _DAT_01d046a4 = 0x8b;
      core_main_c_FUN_004e4500("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
