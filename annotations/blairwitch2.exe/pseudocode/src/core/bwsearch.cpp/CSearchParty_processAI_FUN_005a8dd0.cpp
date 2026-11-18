// Name: core_bwsearch.cpp_CSearchParty_processAI_FUN_005a8dd0
// Address: 005a8dd0
// Address Range: [[005a8dd0, 005a8e15]]
// Convention: __cdecl
// Signature: void __cdecl core_bwsearch_cpp_CSearchParty_processAI_FUN_005a8dd0(CSearchParty *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bwsearch_cpp_CSearchParty_processAI_FUN_005a8dd0(CSearchParty *this_ptr)

{
  SStateMachine *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.state_machine;
  iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation");
    if (iVar1 == 0) {
      (*(this_ptr->base).base.base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
      return;
    }
  }
  return;
}
