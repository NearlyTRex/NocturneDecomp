// Name: core_muzzle.cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0
// Address: 0059dcb0
// Address Range: [[0059dcb0, 0059dcd0]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(SStateMachine *this_ptr,float delay)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(SStateMachine *this_ptr,float delay)

{
  int iVar1;
  
  iVar1 = core_muzzle_cpp_SStateMachine_isTransitionPending_FUN_0059dce0(this_ptr);
  if (iVar1 != 0) {
    return;
  }
  this_ptr->transition_delay = delay;
  return;
}
