// Name: core_dracbrid.cpp_FUN_00486430
// Address: 00486430
// Address Range: [[00486430, 0048644b]]
// Convention: unknown
// Signature: float * core_dracbrid_cpp_FUN_00486430(void)

#include "nocturne.h"

float * core_dracbrid_cpp_FUN_00486430(void)

{
  float fVar1;
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
  *in_stack_00000008 = fVar1 + *in_stack_00000008;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
  in_stack_00000008[1] = fVar1 + in_stack_00000008[1];
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
  in_stack_00000008[2] = fVar1 + in_stack_00000008[2];
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  return in_stack_00000004;
}
