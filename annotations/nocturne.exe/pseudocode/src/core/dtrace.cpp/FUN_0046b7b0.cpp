// Name: core_dtrace.cpp_FUN_0046b7b0
// Address: 0046b7b0
// Address Range: [[0046b7b0, 0046b7e0]]
// Convention: unknown
// Signature: float * core_dtrace_cpp_FUN_0046b7b0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float * core_dtrace_cpp_FUN_0046b7b0(void)

{
  int in_stack_00000004;
  float *in_stack_00000008;
  int *in_stack_0000000c;
  
  *in_stack_00000008 =
       (float)*in_stack_0000000c * *(float *)(in_stack_00000004 + 0x34) +
       *(float *)(in_stack_00000004 + 0x10);
  in_stack_00000008[1] =
       (float)in_stack_0000000c[1] * *(float *)(in_stack_00000004 + 0x38) +
       *(float *)(in_stack_00000004 + 0x14);
  in_stack_00000008[2] =
       (float)in_stack_0000000c[2] * *(float *)(in_stack_00000004 + 0x3c) +
       *(float *)(in_stack_00000004 + 0x18);
  return in_stack_00000008;
}
