// Name: core_charactr.cpp_CCharacter_FUN_0042b8a0
// Address: 0042b8a0
// Address Range: [[0042b8a0, 0042b8de]]
// Convention: __cdecl
// Signature: int * core_charactr.cpp_CCharacter_FUN_0042b8a0(CCharacter * this_ptr)

#include "nocturne.h"

int * __cdecl core_charactr_cpp_CCharacter_FUN_0042b8a0(CCharacter *this_ptr)

{
  int *in_stack_00000008;
  
  *in_stack_00000008 = *(int *)(this_ptr->field11_0x25a0 + 0x58);
  in_stack_00000008[1] = *(int *)(this_ptr->field11_0x25a0 + 0x5c);
  in_stack_00000008[2] = *(int *)(this_ptr->field11_0x25a0 + 0x60);
  in_stack_00000008[3] = *(int *)(this_ptr->field11_0x25a0 + 100);
  in_stack_00000008[4] = *(int *)(this_ptr->field11_0x25a0 + 0x68);
  in_stack_00000008[5] = *(int *)(this_ptr->field11_0x25a0 + 0x6c);
  return in_stack_00000008;
}
