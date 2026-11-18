// Name: core_muzzle.cpp_SStateMachine_addRefState_FUN_0059d6f0
// Address: 0059d6f0
// Address Range: [[0059d6f0, 0059d7eb]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SStateMachine_addRefState_FUN_0059d6f0(SStateMachine *this_ptr,char *identifier,char *state_name)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SStateMachine_addRefState_FUN_0059d6f0(SStateMachine *this_ptr,char *identifier,char *state_name)

{
  char cVar1;
  int iVar2;
  SStateRef *pSVar3;
  SStateMachine *str2;
  int iVar4;
  
  if (this_ptr->ref_state_count != 0x32) {
    this_ptr->ref_states[this_ptr->ref_state_count].state = (char *)0x0;
    iVar4 = 0;
    if (0 < this_ptr->ref_state_count) {
      pSVar3 = this_ptr->ref_states;
      do {
        iVar2 = _strcmp(identifier,pSVar3->identifier);
        if (iVar2 == 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iVar4 < this_ptr->ref_state_count);
    }
    iVar4 = 0;
    str2 = this_ptr;
    if (0 < this_ptr->state_count) {
      do {
        iVar2 = _strcmp(state_name,(char *)str2);
        if (iVar2 == 0) {
          this_ptr->ref_states[this_ptr->ref_state_count].state = (char *)str2;
          break;
        }
        iVar4 = iVar4 + 1;
        str2 = (SStateMachine *)(str2->state_names + 1);
      } while (iVar4 < this_ptr->state_count);
    }
    if (this_ptr->ref_states[this_ptr->ref_state_count].state != (char *)0x0) {
      pSVar3 = this_ptr->ref_states + this_ptr->ref_state_count;
      do {
        cVar1 = *identifier;
        pSVar3->identifier[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = identifier[1];
        identifier = identifier + 2;
        pSVar3->identifier[1] = cVar1;
        pSVar3 = (SStateRef *)(pSVar3->identifier + 2);
      } while (cVar1 != '\0');
      this_ptr->ref_state_count = this_ptr->ref_state_count + 1;
      return 2;
    }
  }
  return 0;
}
