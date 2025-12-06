// Name: core_tvbat.cpp_FUN_005e5130
// Address: 005e5130
// Address Range: [[005e5130, 005e519d]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e5130()

#include "nocturne.h"

/* Signature: byte actors_enemy_tvbat.cpp_FUN_005e5130(uint param_1, uint param_2)
    */

void core_tvbat_cpp_FUN_005e5130(void)

{
  float fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  *(uint *)(in_stack_00000004 + 0x243c) = 0;
  core_gore_cpp_FUN_004edbb0();
  *(uint *)(in_stack_00000004 + 0xc078) = 1;
  core_enemy_cpp_FUN_004a9f10();
  return;
}
