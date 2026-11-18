// Name: core_muzzle.cpp_SStateMachine_isState_FUN_0059daa0
// Address: 0059daa0
// Address Range: [[0059daa0, 0059dade]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(SStateMachine *this_ptr,char *state_name)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(SStateMachine *this_ptr,char *state_name)

{
  int iVar1;
  
  if (this_ptr->state_count != 0) {
    iVar1 = _strcmp
                      (state_name,this_ptr->state_names[this_ptr->current_state + -1]);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
