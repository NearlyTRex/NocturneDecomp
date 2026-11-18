// Name: core_muzzle.cpp_SStateMachine_setInitialState_FUN_0059d990
// Address: 0059d990
// Address Range: [[0059d990, 0059d9e6]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(SStateMachine *this_ptr,char *state_name)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(SStateMachine *this_ptr,char *state_name)

{
  int iVar1;
  SStateMachine *str2;
  int iVar2;
  
  if ((this_ptr->state_count != 0) && (iVar2 = 0, str2 = this_ptr, 0 < this_ptr->state_count)) {
    do {
      iVar1 = _strcmp(state_name,(char *)str2);
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        this_ptr->initial_state = iVar2;
        return 1;
      }
      str2 = (SStateMachine *)(str2->state_names + 1);
    } while (iVar2 < this_ptr->state_count);
  }
  return 0;
}
