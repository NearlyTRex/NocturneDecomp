// Name: core_waypoint.cpp_CWayPoint_setup_FUN_005aba00
// Address: 005aba00
// Address Range: [[005aba00, 005abacb]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005aba00(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005aba00(CWayPoint *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CWayPoint *pCVar6;
  char *str1;
  
  core_trigger_cpp_CTrigger_setup_FUN_0059b100(&this_ptr->base);
  iVar4 = this_ptr->num_adjacent_waypoints;
  iVar5 = 0;
  (this_ptr->base).base.is_renderable = *(int *)(0x01D2C900 + 0x1008);
  if (0 < iVar4) {
    pCVar6 = this_ptr;
    do {
      iVar4 = *(int *)pCVar6->adjacency;
      fVar1 = (this_ptr->base).base.location.position.x - *(float *)(iVar4 + 0x20);
      fVar3 = (this_ptr->base).base.location.position.y - *(float *)(iVar4 + 0x24);
      fVar2 = (this_ptr->base).base.location.position.z - *(float *)(iVar4 + 0x28);
      iVar5 = iVar5 + 1;
      *(float *)(pCVar6->adjacency + 4) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      pCVar6 = (CWayPoint *)((pCVar6->base).base.actor_name + 8);
    } while (iVar5 < this_ptr->num_adjacent_waypoints);
  }
  if ((this_ptr->base).base.create_event[0] != '\0') {
    str1 = (this_ptr->base).base.create_event;
    iVar4 = _stricmp(str1,(char *)0x5f941b);
    if ((iVar4 != 0) &&
       (iVar4 = _stricmp(str1,(char *)0x5f9420), iVar4 != 0)) {
      _DAT_01d1d400 = "..\\core\\waypoint.cpp";
      _DAT_01d1d404 = 0x81;
      core_main_c_FUN_005030e0("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
