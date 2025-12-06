// Name: core_spline.cpp_FUN_005b9230
// Address: 005b9230
// Address Range: [[005b9230, 005b9269]]
// Convention: unknown
// Signature: undefined core_spline.cpp_FUN_005b9230()

#include "nocturne.h"

float core_spline_cpp_FUN_005b9230(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  return *in_stack_00000014 * in_stack_00000004[3] +
         *in_stack_00000010 * in_stack_00000004[2] +
         *in_stack_00000008 * *in_stack_00000004 + *in_stack_0000000c * in_stack_00000004[1];
}
