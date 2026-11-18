// Name: core_muzzle.cpp_SStateMachine_reset_FUN_0059dc80
// Address: 0059dc80
// Address Range: [[0059dc80, 0059dcae]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(SStateMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(SStateMachine *this_ptr)

{
  if (this_ptr->initial_state == 0) {
    core_muzzle_cpp_SStateMachine_applyNextState_FUN_0059da70(this_ptr);
    return;
  }
  core_muzzle_cpp_SStateMachine_setNextStateIndex_FUN_0059d960(this_ptr,this_ptr->initial_state);
  core_muzzle_cpp_SStateMachine_applyNextState_FUN_0059da70(this_ptr);
  return;
}
