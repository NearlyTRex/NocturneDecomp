// Name: core_muzzle.cpp_SStateMachine_getInitialStateName_FUN_0059db90
// Address: 0059db90
// Address Range: [[0059db90, 0059dbab]]
// Convention: __cdecl
// Signature: char * __cdecl core_muzzle_cpp_SStateMachine_getInitialStateName_FUN_0059db90(SStateMachine *this_ptr)

#include "nocturne.h"

char * __cdecl core_muzzle_cpp_SStateMachine_getInitialStateName_FUN_0059db90(SStateMachine *this_ptr)

{
  return this_ptr->state_names[this_ptr->initial_state + -1];
}
