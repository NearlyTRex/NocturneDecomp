// Name: core_msnedit.cpp_CDemonMission_findPrevVisibleActor_FUN_0053ca80
// Address: 0053ca80
// Address Range: [[0053ca80, 0053cace]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_findPrevVisibleActor_FUN_0053ca80(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_findPrevVisibleActor_FUN_0053ca80(CDemonMission *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  
  pCVar1 = actor;
  if (actor == (CDemonActor *)0x0) {
    pCVar1 = this_ptr->last_actor;
  }
  pCVar2 = (CDemonActor *)0x0;
  if (pCVar1 != (CDemonActor *)0x0) {
    iVar3 = 0;
    do {
      pCVar1 = pCVar1->prev_actor;
      if (pCVar1 == (CDemonActor *)0x0) {
        pCVar1 = this_ptr->last_actor;
      }
      if (pCVar1 == actor) {
        return pCVar1;
      }
      if ((this_ptr->current_set_index == (pCVar1->location).area_id) &&
         (pCVar1->is_editor_hidden == 0)) {
        return pCVar1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar1;
    } while (iVar3 < 1000);
  }
  return pCVar2;
}
