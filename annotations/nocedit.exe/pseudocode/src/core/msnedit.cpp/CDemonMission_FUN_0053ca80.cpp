// Name: core_msnedit.cpp_CDemonMission_FUN_0053ca80
// Address: 0053ca80
// Address Range: [[0053ca80, 0053cace]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca80(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca80(CDemonMission *this_ptr,int param_2)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = (CDemonActor *)param_2;
  if (param_2 == 0) {
    pCVar1 = this_ptr->last_actor;
  }
  if (pCVar1 != (CDemonActor *)0x0) {
    iVar2 = 0;
    do {
      pCVar1 = pCVar1->prev_actor;
      if (pCVar1 == (CDemonActor *)0x0) {
        pCVar1 = this_ptr->last_actor;
      }
      if (pCVar1 == (CDemonActor *)param_2) {
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
