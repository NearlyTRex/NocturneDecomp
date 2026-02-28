// Name: core_msnedit.cpp_CDemonMission_findNextVisibleActor_FUN_0053ca30
// Address: 0053ca30
// Address Range: [[0053ca30, 0053ca7e]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_findNextVisibleActor_FUN_0053ca30(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_findNextVisibleActor_FUN_0053ca30(CDemonMission *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = actor;
  if (actor == (CDemonActor *)0x0) {
    pCVar1 = this_ptr->first_actor;
  }
  if (pCVar1 != (CDemonActor *)0x0) {
    iVar2 = 0;
    do {
      pCVar1 = pCVar1->next_actor;
      if (pCVar1 == (CDemonActor *)0x0) {
        pCVar1 = this_ptr->first_actor;
      }
      if (pCVar1 == actor) {
        return;
      }
      if ((this_ptr->current_set_index == (pCVar1->location).area_id) &&
         (pCVar1->is_editor_hidden == 0)) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1000);
  }
  return;
}
