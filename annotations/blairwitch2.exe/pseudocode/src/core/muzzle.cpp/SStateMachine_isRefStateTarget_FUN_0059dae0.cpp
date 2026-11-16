// Name: core_muzzle.cpp_SStateMachine_isRefStateTarget_FUN_0059dae0
// Address: 0059dae0
// Address Range: [[0059dae0, 0059db4c]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_isRefStateTarget_FUN_0059dae0(SStateMachine *this_ptr,char *identifier,char *state_name)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_isRefStateTarget_FUN_0059dae0(SStateMachine *this_ptr,char *identifier,char *state_name)

{
  int iVar1;
  int iVar2;
  SStateRef *str2;
  
  if ((this_ptr->ref_state_count != 0) && (iVar2 = 0, 0 < this_ptr->ref_state_count)) {
    str2 = this_ptr->ref_states;
    do {
      iVar1 = _strcmp(identifier,str2->identifier);
      if (iVar1 == 0) {
        iVar1 = _strcmp(this_ptr->ref_states[iVar2].state,state_name);
        if (iVar1 == 0) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 1;
    } while (iVar2 < this_ptr->ref_state_count);
  }
  return 0;
}
