// Name: core_gore.cpp_FUN_004ecad0
// Address: 004ecad0
// Address Range: [[004ecad0, 004ecafd]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004ecad0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ecad0(uint param_1) */

void core_gore_cpp_FUN_004ecad0(void)

{
  int in_stack_00000004;
  
  *(float *)(in_stack_00000004 + 0x24) =
       g_CGamePtr->delta_time_float + *(float *)(in_stack_00000004 + 0x24);
  if (*(float *)(in_stack_00000004 + 0x24) <= (float)2) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x24) = 0x40000000;
  return;
}
