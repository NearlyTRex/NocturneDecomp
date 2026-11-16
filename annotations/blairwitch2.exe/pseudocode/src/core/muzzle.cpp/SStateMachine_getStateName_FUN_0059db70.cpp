// Name: core_muzzle.cpp_SStateMachine_getStateName_FUN_0059db70
// Address: 0059db70
// Address Range: [[0059db70, 0059db8b]]
// Convention: __cdecl
// Signature: char * __cdecl core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(SStateMachine *this_ptr)

#include "nocturne.h"

char * __cdecl core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(SStateMachine *this_ptr)

{
  return this_ptr->state_names[this_ptr->current_state + -1];
}
