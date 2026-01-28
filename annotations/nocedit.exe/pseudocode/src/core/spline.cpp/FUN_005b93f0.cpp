// Name: core_spline.cpp_FUN_005b93f0
// Address: 005b93f0
// Address Range: [[005b93f0, 005b942a]]
// Convention: unknown
// Signature: float core_spline_cpp_FUN_005b93f0(void)

#include "nocturne.h"

float core_spline_cpp_FUN_005b93f0(void)

{
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  return *in_stack_00000014 * *(float *)(in_stack_00000004 + 0x1c) +
         *in_stack_00000010 * *(float *)(in_stack_00000004 + 0x18) +
         *in_stack_0000000c * *(float *)(in_stack_00000004 + 0x14) +
         *in_stack_00000008 * *(float *)(in_stack_00000004 + 0x10);
}
