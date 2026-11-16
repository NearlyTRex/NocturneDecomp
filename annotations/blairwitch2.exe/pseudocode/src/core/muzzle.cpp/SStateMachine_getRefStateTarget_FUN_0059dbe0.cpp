// Name: core_muzzle.cpp_SStateMachine_getRefStateTarget_FUN_0059dbe0
// Address: 0059dbe0
// Address Range: [[0059dbe0, 0059dbff]]
// Convention: __cdecl
// Signature: char * __cdecl core_muzzle_cpp_SStateMachine_getRefStateTarget_FUN_0059dbe0(SStateMachine *this_ptr,int index)

#include "nocturne.h"

char * __cdecl core_muzzle_cpp_SStateMachine_getRefStateTarget_FUN_0059dbe0(SStateMachine *this_ptr,int index)

{
  if (this_ptr->ref_state_count != 0) {
    return this_ptr->ref_states[index].state;
  }
  return (char *)0x0;
}
