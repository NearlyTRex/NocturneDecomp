// Name: core_spline.cpp_FUN_005b9430
// Address: 005b9430
// Address Range: [[005b9430, 005b948a]]
// Convention: unknown
// Signature: int core_spline_cpp_FUN_005b9430(void)

#include "nocturne.h"

int core_spline_cpp_FUN_005b9430(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  return (int)ROUND((float)in_stack_00000014 * *(float *)(in_stack_00000004 + 0x1c) +
                    (float)in_stack_00000010 * *(float *)(in_stack_00000004 + 0x18) +
                    (float)in_stack_0000000c * *(float *)(in_stack_00000004 + 0x14) +
                    (float)in_stack_00000008 * *(float *)(in_stack_00000004 + 0x10));
}
