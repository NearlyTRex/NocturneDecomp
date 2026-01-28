// Name: core_scat.cpp_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558036]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_FUN_00558010(void)

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558010(uint param_1) */

uint core_scat_cpp_FUN_00558010(void)

{
  int in_stack_00000004;
  
  if (((*(int *)(in_stack_00000004 + 0x1fbd4) != 0) && (*(int *)(in_stack_00000004 + 0x1fbe8) != 0))
     && (*(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x2e0) == 8)) {
    return 1;
  }
  return 0;
}
