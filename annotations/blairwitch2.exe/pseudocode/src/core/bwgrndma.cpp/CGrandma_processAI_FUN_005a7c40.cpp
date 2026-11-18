// Name: core_bwgrndma.cpp_CGrandma_processAI_FUN_005a7c40
// Address: 005a7c40
// Address Range: [[005a7c40, 005a7c85]]
// Convention: __cdecl
// Signature: void __cdecl core_bwgrndma_cpp_CGrandma_processAI_FUN_005a7c40(CGrandma *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bwgrndma_cpp_CGrandma_processAI_FUN_005a7c40(CGrandma *this_ptr,float delta_time)

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
