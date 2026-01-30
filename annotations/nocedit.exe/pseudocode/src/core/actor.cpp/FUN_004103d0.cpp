// Name: core_actor.cpp_FUN_004103d0
// Address: 004103d0
// Address Range: [[004103d0, 004103fc]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_004103d0(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_004103d0(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000008 = (int)ROUND(*in_stack_00000004 * 256.0f);
  in_stack_00000008[1] = (int)ROUND(in_stack_00000004[1] * 256.0f);
  in_stack_00000008[2] = (int)ROUND(in_stack_00000004[2] * 256.0f);
  return;
}
