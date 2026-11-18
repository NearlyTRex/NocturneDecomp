// Name: core_muzzle.cpp_SStateMachine_isTransitionPending_FUN_0059dce0
// Address: 0059dce0
// Address Range: [[0059dc46, 0059dc48] [0059dce0, 0059dcfc]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_isTransitionPending_FUN_0059dce0(SStateMachine *this_ptr)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_isTransitionPending_FUN_0059dce0(SStateMachine *this_ptr)

{
  if (0.0 < this_ptr->transition_delay) {
    return 1;
  }
  return 0;
}
