// Name: core_gore.cpp_FUN_004ee340
// Address: 004ee340
// Address Range: [[004ee340, 004ee36c]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004ee340(void)

#include "nocturne.h"

void core_gore_cpp_FUN_004ee340(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000008 = (int)ROUND(*in_stack_00000004 * 65536.0f);
  in_stack_00000008[1] = (int)ROUND(in_stack_00000004[1] * 65536.0f);
  in_stack_00000008[2] = (int)ROUND(in_stack_00000004[2] * 65536.0f);
  return;
}
