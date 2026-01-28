// Name: core_bugs.cpp_FUN_00425620
// Address: 00425620
// Address Range: [[00425620, 0042563d]]
// Convention: unknown
// Signature: undefined4 core_bugs_cpp_FUN_00425620(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_00425620(uint param_1) */

uint core_bugs_cpp_FUN_00425620(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  if (*(int *)(in_stack_00000004 + 0xbebc) == 3) {
    return 2;
  }
  return 0;
}
