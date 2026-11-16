// Name: core_muzzle.cpp_SStateMachine_getRefStateIdentifier_FUN_0059dc00
// Address: 0059dc00
// Address Range: [[0059dc00, 0059dc20]]
// Convention: __cdecl
// Signature: char * __cdecl core_muzzle_cpp_SStateMachine_getRefStateIdentifier_FUN_0059dc00(SStateMachine *this_ptr,int index)

#include "nocturne.h"

char * __cdecl core_muzzle_cpp_SStateMachine_getRefStateIdentifier_FUN_0059dc00(SStateMachine *this_ptr,int index)

{
  if (this_ptr->ref_state_count != 0) {
    return this_ptr->ref_states[index].identifier;
  }
  return (char *)0x0;
}
