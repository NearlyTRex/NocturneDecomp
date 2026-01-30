// Name: core_msnedit.cpp_CDemonMission_FUN_0053bcf0
// Address: 0053bcf0
// Address Range: [[0053bcf0, 0053bd79]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bcf0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bcf0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar6;
  float local_10;
  
  local_10 = 1e+30;
  pCVar6 = (CDemonActor *)0x0;
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    pCVar2 = *(CDemonActor **)(this_ptr->unk2 + 0x1c);
    if ((((pCVar1 != pCVar2) && ((pCVar1->location).area_id == (pCVar2->location).area_id)) &&
        (pCVar1->unk14 == 0)) &&
       (fVar3 = (pCVar1->location).position.x - (pCVar2->location).position.x,
       fVar5 = (pCVar1->location).position.y - (pCVar2->location).position.y,
       fVar4 = (pCVar1->location).position.z - (pCVar2->location).position.z,
       fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3), fVar3 < local_10)) {
      pCVar6 = pCVar1;
      local_10 = fVar3;
    }
  }
  core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)pCVar6);
  return;
}
