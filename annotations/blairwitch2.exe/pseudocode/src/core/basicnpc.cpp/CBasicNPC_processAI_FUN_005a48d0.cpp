// Name: core_basicnpc.cpp_CBasicNPC_processAI_FUN_005a48d0
// Address: 005a48d0
// Address Range: [[005a48d0, 005a48ef] [005a48f1, 005a4915]]
// Convention: __cdecl
// Signature: void __cdecl core_basicnpc_cpp_CBasicNPC_processAI_FUN_005a48d0(CBasicNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicnpc_cpp_CBasicNPC_processAI_FUN_005a48d0(CBasicNPC *this_ptr,float delta_time)

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
