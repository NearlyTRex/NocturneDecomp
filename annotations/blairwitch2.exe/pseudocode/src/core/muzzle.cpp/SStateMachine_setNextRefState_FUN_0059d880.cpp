// Name: core_muzzle.cpp_SStateMachine_setNextRefState_FUN_0059d880
// Address: 0059d880
// Address Range: [[0059d880, 0059d8df]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_setNextRefState_FUN_0059d880(SStateMachine *this_ptr,char *identifier)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_setNextRefState_FUN_0059d880(SStateMachine *this_ptr,char *identifier)

{
  int iVar1;
  int iVar2;
  SStateRef *str2;
  
  if ((this_ptr->ref_state_count != 0) && (iVar2 = 0, 0 < this_ptr->ref_state_count)) {
    str2 = this_ptr->ref_states;
    do {
      iVar1 = _strcmp(identifier,str2->identifier);
      if (iVar1 == 0) {
        iVar2 = core_muzzle_cpp_FUN_0059d940(this_ptr,this_ptr->ref_states[iVar2].state);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 1;
    } while (iVar2 < this_ptr->ref_state_count);
  }
  return 0;
}
