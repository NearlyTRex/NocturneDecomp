// Name: core_muzzle.cpp_SStateMachine_addState_FUN_0059d650
// Address: 0059d650
// Address Range: [[0059d650, 0059d6e5]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_addState_FUN_0059d650(SStateMachine *this_ptr,char *state_name)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_addState_FUN_0059d650(SStateMachine *this_ptr,char *state_name)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SStateMachine *str2;
  char (*pacVar4) [25];
  
  if (this_ptr->state_count == 0x14) {
    return 0;
  }
  iVar3 = 0;
  str2 = this_ptr;
  if (0 < this_ptr->state_count) {
    do {
      iVar2 = _strcmp(state_name,(char *)str2);
      if (iVar2 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      str2 = (SStateMachine *)(str2->state_names + 1);
    } while (iVar3 < this_ptr->state_count);
  }
  pacVar4 = this_ptr->state_names + this_ptr->state_count;
  do {
    cVar1 = *state_name;
    (*pacVar4)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = state_name[1];
    state_name = state_name + 2;
    (*pacVar4)[1] = cVar1;
    pacVar4 = (char (*) [25])(*pacVar4 + 2);
  } while (cVar1 != '\0');
  this_ptr->state_count = this_ptr->state_count + 1;
  return 2;
}
