// Name: core_charactr.cpp_CCharacter_FUN_0042e840
// Address: 0042e840
// Address Range: [[0042e840, 0042e8b7]]
// Convention: unknown
// Signature: float core_charactr_cpp_CCharacter_FUN_0042e840(void)

#include "nocturne.h"

/* Signature: byte actors_character.cpp_CCharacter_FUN_0042e840(uint param_1, uint
   param_2) */

float core_charactr_cpp_CCharacter_FUN_0042e840(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint local_18;
  
  local_18 = 0.0;
  if (in_stack_00000008 ==
      *(int *)(in_stack_00000004 + 0x2630 + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38)) {
    local_18 = *(float *)(in_stack_00000004 + 0x2a90);
  }
  if (in_stack_00000008 !=
      *(int *)(in_stack_00000004 + 0x262c + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38)) {
    return local_18;
  }
  return (1.0 - *(float *)(in_stack_00000004 + 0x2a90)) + local_18;
}
