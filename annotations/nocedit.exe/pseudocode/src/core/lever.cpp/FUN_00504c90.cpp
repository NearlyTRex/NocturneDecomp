// Name: core_lever.cpp_FUN_00504c90
// Address: 00504c90
// Address Range: [[00504c90, 00504ced]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_FUN_00504c90(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_00504c90(uint param_1) */

void __cdecl core_lever_cpp_FUN_00504c90(void)

{
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x418) = 1;
  if (*(float *)(in_stack_00000004 + 0x2dc) < (float)0.5) {
    *(uint *)(in_stack_00000004 + 0x41c) = 0x3f800000;
    return;
  }
  *(uint *)(in_stack_00000004 + 0x41c) = 0;
  return;
}
