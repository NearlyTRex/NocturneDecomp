// Name: core_gore.cpp_FUN_004ed0a0
// Address: 004ed0a0
// Address Range: [[004ed0a0, 004ed0cd]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004ed0a0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ed0a0(uint param_1) */

void core_gore_cpp_FUN_004ed0a0(void)

{
  int in_stack_00000004;
  
  *(float *)(in_stack_00000004 + 0x18) =
       g_CGamePtr->delta_time_float + *(float *)(in_stack_00000004 + 0x18);
  if (*(float *)(in_stack_00000004 + 0x18) <= (float)3.625) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x18) = 0x40680000;
  return;
}
