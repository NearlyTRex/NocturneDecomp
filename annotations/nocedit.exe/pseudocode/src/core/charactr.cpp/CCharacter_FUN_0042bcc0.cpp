// Name: core_charactr.cpp_CCharacter_FUN_0042bcc0
// Address: 0042bcc0
// Address Range: [[0042bcc0, 0042bd29]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr)

{
  int in_stack_00000008;
  
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_visibility_flags[in_stack_00000008] != 0)) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(this_ptr);
    core_bodypart_cpp_FUN_0041a050();
    return;
  }
  return;
}
