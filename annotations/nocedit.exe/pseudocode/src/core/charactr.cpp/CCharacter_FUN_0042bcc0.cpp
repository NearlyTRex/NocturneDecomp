// Name: core_charactr.cpp_CCharacter_FUN_0042bcc0
// Address: 0042bcc0
// Address Range: [[0042bcc0, 0042bd29]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr)

{
  CBodyPart *this_ptr_00;
  int in_stack_00000008;
  
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_visibility_flags[in_stack_00000008] != 0)) {
    this_ptr_00 = core_bodypart_cpp_createBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(this_ptr);
    core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr_00);
    return;
  }
  return;
}
