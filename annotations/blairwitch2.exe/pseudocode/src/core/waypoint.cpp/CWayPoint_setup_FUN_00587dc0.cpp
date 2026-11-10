// Name: core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0
// Address: 00587dc0
// Address Range: [[00587dc0, 00587e85]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00587dc0(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00587dc0(CWayPoint *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CWayPoint *pCVar5;
  int iVar6;
  byte *str1;
  
  core_trigger_cpp_CTrigger_setup_FUN_005778a0(&this_ptr->base);
  iVar6 = 0;
  iVar4 = this_ptr->num_adjacent_waypoints;
  *(uint *)&(this_ptr->base).base.field_0xf8 = 1;
  if (0 < iVar4) {
    pCVar5 = this_ptr;
    do {
      iVar4 = *(int *)pCVar5->adjacency;
      fVar1 = *(float *)&(this_ptr->base).base.field_0x20 - *(float *)(iVar4 + 0x20);
      fVar3 = *(float *)&(this_ptr->base).base.field_0x24 - *(float *)(iVar4 + 0x24);
      fVar2 = *(float *)&(this_ptr->base).base.field_0x28 - *(float *)(iVar4 + 0x28);
      iVar6 = iVar6 + 1;
      *(float *)(pCVar5->adjacency + 4) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      pCVar5 = (CWayPoint *)((pCVar5->base).base.actor_name + 8);
    } while (iVar6 < this_ptr->num_adjacent_waypoints);
  }
  if ((this_ptr->base).base.field_0x78 != '\0') {
    str1 = &(this_ptr->base).base.field_0x78;
    iVar4 = _stricmp(str1,(char *)0x5ee0bf);
    if ((iVar4 != 0) &&
       (iVar4 = _stricmp(str1,(char *)0x5ee0c4), iVar4 != 0)) {
      _DAT_01d046a0 = "..\\core\\waypoint.cpp";
      _DAT_01d046a4 = 0x8b;
      core_main_c_FUN_004e4500("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
