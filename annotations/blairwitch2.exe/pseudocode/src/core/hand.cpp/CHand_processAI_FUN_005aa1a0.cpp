// Name: core_hand.cpp_CHand_processAI_FUN_005aa1a0
// Address: 005aa1a0
// Address Range: [[005aa1a0, 005aa1e5]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processAI_FUN_005aa1a0(CHand *this_ptr)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processAI_FUN_005aa1a0(CHand *this_ptr)

{
  SStateMachine *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).state_machine;
  iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation");
    if (iVar1 == 0) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
      return;
    }
  }
  return;
}
