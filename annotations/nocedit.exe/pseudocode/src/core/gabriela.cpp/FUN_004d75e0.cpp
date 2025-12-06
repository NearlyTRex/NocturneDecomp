// Name: core_gabriela.cpp_FUN_004d75e0
// Address: 004d75e0
// Address Range: [[004d75e0, 004d760c]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d75e0()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d75e0(uint param_1, uint
   param_2) */

void core_gabriela_cpp_FUN_004d75e0(void)

{
  CCharacter *in_stack_00000004;
  int in_stack_0000000c;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5518) != in_stack_0000000c) {
    return;
  }
  in_stack_00000004[2].cloth_data[0x5518] = '\0';
  in_stack_00000004[2].cloth_data[0x5519] = '\0';
  in_stack_00000004[2].cloth_data[0x551a] = '\0';
  in_stack_00000004[2].cloth_data[0x551b] = '\0';
  return;
}
