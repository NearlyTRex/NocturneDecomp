// Name: core_actor.cpp_FUN_004103d0
// Address: 004103d0
// Address Range: [[004103d0, 004103fc]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_004103d0()

#include "nocturne.h"

void core_actor_cpp_FUN_004103d0(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000008 = (int)ROUND(*in_stack_00000004 * 256f);
  in_stack_00000008[1] = (int)ROUND(in_stack_00000004[1] * 256f);
  in_stack_00000008[2] = (int)ROUND(in_stack_00000004[2] * 256f);
  return;
}
