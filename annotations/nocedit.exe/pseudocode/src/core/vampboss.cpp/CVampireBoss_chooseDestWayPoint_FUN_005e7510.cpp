// Name: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
// Address: 005e7510
// Address Range: [[005e7510, 005e75ec]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(CVampireBoss *this_ptr)

{
  float fVar1;
  int iVar9;
  CVampireBoss *pCVar10;
  float local_20;
  CHero *pCVar1;
  float fVar8;
  float fVar7;
  float fVar6;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar2;
  float fVar3;
  
  this_ptr->waypoint_index = 0;
  iVar9 = 0;
  local_20 = -8675309.0;
  pCVar10 = this_ptr;
  do {
    if (pCVar10->way_point_0 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0x423;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::chooseDestWayPoint - wayPoint[%d] == NULL",iVar9);
    }
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    pCVar2 = pCVar10->way_point_0;
    fVar3 = (pCVar2->location).position.x - (pCVar1->base).base.location.position.x;
    fVar4 = (pCVar2->location).position.x - (this_ptr->base).base.base.location.position.x;
    fVar8 = (pCVar2->location).position.y - (pCVar1->base).base.location.position.y;
    fVar5 = (pCVar2->location).position.y - (this_ptr->base).base.base.location.position.y;
    fVar6 = (pCVar2->location).position.z - (this_ptr->base).base.base.location.position.z;
    fVar7 = (pCVar2->location).position.z - (pCVar1->base).base.location.position.z;
    fVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 +
            fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
    if (local_20 < fVar1) {
      this_ptr->waypoint_index = iVar9;
      local_20 = fVar1;
    }
    iVar9 = iVar9 + 1;
    pCVar10 = (CVampireBoss *)((pCVar10->base).base.base.actor_name + 4);
  } while (iVar9 < 4);
  return;
}
