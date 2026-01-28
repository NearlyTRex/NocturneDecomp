// Name: core_script.cpp_FUN_00560140
// Address: 00560140
// Address Range: [[00560140, 00560159]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00560140(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00560140(uint param_1, uint param_2) */

void core_script_cpp_FUN_00560140(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 4)) {
    return;
  }
  *(uint *)(in_stack_00000004 + 4) = 0;
  *(byte *)(in_stack_00000004 + 0x54) = 0;
  return;
}
