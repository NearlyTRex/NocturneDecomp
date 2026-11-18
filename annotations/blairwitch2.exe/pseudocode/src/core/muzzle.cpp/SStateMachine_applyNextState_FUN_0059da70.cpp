// Name: core_muzzle.cpp_SStateMachine_applyNextState_FUN_0059da70
// Address: 0059da70
// Address Range: [[0059da70, 0059da9a]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_SStateMachine_applyNextState_FUN_0059da70(SStateMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_SStateMachine_applyNextState_FUN_0059da70(SStateMachine *this_ptr)

{
  if (this_ptr->next_state != 0) {
    this_ptr->current_state = this_ptr->next_state;
  }
  this_ptr->transition_delay = 0.0;
  this_ptr->next_state = 0;
  return;
}
