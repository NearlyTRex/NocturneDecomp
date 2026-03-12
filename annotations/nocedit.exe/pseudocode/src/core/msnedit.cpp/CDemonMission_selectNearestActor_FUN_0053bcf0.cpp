// Name: core_msnedit.cpp_CDemonMission_selectNearestActor_FUN_0053bcf0
// Address: 0053bcf0
// Address Range: [[0053bcf0, 0053bd79]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_selectNearestActor_FUN_0053bcf0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_selectNearestActor_FUN_0053bcf0(CDemonMission *this_ptr)

{
  float fVar1;
  CDemonActor *actor;
  float local_10;
  float fVar5;
  float fVar4;
  float fVar3;
  CDemonActor *pCVar2;
  CDemonActor *pCVar1;
  
  local_10 = 1e+30;
  actor = (CDemonActor *)0x0;
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    pCVar2 = this_ptr->selected_actor;
    if ((((pCVar1 != pCVar2) && ((pCVar1->location).area_id == (pCVar2->location).area_id)) &&
        (pCVar1->is_editor_hidden == 0)) &&
       (fVar3 = (pCVar1->location).position.x - (pCVar2->location).position.x,
       fVar5 = (pCVar1->location).position.y - (pCVar2->location).position.y,
       fVar4 = (pCVar1->location).position.z - (pCVar2->location).position.z,
       fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3), fVar1 < local_10)) {
      actor = pCVar1;
      local_10 = fVar1;
    }
  }
  core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,actor);
  return;
}
