// Name: core_hero.cpp_FUN_004f3580
// Address: 004f3580
// Address Range: [[004f3580, 004f35af]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3580()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3580(uint param_1) */

void core_hero_cpp_FUN_004f3580(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fbb0) == 0) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fbb0) + 0x154) + 0x9c))();
  *(uint *)(in_stack_00000004 + 0x1fbb0) = 0;
  return;
}
