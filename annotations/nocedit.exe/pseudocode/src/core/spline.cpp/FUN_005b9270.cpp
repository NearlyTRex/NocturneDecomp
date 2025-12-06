// Name: core_spline.cpp_FUN_005b9270
// Address: 005b9270
// Address Range: [[005b9270, 005b92c9]]
// Convention: unknown
// Signature: undefined core_spline.cpp_FUN_005b9270()

#include "nocturne.h"

int core_spline_cpp_FUN_005b9270(void)

{
  float *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  return (int)ROUND((float)in_stack_00000014 * in_stack_00000004[3] +
                    (float)in_stack_00000010 * in_stack_00000004[2] +
                    (float)in_stack_00000008 * *in_stack_00000004 +
                    (float)in_stack_0000000c * in_stack_00000004[1]);
}
