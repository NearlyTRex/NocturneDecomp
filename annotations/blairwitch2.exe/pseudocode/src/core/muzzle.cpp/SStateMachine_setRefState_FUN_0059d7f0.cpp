// Name: core_muzzle.cpp_SStateMachine_setRefState_FUN_0059d7f0
// Address: 0059d7f0
// Address Range: [[0059d7f0, 0059d87e]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0(SStateMachine *this_ptr,char *identifier,char *state_name)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0(SStateMachine *this_ptr,char *identifier,char *state_name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SStateRef *str2;
  SStateMachine *str2_00;
  
  if (this_ptr->ref_state_count != 0) {
    iVar3 = 0;
    if (0 < this_ptr->ref_state_count) {
      str2 = this_ptr->ref_states;
      do {
        iVar1 = _strcmp(identifier,str2->identifier);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        str2 = str2 + 1;
      } while (iVar3 < this_ptr->ref_state_count);
    }
    if ((iVar3 != this_ptr->ref_state_count) &&
       (iVar1 = 0, str2_00 = this_ptr, 0 < this_ptr->state_count)) {
      do {
        iVar2 = _strcmp(state_name,(char *)str2_00);
        if (iVar2 == 0) {
          this_ptr->ref_states[iVar3].state = (char *)str2_00;
          return 2;
        }
        iVar1 = iVar1 + 1;
        str2_00 = (SStateMachine *)(str2_00->state_names + 1);
      } while (iVar1 < this_ptr->state_count);
    }
  }
  return 0;
}
