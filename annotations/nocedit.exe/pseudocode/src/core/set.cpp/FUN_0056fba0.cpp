// Name: core_set.cpp_FUN_0056fba0
// Address: 0056fba0
// Address Range: [[0056fba0, 0056fbcc]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_FUN_0056fba0(void)

#include "nocturne.h"

int __cdecl core_set_cpp_FUN_0056fba0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(float *)(in_stack_00000008 + 4) < *(float *)(in_stack_00000004 + 4)) {
    return 1;
  }
  if (*(float *)(in_stack_00000004 + 4) < *(float *)(in_stack_00000008 + 4)) {
    return -1;
  }
  return 0;
}
