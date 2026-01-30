// Name: core_bugs.cpp_FUN_00427a20
// Address: 00427a20
// Address Range: [[00427a20, 00427a5c]]
// Convention: __cdecl
// Signature: float * __cdecl core_bugs_cpp_FUN_00427a20(void)

#include "nocturne.h"

float * __cdecl core_bugs_cpp_FUN_00427a20(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 =
       in_stack_00000004[1] * in_stack_0000000c[2] - in_stack_00000004[2] * in_stack_0000000c[1];
  in_stack_00000008[1] =
       in_stack_00000004[2] * *in_stack_0000000c - *in_stack_00000004 * in_stack_0000000c[2];
  in_stack_00000008[2] =
       *in_stack_00000004 * in_stack_0000000c[1] - in_stack_00000004[1] * *in_stack_0000000c;
  return in_stack_00000008;
}
