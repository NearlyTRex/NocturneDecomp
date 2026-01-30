// Name: core_set.cpp_FUN_00571440
// Address: 00571440
// Address Range: [[00571440, 0057146f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_FUN_00571440(void)

#include "nocturne.h"

int __cdecl core_set_cpp_FUN_00571440(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  if (((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
     && (in_stack_00000004[2] == in_stack_00000008[2])) {
    return 0;
  }
  return 1;
}
