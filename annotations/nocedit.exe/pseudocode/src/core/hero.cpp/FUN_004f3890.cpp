// Name: core_hero.cpp_FUN_004f3890
// Address: 004f3890
// Address Range: [[004f3890, 004f38c2]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004f3890(void)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3890(uint param_1, uint param_2)
    */

void core_hero_cpp_FUN_004f3890(void)

{
  CCharacter *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
  in_stack_00000004[2].cloth_data[0x54c0] = '\0';
  in_stack_00000004[2].cloth_data[0x54c1] = '\0';
  in_stack_00000004[2].cloth_data[0x54c2] = '\0';
  in_stack_00000004[2].cloth_data[0x54c3] = '\0';
  return;
}
