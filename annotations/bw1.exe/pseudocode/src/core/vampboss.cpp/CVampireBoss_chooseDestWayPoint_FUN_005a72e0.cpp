// Name: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0
// Address: 005a72e0
// Address Range: [[005a72e0, 005a73bc]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(CVampireBoss *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  CVampireBoss *pCVar10;
  float local_20;
  
  this_ptr->waypoint_index = 0;
  iVar9 = 0;
  local_20 = -8675309.0;
  pCVar10 = this_ptr;
  do {
    if (pCVar10->way_point_0 == (CDemonActor *)0x0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0x428;
      core_main_c_FUN_005030e0("CVampireBoss::chooseDestWayPoint - wayPoint[%d] == NULL",iVar9);
    }
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    pCVar2 = pCVar10->way_point_0;
    fVar3 = (pCVar2->location).position.x - *(float *)(iVar1 + 0x20);
    fVar4 = (pCVar2->location).position.x - (this_ptr->base).base.base.location.position.x;
    fVar8 = (pCVar2->location).position.y - *(float *)(iVar1 + 0x24);
    fVar5 = (pCVar2->location).position.y - (this_ptr->base).base.base.location.position.y;
    fVar6 = (pCVar2->location).position.z - (this_ptr->base).base.base.location.position.z;
    fVar7 = (pCVar2->location).position.z - *(float *)(iVar1 + 0x28);
    fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 +
            fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
    if (local_20 < fVar3) {
      this_ptr->waypoint_index = iVar9;
      local_20 = fVar3;
    }
    iVar9 = iVar9 + 1;
    pCVar10 = (CVampireBoss *)((pCVar10->base).base.base.actor_name + 4);
  } while (iVar9 < 4);
  return;
}
