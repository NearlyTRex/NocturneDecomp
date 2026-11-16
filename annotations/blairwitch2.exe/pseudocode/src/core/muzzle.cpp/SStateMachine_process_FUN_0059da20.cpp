// Name: core_muzzle.cpp_SStateMachine_process_FUN_0059da20
// Address: 0059da20
// Address Range: [[0059da20, 0059da6c]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_SStateMachine_process_FUN_0059da20(SStateMachine *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_SStateMachine_process_FUN_0059da20(SStateMachine *this_ptr,float delta_time)

{
  if (0.0 < this_ptr->transition_delay) {
    this_ptr->transition_delay = this_ptr->transition_delay - delta_time;
    if (0.0 < this_ptr->transition_delay) {
      return;
    }
  }
  else if (0.0 < this_ptr->transition_delay) {
    return;
  }
  core_muzzle_cpp_SStateMachine_applyNextState_FUN_0059da70(this_ptr);
  return;
}
