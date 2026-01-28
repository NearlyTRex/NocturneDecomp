// Name: core_mimic.cpp_FUN_00520da0
// Address: 00520da0
// Address Range: [[00520da0, 00520dc4]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_00520da0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_FUN_00520da0(uint param_1, uint param_2)
    */

void core_mimic_cpp_FUN_00520da0(void)

{
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == *(int *)(in_stack_00000004[6].cloth_data + 0x1e88)) {
    in_stack_00000004[6].cloth_data[0x1e88] = '\0';
    in_stack_00000004[6].cloth_data[0x1e89] = '\0';
    in_stack_00000004[6].cloth_data[0x1e8a] = '\0';
    in_stack_00000004[6].cloth_data[0x1e8b] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  return;
}
