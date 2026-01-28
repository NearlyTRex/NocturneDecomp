// Name: core_flamecan.cpp_FUN_004cb550
// Address: 004cb550
// Address Range: [[004cb550, 004cb57c]]
// Convention: unknown
// Signature: undefined4 core_flamecan_cpp_FUN_004cb550(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cb550(uint param_1) */

uint core_flamecan_cpp_FUN_004cb550(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x5e4) == 0) {
    return *(uint *)(in_stack_00000004 + 0x5e4);
  }
  core_flame_cpp_FUN_004ca110();
  return *(uint *)(in_stack_00000004 + 0x5e4);
}
