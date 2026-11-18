// Name: core_muzzle.cpp_SStateMachine_setNextStateIndex_FUN_0059d960
// Address: 0059d960
// Address Range: [[0059d960, 0059d984]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_setNextStateIndex_FUN_0059d960(SStateMachine *this_ptr,int state_index)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_setNextStateIndex_FUN_0059d960(SStateMachine *this_ptr,int state_index)

{
  if ((this_ptr->state_count != 0) && (state_index <= this_ptr->state_count)) {
    this_ptr->next_state = state_index;
    return 1;
  }
  return 0;
}
