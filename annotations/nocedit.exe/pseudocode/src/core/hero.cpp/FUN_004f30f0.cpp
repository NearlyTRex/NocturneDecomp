// Name: core_hero.cpp_FUN_004f30f0
// Address: 004f30f0
// Address Range: [[004f30f0, 004f311c]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f30f0()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f30f0(uint param_1) */

uint core_hero_cpp_FUN_004f30f0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fba8) == 0) {
    return 0;
  }
  core_lever_cpp_FUN_00504c90(0);
  *(uint *)(in_stack_00000004 + 0x1fba8) = 0;
  return 1;
}
